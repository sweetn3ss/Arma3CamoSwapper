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

class Extended_PostInit_EventHandlers {
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
			file="\CamoSwapDemo_github";
			class camoCoef_Key {};
			class camoCoefMod {};
			class camoWL_Key {};
		};
		class functions {
			file="CamoSwapDemo_github\functions";
			class camoChange {};
			class vestChange {};
			class uniformChange {};
			class autoCamo {};
		};
	};
};
class cfgVehicles {
	class Man;
	class CAManBase: Man {
		class ACE_SelfActions {
			class Personalization {
                displayName="Personalization";
                condition="(uniform player) in [""82nd_BDU_Morph_BASE"", ""82nd_BDU_Morph_ROLLED"", ""82nd_BDU_Morph_Short""]";
                statement="";
                icon = "";
                class Camo_Select {
                    displayName="Change Camouflage";
                    condition="(uniform player) in [""82nd_BDU_Morph_BASE"", ""82nd_BDU_Morph_ROLLED"", ""82nd_BDU_Morph_Short""]";
                    statement="";
                    icon = "";
                    class Urban {
                        displayName="Urban";
                        condition="true";
                        statement="[player, ""Urban""] call CamoSwapDemo_github_fnc_camoChange;";
                        icon = "";
                    };
                    class Desert {
                        displayName="Desert";
                        condition="true";
                        statement="[_player, ""Desert""] call CamoSwapDemo_github_fnc_camoChange;";
                        icon = "";
                    };
                    class Winter {
                        displayName="Winter";
                        condition="true";
                        statement="[_player, ""Winter""] call CamoSwapDemo_github_fnc_camoChange;";
                        icon = "";
                    };
                    class Woodland {
                        displayName="Woodland";
                        condition="true";
                        statement="[_player, ""Woodland""] call CamoSwapDemo_github_fnc_camoChange;";
                        icon = "";
                    };
                };
				class Vest_Select_Air {
                    displayName="Change Vests (Air)";
                    condition="(uniform player) in [""82nd_BDU_Morph_BASE"", ""82nd_BDU_Morph_ROLLED"", ""82nd_BDU_Morph_Short""]";
                    statement="";
                    icon = "\CamoSwapDemo_github\data\ui\82nd_ui_m52a_airassault.paa";
                    class AirRifleman {
                        displayName="Air Assault";
                        condition="true";
                        statement="[player, ""AirAssault""] call CamoSwapDemo_github_fnc_vestChange;";
                        icon = "";
                    };
                    class AirCorpsman {
                        displayName="Corpsman";
                        condition="true";
                        statement="[player, ""AirMedic""] call CamoSwapDemo_github_fnc_vestChange;";
                        icon = "";
                    };
                    class AirMG {
                        displayName="Autorifleman";
                        condition="true";
                        statement="[player, ""AirMG""] call CamoSwapDemo_github_fnc_vestChange;";
                        icon = "";
                    };
                    class AirGrenadier {
                        displayName="Grenadier";
                        condition="true";
                        statement="[player, ""AirGrenadier""] call CamoSwapDemo_github_fnc_vestChange;";
                        icon = "";
                    };
                    class AirMarksman {
                        displayName="Marksman";
                        condition="true";
                        statement="[player, ""AirMarksman""] call CamoSwapDemo_github_fnc_vestChange;";
                        icon = "";
                    };
                    class AirBreacher {
                        displayName="Breacher";
                        condition="true";
                        statement="[player, ""AirBreacher""] call CamoSwapDemo_github_fnc_vestChange;";
                        icon = "";
                    };
                    class AirTeamLead {
						displayName="Team Lead";
						condition="true";
						statement="[player, ""AirTeamLead""] call CamoSwapDemo_github_fnc_vestChange;";
                        icon = "";
					};
                };
				class Vest_Select_Tyr {
                    displayName="Change Vests (Tyr)";
                    condition="(uniform player) in [""82nd_BDU_Morph_BASE"", ""82nd_BDU_Morph_ROLLED"", ""82nd_BDU_Morph_Short""]";
                    statement="";
                    icon = "";
                    class TyrRifleman {
                        displayName="Rifleman";
                        condition="true";
                        statement="[player, ""TyrRifleman""] call CamoSwapDemo_github_fnc_vestChange;";
                        icon = "";
                    };
                    class TyrCorpsman 
                        displayName="Corpsman";
                        condition="true";
                        statement="[player, ""TyrCorpsman""] call CamoSwapDemo_github_fnc_vestChange;";
                        icon = "";
                    };
                    class TyrMG {
                        displayName="Autorifleman";
                        condition="true";
                        statement="[player, ""TyrMG""] call CamoSwapDemo_github_fnc_vestChange;";
                        icon = "";
                    };
                    class TyrGrenadier {
                        displayName="Grenadier";
                        condition="true";
                        statement="[player, ""TyrGrenadier""] call CamoSwapDemo_github_fnc_vestChange;";
                        icon = "";
                    };
                    class TyrMarksman {
                        displayName="Marksman";
                        condition="true";
                        statement="[player, ""TyrMarksman""] call CamoSwapDemo_github_fnc_vestChange;";
                        icon = "";
                    };
                    class TyrBreacher {
                        displayName="Breacher";
                        condition="true";
                        statement="[player, ""TyrBreacher""] call CamoSwapDemo_github_fnc_vestChange;";
                        icon = "";
                    };
                    class TyrTeamLead {
						displayName="Team Lead";
						condition="true";
						statement="[player, ""TyrTeamLead""] call CamoSwapDemo_github_fnc_vestChange;";
						icon = "";
					};
                };
				class Vest_Select_Slp {
                    displayName="Change Vests (Sleipnir)";
                    condition="(uniform player) in [""82nd_BDU_Morph_BASE"", ""82nd_BDU_Morph_ROLLED"", ""82nd_BDU_Morph_Short""]";
                    statement="";
                    icon = "";
                    class SlpRifleman {
                        displayName="Rifleman";
                        condition="true";
                        statement="[player, ""SlpRifleman""] call CamoSwapDemo_github_fnc_vestChange;";
                        icon = "";
                    };
                    class SlpCorpsman {
                        displayName="Corpsman";
                        condition="true";
                        statement="[player, ""SlpCorpsman""] call CamoSwapDemo_github_fnc_vestChange;";
                        icon = "";
                    };
                    class SlpMG {
                        displayName="Autorifleman";
                        condition="true";
                        statement="[player, ""SlpMG""] call CamoSwapDemo_github_fnc_vestChange;";
                        icon = "";
                    };
                    class SlpGrenadier {
                        displayName="Grenadier";
                        condition="true";
                        statement="[player, ""SlpGrenadier""] call CamoSwapDemo_github_fnc_vestChange;";
                        icon = "";
                    };
                    class SlpMarksman {
                        displayName="Marksman";
                        condition="true";
                        statement="[player, ""SlpMarksman""] call CamoSwapDemo_github_fnc_vestChange;";
                        icon = "";
                    };
                    class SlpBreacher {
                        displayName="Breacher";
                        condition="true";
                        statement="[player, ""SlpBreacher""] call CamoSwapDemo_github_fnc_vestChange;";
                        icon = "";
                    };
                    class SlpTeamLead {
						displayName="Team Lead";
						condition="true";
						statement="[player, ""SlpTeamLead""] call CamoSwapDemo_github_fnc_vestChange;";
						icon = "";
					};
                };
				class Vest_Select_Aux {
					displayName="Change Vests (Branches)";
                    condition="(uniform player) in [""82nd_BDU_Morph_BASE"", ""82nd_BDU_Morph_ROLLED"", ""82nd_BDU_Morph_Short""]";
                    statement="";
                    icon = "";
					class Crew {
						displayName="Crew";
						condition="true";
						statement="[player, ""Crew""] call CamoSwapDemo_github_fnc_vestChange;";
                        icon = "";
					};
					class Aviation {
						displayName="Aviation";
						condition="true";
						statement="[player, ""Aviation""] call CamoSwapDemo_github_fnc_vestChange;";
                        icon = "";
					};
					class PJ {
						displayName="Aviaiton PJ";
						condition="true";
						statement="[player, ""PJ""] call CamoSwapDemo_github_fnc_vestChange;";
                        icon = "";
					};
				};
				class Uniform_Select {
                    displayName="Change Uniform";
                    condition="(uniform player) in [""82nd_BDU_Morph_BASE"", ""82nd_BDU_Morph_ROLLED"", ""82nd_BDU_Morph_Short""]";
                    statement="";
                    icon = icon = "";
                    class Base {
                        displayName="Default";
                        condition="true";
                        statement="[player, ""Base""] call CamoSwapDemo_github_fnc_uniformChange;";
                        icon = "";
                    };
                    class Rolled {
                        displayName="Rolled Sleeves";
                        condition="true";
                        statement="[_player, ""Rolled""] call CamoSwapDemo_github_fnc_uniformChange;";
                        icon = "";
					};
					class Short {
						displayName="Short Sleeves";
						condition="true";
						statement="[_player, ""Short""] call CamoSwapDemo_github_fnc_uniformChange;";
						icon = "";
                    };
                };
			};
		};
	};
};