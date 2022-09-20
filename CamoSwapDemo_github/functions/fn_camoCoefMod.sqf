desWL = [
0.298038, // red
0.266666, // green
0.235293 // blue
];
snoWL = [
0.654901, // red
0.627450, // green
0.584313 // blue
];
wdlWL = [
0.227450, // red
0.211764, // green
0.160783 // blue
];


while {sleep 0.5; alive player} do {

	private _surfaceTex = surfaceTexture getPosATL player;
	private _surfaceTempArray = getTextureInfo _surfaceTex;

	private _groundR = (_surfaceTempArray select 2) select 0;
	private _groundG = (_surfaceTempArray select 2) select 1;
	private _groundB = (_surfaceTempArray select 2) select 2;
	
	if (alive player) then {
		if (camoRef3 == "DES") then {
			if (((_groundR - (desWL select 0) < 0.16) && (_groundR - (desWL select 0) >= 0)) && ((_groundG - (desWL select 1) < 0.16) && (_groundG - (desWL select 1) >= 0)) && ((_groundB - (desWL select 2) < 0.16) && (_groundB - (desWL select 2) >= 0))) then {
				// prone
				if (stance player == "PRONE" && speed player < 0.1) then {
				player setUnitTrait ["camouflageCoef",0.01,true];
				player setUnitTrait ["audibleCoef",0.01,true];} else {

				if (stance player == "PRONE" && speed player > 2 && speed player < 6) then {
				player setUnitTrait ["camouflageCoef",0.3,true];
				player setUnitTrait ["audibleCoef",0.3,true];};};
				// crouch
				if (stance player == "CROUCH" && speed player < 0.1) then {
				player setUnitTrait ["camouflageCoef",0.3,true];
				player setUnitTrait ["audibleCoef",0.3,true];} else {

				if (stance player == "CROUCH" && speed player > 10 && speed player < 25) then {
				player setUnitTrait ["camouflageCoef",0.6,true];
				player setUnitTrait ["audibleCoef",0.6,true];};};
				// standing
				if (stance player == "STAND" && speed player < 0.1) then {
				player setUnitTrait ["camouflageCoef",0.6,true];
				player setUnitTrait ["audibleCoef",0.6,true];} else {

				if (stance player == "STAND" && speed player > 14 && speed player < 25) then {
				player setUnitTrait ["camouflageCoef",0.99,true];
				player setUnitTrait ["audibleCoef",0.99,true];};};
			} else {
				player setUnitTrait ["camouflageCoef",1,true];
				player setUnitTrait ["audibleCoef",1,true];
			};
		};
		if (camoRef3 == "SNO") then {
			if (((_groundR - (snoWL select 0) < 0.12) && (_groundR - (snoWL select 0) >= 0)) && ((_groundG - (snoWL select 1) < 0.12) && (_groundG - (snoWL select 1) >= 0)) && ((_groundB - (snoWL select 2) < 0.12) && (_groundB - (snoWL select 2) >= 0))) then {
				// prone
				if (stance player == "PRONE" && speed player < 0.1) then {
				player setUnitTrait ["camouflageCoef",0.01,true];
				player setUnitTrait ["audibleCoef",0.01,true];} else {

				if (stance player == "PRONE" && speed player > 2 && speed player < 6) then {
				player setUnitTrait ["camouflageCoef",0.3,true];
				player setUnitTrait ["audibleCoef",0.3,true];};};
				// crouch
				if (stance player == "CROUCH" && speed player < 0.1) then {
				player setUnitTrait ["camouflageCoef",0.3,true];
				player setUnitTrait ["audibleCoef",0.3,true];} else {

				if (stance player == "CROUCH" && speed player > 10 && speed player < 25) then {
				player setUnitTrait ["camouflageCoef",0.6,true];
				player setUnitTrait ["audibleCoef",0.6,true];};};
				// standing
				if (stance player == "STAND" && speed player < 0.1) then {
				player setUnitTrait ["camouflageCoef",0.6,true];
				player setUnitTrait ["audibleCoef",0.6,true];} else {

				if (stance player == "STAND" && speed player > 14 && speed player < 25) then {
				player setUnitTrait ["camouflageCoef",0.99,true];
				player setUnitTrait ["audibleCoef",0.99,true];};};
			} else {
				player setUnitTrait ["camouflageCoef",1,true];
				player setUnitTrait ["audibleCoef",1,true];
			};
		};
		if (camoRef3 == "WDL") then {
			if (((_groundR - (wdlWL select 0) < 0.12) && (_groundR - (wdlWL select 0) >= 0)) && ((_groundG - (wdlWL select 1) < 0.12) && (_groundG - (wdlWL select 1) >= 0)) && ((_groundB - (wdlWL select 2) < 0.12) && (_groundB - (wdlWL select 2) >= 0))) then {
				// prone
				if (stance player == "PRONE" && speed player < 0.1) then {
				player setUnitTrait ["camouflageCoef",0.01,true];
				player setUnitTrait ["audibleCoef",0.01,true];} else {

				if (stance player == "PRONE" && speed player > 2 && speed player < 6) then {
				player setUnitTrait ["camouflageCoef",0.3,true];
				player setUnitTrait ["audibleCoef",0.3,true];};};
				// crouch
				if (stance player == "CROUCH" && speed player < 0.1) then {
				player setUnitTrait ["camouflageCoef",0.3,true];
				player setUnitTrait ["audibleCoef",0.3,true];} else {

				if (stance player == "CROUCH" && speed player > 10 && speed player < 25) then {
				player setUnitTrait ["camouflageCoef",0.6,true];
				player setUnitTrait ["audibleCoef",0.6,true];};};
				// standing
				if (stance player == "STAND" && speed player < 0.1) then {
				player setUnitTrait ["camouflageCoef",0.6,true];
				player setUnitTrait ["audibleCoef",0.6,true];} else {

				if (stance player == "STAND" && speed player > 14 && speed player < 25) then {
				player setUnitTrait ["camouflageCoef",0.99,true];
				player setUnitTrait ["audibleCoef",0.99,true];};};
			} else {
				player setUnitTrait ["camouflageCoef",1,true];
				player setUnitTrait ["audibleCoef",1,true];
			};
		};
		if (camoRef3 == "BLK") then {
			player setUnitTrait ["camouflageCoef",1,true];
			player setUnitTrait ["audibleCoef",1,true];
		};
	};
};