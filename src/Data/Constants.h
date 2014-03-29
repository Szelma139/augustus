#ifndef DATA_CONSTANTS_H
#define DATA_CONSTANTS_H

enum {
	ID_Graphic_TerrainBlack = 1,
	ID_Graphic_TerrainUglyGrass = 3,
	ID_Graphic_TerrainWater = 5,
	ID_Graphic_TerrainGrass1 = 10,
	ID_Graphic_TopMenuSidebar = 11,
	ID_Graphic_SidePanel = 12,
	ID_Graphic_MainMenuBackground = 14,
	ID_Graphic_PanelButton = 15,
	ID_Graphic_Font = 16,
	ID_Graphic_TerrainOverlay = 20,
	ID_Graphic_EmpireMap = 47,
	ID_Graphic_WorkshopRawMaterial = 60,
	ID_Graphic_Senate = 62,
	ID_Graphic_Forum = 63,
	ID_Graphic_Fort = 66,
	ID_Graphic_Dock = 78,
	ID_Graphic_Warehouse = 82,
	ID_Graphic_MessageIcon = 90,
	ID_Graphic_LaborPriorityLock = 94,
	ID_Graphic_PanelWindows = 95,
	ID_Graphic_Granary = 99,
	ID_Graphic_OverlayColumn = 103,
	ID_Graphic_Homeless = 118,
	ID_Graphic_FortStandards = 127,
	ID_Graphic_AdvisorIcons = 128,
	ID_Graphic_ResourceIcons = 129,
	ID_Graphic_DialogBackground = 132,
	ID_Graphic_SunkenTextboxBackground = 133,
	ID_Graphic_ContextIcons = 134,
	ID_Graphic_TerrainDesirability = 135,
	ID_Graphic_AdvisorBackground = 136,
	ID_Graphic_MinimapEmptyLand = 141,
	ID_Graphic_MinimapWater = 142,
	ID_Graphic_MinimapTree = 143,
	ID_Graphic_MinimapRock = 145,
	ID_Graphic_MinimapMeadow = 146,
	ID_Graphic_MinimapRoad = 147,
	ID_Graphic_MinimapHouse = 148,
	ID_Graphic_MinimapBuilding = 149,
	ID_Graphic_MinimapWall = 150,
	ID_Graphic_MinimapAqueduct = 151,
	ID_Graphic_MinimapBlack = 152,
	ID_Graphic_PopulationGraphBar = 157,
	ID_Graphic_Bullet = 158,
	ID_Graphic_MessageImages = 159,
	ID_Graphic_WinGame = 160,
	ID_Graphic_Bridge = 164,
	ID_Graphic_Dock2 = 168,
	ID_Graphic_Dock3 = 169,
	ID_Graphic_Dock4 = 170,
	ID_Graphic_Dockers = 171,
	ID_Graphic_EmpirePanels = 172,
	ID_Graphic_EmpireResource = 173,
	ID_Graphic_EmpireCity = 174,
	ID_Graphic_EmpireCityTrade = 175,
	ID_Graphic_EmpireCityDistantRoman = 176,
	ID_Graphic_RatingsColumn = 189,
	ID_Graphic_BigPeople = 190,
	ID_Graphic_TheaterShow = 191,
	ID_Graphic_AmphitheaterShow = 192,
	ID_Graphic_ColosseumShow = 193,
	ID_Graphic_RatingsBackground = 195,
	ID_Graphic_BorderedButton = 208,
	ID_Graphic_Hippodrome1 = 213,
	ID_Graphic_Hippodrome2 = 214,
	ID_Graphic_FortIcons = 222,
	ID_Graphic_EmpireForeignCity = 223,
	ID_Graphic_GodBolt = 225,
	ID_Graphic_PlagueSkull = 227,
	ID_Graphic_TradeCenterFlag = 238,
	ID_Graphic_TradeAmount = 243,
	ID_Graphic_Gatehouse = 248,
	ID_Graphic_LoadingScreen = 251,
};

#define Color_Black 0
#define Color_Red 0xf800
#define Color_Orange 0xfac1
#define Color_Yellow 0xe70b
#define Color_White 0xffff
#define Color_Transparent 0xf81f
#define Color_InsetLight 0xffff
#define Color_InsetDark 0x8410
#define Color_Minimap_Dark 0x4208
#define Color_Minimap_Light 0xC618
#define Color_NoMask 0xffff
#define Color_MaskRed 0xf863
#define Color_MaskGreen 0xffff
//TODO colormask green

enum {
	EmpireObject_Ornament = 0,
	EmpireObject_City = 1,
	EmpireObject_BattleIcon = 3,
	EmpireObject_LandTradeRoute = 4,
	EmpireObject_SeaTradeRoute = 5,
	EmpireObject_RomanArmy = 6,
	EmpireObject_EnemyArmy = 7,
};

enum {
	EmpireCity_DistantRoman = 0,
	EmpireCity_Ours = 1,
	EmpireCity_Trade = 2,
	EmpireCity_FutureTrade = 3,
	EmpireCity_DistantForeign = 4,
	EmpireCity_VulnerableRoman = 5,
	EmpireCity_FutureRoman = 6,
};

enum {
	Direction_Top = 0,
	Direction_TopRight = 1,
	Direction_Right = 2,
	Direction_BottomRight = 3,
	Direction_Bottom = 4,
	Direction_BottomLeft = 5,
	Direction_Left = 6,
	Direction_TopLeft = 7,
	Direction_None = 8,
};

enum {
	Resource_None = 0,
	Resource_Wheat = 1,
	Resource_Vegetables = 2,
	Resource_Fruit = 3,
	Resource_Olives = 4,
	Resource_Vines = 5,
	Resource_Meat = 6,
	Resource_Wine = 7,
	Resource_Oil = 8,
	Resource_Iron = 9,
	Resource_Timber = 10,
	Resource_Clay = 11,
	Resource_Marble = 12,
	Resource_Weapons = 13,
	Resource_Furniture = 14,
	Resource_Pottery = 15,
	Resource_Denarii = 16,
	Resource_Troops = 17
};

enum {
	WorkshopResource_OlivesToOil = 1,
	WorkshopResource_VinesToWine = 2,
	WorkshopResource_IronToWeapons = 3,
	WorkshopResource_TimberToFurniture = 4,
	WorkshopResource_ClayToPottery = 5
};

enum {
	Climate_Central = 0,
	Climate_Northern = 1,
	Climate_Desert = 2
};

enum {
	LaborCategory_IndustryCommerce = 0,
	LaborCategory_FoodProduction = 1,
	LaborCategory_Engineering = 2,
	LaborCategory_Water = 3,
	LaborCategory_Prefectures = 4,
	LaborCategory_Military = 5,
	LaborCategory_Entertainment = 6,
	LaborCategory_HealthEducation = 7,
	LaborCategory_GovernanceReligion = 8
};

enum {
	TradeStatus_None = 0,
	TradeStatus_Import = 1,
	TradeStatus_Export = 2
};

enum {
	EmigrationCause_None = 0,
	EmigrationCause_NoFood = 1,
	EmigrationCause_NoJobs = 2,
	EmigrationCause_HighTaxes = 3,
	EmigrationCause_LowWages = 4,
	EmigrationCause_ManyTents = 5,
};

enum {
	God_Ceres = 0,
	God_Neptune = 1,
	God_Mercury = 2,
	God_Mars = 3,
	God_Venus = 4
};

enum {
	EnemyType_Barbarian = 0,
	EnemyType_Numidian = 1,
	EnemyType_French = 2,
	EnemyType_British = 3,
	EnemyType_Goth = 4,
	EnemyType_Pergamum = 5,
	EnemyType_Seleucid = 6,
	EnemyType_Etruscan = 7,
	EnemyType_Greek = 8,
	EnemyType_Egyptian = 9,
	EnemyType_Carthaginian = 10
};
/*
0x00: Barbarians
0x01: Etruscans
0x02: Samnites
0x03: Carthaginians
0x04: Macedonians
0x05: Graeci
0x06: Egyptians
0x07: Pergamum
0x08: Seleucids
0x09: Picts
0x0A: Celts
0x0B: Britons
0x0C: Gauls
0x0D: Helvetii
0x0E: Goths
0x0F: Visigoths
0x10: Huns
0x11: Iberians
0x12: Numidians
0x13: Judaeans
*/
extern int Constant_SalaryForRank[11];

#endif
