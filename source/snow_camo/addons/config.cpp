/*
Arma 3 Snow Camo Mod
by enxyo
https://github.com/enxyo/arma3-snow-camo
*/

// Header class
class CfgPatches
{
	class a3_snow_camo
	{
		// Meta information for editor
		name = "A3 Snow Camo";
		author = "enxyo";
		url = "https://github.com/enxyo/arma3-snow-camo";

		// Minimum compatible version. When the game's version is lower, pop-up warning will appear when launching the game.
		requiredVersion = 1.86; 
		// Required addons, used for setting load order.
		// When any of the addons is missing, pop-up warning will appear when launching the game.
		requiredAddons[] = {"A3_Characters_F_BLUFOR","A3_Characters_F_Exp"};
		// List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content unlocking.
		units[] = {};
		// List of weapons (CfgWeapons classes) contained in the addon.
		weapons[] = {};
	};
};

class CfgVehicles
{
	class B_Soldier_base_F;
	class B_CTRG_Soldier_base_F;
	class B_CTRG_Soldier_F;
	/*
	class B_CTRG_Soldier_base_F: B_Soldier_base_F
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="B_CTRG_Soldier_base_F";
		faction="BLU_CTRG_F";
		editorSubcategory="EdSubcat_Personnel_Pacific";
		displayName="";
		model="\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_01_F.p3d";
		uniformClass="U_B_CTRG_Soldier_F";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Exp\BLUFOR\Data\U_B_CTRG_Soldier_F_co.paa"
		};
		backpack="";
		weapons[]=
		{
			"arifle_SPAR_01_blk_ERCO_Pointer_F",
			"hgun_P07_khk_Snds_F",
			"Throw",
			"Put",
			"Binocular"
		};
		respawnWeapons[]=
		{
			"arifle_SPAR_01_blk_ERCO_Pointer_F",
			"hgun_P07_khk_Snds_F",
			"Throw",
			"Put",
			"Binocular"
		};
		magazines[]=
		{
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"MiniGrenade",
			"MiniGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"30Rnd_556x45_Stanag_red",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"16Rnd_9x21_Mag",
			"MiniGrenade",
			"MiniGrenade",
			"SmokeShell",
			"SmokeShellGreen",
			"Chemlight_green",
			"Chemlight_green"
		};
		items[]=
		{
			"FirstAidKit"
		};
		respawnItems[]=
		{
			"FirstAidKit"
		};
		linkedItems[]=
		{
			"H_HelmetB_TI_tna_F",
			"V_TacVest_oli",
			"G_Balaclava_TI_G_tna_F",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGogglesB_grn_F"
		};
		respawnLinkedItems[]=
		{
			"H_HelmetB_TI_tna_F",
			"V_TacVest_oli",
			"G_Balaclava_TI_G_tna_F",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"NVGogglesB_grn_F"
		};
		DLC="Expansion";
	};
	class B_CTRG_Soldier_F: B_CTRG_Soldier_base_F
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="B_CTRG_Soldier_F";
		faction="BLU_CTRG_F";
		uniformClass="U_B_CTRG_Soldier_F";
		model="\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_01_F.p3d";
		scope=1;
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Exp\BLUFOR\Data\U_B_CTRG_Soldier_F_co.paa"
		};
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"a3\characters_f_exp\blufor\data\U_B_CTRG_Soldier_F.rvmat",
				"A3\Characters_F_Exp\BLUFOR\Data\U_B_CTRG_Soldier_F_injury.rvmat",
				"A3\Characters_F_Exp\BLUFOR\Data\U_B_CTRG_Soldier_F_injury.rvmat"
			};
		};
		DLC="Expansion";
		armor=2;
		armorStructural=3;
		explosionShielding=0.30000001;
	};
	*/
	class B_CTRG_Soldier_arctic_1_F: B_CTRG_Soldier_F
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="B_CTRG_Soldier_urb_1_F";
		scope=1;
		faction="BLU_CTRG_F";
		model="\A3\Characters_F\BLUFOR\b_soldier_01.p3d";
		uniformClass="U_B_CTRG_Soldier_arctic_1_F";
		hiddenSelectionsTextures[]=
		{
			"\snow_camo\addons\data\clothing1_arctic.paa"
		};
		class Wounds
		{
			tex[]={};
			mat[]=
			{
				"a3\characters_f\blufor\data\clothing1.rvmat",
				"a3\characters_f\blufor\data\clothing1_injury.rvmat",
				"a3\characters_f\blufor\data\clothing1_injury.rvmat",
				"a3\characters_f\heads\data\hl_white_bald_muscular.rvmat",
				"a3\characters_f\heads\data\hl_white_bald_muscular_injury.rvmat",
				"a3\characters_f\heads\data\hl_white_bald_muscular_injury.rvmat",
				"a3\characters_f\heads\data\m_white_01.rvmat",
				"a3\characters_f\heads\data\m_white_01_injury.rvmat",
				"a3\characters_f\heads\data\m_white_01_injury.rvmat"
			};
		};
		DLC="Expansion";
	};
	class Item_Base_F;
	class Item_U_B_CTRG_Soldier_urb_1_F: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="$STR_A3_U_B_CTRG_Soldier_urb_1_F0";
		author="$STR_A3_Bohemia_Interactive";
		editorCategory="EdCat_Equipment";
		editorSubcategory="EdSubcat_Uniforms";
		vehicleClass="ItemsUniforms";
		model="\A3\Weapons_f\dummyweapon.p3d";
		class TransportItems
		{
			class U_B_CTRG_Soldier_urb_1_F
			{
				name="U_B_CTRG_Soldier_urb_1_F";
				count=1;
			};
		};
	};
};
	
class CfgWeapons
{	
	class UniformItem;
	class Uniform_Base;
	// arctic CTRG uniform
	class U_B_CTRG_Soldier_arctic_1_F: Uniform_Base
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="CTRG Arctic Uniform";
		picture="\A3\characters_f_exp\BLUFOR\data\ui\icon_U_B_CTRG_Soldier_urb_1_F_ca.paa"; // TODO
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\snow_camo\addons\data\clothing1_arctic.paa"
		};
		DLC="Expansion";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_CTRG_Soldier_arctic_1_F";
			containerClass="Supply40";
			mass=40;
		};
	};
};
	


/*
class Vest_Base;
class VestItem;

class example_PlateCarrier1_rgr : Vest_Base {
	scope = 2;
	displayName = "Example Platecarrier";
	picture = "\A3\characters_f\Data\UI\icon_V_plate_carrier_1_CA.paa";
	model = "\A3\Characters_F\BLUFOR\equip_b_vest02";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\snow_camo\addons\data\vests_rgr_co.paa"};

	class ItemInfo : VestItem {
		uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
		containerClass = "Supply100";
		mass = 50;
		armor = 5*0.5;
		passThrough = 0.7;
		hiddenSelections[] = {"camo"};
	};
};
*/