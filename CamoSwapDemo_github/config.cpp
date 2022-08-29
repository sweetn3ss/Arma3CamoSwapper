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
			file="\CamoSwapDemo";
			class camoCoef_Key {};
			class camoCoefMod {};
			class camoWL_Key {};
		};
		class functions {
			file="CamoSwapDemo_github\functions";
			class camoChange {};
			class vestChange {};
			class uniformChange {};
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
                icon = "\82nd_Armor_New\data\ui\82nd_ui_m52a_blank.paa";
                class Camo_Select {
                    displayName="Change Camouflage";
                    condition="(uniform player) in [""82nd_BDU_Morph_BASE"", ""82nd_BDU_Morph_ROLLED"", ""82nd_BDU_Morph_Short""]";
                    statement="";
                    icon = "\82nd_Armor_New\data\ui\82nd_ui_camo_menu.paa";
                    class Urban {
                        displayName="Urban";
                        condition="true";
                        statement="[player, ""Urban""] call personalizeArmor_fnc_camoChange;";
                        icon = "\82nd_Armor_New\data\ui\82nd_ui_camo_BLK.paa";
                    };
                    class Desert {
                        displayName="Desert";
                        condition="true";
                        statement="[_player, ""Desert""] call personalizeArmor_fnc_camoChange;";
                        icon = "\82nd_Armor_New\data\ui\82nd_ui_camo_DES.paa";
                    };
                    class Winter {
                        displayName="Winter";
                        condition="true";
                        statement="[_player, ""Winter""] call personalizeArmor_fnc_camoChange;";
                        icon = "\82nd_Armor_New\data\ui\82nd_ui_camo_SNO.paa";
                    };
                    class Woodland {
                        displayName="Woodland";
                        condition="true";
                        statement="[_player, ""Woodland""] call personalizeArmor_fnc_camoChange;";
                        icon = "\82nd_Armor_New\data\ui\82nd_ui_camo_WDL.paa";
                    };
                };
				class Vest_Select_Air {
                    displayName="Change Vests (Air)";
                    condition="(uniform player) in [""82nd_BDU_Morph_BASE"", ""82nd_BDU_Morph_ROLLED"", ""82nd_BDU_Morph_Short""]";
                    statement="";
                    icon = "\82nd_Armor_New\data\ui\82nd_ui_m52a_airassault.paa";
                    class AirRifleman {
                        displayName="Air Assault";
                        condition="true";
                        statement="[player, ""AirAssault""] call personalizeArmor_fnc_vestChange;";
                        icon = "\82nd_Armor_New\data\ui\82nd_ui_m52a_airassault.paa";
                    };
                    class AirCorpsman {
                        displayName="Corpsman";
                        condition="true";
                        statement="[player, ""AirMedic""] call personalizeArmor_fnc_vestChange;";
                        icon = "\82nd_Armor_New\data\ui\82nd_ui_m52a_airmed.paa";
                    };
                    class AirMG {
                        displayName="Autorifleman";
                        condition="true";
                        statement="[player, ""AirMG""] call personalizeArmor_fnc_vestChange;";
                        icon = "\82nd_Armor_New\data\ui\82nd_ui_m52a_airauto.paa";
                    };
                    class AirGrenadier {
                        displayName="Grenadier";
                        condition="true";
                        statement="[player, ""AirGrenadier""] call personalizeArmor_fnc_vestChange;";
                        icon = "\82nd_Armor_New\data\ui\82nd_ui_m52a_airgren.paa";
                    };
                    class AirMarksman {
                        displayName="Marksman";
                        condition="true";
                        statement="[player, ""AirMarksman""] call personalizeArmor_fnc_vestChange;";
                        icon = "\82nd_Armor_New\data\ui\82nd_ui_m52a_airmark.paa";
                    };
                    class AirBreacher {
                        displayName="Breacher";
                        condition="true";
                        statement="[player, ""AirBreacher""] call personalizeArmor_fnc_vestChange;";
                        icon = "\82nd_Armor_New\data\ui\82nd_ui_m52a_airbrch.paa";
                    };
                    class AirTeamLead {
						displayName="Team Lead";
						condition="true";
						statement="[player, ""AirTeamLead""] call personalizeArmor_fnc_vestChange;";
                        icon = "\82nd_Armor_New\data\ui\82nd_ui_m52a_airlead.paa";
					};
                };
				class Vest_Select_Tyr {
                    displayName="Change Vests (Tyr)";
                    condition="(uniform player) in [""82nd_BDU_Morph_BASE"", ""82nd_BDU_Morph_ROLLED"", ""82nd_BDU_Morph_Short""]";
                    statement="";
                    icon = "\82nd_Armor_New\data\ui\82nd_ui_m52a_blank.paa";
                    class TyrRifleman {
                        displayName="Rifleman";
                        condition="true";
                        statement="[player, ""TyrRifleman""] call personalizeArmor_fnc_vestChange;";
                        icon = "\82nd_Armor_New\data\ui\82nd_ui_m52a_blank.paa";
                    };
                    class TyrCorpsman 
                        displayName="Corpsman";
                        condition="true";
                        statement="[player, ""TyrCorpsman""] call personalizeArmor_fnc_vestChange;";
                        icon = "\82nd_Armor_New\data\ui\82nd_ui_m52a_corpsman.paa";
                    };
                    class TyrMG {
                        displayName="Autorifleman";
                        condition="true";
                        statement="[player, ""TyrMG""] call personalizeArmor_fnc_vestChange;";
                        icon = "\82nd_Armor_New\data\ui\82nd_ui_m52a_autorifleman.paa";
                    };
                    class TyrGrenadier {
                        displayName="Grenadier";
                        condition="true";
                        statement="[player, ""TyrGrenadier""] call personalizeArmor_fnc_vestChange;";
                        icon = "\82nd_Armor_New\data\ui\82nd_ui_m52a_grenadier.paa";
                    };
                    class TyrMarksman {
                        displayName="Marksman";
                        condition="true";
                        statement="[player, ""TyrMarksman""] call personalizeArmor_fnc_vestChange;";
                        icon = "\82nd_Armor_New\data\ui\82nd_ui_m52a_marksman.paa";
                    };
                    class TyrBreacher {
                        displayName="Breacher";
                        condition="true";
                        statement="[player, ""TyrBreacher""] call personalizeArmor_fnc_vestChange;";
                        icon = "\82nd_Armor_New\data\ui\82nd_ui_m52a_breacher.paa";
                    };
                    class TyrTeamLead {
						displayName="Team Lead";
						condition="true";
						statement="[player, ""TyrTeamLead""] call personalizeArmor_fnc_vestChange;";
						icon = "\82nd_Armor_New\data\ui\82nd_ui_m52a_teamlead.paa";
					};
                };
				class Vest_Select_Slp {
                    displayName="Change Vests (Sleipnir)";
                    condition="(uniform player) in [""82nd_BDU_Morph_BASE"", ""82nd_BDU_Morph_ROLLED"", ""82nd_BDU_Morph_Short""]";
                    statement="";
                    icon = "\82nd_Armor_New\data\ui\82nd_ui_m52a_blank.paa";
                    class SlpRifleman {
                        displayName="Rifleman";
                        condition="true";
                        statement="[player, ""SlpRifleman""] call personalizeArmor_fnc_vestChange;";
                        icon = "\82nd_Armor_New\data\ui\82nd_ui_m52a_blank.paa";
                    };
                    class SlpCorpsman {
                        displayName="Corpsman";
                        condition="true";
                        statement="[player, ""SlpCorpsman""] call personalizeArmor_fnc_vestChange;";
                        icon = "\82nd_Armor_New\data\ui\82nd_ui_m52a_corpsman.paa";
                    };
                    class SlpMG {
                        displayName="Autorifleman";
                        condition="true";
                        statement="[player, ""SlpMG""] call personalizeArmor_fnc_vestChange;";
                        icon = "\82nd_Armor_New\data\ui\82nd_ui_m52a_autorifleman.paa";
                    };
                    class SlpGrenadier {
                        displayName="Grenadier";
                        condition="true";
                        statement="[player, ""SlpGrenadier""] call personalizeArmor_fnc_vestChange;";
                        icon = "\82nd_Armor_New\data\ui\82nd_ui_m52a_grenadier.paa";
                    };
                    class SlpMarksman {
                        displayName="Marksman";
                        condition="true";
                        statement="[player, ""SlpMarksman""] call personalizeArmor_fnc_vestChange;";
                        icon = "\82nd_Armor_New\data\ui\82nd_ui_m52a_marksman.paa";
                    };
                    class SlpBreacher {
                        displayName="Breacher";
                        condition="true";
                        statement="[player, ""SlpBreacher""] call personalizeArmor_fnc_vestChange;";
                        icon = "\82nd_Armor_New\data\ui\82nd_ui_m52a_breacher.paa";
                    };
                    class SlpTeamLead {
						displayName="Team Lead";
						condition="true";
						statement="[player, ""SlpTeamLead""] call personalizeArmor_fnc_vestChange;";
						icon = "\82nd_Armor_New\data\ui\82nd_ui_m52a_teamlead.paa";
					};
                };
				class Vest_Select_Aux {
					displayName="Change Vests (Branches)";
                    condition="(uniform player) in [""82nd_BDU_Morph_BASE"", ""82nd_BDU_Morph_ROLLED"", ""82nd_BDU_Morph_Short""]";
                    statement="";
                    icon = "\82nd_Armor_New\data\ui\82nd_ui_m52a_crew.paa";
					class Crew {
						displayName="Crew";
						condition="true";
						statement="[player, ""Crew""] call personalizeArmor_fnc_vestChange;";
                        icon = "\82nd_Armor_New\data\ui\82nd_ui_m52a_crew.paa";
					};
					class Aviation {
						displayName="Aviation";
						condition="true";
						statement="[player, ""Aviation""] call personalizeArmor_fnc_vestChange;";
                        icon = "\82nd_Armor_New\data\ui\82nd_ui_m52a_aviation.paa";
					};
					class PJ {
						displayName="Aviaiton PJ";
						condition="true";
						statement="[player, ""PJ""] call personalizeArmor_fnc_vestChange;";
                        icon = "\82nd_Armor_New\data\ui\82nd_ui_m52a_aviation2.paa";
					};
				};
				class Uniform_Select {
                    displayName="Change Uniform";
                    condition="(uniform player) in [""82nd_BDU_Morph_BASE"", ""82nd_BDU_Morph_ROLLED"", ""82nd_BDU_Morph_Short""]";
                    statement="";
                    icon = "\82nd_Armor_New\data\ui\82nd_ui_bdu_base.paa";
                    class Base {
                        displayName="Default";
                        condition="true";
                        statement="[player, ""Base""] call personalizeArmor_fnc_uniformChange;";
                        icon = "\82nd_Armor_New\data\ui\82nd_ui_bdu_base.paa";
                    };
                    class Rolled {
                        displayName="Rolled Sleeves";
                        condition="true";
                        statement="[_player, ""Rolled""] call personalizeArmor_fnc_uniformChange;";
                        icon = "\82nd_Armor_New\data\ui\82nd_ui_bdu_rolled.paa";
					};
					class Short {
						displayName="Short Sleeves";
						condition="true";
						statement="[_player, ""Short""] call personalizeArmor_fnc_uniformChange;";
						icon = "\82nd_Armor_New\data\ui\82nd_ui_bdu_short.paa";
                    };
                };
			};
		};
	};
};