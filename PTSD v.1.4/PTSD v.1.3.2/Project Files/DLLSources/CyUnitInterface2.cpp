#include "CvGameCoreDLL.h"
#include "CyUnit.h"
#include "CyCity.h"
#include "CyPlot.h"
#include "CyArea.h"
#include "CySelectionGroup.h"
#include "CyArtFileMgr.h"
#include "CvInfos.h"
//# include <boost/python/manage_new_object.hpp>
//# include <boost/python/return_value_policy.hpp>
//
// published python interface for CyUnit
//
void CyUnitPythonInterface2(python::class_<CyUnit>& x)
{
	OutputDebugString("Python Extension Module - CyUnitPythonInterface2\n");
	x
		.def("canSiege", &CyUnit::canSiege, "bool (int /*TeamTypes*/ eTeam)")
		.def("isAutomated", &CyUnit::isAutomated, "bool ()")
		.def("isWaiting", &CyUnit::isWaiting, "bool ()")
		.def("isFortifyable", &CyUnit::isFortifyable, "bool ()")
		.def("fortifyModifier", &CyUnit::fortifyModifier, "int ()")
		.def("experienceNeeded", &CyUnit::experienceNeeded, "int ()")
		.def("attackXPValue", &CyUnit::attackXPValue, "int ()")
		.def("defenseXPValue", &CyUnit::defenseXPValue, "int ()")
		.def("maxXPValue", &CyUnit::maxXPValue, "int ()")
		.def("isRanged", &CyUnit::isRanged, "bool ()")
		.def("alwaysInvisible", &CyUnit::alwaysInvisible, "bool ()")
		.def("noDefensiveBonus", &CyUnit::noDefensiveBonus, "bool ()")
		.def("canMoveImpassable", &CyUnit::canMoveImpassable, "bool ()")
		.def("flatMovementCost", &CyUnit::flatMovementCost, "bool ()")
		.def("ignoreTerrainCost", &CyUnit::ignoreTerrainCost, "bool ()")
		.def("isNeverInvisible", &CyUnit::isNeverInvisible, "bool ()")
		.def("isInvisible", &CyUnit::isInvisible, "bool (int (TeamTypes) eTeam, bool bDebug)")
		.def("withdrawalProbability", &CyUnit::withdrawalProbability, "int ()")
		.def("cityAttackModifier", &CyUnit::cityAttackModifier, "int ()")
		.def("cityDefenseModifier", &CyUnit::cityDefenseModifier, "int ()")
		.def("hillsAttackModifier", &CyUnit::hillsAttackModifier, "int ()")
		.def("hillsDefenseModifier", &CyUnit::hillsDefenseModifier, "int ()")
		.def("DomesticBonusModifier", &CyUnit::DomesticBonusModifier, "int ()")	
		.def("terrainAttackModifier", &CyUnit::terrainAttackModifier, "int (int /*TerrainTypes*/ eTerrain)")
		.def("terrainDefenseModifier", &CyUnit::terrainDefenseModifier, "int (int /*TerrainTypes*/ eTerrain)")
		.def("featureAttackModifier", &CyUnit::featureAttackModifier, "int (int /*FeatureTypes*/ eFeature)")
		.def("featureDefenseModifier", &CyUnit::featureDefenseModifier, "int (int /*FeatureTypes*/ eFeature)")
		.def("unitClassAttackModifier", &CyUnit::unitClassAttackModifier, "int (int /*UnitClassTypes*/ eUnitClass)")
		.def("unitClassDefenseModifier", &CyUnit::unitClassDefenseModifier, "int (int /*UnitClassTypes*/ eUnitClass)")
		.def("unitCombatModifier", &CyUnit::unitCombatModifier, "int (int /*UnitCombatTypes*/ eUnitCombat)")
		.def("domainModifier", &CyUnit::domainModifier, "int (int /*DomainTypes*/ eDomain)")

		.def("bombardRate", &CyUnit::bombardRate, "int ()")

		.def("specialCargo", &CyUnit::specialCargo, "int ()")
		.def("domainCargo", &CyUnit::domainCargo, "int ()")
		.def("cargoSpace", &CyUnit::cargoSpace, "int ()")
		.def("isFull", &CyUnit::isFull, "bool ()")
		.def("cargoSpaceAvailable", &CyUnit::cargoSpaceAvailable, "int ()")
		.def("hasCargo", &CyUnit::hasCargo, "bool ()")
		.def("canCargoAllMove", &CyUnit::canCargoAllMove, "bool ()")
		.def("getUnitAICargo", &CyUnit::getUnitAICargo, "int (int (UnitAITypes) eUnitAI)")
		.def("canAssignTradeRoute", &CyUnit::canAssignTradeRoute, "bool (int iRouteId, bool bReusePath)")
		.def("getID", &CyUnit::getID, "int ()")
		.def("getGroupID", &CyUnit::getGroupID, "int ()")
		.def("isInGroup", &CyUnit::isInGroup, "bool ()")
		.def("isGroupHead", &CyUnit::isGroupHead, "bool ()")
		.def("getGroup", &CyUnit::getGroup, python::return_value_policy<python::manage_new_object>(), "CySelectionGroup* ()")
		.def("getHotKeyNumber", &CyUnit::getHotKeyNumber, "int () - returns the HotKey number for this unit")
		.def("setHotKeyNumber", &CyUnit::setHotKeyNumber, "void (int iNewValue)")
		.def("getX", &CyUnit::getX, "int ()")
		.def("getY", &CyUnit::getY, "int ()")
		.def("setXY", &CyUnit::setXY, "int (int iX, int iY)")
		.def("at", &CyUnit::at, "bool (int iX, int iY)")
		.def("atPlot", &CyUnit::atPlot, "bool (CyPlot* pPlot)")
		.def("plot", &CyUnit::plot, python::return_value_policy<python::manage_new_object>(), "CyPlot* ()")
		.def("area", &CyUnit::area, python::return_value_policy<python::manage_new_object>(), "CyArea* ()")
		.def("getGameTurnCreated", &CyUnit::getGameTurnCreated, "int ()")
		.def("getDamage", &CyUnit::getDamage, "int ()")
		.def("setDamage", &CyUnit::setDamage, "void (int iNewValue)")
		.def("changeDamage", &CyUnit::changeDamage, "void (int iChange)")
		.def("getMoves", &CyUnit::getMoves, "int ()")
		.def("setMoves", &CyUnit::setMoves, "void (int iNewValue)")
		.def("changeMoves", &CyUnit::changeMoves, "void (int iChange)")
		.def("finishMoves", &CyUnit::finishMoves, "void ()")
		.def("getExperience", &CyUnit::getExperience, "int ()")
		.def("setExperience", &CyUnit::setExperience, "void (int iNewValue)")
		.def("changeExperience", &CyUnit::changeExperience, "void (int iChange, int iMax, bool bFromCombat, bool bInBorders, bool bUpdateGlobal)")
		.def("getLevel", &CyUnit::getLevel, "int ()")
		.def("setLevel", &CyUnit::setLevel)
		.def("changeLevel", &CyUnit::changeLevel)
		.def("getFacingDirection", &CyUnit::getFacingDirection, "int ()")
		.def("rotateFacingDirectionClockwise", &CyUnit::rotateFacingDirectionClockwise, "void ()")
		.def("rotateFacingDirectionCounterClockwise", &CyUnit::rotateFacingDirectionCounterClockwise, "void ()")
		.def("getCargo", &CyUnit::getCargo, "int ()")
		.def("getFortifyTurns", &CyUnit::getFortifyTurns, "int ()")
		.def("getBlitzCount", &CyUnit::getBlitzCount, "int ()")
		.def("isBlitz", &CyUnit::isBlitz, "bool ()")
		.def("getAmphibCount", &CyUnit::getAmphibCount, "int ()")
		.def("isAmphib", &CyUnit::isAmphib, "bool ()")
		.def("getRiverCount", &CyUnit::getRiverCount, "int ()")
		.def("isRiver", &CyUnit::isRiver, "bool ()")
		.def("isEnemyRoute", &CyUnit::isEnemyRoute, "bool ()")
		.def("isAlwaysHeal", &CyUnit::isAlwaysHeal, "bool ()")
		.def("isHillsDoubleMove", &CyUnit::isHillsDoubleMove, "bool ()")
		.def("getExtraVisibilityRange", &CyUnit::getExtraVisibilityRange, "int ()")
		.def("getExtraMoves", &CyUnit::getExtraMoves, "int ()")
		.def("getExtraMoveDiscount", &CyUnit::getExtraMoveDiscount, "int ()")
		.def("getExtraWithdrawal", &CyUnit::getExtraWithdrawal, "int ()")
		.def("getExtraEnemyHeal", &CyUnit::getExtraEnemyHeal, "int ()")
		.def("getExtraNeutralHeal", &CyUnit::getExtraNeutralHeal, "int ()")
		.def("getExtraFriendlyHeal", &CyUnit::getExtraFriendlyHeal, "int ()")
		.def("getSameTileHeal", &CyUnit::getSameTileHeal, "int ()")
		.def("getAdjacentTileHeal", &CyUnit::getAdjacentTileHeal, "int ()")
		.def("getExtraCombatPercent", &CyUnit::getExtraCombatPercent, "int ()")
		.def("getExtraCityAttackPercent", &CyUnit::getExtraCityAttackPercent, "int ()")
		.def("getExtraCityDefensePercent", &CyUnit::getExtraCityDefensePercent, "int ()")
		.def("getExtraHillsAttackPercent", &CyUnit::getExtraHillsAttackPercent, "int ()")
		.def("getExtraHillsDefensePercent", &CyUnit::getExtraHillsDefensePercent, "int ()")
		.def("getExtraDomesticBonusPercent", &CyUnit::getExtraDomesticBonusPercent, "int ()")	
		.def("getPillageChange", &CyUnit::getPillageChange, "int ()")
		.def("getUpgradeDiscount", &CyUnit::getUpgradeDiscount, "int ()")
		.def("getExperiencePercent", &CyUnit::getExperiencePercent, "int ()")
		.def("getImmobileTimer", &CyUnit::getImmobileTimer, "int ()")
		.def("setImmobileTimer", &CyUnit::setImmobileTimer, "void (int)")
		.def("isMadeAttack", &CyUnit::isMadeAttack, "bool ()")
		.def("setMadeAttack", &CyUnit::setMadeAttack, "void (int iNewValue)")
		.def("isPromotionReady", &CyUnit::isPromotionReady, "bool ()")
		.def("setPromotionReady", &CyUnit::setPromotionReady, "void (int iNewValue)")
		.def("isDelayedDeath", &CyUnit::isDelayedDeath, "bool ()")
		.def("getOwner", &CyUnit::getOwner, "int ()")
		.def("getVisualOwner", &CyUnit::getVisualOwner, "int ()")
		.def("getCombatOwner", &CyUnit::getCombatOwner, "int (int)")
		.def("getTeam", &CyUnit::getTeam, "int ()")
		.def("getUnitType", &CyUnit::getUnitType, "int ()")
		.def("getUnitClassType", &CyUnit::getUnitClassType, "int ()")
		.def("getLeaderUnitType", &CyUnit::getLeaderUnitType, "int ()")
		.def("setLeaderUnitType", &CyUnit::setLeaderUnitType, "void (int iNewValue)")
		.def("getTransportUnit", &CyUnit::getTransportUnit, python::return_value_policy<python::manage_new_object>(), "CyUnit* ()")
		.def("isCargo", &CyUnit::isCargo, "bool ()")
		.def("getExtraDomainModifier", &CyUnit::getExtraDomainModifier, "int ()")
		.def("getName", &CyUnit::getName, "str () - Returns the name of a unit along with its type description in parens if using a custom name")
		.def("getNameForm", &CyUnit::getNameForm, "str (int iForm)")
		.def("getNameKey", &CyUnit::getNameKey, "str ()")
		.def("getNameNoDesc", &CyUnit::getNameNoDesc, "str () - Returns the name of a unit without any description afterwards")
		.def("getNameAndProfession", &CyUnit::getNameAndProfession, "str () - Returns the name and profession of a unit")
		.def("getNameOrProfessionKey", &CyUnit::getNameOrProfessionKey, "str () - Returns the name or profession of a unit")
		.def("setName", &CyUnit::setName, "void (str)")
		.def("getScriptData", &CyUnit::getScriptData, "str ()")
		.def("setScriptData", &CyUnit::setScriptData, "void (str)")
		.def("isTerrainDoubleMove", &CyUnit::isTerrainDoubleMove, "bool (TerrainType)")
		.def("isFeatureDoubleMove", &CyUnit::isFeatureDoubleMove, "bool (FeatureType)")
		.def("getExtraTerrainAttackPercent", &CyUnit::getExtraTerrainAttackPercent, "int ()")
		.def("getExtraTerrainDefensePercent", &CyUnit::getExtraTerrainDefensePercent, "int ()")
		.def("getExtraFeatureAttackPercent", &CyUnit::getExtraFeatureAttackPercent, "int ()")
		.def("getExtraFeatureDefensePercent", &CyUnit::getExtraFeatureDefensePercent, "int ()")
		.def("getExtraUnitCombatModifier", &CyUnit::getExtraUnitCombatModifier, "int ()")
		.def("canAcquirePromotion", &CyUnit::canAcquirePromotion, "bool (int /*PromotionTypes*/ ePromotion)")
		.def("canAcquirePromotionAny", &CyUnit::canAcquirePromotionAny, "bool ()")
		.def("isPromotionValid", &CyUnit::isPromotionValid, "bool (int /*PromotionTypes*/ ePromotion)")
		.def("isHasPromotion", &CyUnit::isHasPromotion, "bool (int /*PromotionTypes*/ ePromotion)")
		.def("isHasRealPromotion", &CyUnit::isHasRealPromotion, "bool (int /*PromotionTypes*/ ePromotion)")
		.def("setHasRealPromotion", &CyUnit::setHasRealPromotion, "void (int (PromotionTypes) eIndex, bool bValue)")
		.def("changeFreePromotionCount", &CyUnit::changeFreePromotionCount, "void (int (PromotionTypes) eIndex, int iChange)")
		.def("getProfession", &CyUnit::getProfession, "int ()")
		.def("setProfession", &CyUnit::setProfession, "void (int /*ProfessionTypes*/)")
		.def("canHaveProfession", &CyUnit::canHaveProfession, "bool (int /*ProfessionTypes*/)")
		.def("IsSelected", &CyUnit::IsSelected)
		.def("getUnitAIType", &CyUnit::getUnitAIType, "int UnitAIType () - returns the int value of the UnitAIType")
		.def("setUnitAIType", &CyUnit::setUnitAIType, "void UnitAIType (int iUnitAIType) - sets the unit's UnitAIType")
		.def("getYieldStored", &CyUnit::getYieldStored, "int ()")
		.def("setYieldStored", &CyUnit::setYieldStored, "void (int iAmount)")
		.def("getYield", &CyUnit::getYield, "int /*YieldTypes*/ ()")
		.def("isGoods", &CyUnit::isGoods, "bool ()")
		.def("getUnitTravelTimer", &CyUnit::getUnitTravelTimer, "int ()")
		.def("setUnitTravelTimer", &CyUnit::setUnitTravelTimer, "void (int)")
		.def("getUnitTravelState", &CyUnit::getUnitTravelState, "int /*UnitTravelStates*/ ()")
		.def("setUnitTravelState", &CyUnit::setUnitTravelState, "void (int /*UnitTravelStates*/, bool bShowEuropeScreen)")
		.def("canSailEurope", &CyUnit::canSailEurope)
		.def("isColonistLocked", &CyUnit::isColonistLocked, "bool ()")
		// < JAnimals Mod Start >
		.def("isBarbarian", &CyUnit::isBarbarian, "bool ()")
		.def("setBarbarian", &CyUnit::setBarbarian, "void (bool bNewValue)")
		// < JAnimals Mod End >
		.def("isIgnoreDanger", &CyUnit::isIgnoreDanger, "bool ()")	// TAC - Trade Routes Advisor - koma13
		// Python Helper Functions
		.def("centerCamera", &CyUnit::centerCamera, "void () - Centers the Camera on the unit")
		.def("getArtInfo", &CyUnit::getArtInfo,  python::return_value_policy<python::reference_existing_object>(), "CvArtInfoUnit* (int i)")
		.def("getButton", &CyUnit::getButton, "std::string ()")
		.def("getFullLengthIcon", &CyUnit::getFullLengthIcon, "std::string ()")
		;
}
