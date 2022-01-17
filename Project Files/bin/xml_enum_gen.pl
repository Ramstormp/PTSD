#!/usr/bin/perl -w


use strict;
use warnings;

use XML::LibXML;
use lib './bin';
use XMLlists;

my $FILE = getAutoDir() . "/AutoXmlEnum.h.tmp";
my $FILE_TEST = getAutoDir() . "/AutoXmlTest.h.tmp";
my $FILE_DECLARE = getAutoDir() . "/AutoXmlDeclare.h.tmp";
my $FILE_INIT = getAutoDir() . "/AutoXmlInit.h.tmp";

my $files = [];

open (my $output, "> " . $FILE) or die "Can't open file " . $FILE . "\n" . $!;
open (my $output_test, "> " . $FILE_TEST) or die "Can't open file " . $FILE_TEST . "\n" . $!;
open (my $output_declare, "> " . $FILE_DECLARE) or die "Can't open file " . $FILE_DECLARE . "\n" . $!;
open (my $output_init, "> " . $FILE_INIT) or die "Can't open file " . $FILE_INIT . "\n" . $!;

print $output "#ifndef AUTO_XML_ENUM\n";
print $output "#define AUTO_XML_ENUM\n";
print $output "\n";
print $output "// Autogenerated file. Do not edit!!!\n";
print $output "\n";
print $output "// Each of the enums in this file represent an xml file.\n";
print $output "// Civ4 has always hardcoded some xml data this way and modders have always had issues with dll and xml going out of sync.\n";
print $output "// \n";
print $output "// This file will hopefully solve the out of sync problem for good.\n";
print $output "// The makefile will update this file if needed each time the compiler is used.\n";
print $output "// As a result, a compiled DLL will always match the xml files at the time of compilation.\n";
print $output "// \n";
print $output "// The debugger is aided by this file.\n";
print $output "// The debugger will use the names given in this file, like UNIT_WAGON_TRAIN(81) instead of just 81.\n";
print $output "// It would be nice to trick the debugger to assume hardcoded even if the DLL isn't, but for the time being the debugger prefers hardcoded DLL files.\n";
print $output "// \n";
print $output "// The file can optionally hardcode everything (it doesn't by default. It has to be enabled)\n";
print $output "// Hardcoding can help the compiler optimization, but it shouldn't be used if somebody wants to edit xml files.\n";
print $output "// \n";
print $output "// All hardcoded data will be assert checked at startup.\n";
print $output "\n";

print $output_test "\n";
print $output_test "// Autogenerated file. Do not edit!!!\n";
print $output_test "\n";

print $output_declare "\n";
print $output_declare "// Autogenerated file. Do not edit!!!\n";
print $output_declare "\n";
print $output_declare "#ifndef HARDCODE_XML_VALUES\n";

print $output_init "\n";
print $output_init "// Autogenerated file. Do not edit!!!\n";
print $output_init "\n";
print $output_init "#ifndef HARDCODE_XML_VALUES\n";

foreach my $file (getEnumFiles())
{
	processFile($output, $output_test, $file);
}

print $output "\n#endif // AUTO_XML_ENUM\n";
print $output_declare "#endif\n";
print $output_init "#endif\n";

close $output;
close $output_test;
close $output_declare;
close $output_init;

updateAutoFile($FILE);
updateAutoFile($FILE_TEST);
updateAutoFile($FILE_DECLARE);
updateAutoFile($FILE_INIT);

sub getChild
{
	my $parent = shift;
	my $name = shift;
	
	my $element = $parent->firstChild;
	
	while (1)
	{
		return if (ref($element) eq "");
		if (ref($element) eq "XML::LibXML::Element")
		{
			return $element if $name eq "" or $element->nodeName eq $name;
		}
		$element = $element->nextSibling;
	}
}

sub nextSibling
{
	my $element = shift;
	
	$element = $element->nextSibling;
	while (ref($element) ne "XML::LibXML::Element" and ref($element) ne "")
	{
		$element = $element->nextSibling;
	}
	return $element;
}

sub processFile
{
	my $output = shift;
	my $output_test = shift;
	my $filename = shift;

	my ($basename, $enum, $TYPE) = getXMLKeywords($filename);
	
	my $isHardcoded = isAlwaysHardcodedEnum($filename);
	
	my $hardcodedBool = "true";
	$hardcodedBool = "false" unless $isHardcoded;
	
	my $isYield = $enum eq "YieldTypes";

	print $output "enum ";
	#print $output "DllExport " if isDllExport($enum);
	print $output $enum . "\n{\n";
	print $output "\tINVALID_PROFESSION = -2,\n" if $basename eq "Profession";
	print $output "\t" . getNoType($TYPE) . " = -1,\n\n";
	print $output "#ifdef HARDCODE_XML_VALUES\n\n" unless $isHardcoded;
	
	foreach my $type (getTypesInFile($filename))
	{
		print $output "\t" . $type . ",\n";
		print $output_test "DisplayXMLhardcodingError(strcmp(\"". $type . "\", " . getInfo($basename) . "($type).getType()) == 0, \"$type\", true);\n" if $isHardcoded;
	}

	print $output_test "DisplayXMLhardcodingError(NUM_" . $TYPE . "_TYPES == (" . $enum . ")" . getNumFunction($basename) . ", \"NUM_" . $TYPE . "_TYPES\", " . $hardcodedBool . ");\n";

	print $output "\n\tNUM_" . $TYPE . "_TYPES,\n";
	print $output "\tNUM_CARGO_YIELD_TYPES = YIELD_HAMMERS,\n" if $isYield;
	print $output "\n\tCOMPILE_TIME_NUM_" . $TYPE . "_TYPES = NUM_" . $TYPE . "_TYPES,\n";
	
	unless ($isHardcoded)
	{
		print $output "\n#else // HARDCODE_XML_VALUES\n";
		print $output "\n\tCOMPILE_TIME_NUM_" . $TYPE . "_TYPES = MAX_SHORT,\n";
		print $output "\n#endif // HARDCODE_XML_VALUES\n";
	}
	
	print $output "\n\tFIRST_" . $TYPE . " = 0,\n";
	print $output "};\n\n";
	
	unless ($isHardcoded)
	{
		print $output "#ifndef HARDCODE_XML_VALUES\n";
		print $output "extern " . $enum . " NUM_" . $TYPE . "_TYPES;\n";
		print $output "#endif\n\n";
		print $output_declare  $enum . " NUM_" . $TYPE . "_TYPES;\n";
		print $output_init "NUM_" . $TYPE . "_TYPES = (" . $enum . ")" . getNumFunction($basename) . ";\n";
	}
	print $output "#define NUM_" . substr($enum, 0, -5) . "_TYPES NUM_" . $TYPE . "_TYPES\n\n"
}

sub getTypesInFile
{
	my $filename = shift;
	
	my $fileWithPath = getFileWithPath($filename);
	
	if ($fileWithPath)
	{
		my $dom = XML::LibXML->load_xml(location => $fileWithPath);
		
		my $loopElement = getChild($dom, "");
		$loopElement = getChild($loopElement, "");
		$loopElement = getChild($loopElement, "") unless isTwoLevelFile($filename);
		
		my @types = ();
		
		while (ref ($loopElement) ne "")
		{
			my $child = getChild($loopElement, "Type");
			die $filename . " failed to read elements" unless $child;
			push(@types, $child->textContent);
			$loopElement = nextSibling($loopElement);
		}
		return @types;
	}
	
	# the file isn't present in the mod. Add the vanilla values
	# no need to look up vanilla. That can cause issues and we know the values even without looking
	return ("DOMAIN_SEA", "DOMAIN_LAND", "DOMAIN_IMMOBILE") if $filename eq "BasicInfos/CIV4DomainInfos.xml";
	return ("FATHERCATEGORY_EXPLORATION", "FATHERCATEGORY_RELIGION", "FATHERCATEGORY_TRADE", "FATHERCATEGORY_MILITARY", "FATHERCATEGORY_POLITICS") if $filename eq "BasicInfos/CIV4FatherCategoryInfos.xml";
	return ("ALARM_DEFAULT") if $filename eq "Civilizations/CIV4AlarmInfos.xml";
	return ("CIVICOPTION_SLAVERY", "CIVICOPTION_ELECTION", "CIVICOPTION_NATIVES", "CIVICOPTION_RELIGION", "CIVICOPTION_SECURITY") if $filename eq "GameInfo/CIV4CivicOptionInfos.xml";
	return ("CLIMATE_TEMPERATE", "CLIMATE_TROPICAL", "CLIMATE_ROCKY") if $filename eq "GameInfo/CIV4ClimateInfo.xml";
	return ("EUROPE_EAST", "EUROPE_WEST", "EUROPE_NORTH", "EUROPE_SOUTH") if $filename eq "GameInfo/CIV4EuropeInfo.xml";
	return ("HURRY_GOLD", "HURRY_IMMIGRANT") if $filename eq "GameInfo/CIV4HurryInfo.xml";
	return ("SEALEVEL_LOW", "SEALEVEL_MEDIUM", "SEALEVEL_HIGH") if $filename eq "GameInfo/CIV4SeaLevelInfo.xml";
	
	die "getTypesInFile: " . $filename . " not supported\n";
}
