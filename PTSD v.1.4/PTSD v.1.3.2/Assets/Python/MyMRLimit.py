from CvPythonExtensions import *
#from Unit import *
#from UnitEntity import *
gc = CyGlobalContext() #Ramstormp, added
##
myRadius = [2]*50 
iDefaultRadius = 7
iBaseRadius = 6
##	
def setRadius(iRadius):	
	iBaseRadius = iRadius

##
def getRadius():
	return iBaseRadius + 1

##
def prepareRadiusAll():
	for i in range(gc.getMAX_CIV_PLAYERS()):
		prepareRadius(i)

##
def prepareRadius(aPlayer):
	global myRadius

	player = gc.getPlayer(aPlayer)
	iTeam = player.getTeam()
	myTeam = gc.getTeam(iTeam)
	myRadius [aPlayer] = getRadius()


##
def checkRadius(ePlayer, iUnitId, iPlotX, iPlotY):
	player = gc.getPlayer(ePlayer)
	myRadius [ePlayer] = getRadius()
	radius = myRadius [ePlayer]
	if radius < 1:
		return false
	radius = radius * radius
	iUnit = player.getUnit (iUnitId)
	iUnitX = iUnit.getX ()
	iUnitY = iUnit.getY ()
#	if iUnit.allowsMoveIntoPeak():
#		radius += 1
	if iUnit.isRivalTerritory ():
		radius += 1
	if iUnit.isNoBadGoodies():
		radius += 2
	if iUnit.cargoSpace () > 4:
		radius += 2
	if iUnit.canEstablishMission ():
		radius += 1
	
	for iLoopCityN in range(player.getNumCities ()):
		iLoopCity = player.getCity (iLoopCityN)
		iLoopCityX = iLoopCity.getX ()
		iLoopCityY = iLoopCity.getY ()
		deltaX = iPlotX - iLoopCityX
		deltaY = iPlotY - iLoopCityY
		
		if (deltaX == 0 and deltaY < 0):
			deltaY -= 1
		elif (deltaX == 0 and deltaY > 0):
			deltaY += 1
		elif deltaX != 0:
			deltaX *= deltaX
		
		if (deltaY == 0 and deltaX < 0):
			deltaX -= 1
		elif (deltaY == 0 and deltaX > 0):
			deltaX += 1
		elif deltaY != 0:		
			deltaY *= deltaY
	
		dd = deltaX + deltaY
		
		if radius >= dd:
			return False
		deltaX2 = iUnitX - iLoopCityX
		deltaY2 = iUnitY - iLoopCityY
		deltaX2 *= deltaX2
		deltaY2 *= deltaY2
		dd2 = deltaX2 + deltaY2
		if dd2 >= dd:
			return False
	return True


##
def checkRadiusWX(ePlayer, iUnitId, iPlotX, iPlotY):
	player = gc.getPlayer(ePlayer)
	radius = myRadius [ePlayer]
	radius = radius * radius

	iUnit = player.getUnit (iUnitId)
	iUnitX = iUnit.getX ()
	iUnitY = iUnit.getY ()
	mapW = CyMap().getGridWidth()

	for iLoopCityN in range(player.getNumCities ()):
		iLoopCity = player.getCity (iLoopCityN)
		iLoopCityX = iLoopCity.getX ()
		iLoopCityY = iLoopCity.getY ()
		deltaX = iPlotX - iLoopCityX
		deltaY = iPlotY - iLoopCityY
		if deltaX < 0:
			deltaX = -deltaX
		if deltaX >= mapW/2:
			deltaX = mapW - deltaX
		deltaX *= deltaX
		deltaY *= deltaY
		dd = deltaX + deltaY
		if radius >= dd:
			return False
		deltaX2 = iUnitX - iLoopCityX
		deltaY2 = iUnitY - iLoopCityY
		if deltaX2 < 0:
			deltaX2 = -deltaX2
		if deltaX2 >= mapW/2:
			deltaX2 = mapW - deltaX2
		deltaX2 *= deltaX2
		deltaY2 *= deltaY2
		dd2 = deltaX2 + deltaY2
		if dd2 >= dd:
			return False
	return True

##
def checkRadiusWY(ePlayer, iUnitId, iPlotX, iPlotY):
	player = gc.getPlayer(ePlayer)
	radius = myRadius [ePlayer]
	radius = radius * radius

	iUnit = player.getUnit (iUnitId)
	iUnitX = iUnit.getX ()
	iUnitY = iUnit.getY ()
	mapH = CyMap().getGridHeight()

	for iLoopCityN in range(player.getNumCities ()):
		iLoopCity = player.getCity (iLoopCityN)
		iLoopCityX = iLoopCity.getX ()
		iLoopCityY = iLoopCity.getY ()
		deltaX = iPlotX - iLoopCityX
		deltaY = iPlotY - iLoopCityY
		if deltaY < 0:
			deltaY = -deltaY
		if deltaY >= mapH/2:
			deltaY = mapH - deltaY
		deltaX *= deltaX
		deltaY *= deltaY
		dd = deltaX + deltaY
		if radius >= dd:
			return False
		deltaX2 = iUnitX - iLoopCityX
		deltaY2 = iUnitY - iLoopCityY
		if deltaY2 < 0:
			deltaY2 = -deltaY2
		if deltaY2 >= mapH/2:
			deltaY2 = mapH - deltaY2
		deltaX2 *= deltaX2
		deltaY2 *= deltaY2
		dd2 = deltaX2 + deltaY2
		if dd2 >= dd:
			return False
	return True

##
def checkRadiusWXWY(ePlayer, iUnitId, iPlotX, iPlotY):
	player = gc.getPlayer(ePlayer)
	radius = myRadius [ePlayer]
	radius = radius * radius

	iUnit = player.getUnit (iUnitId)
	iUnitX = iUnit.getX ()
	iUnitY = iUnit.getY ()
	mapW = CyMap().getGridWidth()
	mapH = CyMap().getGridHeight()

	for iLoopCityN in range(player.getNumCities ()):
		iLoopCity = player.getCity (iLoopCityN)
		iLoopCityX = iLoopCity.getX ()
		iLoopCityY = iLoopCity.getY ()
		deltaX = iPlotX - iLoopCityX
		deltaY = iPlotY - iLoopCityY
		if deltaX < 0:
			deltaX = -deltaX
		if deltaX >= mapW/2:
			deltaX = mapW - deltaX
		if deltaY < 0:
			deltaY = -deltaY
		if deltaY >= mapH/2:
			deltaY = mapH - deltaY
		deltaX *= deltaX
		deltaY *= deltaY
		dd = deltaX + deltaY
		if radius >= dd:
			return False
		deltaX2 = iUnitX - iLoopCityX
		deltaY2 = iUnitY - iLoopCityY
		if deltaX2 < 0:
			deltaX2 = -deltaX2
		if deltaX2 >= mapW/2:
			deltaX2 = mapW - deltaX2
		if deltaY2 < 0:
			deltaY2 = -deltaY2
		if deltaY2 >= mapH/2:
			deltaY2 = mapH - deltaY2
		deltaX2 *= deltaX2
		deltaY2 *= deltaY2
		dd2 = deltaX2 + deltaY2
		if dd2 >= dd:
			return False
	return True
