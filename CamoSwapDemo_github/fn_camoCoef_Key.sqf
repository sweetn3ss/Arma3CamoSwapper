#include "\a3\editor_f\Data\Scripts\dikCodes.h"

[
"82nd Keybinds",
"autoCamo",
"Determine Optimal Camo",
{[] execVM "82nd_CamoShiteDontTouch\autoCamo.sqf";},
""
] call CBA_fnc_addKeybind;

[
"camoRef3",
"EDITBOX",
"DO NOT TOUCH",
["Mesa's Debug","Please Don't Touch"],
["BLK"],
1,
{},
nil
] call CBA_fnc_addSetting;