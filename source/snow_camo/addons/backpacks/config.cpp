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
		weapons[] = {
			"B_carryall_arctic",
			"B_carryall_arctic_medical",
			"B_kitbag_arctic",
			"B_kitbag_arctic_medical"
		};
	};
};

class cfgVehicles
{
    class Bag_Base;

	class B_Carryall_Base;

	// Carryall Backpack (Arctic)
	class B_carryall_arctic: B_Carryall_Base
	{
		author = "enxyo";
		scope = 2;
		_generalMacro="B_carryall_arctic";
		displayName = "Carryall Backpack (Arctic)";
		picture = "\snow_camo\addons\data\ui\logo_128_t.paa";
		hiddenSelectionsTextures[]={"\snow_camo\addons\backpacks\data\pb_carryall_arctic.paa"};
		maximumLoad = 320;
		mass = 60;
	}

	// Carryall Backpack (Arctic, Medical)
	class B_carryall_arctic_medical: B_carryall_arctic
	{
		author = "enxyo";
		scope = 2;
		_generalMacro="B_carryall_arctic_medical";
		displayName = "Carryall Backpack (Arctic, Medical)";
		hiddenSelectionsTextures[]={"\snow_camo\addons\backpacks\data\pb_carryall_arctic_medical.paa"};
	}

	// kitbag arctic
	class B_kitbag_arctic: Bag_Base
    {
        author = "enxyo";
        scope = 2;
		_generalMacro="B_kitbag_arctic";
        model = "\A3\weapons_f\Ammoboxes\bags\Backpack_Fast";
        displayName = "Kitbag (Arctic)";
        picture = "\snow_camo\addons\data\ui\logo_128_t.paa";
        hiddenSelectionsTextures[]={"\snow_camo\addons\backpacks\data\bp_kitbag_arctic.paa"};
        maximumLoad = 280;
        mass = 50;
    };

	// kitbag arctic medical
	class B_kitbag_arctic_medical: B_kitbag_arctic
    {
        author = "enxyo";
        scope = 2;
		_generalMacro="B_kitbag_arctic_medical";
		displayName = "Kitbag (Arctic, Medical)";
        hiddenSelectionsTextures[]={"\snow_camo\addons\backpacks\data\bp_kitbag_arctic_medical.paa"};
    };

};
