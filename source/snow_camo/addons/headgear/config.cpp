/*
Arma 3 Snow Camo Mod
by enxyo
https://github.com/enxyo/arma3-snow-camo
*/

// Header class
class CfgPatches
{
	class a3_snow_camo_headgear
	{
		// Meta information for editor
		name = "A3 Snow Camo";
		author = "enxyo";
		url = "https://github.com/enxyo/arma3-snow-camo";

		// Minimum compatible version. When the game's version is lower, pop-up warning will appear when launching the game.
		requiredVersion = 1.86; 
		// Required addons, used for setting load order.
		// When any of the addons is missing, pop-up warning will appear when launching the game.
		requiredAddons[] = {"A3_Characters_F"};
		// List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content unlocking.
		units[] = {};
		// List of weapons (CfgWeapons classes) contained in the addon.
		weapons[] = {};
	};
};

class CfgWeapons
{
	class ItemCore;
	class HeadgearItem;
	
	// arctic snakeskin helmet
	class H_HelmetB_arctic_snakeskin : ItemCore
	{
		author="$STR_A3_Bohemia_Interactive"; // TODO
		_generalMacro="H_HelmetB_arctic_snakeskin";
		scope=2;  // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		weaponPoolAvailable=1;
		allowedSlots[] = {701,901}; // This means the vest can be put into a backpack. (701 stands for vest, 801 stands for uniform, 901 stands for backpack)
		displayName="Arctic Helmet Snakeskin";
		picture="\A3\characters_f\Data\UI\icon_H_helmet_plain_ca.paa"; // TODO
		model="\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\snow_camo\addons\headgear\data\equip1_snake_arctic.paa"
		};
		descriptionShort="$STR_A3_SP_AL_II"; // TODO
		class ItemInfo: HeadgearItem
		{
			mass=30;
			uniformModel="\A3\Characters_F\BLUFOR\headgear_b_helmet_plain";
			modelSides[]={3,1};
			hiddenSelections[]=
			{
				"camo"
			};
			class HitpointsProtectionInfo //more info at: https://community.bistudio.com/wiki/Arma_3_Soldier_Protection
			{
				class Head
				{
					hitpointName="HitHead"; // reference to the hit point class defined in the man base class
					armor=6; // addition to armor of referenced hitpoint
					passThrough=0.5; // multiplier of base passThrough defined in referenced hitpoint
				};
			};
		};
	};
	
	// arctic base helmet
	class H_HelmetSpecB_arctic_paint2 : ItemCore
	{
		author="$STR_A3_Bohemia_Interactive"; // TODO
		_generalMacro="H_HelmetSpecB_arctic_paint2";
		scope=2;
		weaponPoolAvailable=1;
		allowedSlots[] = {701,901}; // This means the vest can be put into a backpack. (701 stands for vest, 801 stands for uniform, 901 stands for backpack)
		displayName="Arctic Helmet";
		picture="\A3\characters_f\Data\UI\icon_H_helmet_plain_ca.paa"; // TODO
		model="\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\snow_camo\addons\headgear\data\equip1_arctic.paa"
		};
		descriptionShort="$STR_A3_SP_AL_II";
		class ItemInfo: HeadgearItem
		{
			mass=50;
			uniformModel="\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
			modelSides[]={3,1};
			hiddenSelections[]=
			{
				"camo"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
	};
};