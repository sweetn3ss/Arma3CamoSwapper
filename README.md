<h1> Arma 3 Camo Swapper </h1>


This repository is intended to host the code necessary to allow for dynamic and intentional swapping of gear between various camouflage colours, default configuration being as follows:

Black, Desert, Snow, Woodland


Any code here is provided as-is, and any contributors to this repository are not responsible for harm done to any instance of Arma 3 installation. If you have questions that are not answered by documentation hosted in this repository, please post an issue report or message myself, Mesa, on [Steam](https://steamcommunity.com/id/systemofatable/)

<h2> Important Information! </h2>


The code contained herein was designed to work with Operation: TREBUCHET, a mod made by Article 2 Studios for the Arma 3 community. For the moment, it has been retrofitted to mostly be adjustable to other mods, though there will definitely be instances that scream "OPTRE" about the scripts, functions, config, etc. Apologies in advance for anyone intent on repurposing this code for other mods. Modifications are in progress to improve the overt modularity of this mod, though Arma 3 does have a great many limitations that must be worked within.

In its current form, the camo swapping portion of the script requires a handful of things be consistent. These are as follows:

<b> 1. Item classnames must be in a specific format </b>

<b> 2. Certain texture filenames must be in a specific format </b>

<b> 3. Some folders are required to be addressed either directly or indirectly </b>

<b> 4. Your items must have a unit or mod classname prefix </b>


1. In the case of helmets, vests, backpacks, facewear, nvg slot, and rifles, the following format must be used:

`UnitPrefix_ItemType_ItemSubtype_Camo`

`UnitPrefix` is simply the unit or mod prefix (OPTRE, 82nd, LS, etc.) that signifies who made and item and for what mod.

`ItemType` is the type of item being addressed. If it's an MA5B from OPTRE, this field would be `MA5B` and so on

`ItemSubtype` is the subtype of item being addressed. If you have a vest for Team Leaders or Corpsmen, this field would be `TL`, `TeamLead`, `Corpsman` etc.
For personal custom items, this can be the person's name

`Camo` is the camo code or colour shorthand of the item specified. By default, the script supports `BLK`, `DES`, `SNO`, and `WDL`.

Example of a full classname could be something like: `OPTRE_M52A_Rifleman_WDL` for a rifleman's woodland M52A vest found in OPTRE.

The only exception to this is uniforms, which use the following format:

`UnitPrefix_BDU_ItemSubType_Variance`

`Variance` refers to things like rolled sleeves, shorts vs pants, the kinds of things that can be addressed via `hiddenSelections` with some BDU models.
