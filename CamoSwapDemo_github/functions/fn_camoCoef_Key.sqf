#include "\a3\editor_f\Data\Scripts\dikCodes.h"

[
"Camo Keybinds",
"autoCamo",
"Determine Optimal Camo",
{spawn CamoSwapDemo_github_fnc_autoCamo;},
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