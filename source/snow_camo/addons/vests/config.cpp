/*
Arma 3 Snow Camo Mod
by enxyo
https://github.com/enxyo/arma3-snow-camo
*/

// Header class
class CfgPatches
{
	class a3_snow_camo_vests
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
		weapons[] = {
			"V_PlateCarrier2_arctic"
		};
	};
};

class CfgWeapons
{
	class ItemCore;
	class Vest_Camo_Base;
	class VestItem;
	
	// Plate Carrier 2 Arctic
	class V_PlateCarrier2_arctic: Vest_Camo_Base
	{
		author="$STR_A3_Bohemia_Interactive"; // TODO
		_generalMacro="V_PlateCarrier2_arctic"; // debug?
		scope=2; // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		weaponPoolAvailable = 1;
		allowedSlots[] = {901}; // This means the vest can be put into a backpack. (701 stands for vest, 801 stands for uniform, 901 stands for backpack)
		displayName="Plate Carrier 2 Arctic";
		picture="\A3\Characters_F\data\ui\icon_V_plate_carrier_2_blk_CA.paa"; // TODO
		model="\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
		descriptionShort="$STR_A3_SP_AL_IV"; // TODO
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\snow_camo\addons\vests\data\vest1_arctic.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest01";
			containerClass="Supply140";
			mass=100;
			hiddenSelections[]=
			{
				"camo"
			};
			class HitpointsProtectionInfo //more info at: https://community.bistudio.com/wiki/Arma_3_Soldier_Protection
			{
				class Neck
				{
					hitpointName="HitNeck"; // reference to the hit point class defined in the man base class
					armor=0; // addition to armor of referenced hitpoint
					passThrough=1; // multiplier of base passThrough defined in referenced hitpoint
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=0;
					passThrough=1;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=20;
					passThrough=0.2;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=20;
					passThrough=0.2;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=20;
					passThrough=0.2;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=0;
					passThrough=1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.2;
				};
			};
		};
	};
};