// ##############
// ## Made by Mesa ###
// ##############
//
// This script is intended to determine which camo option would be best
// based on the current environment. If you have issues, suck toes lmao.
//
//

	private _surfaceTex = surfaceTexture getPosATL player;
	private _surfaceTempArray = getTextureInfo _surfaceTex;

	private _groundR = (_surfaceTempArray select 2) select 0;
	private _groundG = (_surfaceTempArray select 2) select 1;
	private _groundB = (_surfaceTempArray select 2) select 2;

if (alive player) then {
	if ((camoRef3 != "DES") && ((_groundR - (desWL select 0) < 0.16) && (_groundR - (desWL select 0) >= 0)) && ((_groundG - (desWL select 1) < 0.16) && (_groundG - (desWL select 1) >= 0)) && ((_groundB - (desWL select 2) < 0.16) && (_groundB - (desWL select 2) >= 0))) then {
		[player, "Desert"] call personalizeArmor_fnc_camoChange;
	} else {
		if ((camoRef3 != "SNO") && ((_groundR - (snoWL select 0) < 0.12) && (_groundR - (snoWL select 0) >= 0)) && ((_groundG - (snoWL select 1) < 0.12) && (_groundG - (snoWL select 1) >= 0)) && ((_groundB - (snoWL select 2) < 0.12) && (_groundB - (snoWL select 2) >= 0))) then {
			[player, "Snow"] call personalizeArmor_fnc_camoChange;
		} else {
			if ((camoRef3 != "WDL") && ((_groundR - (wdlWL select 0) < 0.12) && (_groundR - (wdlWL select 0) >= 0)) && ((_groundG - (wdlWL select 1) < 0.12) && (_groundG - (wdlWL select 1) >= 0)) && ((_groundB - (wdlWL select 2) < 0.12) && (_groundB - (wdlWL select 2) >= 0))) then {
				[player, "Woodland"] call personalizeArmor_fnc_camoChange;
			};
		};
	};
};