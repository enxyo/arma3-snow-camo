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
			"V_PlateCarrier2_arctic",
			"V_PlateCarrier1_arctic",
			"V_ChestRig1_arctic",
			"V_PlateCarrierGL_arctic",
			"V_PlateCarrierSpec_arctic"
		};
	};
};

class CfgWeapons
{
	class ItemCore;
	class Vest_Camo_Base;
	class Vest_NoCamo_Base;
	class VestItem;

	// Plate Carrier 2 Arctic
	class V_PlateCarrier2_arctic: Vest_Camo_Base
	{
		author="enxyo"; // TODO
		_generalMacro="V_PlateCarrier2_arctic"; // debug?
		scope=2; // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		weaponPoolAvailable = 1;
		allowedSlots[] = {901}; // This means the vest can be put into a backpack. (701 stands for vest, 801 stands for uniform, 901 stands for backpack)
		displayName="Carrier Rig (Arctic)";
		picture="\snow_camo\addons\data\ui\logo_128_t.paa"; // TODO
		model="\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
		descriptionShort="$STR_A3_SP_AL_IV"; // TODO
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\snow_camo\addons\vests\data\vests_arctic.paa"
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

	// Plate Carrier 1 Arctic
	class V_PlateCarrier1_arctic: Vest_Camo_Base
	{
		author="enxyo"; // TODO
		_generalMacro="V_PlateCarrier1_arctic"; // debug?
		scope=2; // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		weaponPoolAvailable = 1;
		allowedSlots[] = {901}; // This means the vest can be put into a backpack. (701 stands for vest, 801 stands for uniform, 901 stands for backpack)
		displayName="Carrier Lite (Arctic)";
		picture="\snow_camo\addons\data\ui\logo_128_t.paa"; // TODO
		model="\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
		descriptionShort="$STR_A3_SP_AL_IV"; // TODO
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\snow_camo\addons\vests\data\vests_arctic.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
			containerClass="Supply140";
			mass=80;
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
					armor=16;
					passThrough=0.3;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=16;
					passThrough=0.3;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.3;
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
					passThrough=0.3;
				};
			};
		};
	};

	// Chest Rig 1 Arctic
	class V_ChestRig1_arctic: Vest_Camo_Base
	{
		author="enxyo"; // TODO
		_generalMacro="V_ChestRig1_arctic"; // debug?
		scope=2; // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		weaponPoolAvailable = 1;
		allowedSlots[] = {901}; // This means the vest can be put into a backpack. (701 stands for vest, 801 stands for uniform, 901 stands for backpack)
		displayName="Chest Rig (Arctic)";
		picture="\snow_camo\addons\data\ui\logo_128_t.paa"; // TODO
		model="\A3\Characters_F\Common\equip_chestrig";
		descriptionShort="$STR_A3_SP_AL_IV"; // TODO
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\snow_camo\addons\vests\data\chestrig1_c1_arctic.paa",
			"\snow_camo\addons\vests\data\vests_arctic.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F\Common\equip_chestrig.p3d";
			containerClass="Supply140";
			mass=20;
			hiddenSelections[]=
			{
				"Camo1",
				"Camo2"
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
					armor=0;
					passThrough=1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=0;
					passThrough=1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=0;
					passThrough=1;
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
					passThrough=1;
				};
			};
		};
	};

	// Plate Carrier GL (Arctic)
	class V_PlateCarrierGL_arctic: Vest_NoCamo_Base
	{
		author="enxyo";
		_generalMacro="V_PlateCarrierGL_arctic";
		scope=2;
		displayName="Carrier GL Rig (Arctic)";
		picture="\snow_camo\addons\data\ui\logo_128_t.paa"; // TODO
		model="\A3\Characters_F\BLUFOR\equip_b_carrier_gl_rig.p3d";
		descriptionShort="$STR_A3_SP_ER"; // TODO
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\snow_camo\addons\vests\data\carrier_gl_rig_arctic.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_carrier_gl_rig.p3d";
			containerClass="Supply140";
			mass=100;
			hiddenSelections[]=
			{
				"camo"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=8;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=8;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=78;
					passThrough=0.60000002;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=78;
					passThrough=0.60000002;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=16;
					passThrough=0.30000001;
				};
				class Pelvis
				{
					hitpointName="HitPelvis";
					armor=16;
					passThrough=0.30000001;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.60000002;
				};
			};
		};
	};

	// Plate Carrier GL (Arctic)
	class V_PlateCarrierSpec_arctic: Vest_NoCamo_Base
	{
		author="enxyo";
		_generalMacro="V_PlateCarrierSpec_arctic";
		scope=2;
		displayName="Carrier Special Rig (Artic)";
		picture="\snow_camo\addons\data\ui\logo_128_t.paa";
		model="\A3\Characters_F\BLUFOR\equip_b_carrier_spec_rig.p3d";
		DLC="Mark";
		descriptionShort="$STR_A3_SP_AL_V"; // TODO
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\snow_camo\addons\vests\data\carrier_gl_rig_arctic.paa"
		};
		class ItemInfo: VestItem
		{
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_carrier_spec_rig.p3d";
			containerClass="Supply100";
			mass=120;
			hiddenSelections[]=
			{
				"camo"
			};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=8;
					passThrough=0.5;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=8;
					passThrough=0.5;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=24;
					passThrough=0.1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=24;
					passThrough=0.1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=24;
					passThrough=0.1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.1;
				};
			};
		};
	};
};
