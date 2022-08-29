class cfgPatches {
	class CamoSwapDemo_github {
		name="Automatic Camo Swapping Functions Demo";
		authors[]={		// when modifying this file for personal mod, unit use, or otherwise extrapolation, please add your name to the end of this
			"Max",			// array rather than replacing pre-existing author names. thanks! - mesa
			"Mesa",
			"Daisy"
		};
		weapons[]={};
		magazine[]={};
		ammo[]={};
		requiredVersions[]={};
	};
};

class Extended_PostInit_EventHandlers {  // put these files in the same folder as this config
	class camoCoefKey { // only required if you want the 
		init = "call compile preprocessFileLineNumbers 'camoCoef_Key.sqf'";
	};
	class camoCoefMod {
		init = "call compile preprocessFileLineNumbers 'camoCoefMod.sqf'";
	};
};

class cfgFunctions {
	class Keys { // this portion is only necessary if you want to use the auto camo swap keybind in your mod, which is very wip and very not well made
		class KeyInt {
			class camoPostInit { // change this to be something unique as it's liable to break some mods if they use CBA XEH with this name
				file=""; // filepath to where you're storing the camoCoef_Key.sqf. include "\" before file path
				postInit=1; // don't change this please
			};
		};
	};
	class gh_camoCoefMod { // change this as well, same deal as above in KeyInt
		class gh_CamoMod { // this portion is for the script to auto determine if your camo is compatible with the environment. more explanation in its script
			class Init {
				file=""; // filepath to where you're storing the camoCoefMod.sqf. include "\" before file path
				postInit=1; // don't change this please
			};
		};
	};
};