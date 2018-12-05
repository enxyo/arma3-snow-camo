/*
Arma 3 Snow Camo Mod
by enxyo
https://github.com/enxyo/arma3-snow-camo
*/

// Header class
class CfgPatches
{
	class a3_snow_camo_backpacks
	{
		// Meta information for editor
		name = "A3 Snow Camo";
		author = "enxyo";
		url = "https://github.com/enxyo/arma3-snow-camo";

		// Minimum compatible version. When the game's version is lower, pop-up warning will appear when launching the game.
		requiredVersion = 1.86; 
		// Required addons, used for setting load order.
		// When any of the addons is missing, pop-up warning will appear when launching the game.
		requiredAddons[] = {"A3_Weapons_F"};
		// List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content unlocking.
		units[] = {};
		// List of weapons (CfgWeapons classes) contained in the addon.
		weapons[] = {};
	};
};

class cfgVehicles
{
    class Bag_Base;
    
	// carryall arctic
	class B_carryall_arctic: Bag_Base
    {
        author = "enxyo";
        scope = 2;
		_generalMacro="B_carryall_arctic";
        model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Tortila";
        displayName = "Carryall Arctic";
        picture = "\A3\weapons_f\ammoboxes\bags\data\ui\icon_B_C_Compact_dgtl_ca.paa";
        hiddenSelectionsTextures[]={"\snow_camo\addons\backpacks\data\bp_carryall_arctic.paa"};
        maximumLoad = 320;
        mass = 60;
    };
	
	// kitbag arctic
	class B_kitbag_arctic: Bag_Base
    {
        author = "enxyo";
        scope = 2;
		_generalMacro="B_kitbag_arctic";
        model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
        displayName = "Carryall Arctic";
        picture = "\A3\Weapons_F\ammoboxes\bags\data\ui\icon_B_C_Kitbag_rgr";
        hiddenSelectionsTextures[]={"\snow_camo\addons\backpacks\data\bp_kitbag_arctic.paa"};
        maximumLoad = 280;
        mass = 50;
    };
	
};