enum {
 //  = 2,	// Error parsing: Empty enum name
DESTRUCTENGINE = 2,
DESTRUCTDEFAULT = 6,
DESTRUCTWRECK = 7,
DESTRUCTTREE = 3,
DESTRUCTTENT = 4,
STABILIZEDINAXISX = 1,
STABILIZEDINAXESXYZ = 4,
STABILIZEDINAXISY = 2,
STABILIZEDINAXESBOTH = 3,
DESTRUCTNO = 0,
STABILIZEDINAXESNONE = 0,
DESTRUCTMAN = 5,
DESTRUCTBUILDING = 1,
};

class CfgPatches {
class example_retexture_config {
	units[] = {};
	weapons[] = {};
	requiredVersion = 0.1;
	requiredAddons[] = {"A3_Characters_F_BLUFOR","A3_Characters_F_Exp"};
};
};


class CfgVehicles {

class B_Soldier_base_F;

class Arctic_Soldier_F : B_Soldier_base_F {
	_generalMacro = "B_Soldier_F"; //unsure what this does
	scope = 2;
	displayName = "Uniform Test Soldier";
	nakedUniform = "U_BasicBody"; //class for "naked" body
	uniformClass = "CTRG_CombatUniform_arctic"; //the uniform item
	hiddenSelections[] = {"Camo"};
	hiddenSelectionsTextures[] = {"\snow_camo\addons\data\clothing1_mtp_urban_co.paa"};

	linkedItems[] = {"example_PlateCarrier1_rgr", "example_HelmetB", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
	respawnLinkedItems[] = {"example_PlateCarrier1_rgr", "example_HelmetB", "NVGoggles", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};
};

};

class cfgWeapons {
class Uniform_Base;
class UniformItem;

class CTRG_CombatUniform_arctic : Uniform_Base {
	scope = 2;
	displayName = "CTRG Arctic Uniform";
	picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
	model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
	hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\snow_camo\addons\data\clothing1_mtp_urban_co.paa"
		};
	class ItemInfo : UniformItem {
		uniformModel = "-";
		uniformClass = "Arctic_Soldier_F"; //would be same as our made soldier class
		containerClass = "Supply40"; //how much it can carry
		mass = 40; //how much it weights
	};
};

/*
class ItemCore;
class HeadgearItem;

class example_HelmetB : ItemCore {
	scope = 2;
	weaponPoolAvailable = 1;
	displayName = "Example helmet";
	picture = "\A3\characters_f\Data\UI\icon_H_HelmetB_CA.paa";
	model = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\snow_camo\addons\data\equip1_co.paa"};

	class ItemInfo : HeadgearItem {
		mass = 100;
		uniformModel = "\A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
		modelSides[] = {3, 1};
		armor = 3*0.5;
		passThrough = 0.8;
		hiddenSelections[] = {"camo"};
	};
};
*/
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
};