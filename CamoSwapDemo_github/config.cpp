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
	class camoCoefKey {
		init = "spawn CamoSwapDemo_github_fnc_camoCoef_Key";
	};
	class camoCoefMod {
		init = "spawn CamoSwapDemo_github_fnc_camoCoefMod";
	};
	class camoWL {
		init = "spawn CamoSwapDemo_github_fnc_camoWL_Key";
	};
};

class cfgFunctions {
	class CamoSwapDemo_github {
		class Keys {
			file="\CamoSwapDemo\";
			class camoCoef_Key {};
			class camoCoefMod {};
			class camoWL_Key {};
		};
	};
};