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
		requiredAddons[] = {"A3_Characters_F","A3_Characters_F_Exp"};
		// List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content unlocking.
		units[] = {};
		// List of weapons (CfgWeapons classes) contained in the addon.
		weapons[] = {
			"H_HelmetB_arctic_snakeskin",
			"H_HelmetSpecB_arctic_paint2",
			"G_Balaclava_TI_arctic",
			"G_Balaclava_TI_G_arctic",
			"G_Bandanna_arctic",
			"G_Bandanna_beast_arctic",
			"G_Bandanna_shades_arctic",
			"G_Balaclava_arctic",
			"G_Balaclava_G_arctic"
		};
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

class CfgGlasses
{
    class None;
	
	// Stealth Balaclava (Arctic)
    class G_Balaclava_TI_arctic: None
    {
        author = "enxyo";
		_generalMacro="G_Balaclava_TI_arctic";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
        displayname = "Stealth Balaclava (Arctic)";
        model = "\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_F.p3d";
        picture = "\A3\Characters_F_Exp\BLUFOR\Data\UI\icon_G_Balaclava_TI_tna_F_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\snow_camo\addons\headgear\data\g_balaclava_ti_arctic.paa"
		};
        identityTypes[] = {};
        mass = 6;
		DLC="Expansion";
    };
	
	// Stealth Balaclava (Arctic, Googles)
	class G_Balaclava_TI_G_arctic: G_Balaclava_TI_arctic
	{
		author="enxyo";
		_generalMacro="G_Balaclava_TI_G_arctic";
		displayName="Stealth Balaclava (Arctic, Googles)";
		model="\A3\Characters_F_Exp\BLUFOR\G_Balaclava_TI_G_F.p3d";
		picture="\A3\Characters_F_Exp\BLUFOR\Data\UI\icon_G_Balaclava_TI_G_tna_F_ca.paa";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\snow_camo\addons\headgear\data\g_balaclava_ti_arctic.paa",
			"\snow_camo\addons\headgear\data\g_combat_arctic_w.paa" // TODO
		};
		identityTypes[]={};
		mass=10;
		DLC="Expansion";
	};

	// Bandanna (Arctic)
	class G_Bandanna_arctic: None
	{
		author = "enxyo";
		_generalMacro="G_Bandanna_arctic";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
        displayname = "Bandanna Arctic";
		model="\A3\Characters_F_Bootcamp\Guerrilla\g_bandana_clean.p3d";
		picture="\A3\Characters_F_Bootcamp\Data\UI\icon_G_Bandana_clean_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\snow_camo\addons\headgear\data\headgear_bandmask_arctic.paa"
		};
		mass=4;
	};
	
	// Bandanna (Beast, Arctic)
	class G_Bandanna_beast_arctic: G_Bandanna_arctic
	{
		author="enxyo";
		_generalMacro="G_Bandanna_beast_arctic";
		displayName="Bandanna (Beast, Arctic)";
		picture="\A3\Characters_F_Bootcamp\Data\UI\icon_G_BandMask_beast_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\snow_camo\addons\headgear\data\headgear_bandmask_beast_arctic.paa"
		};
	};
	
	// Bandanna (Sport, Arctic)
	class G_Bandanna_shades_arctic: G_Bandanna_arctic
	{
		author="enxyo";
		_generalMacro="G_Bandanna_shades_arctic";
		displayName="Bandanna (Sport, Arctic)";
		model="\A3\Characters_F_Bootcamp\Guerrilla\g_bandana_sport.p3d";
		picture="\A3\Characters_F_Bootcamp\Data\UI\icon_G_Bandana_sport_ca.paa";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\snow_camo\addons\headgear\data\headgear_bandmask_arctic.paa",
			"\a3\characters_f\heads\glasses\data\sunglasses_sport_4_ca.paa"
		};
		mass=6;
	};
	
	// Balaclava (Arctic)
	class G_Balaclava_arctic: None
	{
		author="enxyo";
		_generalMacro="G_Balaclava_arctic";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName="Balaclava (Arctic)";
		model="\A3\Characters_F_Bootcamp\Guerrilla\g_balaclava_clean.p3d";
		picture="\A3\Characters_F_Bootcamp\Data\UI\icon_G_Balaclava_clean_ca.paa";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f_bootcamp\guerrilla\data\headgear_balaclava_blk_co.paa" // TODO
		};
		identityTypes[]={};
		mass=6;
	};
	
	// Balaclava (Arctic, Googles)
	class G_Balaclava_G_arctic: G_Balaclava_arctic
	{
		author="enxyo";
		_generalMacro="G_Balaclava_G_arctic";
		displayName="Balaclava (Arctic, Googles)";
		model="\A3\Characters_F_Bootcamp\Guerrilla\g_balaclava_combat.p3d";
		picture="\A3\Characters_F_Bootcamp\Data\UI\icon_G_Balaclava_combat_ca.paa";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f_bootcamp\guerrilla\data\headgear_balaclava_blk_co.paa", // TODO
			"\a3\characters_f\heads\glasses\data\g_combat_ca.paa" // TODO
		};
		mass=10;
	};
};