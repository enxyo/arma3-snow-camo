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
		units[] = {
			"O_V_Soldier_Viper_arctic_1_F",
			"O_Soldier_arctic_1_F"
		};
		// List of weapons (CfgWeapons classes) contained in the addon.
		weapons[] = {
			"U_O_V_Viper_arctic",
			"U_O_CombatUniform_arctic"
		};
	};
};

class CfgVehicles
{
	class B_CTRG_Soldier_base_F;                     // For inheritance to work, the base class has to be defined.
    class B_CTRG_Soldier_arctic_1_F: B_CTRG_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
    {
        author = "Splendid Modder";         // The name of the author of the asset, which is displayed in the editor.
        _generalMacro="B_CTRG_Soldier_arctic_1_F";
				faction="BLU_CTRG_F";
				scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
        scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
        scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
        identityTypes[] =  {"LanguageENG_F","Head_NATO","G_NATO_default"};        // Identity Types are explained in the Headgear section of this guide.
        displayName = "New Soldier";        // The name of the soldier, which is displayed in the editor.
        cost = 200000;                      // How likely the enemies attack this character among some others.
        camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
        sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
        threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
        model = "\A3\Characters_F_Exp\BLUFOR\B_CTRG_Soldier_01_F.p3d";       	 // The path to the model this character uses.
        uniformClass = "U_B_CTRG_Soldier_arctic_1_F";                        	 // This links this soldier to a particular uniform. For the details, see below.
        hiddenSelections[] = {"camo"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
        hiddenSelectionsTextures[] = {"\snow_camo\addons\data\clothing1_arctic.paa"};        // The textures for the selections defined above. If empty, no texture is used.
        canDeactivateMines = true;              // Can this character deactivate mines?
        engineer = true;                        // Can this character repair vehicles?
        attendant = 1;                          // Can this character heal soldiers?
        icon = "iconManEngineer";               // If a character has a special role, a special icon shall be used.
        picture = "pictureRepair";              // The same as above, but for the squad picture.
        backpack = "B_Kitbag_mcamo_Eng";        // Which backpack the character is wearing.
        weapons[] = {arifle_MX_ACO_pointer_F, hgun_P07_F, Throw, Put};               // Which weapons the character has.
        respawnWeapons[] = {arifle_MX_ACO_pointer_F, hgun_P07_F, Throw, Put};        // Which weapons the character respawns with.
        Items[] = {FirstAidKit};                // Which items the character has.
        RespawnItems[] = {FirstAidKit};         // Which items the character respawns with.
        magazines[] = {};               		// What ammunition the character has.
        respawnMagazines[] = {)};        		// What ammunition the character respawns with.
        linkedItems[] = {V_PlateCarrier1_rgr, H_HelmetB, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
        respawnLinkedItems[] = {V_PlateCarrier1_rgr, H_HelmetB, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
    };

	/* --- OPFOR --- */

	class O_Soldier_base_F;

	// Arctic Viper Suit
	class O_V_Soldier_Viper_arctic_1_F: O_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
	{
			author = "enxyo";         // The name of the author of the asset, which is displayed in the editor.
			_generalMacro="O_V_Soldier_Viper_arctic_1_F";
			faction="OPF_F";
			scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
			scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
			scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
			identityTypes[] =  {"LanguagePER_F","Head_TK","G_IRAN_default"};        // Identity Types are explained in the Headgear section of this guide.
			displayName = "CSAT Arctic Viper Soldier";        // The name of the soldier, which is displayed in the editor.
			cost = 200000;                      // How likely the enemies attack this character among some others.
			camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
			sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
			threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
			model = "\A3\Characters_F_Exp\OPFOR\o_viper.p3d";       	 // The path to the model this character uses.
			uniformClass = "U_O_V_Viper_arctic";                        	 // This links this soldier to a particular uniform. For the details, see below.
			hiddenSelections[] = {"camo"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
			hiddenSelectionsTextures[] = {"\snow_camo\addons\data\u_o_v_viper1_arctic.paa"};        // The textures for the selections defined above. If empty, no texture is used.
			canDeactivateMines = true;              // Can this character deactivate mines?
			engineer = true;                        // Can this character repair vehicles?
			attendant = 1;                          // Can this character heal soldiers?
			icon = "iconManEngineer";               // If a character has a special role, a special icon shall be used.
			picture = "pictureRepair";              // The same as above, but for the squad picture.
			backpack = "B_Kitbag_mcamo_Eng";        // Which backpack the character is wearing.
			weapons[] = {arifle_MX_ACO_pointer_F, hgun_P07_F, Throw, Put};               // Which weapons the character has.
			respawnWeapons[] = {arifle_MX_ACO_pointer_F, hgun_P07_F, Throw, Put};        // Which weapons the character respawns with.
			Items[] = {FirstAidKit};                // Which items the character has.
			RespawnItems[] = {FirstAidKit};         // Which items the character respawns with.
			magazines[] = {};               		// What ammunition the character has.
			respawnMagazines[] = {)};        		// What ammunition the character respawns with.
			linkedItems[] = {V_PlateCarrier1_rgr, H_HelmetB, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
			respawnLinkedItems[] = {V_PlateCarrier1_rgr, H_HelmetB, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
	};

	// Arctic Combat Uniform
	class O_Soldier_arctic_1_F: O_Soldier_base_F       // Define of a new class, which parameters are inherited from B_Soldier_base_F, with exception of those defined below.
	{
			author = "enxyo";         // The name of the author of the asset, which is displayed in the editor.
			_generalMacro="O_Soldier_arctic_1_F";
			faction="OPF_F";
			scope = 2;                          // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
			scopeCurator = 2;                   // 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
			scopeArsenal = 2;                   // 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
			identityTypes[] =  {"LanguagePER_F","Head_TK","G_IRAN_default"};        // Identity Types are explained in the Headgear section of this guide.
			displayName = "CSAT Arctic Soldier";        // The name of the soldier, which is displayed in the editor.
			cost = 200000;                      // How likely the enemies attack this character among some others.
			camouflage = 1.5;                   // How likely this character is spotted (smaller number = more stealthy).
			sensitivity = 2.5;                  // How likely this character spots enemies when controlled by AI.
			threat[] = {1, 1, 0.8};             // Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
			model = "\A3\characters_F\OPFOR\o_soldier_01.p3d";       	 // The path to the model this character uses.
			uniformClass = "U_O_CombatUniform_arctic";                        	 // This links this soldier to a particular uniform. For the details, see below.
			hiddenSelections[] = {"Camo1"};                             // List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used.
			hiddenSelectionsTextures[] = {"\snow_camo\addons\data\u_o_combat1_arctic.paa"};        // The textures for the selections defined above. If empty, no texture is used.
			canDeactivateMines = true;              // Can this character deactivate mines?
			engineer = true;                        // Can this character repair vehicles?
			attendant = 1;                          // Can this character heal soldiers?
			icon = "iconManEngineer";               // If a character has a special role, a special icon shall be used.
			picture = "pictureRepair";              // The same as above, but for the squad picture.
			backpack = "B_Kitbag_mcamo_Eng";        // Which backpack the character is wearing.
			weapons[] = {arifle_MX_ACO_pointer_F, hgun_P07_F, Throw, Put};               // Which weapons the character has.
			respawnWeapons[] = {arifle_MX_ACO_pointer_F, hgun_P07_F, Throw, Put};        // Which weapons the character respawns with.
			Items[] = {FirstAidKit};                // Which items the character has.
			RespawnItems[] = {FirstAidKit};         // Which items the character respawns with.
			magazines[] = {};               		// What ammunition the character has.
			respawnMagazines[] = {)};        		// What ammunition the character respawns with.
			linkedItems[] = {V_PlateCarrier1_rgr, H_HelmetB, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};               // Which items the character has.
			respawnLinkedItems[] = {V_PlateCarrier1_rgr, H_HelmetB, ItemMap, ItemCompass, ItemWatch, ItemRadio, NVGoggles};        // Which items the character respawns with.
	};
};

class CfgWeapons
{
	class UniformItem;
	class Uniform_Base;

	// arctic CTRG uniform
	class U_B_CTRG_Soldier_arctic_1_F: Uniform_Base
	{
		author="enxyo"; // TODO
		scope=2;  // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		displayName="CTRG Stealth Uniform (Arctic)";
		picture="\snow_camo\addons\data\ui\logo_128_t.paa"; // TODO
		model="\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\snow_camo\addons\data\clothing1_arctic.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="B_CTRG_Soldier_arctic_1_F";
			containerClass="Supply40";
			mass=40;
		};
	};

	/* --- opfor --- */

	// Arctic Viper Suit
	class U_O_V_Viper_arctic: Uniform_Base
	{
		author="enxyo"; // TODO
		scope=2;  // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		displayName="Special Purpose Suit (Arctic)";
		picture="\snow_camo\addons\data\ui\logo_128_t.paa"; // TODO
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\snow_camo\addons\data\u_o_v_viper1_arctic.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="O_V_Soldier_Viper_arctic_1_F";
			containerClass="Supply40";
			mass=40;
		};
	};


	// Arctic Combat Uniform
	class U_O_CombatUniform_arctic: Uniform_Base
	{
		author="enxyo"; // TODO
		scope=2;  // 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		displayName="Fatigues (Arctic) [CSAT]";
		picture="\snow_camo\addons\data\ui\logo_128_t.paa"; // TODO
		model="\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[]=
		{
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\snow_camo\addons\data\u_o_combat1_arctic.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="O_Soldier_arctic_1_F";
			containerClass="Supply40";
			mass=40;
		};
	};
};
