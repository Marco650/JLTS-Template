class CfgPatches
{
	class JLTS_Example //Name of your Folder/PBO, for the units and weapons area put your unique classnames in as a link
	{
		name = "JLTS Example"; // Name of your mod
		url = ""; // Website link
		author = "Example"; // Author of the mod
		authors[] = {"Example1", "Example2"}; // Authors of the mod
		units[]=
		{
			"JLTS_Example_Backpack", 
			"JLTS_Example_Unit",

		};
		weapons[]=
		{
			"JLTS_Example_NVG",
			"JLTS_Example_Helmet",
			"JLTS_Example_Vest",
			"JLTS_Example_Uniform",
		};
		version = "1.0"; // Version of the mod
		versionStr = "1.0.0.0"
		versionAr[] = { 1,0,0,0 }; 
		requiredVersion = 1.0; // Required version of the game to play the mod
		requiredAddons[] = 
		{
			"JLTS_characters_CloneArmor"
		}; // handles in game load order
	};
};
class CfgFactionClasses //Section for factions in Zeus/Eden
{
	class JLTS_Example_MainFaction // classname of your main faction
	{
	displayName = "JLTS Faction Example"; // Name of your main faction
	};
};
class JLTS_Example_SubFactions //This is your sub factions 
{
	class JLTS_Example_SubFactions_1 // classname of your subfaction
	{
		displayName="JLTS Sub Faction Example"; // name of your sub faction
	};
};
class CfgWeapons // This area is where you put weapons, nvg, helmets, vest and uniforms classnames from different pbo's
{
	class UniformItem;
	class VestItem;
	class HeadgearItem;
	class JLTS_CloneNVG;
	class JLTS_CloneHelmetP2;
	class JLTS_CloneVestHolster;
	class JLTS_CloneArmor
	{
		class ItemInfo; // External class reference
	};


	class JLTS_Example_NVG: JLTS_CloneNVG // Code example of a NVG 
	{
		author="Example";
		displayName="Clone NVG Visor (Example)";
		hiddenSelectionsTextures[]=
		{
			"JLTS_Example\data\NVG_Co.paa" // Pathing to the location of your texture
		};
	};
	class JLTS_Example_Helmet: JLTS_CloneHelmetP2
	{
		author="Example";
		displayName="Clone Trooper Helmet (Example)";
		hiddenSelectionsTextures[]=
		{
			"JLTS_Example\data\Helmet_Co.paa" // Pathing to the location of your texture
		};
	};
	class JLTS_Example_Vest: JLTS_CloneVestHolster // Code example of a vest 
	{
		author="Marco";
		displayName="Clone Trooper Holster (Example)"; 
		hiddenSelectionsTextures[]=
		{
			"JLTS_Example\data\Heavy_Co.paa" // Pathing to the location of your texture
		};
	};
	class JLTS_Example_Uniform: JLTS_CloneArmor // Code example of a Uniform, this needs to be linked to your unit  
	{
	    author="Example";
		displayName="Clone Trooper Armor (Example)";
		class ItemInfo: ItemInfo
		{
			uniformType = "Neopren"; // This makes the uniform count as a wetsuit
			uniformClass="JLTS_Example_Unit"; // This is the same classname as your Unit
			containerClass="Supply150"; // This is the actual amount of storage the uniform has 
			mass=40;
			vestType="Rebreather"; // This makes the uniform count as a rebreather 
		};
	};
};
class CfgVehicles
{
	class JLTS_Clone_P2_DC15A;
	class JLTS_Clone_backpack;


	class JLTS_Example_Backpack: JLTS_Clone_backpack // Code example of a vest 
	{
		author="Example";
		displayname="Clone Backpack";
		maximumload=350; // // This is the actual amount of storage the backpack has 
		hiddenselectionstextures[]=
		{
			"JLTS_Example\data\Backpack_Co.paa",
		};
	};
	class JLTS_Example_Unit: JLTS_Clone_P2_DC15A // Code example of a unit  
	{
		author="Example";
		displayName="Clone Trooper Example"; // Name of the unit
		uniformclass="JLTS_Example_Uniform"; // This is the same classname as your Uniform
		faction="JLTS_Example_MainFaction"; // Main faction this unit belongs to
	    editorSubcategory="JLTS_Example_SubFactions_1"; // Sub faction this unit belongs to 
		backpack="JLTS_Example_Backpack"; //What backpack this unjt will spawn with
		hiddenSelectionsTextures[]=
		{
			"JLTS_Example\data\Upper_Co.paa", // Pathing to the location of your texture
			"JLTS_Example\data\Lower_Co.paa", // Pathing to the location of your texture
		};
		linkedItems[]= // Items the unit will spawn with 
		{
			"JLTS_Example_NVG", 
			"JLTS_Example_Helmet",
			"JLTS_Example_Vest",

		};
		respawnLinkedItems[]= // Repeat above 
		{
			"JLTS_Example_NVG",
			"JLTS_Example_Helmet",
			"JLTS_Example_Vest",
		};
	};	
};	