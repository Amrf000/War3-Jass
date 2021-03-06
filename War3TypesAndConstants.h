/*
    This file is part of W3ZMapEditor (c).

    W3ZMapEditor is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    W3ZMapEditor is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with W3ZMapEditor; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/
// War3TypesAndConstants.h : header for Warcraft III Specific Types
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(WARTYPES__INCLUDED_)
#define WARTYPES__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "War3StrID.h"

/*
********************************************************************************
*************************
* Static Global Strings *
*************************

*/

// Misc strings
//**************
static const char STR_W3Z_MAP_FILESDIR[]			= "MapFiles\\";
static const char STR_W3Z_MAP_AUROIMPORTDIR[]		= "AutoImport\\";
static const char STR_W3Z_MAP_PLUGINSDIR[]			= "Plugins\\";
static const char STR_W3Z_TEMP_DIR[]				= "W3Z\\";
static const char STR_W3Z_TEMP_FILENAME[]			= "~W3Z0000.tmp";
static const char STR_W3Z_TEMP_HEADFILENAME[]		= "~W3Z";
static const char STR_W3Z_TEMP_FILEEXT[]			= ".tmp";
static const char BASED_CODE STR_FILES_FILTER[]		= "All Supported Formats (*.w3x;*.w3m;*.w3e;*.pud;*.scm;*.scx)|*.w3x;*.w3m;*.w3e;*.pud;*.scm;*.scx|Warcraft III Frozen Throne Scenario (*.w3x)|*.w3x|Warcraft III Scenario (*.w3m)|*.w3m|Warcraft III Terrain File (*.w3e)|*.w3e|Starcraft/Broodwar Map (*.scm;*.scx)|*.scm;*.scx|Warcraft II Map (*.pud)|*.pud|All Files (*.*)|*.*||";
static const char STR_ABOUT_INFOS1[]				= "           Realized by ";
      static char Zepir[] 							= "Z閜ir";
static const char STR_ABOUT_INFOS2[]				= " for all the Warcraft III community. Many thanks to Blizzard for doing such nice games. Many thanks to the War3Pub staff and the Wc3Campaigns staff: they do a greate job too. Thanks to Ziutek, StonedStoopid, Skull, ShadowFrench, ShadowFlare, Samsuffy, Quantam, NX-306, FyreDaug, DJBnJack, DigimonKiller, Cookie, BlackDick, A. Lelikov,                ";
static const char STR_REGISTRY[]					= "ZepSoft";
static const char STR_W3M_EXTENSION[]				= ".w3m";
static const char STR_W3X_EXTENSION[]				= ".w3x";
static const char STR_W3E_EXTENSION[]				= ".w3e";
static const char STR_PUD_EXTENSION[]				= ".pud";
static const char STR_SCM_EXTENSION[]				= ".scm";
static const char STR_SCX_EXTENSION[]				= ".scx";
static const char STR_MAP_PROPERTIES[]				= "Map Properties";

// Error Messages
//****************
//static char STR_ERROR_[]	= "ERROR:\n";
static const char STR_ERROR_TEMP00[]		= "ERROR:\nUnable to create all required temporary files!";
static const char STR_ERROR_SAVING00[]		= "ERROR:\nUnable to save the map:\nMPQ subsystem not initialized properly!";
static const char STR_ERROR_SAVING01[]		= "ERROR:\nUnable to save the map:\nMap is protected against editing!";
static const char STR_ERROR_SAVING02[]		= "ERROR:\nSaving using PUD format is not supported, sorry!\nPlease change the file extension to W3M or W3E!";
static const char STR_ERROR_SAVING03[]		= "ERROR:\nSaving using SCM format is not supported, sorry!\nPlease change the file extension to W3M or W3E!";
static const char STR_ERROR_SAVING04[]		= "ERROR:\nSaving using SCX format is not supported, sorry!\nPlease change the file extension to W3M or W3E!";
static const char STR_ERROR_SAVING05[]		= "ERROR:\nUnable to save the following files:\n";
static const char STR_ERROR_DOC00[]			= "ERROR:\nUnable to create document!\nMemory exception!";
static const char STR_ERROR_W3E00[]			= "ERROR:\nUnknown war3map.w3e file version (%i) or bad header!";
static const char STR_ERROR_W3I00[]			= "ERROR:\nUnknown war3map.w3i file version (%i) or bad header!";
static const char STR_ERROR_DOO00[]			= "ERROR:\nUnknown war3map.doo file version (%i)!";
static const char STR_ERROR_APP00[]			= "ERROR:\nFailed to initialize MPQ/W3M loader!\r\nW3M File support will not work, sorry!\r\nReason: ";
static const char STR_ERROR_APP01[]			= "standard initialisation failed!";
static const char STR_ERROR_APP05[]			= "Unknown initialisation error!";


// Warning Messages
//******************
static const char STR_WARNING_PATHTGA00[]		= "WARNING:\nInvalid war3mapPath.TGA file format!\nA new one will be generated.";
static const char STR_WARNING_WPM00[]			= "WARNING:\nInvalid war3map.WPM file format!\n";
static const char STR_WARNING_WPM00b[]			= "A new one will be generated (using the war3mapPath.TGA if there is one).";
static const char STR_WARNING_WPM01[]			= "Invalid WPM file ID!\n";
static const char STR_WARNING_WPM02[]			= "Unknown WPM file version!\n";
static const char STR_WARNING_WPM03[]			= "WARNING:\nInvalid path map width!\n";
static const char STR_WARNING_WPM04[]			= "WARNING:\nInvalid path map height!\n";
static const char STR_WARNING_WPM05[]			= "Invalid WPM file size! File is too short.\n";
static const char STR_WARNING_MAPPROP00[]		= "WARNING:\nYou changed map size but there is no undo for that!\n Still want to change map size?";
static const char STR_WARNING_MAPPROP01[]		= "WARNING:\nInvalid ground tilesets list!\n-->At least one of the specified ground tilesets is not 4 characters.\n Old list not modfied.\n";
static const char STR_WARNING_MAPPROP02[]		= "WARNING:\nInvalid ground tilesets list!\n-->You must have at least 1 ground tileset!\n Old list not modfied.\n";
static const char STR_WARNING_MAPPROP03[]		= "WARNING:\nInvalid ground tilesets list!\n-->You can't use more than %i ground tilesets!\n Old list not modfied.\n";
static const char STR_WARNING_MAPPROP04[]		= "WARNING:\nInvalid cliff tilesets list!\n-->At least one of the specified cliff tilesets is not 4 characters.\n Old list not modfied.\n";
static const char STR_WARNING_MAPPROP05[]		= "WARNING:\nInvalid cliff tilesets list!\n-->You must have at least 1 cliff tileset!\n Old list not modfied.\n";
static const char STR_WARNING_MAPPROP06[]		= "WARNING:\nInvalid cliff tilesets list!\n-->You can't use more than %i cliff tilesets!\n Old list not modfied.\n";
static const char STR_WARNING_MAPPROP07[]		= "WARNING:\nThe protection type you selected can't be used!\nGo back to the property menu and select another.\nMap NOT protected!";
static const char STR_WARNING_MAPLOAD00[]		= "WARNING:\nYou did not register! The map will be opened in Read-Only mode!\n YOU WILL NOT BE ABLE TO SAVE any modification you made!";
static const char STR_WARNING_MAPLOAD01[]		= "WARNING:\nYou registered as a public user.\nYou will be abe to see the map and use a few import-export functions\nBUT YOU WILL NOT BE ABLE TO SAVE CHANGES you made to the map.";
static const char STR_WARNING_REGISTER00[]		= "WARNING:\nSorry, too many tries...";
static const char STR_WARNING_PLUG00[]			= "WARNING:\nUnable to run plugin! Please check the path in the INI file.\n\nPlugin: ";

// Toolbars Titles
//*****************
static const char STR_TOOLBAR_MAIN[]			= "Main Toolbar";
static const char STR_TOOLBAR_EDITMODE[]		= "Edit Mode";
static const char STR_TOOLBAR_VIEWMODE[]		= "View Mode";
static const char STR_TOOLBAR_ZOOM[]			= "Zoom";
static const char STR_TOOLBAR_TOOLBARS[]		= "Toolbars Bar";
static const char STR_TOOLBAR_TILEPOINT[]		= "TilePoint";
static const char STR_TOOLBAR_TILETOOLS[]		= "TilePoints Tools";
static const char STR_TOOLBAR_DOODAD[]			= "Doodad";
static const char STR_TOOLBAR_DOODTOOLS[]		= "Doodads Tools";
static const char STR_TOOLBAR_UNIT[]			= "Unit";
static const char STR_TOOLBAR_PATHTOOLS[]		= "Path Tools";
static const char STR_TOOLBAR_SHADOWTOOLS[]		= "Shadows Tools";

// Statistic Window Text
//***********************
static const char STR_STAT_TITLE[]			= " W3Z Map Statistics - v1.0\r\n---------------------------\r\n";
static const char STR_STAT_STATS1[]			= "\r\nStatistics Part 1 - Standard\r\n----------------------------\r\n";
static const char STR_STAT_FILENAME[]		= "File Name:           ";
static const char STR_STAT_MAPNAME[]		= "Map Name:            ";
static const char STR_STAT_MAPVER[]			= "Version:             ";
static const char STR_STAT_MAPDATE[]		= "Date:                ";
static const char STR_STAT_MAPAUTHOR[]		= "Author:              ";
static const char STR_STAT_MAPAUTHORREL0[]	= " (name reliability ";
static const char STR_STAT_MAPAUTHORREL1[]	= "%)";
static const char STR_STAT_PROTECTION[]		= "Map Protection:      ";
static const char STR_STAT_MAINTILESET[]	= "Main Tileset:        ";
static const char STR_STAT_MAPDESC[]		= "Description:         ";
static const char STR_STAT_MAPDESCEX[]		= "Additionnal Info:    ";
static const char STR_STAT_MAPPAREA[]		= "Playable Area:       ";
static const char STR_STAT_SUGPLAYERS[]		= "Players Suggested:   ";
static const char STR_STAT_MAXPLAYERS[]		= "Max. Players:        ";
static const char STR_STAT_MAXFORCES[]		= "Max. Forces:         ";
static const char STR_STAT_MAPTYPE[]		= "Map Type:            ";

static const char STR_STAT_STATS2[]			= "\r\nStatistics Part 2 - Map Features\r\n--------------------------------\r\n";
static const char STR_STAT_CINEMATICS[]		= "Cinematics:          ";
static const char STR_STAT_QUESTS[]			= "Quests:              ";
static const char STR_STAT_NEXTMAPS[]		= "Next map(s):         ";
static const char STR_STAT_CUSTUNITS[]		= "Custom Units:        ";
static const char STR_STAT_CUSTABIL[]		= "Custom Abilities:    ";
static const char STR_STAT_CUSTSPELLS[]		= "Custom Spells:       ";
static const char STR_STAT_CUSTUPGRADES[]	= "Custom Upgrades:     ";
static const char STR_STAT_CUSTTECHTREE[]	= "Custom Tech-Tree:    ";
static const char STR_STAT_CUSTITEMS[]		= "Custom Items:        ";
static const char STR_STAT_CUSTFORCES[]		= "Custom Forces:       ";
static const char STR_STAT_NEWSOUNDS[]		= "New Sounds:          ";
static const char STR_STAT_NEWMUSIC[]		= "New Music:           ";
static const char STR_STAT_NEWMODELS[]		= "New Models:          ";
static const char STR_STAT_NEWTILES[]		= "New Tiles:           ";
static const char STR_STAT_PREVIEWMAP[]		= "Preview Map:         ";

static const char STR_STAT_STATS3[]			= "\r\nStatistics Part 3 - Units And Ressources\r\n----------------------------------------\r\n";
static const char STR_STAT_NBITEMS[]		= "Nb. Items:           ";
static const char STR_STAT_NBUNITS[]		= "Nb. Units:           ";
static const char STR_STAT_NBPSUNITS[]		= "Nb. Passive Units:   ";
static const char STR_STAT_NBAGUNITS[]		= "Nb. Agressive Units: ";
static const char STR_STAT_NBPLUNITS[]		= "Nb. Players Units:   ";
static const char STR_STAT_PLUNITS[]		= "Units for Player %i: ";
static const char STR_STAT_STARTMINDIST[]	= "Players Min. Dist.:  ";
static const char STR_STAT_STARTMAXDIST[]	= "Players Max. Dist.:  ";
static const char STR_STAT_NBDOODADS[]		= "Nb. Doodads:         ";
static const char STR_STAT_NBUNITDOO[]		= "Nb. Doodads (other): ";
static const char STR_STAT_NBTREE[]			= "Nb. Trees:           ";
static const char STR_STAT_LUMBERAMOUNT[]	= "Lumber Amount:       ";
static const char STR_STAT_AVGLUMBER[]		= "Average Lumber/Tree: ";
static const char STR_STAT_NBGOLDMINES[]	= "Nb. Gold Mines:      ";
static const char STR_STAT_GOLDAMOUNT[]		= "Gold Amount:         ";
static const char STR_STAT_AVGGOLD[]		= "Average Gold/Mine:   ";

static const char STR_STAT_STATS4[]			= "\r\nStatistics Part 4 - Ground Detail\r\n---------------------------------\r\n";
static const char STR_STAT_MAPSIZE[]		= "Map Size:            ";
static const char STR_STAT_POLYCOUNT[]		= "Polycount (estimation): ";
static const char STR_STAT_MAPTILES[]		= "Tiles Used:          ";
static const char STR_STAT_MAPCLIFFS[]		= "Cliffs Used:         ";
static const char STR_STAT_AVGHEIGHT[]		= "Average Height:      ";
static const char STR_STAT_MAXHEIGHT[]		= "Max Height:          ";
static const char STR_STAT_MINHEIGHT[]		= "Min Height:          ";
static const char STR_STAT_BUILDCELLS[]		= "Buildable Cells:     ";
static const char STR_STAT_PLAYABLECELLS[]	= "Walkable Cells:      ";
static const char STR_STAT_WATERCELLS[]		= "Under Water Cells:   ";
static const char STR_STAT_BLIGHTCELLS[]	= "Blighted Cells:      ";
static const char STR_STAT_BOUNDARYCELLS[]	= "Boundary Cells:      ";

static const char STR_STAT_STATS5[]			= "\r\nStatistics Part 5 - Scripts And Triggers\r\n----------------------------------------\r\n";
static const char STR_STAT_NBVARS[]			= "Nb. Variables:       ";
static const char STR_STAT_NBTRIGGERS[]		= "Nb. Triggers:        ";
static const char STR_STAT_NBFUNCTIONS[]	= "Nb. Functions:       ";
static const char STR_STAT_NBEVENTS[]		= "Nb. Events:          ";
static const char STR_STAT_NBREGIONS[]		= "Nb. Regions:         ";
static const char STR_STAT_JASSLIGNES[]		= "Script Lines:        ";

static const char STR_STAT_STATS6[]			= "\r\nStatistics Part 6 - Files\r\n-------------------------\r\n";
static const char STR_STAT_VEREDITOR[]		= "Editor Used:         ";
static const char STR_STAT_VERW3I[]			= "W3I Version:         ";
static const char STR_STAT_VERW3E[]			= "W3E Version:         ";
static const char STR_STAT_VERDOO[]			= "DOO Version:         ";
static const char STR_STAT_VERUNITSDOO[]	= "Units.DOO Version:   ";
static const char STR_STAT_VERW3U[]			= "W3U Version:         ";
static const char STR_STAT_VERWPM[]			= "WPM Version:         ";
static const char STR_STAT_VERMAPBLP[]		= "Map.BLP Version:     ";
static const char STR_STAT_VERIMP[]			= "IMP Version:         ";
static const char STR_STAT_VERW3S[]			= "W3S Version:         ";
static const char STR_STAT_VERW3R[]			= "W3R Version:         ";
static const char STR_STAT_VERW3C[]			= "W3C Version:         ";
static const char STR_STAT_VERWTG[]			= "WTG Version:         ";
static const char STR_STAT_VERMMP[]			= "MMP Version:         ";

static const char STR_STAT_MELEEMAP[]		= "Melee map\r\n";
static const char STR_STAT_NONMELEEMAP[]	= "Not a melee map\r\n";


// Config File (Settings) Constants
//**********************************
static const char STR_INIFILE[]				= "W3ZMapEdit.ini";
// ini codes; these are upcase for easy comparison
// Miscelaneous
static const char STR_SET_MISC[]			= "MISC";
static const char STR_SET_AUTHORNAME[]		= "AUTHORNAME";
static const char STR_SET_AUTOSAVE[]		= "AUTOSAVE";
static const char STR_SET_MAXMPQFILE[]		= "MAXMPQFILES";
static const char STR_SET_VIEWFLAGS[]		= "DEFAULTVIEWFLAGS";
static const char STR_SET_UNDOLEVEL[]		= "UNDOLEVEL";
static const char STR_SET_TEMPDIRECTORY[]	= "TEMPDIRECTORY";
// plugins
static const char STR_SET_LOADPLUGINS[]		= "LOADPLUGINS";
static const char STR_SET_SAVEPLUGINS[]		= "SAVEPLUGINS";
static const char STR_SET_MENUPLUGINS[]		= "MENUPLUGINS";
static const char STR_SET_COMPRESSION[]		= "COMPRESSION";
// edit modes
static const char STR_SET_EDITMODES[]		= "EDITMODES";
static const char STR_SET_MODE[]			= "MODE";
static const char STR_SET_DEFAULTMODE[]		= "DEFAULT";
// 3D view
static const char STR_SET_3DVIEW[]			= "3DVIEW";
static const char STR_SET_OPENGLVIEW[]		= "OPENGLVIEW";
static const char STR_SET_DRAWTEXTURE[]		= "DRAWTEXTURES";
static const char STR_SET_USEVIEWMODEBAR[]	= "USEVIEWMODEBAR";
static const char STR_SET_SENSITIVITY[]		= "SENSITIVITY";
static const char STR_SET_ZFAR[]			= "ZNEAR";
static const char STR_SET_ZNEAR[]			= "ZFAR";
// tiles properties
static const char STR_SET_TILESPROP[]		= "TILESPROP";
static const char STR_SET_RAMP[]			= "RAMP";
static const char STR_SET_BLIGHT[]			= "BLIGHT";
static const char STR_SET_BOUNDARY[]		= "BOUNDARY";
static const char STR_SET_LEVELFACTOR[]		= "LEVELFACTOR";
// map editing
static const char STR_SET_MAPEDITING[]		= "MAPEDITING";
static const char STR_SET_RANDOMGROUNDHEIGHTRANGE[]	= "RANDOMGROUNDHEIGHTRANGE";
static const char STR_SET_RANDOMWATERHEIGHTRANGE[]	= "RANDOMWATERHEIGHTRANGE";
static const char STR_SET_RANDOMDETAILSRANGE[]		= "RANDOMDETAILSRANGE";
static const char STR_SET_DOODADVARIATION[]			= "DOODADVARIATION";
static const char STR_SET_DOODADSPACING[]			= "DOODADSPACING";
static const char STR_SET_RANDOMSCALERANGE[]		= "RANDOMSCALERANGE";
// layers
static const char STR_SET_LAYERS[]			= "LAYERS";
static const char STR_SET_LAYER[]			= "LAYER";
// pathing
static const char STR_SET_PATHING[]			= "PATHING";
static const char STR_SET_PATH_NORMAL[]		= "NORMAL";
static const char STR_SET_PATH_NOWALK[]		= "NOWALK";
static const char STR_SET_PATH_NOBUILD[]	= "NOBUILD";
static const char STR_SET_PATH_NOFLY[]		= "NOFLY";
static const char STR_SET_PATH_BLIGHT[]		= "BLIGHT";
static const char STR_SET_PATH_NOWATER[]	= "NOWATER";
static const char STR_SET_PATH_UNKNOWN[]	= "UNKNOWN";
static const char STR_SET_PATH_UNKN01[]		= "UNKN01";
static const char STR_SET_PATH_UNKN02[]		= "UNKN02";
static const char STR_SET_PATH_NOBW[]		= "NOBUILD+NOWALK";
static const char STR_SET_PATH_NOBWW[]		= "NOBUILD+NOWALK+NOWATER";
static const char STR_SET_PATH_NOBWF[]		= "NOBUILD+NOWALK+NOFLY";
static const char STR_SET_PATH_NOBHDELTA[]	= "NOBUILDHEIGHTDELTA";
static const char STR_SET_PATH_NOWHDELTA[]	= "NOWALKHEIGHTDELTA";
// tiles
static const char STR_SET_TILESDEF[]		= "TILESETSDEF";
static const char STR_SET_TILESDEFGRPID[]	= "GROUPID";
static const char STR_SET_TILESDEFTILE[]	= "TILE";
static const char STR_SET_TILESDEFCLIFF[]	= "CLIFF";
static const char STR_SET_TILEPATHWALKABLE	= 'W';
static const char STR_SET_TILEPATHBUILDABLE	= 'B';
static const char STR_SET_TILEPATHFLYABLE	= 'F';
// conversion
static const char STR_SET_CONVERSION[]		= "CONVERSION";

// Warcraft 2 conversion
static const int  SET_WAR2_MAXTILESPERSET	= 10;
//  War2 Forest
static const char STR_SET_W2FOREST[]		= "W2FOREST";
static const int INDEX_SET_W2FOREST			= 0;
static const char STR_SET_W2FLIGHTWATER[]	= "W2FLIGHTWATER";
static const char STR_SET_W2FDARKWATER[]	= "W2FDARKWATER";
static const char STR_SET_W2FLIGHTDIRT[]	= "W2FLIGHTDIRT";
static const char STR_SET_W2FDARKDIRT[]		= "W2FDARKDIRT";
static const char STR_SET_W2FLIGHTGROUND[]	= "W2FLIGHTGROUND";
static const char STR_SET_W2FDARKGROUND[]	= "W2FDARKGROUND";
static const char STR_SET_W2FFOREST[]		= "W2FFOREST";
static const char STR_SET_W2FMOUNTAINS[]	= "W2FMOUNTAINS";
static const char STR_SET_W2FHUMANWALL[]	= "W2FHUMANWALL";
static const char STR_SET_W2FORCWALL[]		= "W2FORCWALL";
//  War2 Winter
static const char STR_SET_W2WINTER[]		= "W2WINTER";
static const int INDEX_SET_W2WINTER			= 1;
static const char STR_SET_W2ILIGHTWATER[]	= "W2ILIGHTWATER";
static const char STR_SET_W2IDARKWATER[]	= "W2IDARKWATER";
static const char STR_SET_W2ILIGHTDIRT[]	= "W2ILIGHTDIRT";
static const char STR_SET_W2IDARKDIRT[]		= "W2IDARKDIRT";
static const char STR_SET_W2ILIGHTGROUND[]	= "W2ILIGHTGROUND";
static const char STR_SET_W2IDARKGROUND[]	= "W2IDARKGROUND";
static const char STR_SET_W2IFOREST[]		= "W2IFOREST";
static const char STR_SET_W2IMOUNTAINS[]	= "W2IMOUNTAINS";
static const char STR_SET_W2IHUMANWALL[]	= "W2IHUMANWALL";
static const char STR_SET_W2IORCWALL[]		= "W2IORCWALL";
//  War2 Wasteland
static const char STR_SET_W2WASTELAND[]		= "W2WASTELAND";
static const int INDEX_SET_W2WASTELAND		= 2;
static const char STR_SET_W2WLIGHTWATER[]	= "W2WLIGHTWATER";
static const char STR_SET_W2WDARKWATER[]	= "W2WDARKWATER";
static const char STR_SET_W2WLIGHTDIRT[]	= "W2WLIGHTDIRT";
static const char STR_SET_W2WDARKDIRT[]		= "W2WDARKDIRT";
static const char STR_SET_W2WLIGHTGROUND[]	= "W2WLIGHTGROUND";
static const char STR_SET_W2WDARKGROUND[]	= "W2WDARKGROUND";
static const char STR_SET_W2WFOREST[]		= "W2WFOREST";
static const char STR_SET_W2WMOUNTAINS[]	= "W2WMOUNTAINS";
static const char STR_SET_W2WHUMANWALL[]	= "W2WHUMANWALL";
static const char STR_SET_W2WORCWALL[]		= "W2WORCWALL";
//  War2 Swamp
static const char STR_SET_W2SWAMP[]			= "W2SWAMP";
static const int INDEX_SET_W2SWAMP			= 3;
static const char STR_SET_W2SLIGHTWATER[]	= "W2SLIGHTWATER";
static const char STR_SET_W2SDARKWATER[]	= "W2SDARKWATER";
static const char STR_SET_W2SLIGHTDIRT[]	= "W2SLIGHTDIRT";
static const char STR_SET_W2SDARKDIRT[]		= "W2SDARKDIRT";
static const char STR_SET_W2SLIGHTGROUND[]	= "W2SLIGHTGROUND";
static const char STR_SET_W2SDARKGROUND[]	= "W2SDARKGROUND";
static const char STR_SET_W2SFOREST[]		= "W2SFOREST";
static const char STR_SET_W2SMOUNTAINS[]	= "W2SMOUNTAINS";
static const char STR_SET_W2SHUMANWALL[]	= "W2SHUMANWALL";
static const char STR_SET_W2SORCWALL[]		= "W2SORCWALL";

// Starcraft  conversion
static const int  SET_SC_MAXTILESPERSET				= 16;
//  SC Badlands
static const char STR_SET_SCBADLANDS[]				= "SCBADLANDS";
static const char STR_SET_SCBLDIRT[]				= "SCBLDIRT";
static const char STR_SET_SCBLMUD[]					= "SCBLMUD";
static const char STR_SET_SCBLHIGHDIRT[]			= "SCBLHIGHDIRT";
static const char STR_SET_SCBLWATER[]				= "SCBLWATER";
static const char STR_SET_SCBLGRASS[]				= "SCBLGRASS";
static const char STR_SET_SCBLHIGHGRASS[]			= "SCBLHIGHGRASS";
static const char STR_SET_SCBLSTRUCTURE[]			= "SCBLSTRUCTURE";
static const char STR_SET_SCBLASPHALT[]				= "SCBLASPHALT";
static const char STR_SET_SCBLROCKYGROUND[]			= "SCBLROCKYGROUND";
static const int INDEX_SET_SCBLDIRT					= 1;
static const int INDEX_SET_SCBLHIGHDIRT				= 2;
static const int INDEX_SET_SCBLWATER				= 3;
static const int INDEX_SET_SCBLGRASS				= 4;
static const int INDEX_SET_SCBLASPHALT				= 5;
static const int INDEX_SET_SCBLROCKYGROUND			= 6;
static const int INDEX_SET_SCBLHIGHGRASS			= 7;
static const int INDEX_SET_SCBLSTRUCTURE			= 8;
static const int INDEX_SET_SCBLMUD					= 9;
//  SC Space
static const char STR_SET_SCSPACEPLATFORM[]			= "SCSPACEPLATFORM";
static const char STR_SET_SCSPSPACE[]				= "SCSPSPACE";
static const char STR_SET_SCSPLOWPLATFORM[]			= "SCSPLOWPLATFORM";
static const char STR_SET_SCSPRUSTYPIT[]			= "SCSPRUSTYPIT";
static const char STR_SET_SCSPPLATFORM[]			= "SCSPPLATFORM";
static const char STR_SET_SCSPDARKPLATFORM[]		= "SCSPDARKPLATFORM";
static const char STR_SET_SCSPPLATING[]				= "SCSPPLATING";
static const char STR_SET_SCSPSOLARARRAY[]			= "SCSPSOLARARRAY";
static const char STR_SET_SCSPHIGHPLATFORM[]		= "SCSPHIGHPLATFORM";
static const char STR_SET_SCSPHIGHPLATING[]			= "SCSPHIGHPLATING";
static const char STR_SET_SCSPELEVATEDCATWALK[]		= "SCSPELEVATEDCATWALK";
static const int INDEX_SET_SCSPSPACE				= 1;
static const int INDEX_SET_SCSPPLATFORM				= 2; // 3
static const int INDEX_SET_SCSPHIGHPLATFORM			= 4; // 5, 6, 7
static const int INDEX_SET_SCSPSOLARARRAY			= 8;
static const int INDEX_SET_SCSPLOWPLATFORM			= 9;
static const int INDEX_SET_SCSPRUSTYPIT				= 10;
static const int INDEX_SET_SCSPPLATING				= 11;
static const int INDEX_SET_SCSPHIGHPLATING			= 12;
static const int INDEX_SET_SCSPELEVATEDCATWALK		= 13;
static const int INDEX_SET_SCSPDARKPLATFORM			= 14;
//  SC Installation
static const char STR_SET_SCINSTALLATION[]			= "SCINSTALLATION";
static const char STR_SET_SCISUBSTRUCTURE[]			= "SCISUBSTRUCTURE";
static const char STR_SET_SCIFLOOR[]				= "SCIFLOOR";
static const char STR_SET_SCIROOF[]					= "SCIROOF";
static const char STR_SET_SCISUBSTRUCTUREPLATING[]	= "SCISUBSTRUCTUREPLATING";
static const char STR_SET_SCIPLATING[]				= "SCIPLATING";
static const char STR_SET_SCISUBSTRUCTUREPANELS[]	= "SCISUBSTRUCTUREPANELS";
static const char STR_SET_SCIBOTTOMLESSPIT[]		= "SCIBOTTOMLESSPIT";
static const int INDEX_SET_SCISUBSTRUCTURE			= 1;
static const int INDEX_SET_SCIFLOOR					= 2;
static const int INDEX_SET_SCIROOF					= 3;
static const int INDEX_SET_SCISUBSTRUCTUREPLATING	= 4;
static const int INDEX_SET_SCIPLATING				= 5;
static const int INDEX_SET_SCISUBSTRUCTUREPANELS	= 6;
static const int INDEX_SET_SCIBOTTOMLESSPIT			= 7;
//  SC Ashworld
static const char STR_SET_SCASHWORLD[]				= "SCASHWORLD";
static const char STR_SET_SCAWMAGMA[]				= "SCAWMAGMA";
static const char STR_SET_SCAWDIRT[]				= "SCAWDIRT";
static const char STR_SET_SCAWLAVA[]				= "SCAWLAVA";
static const char STR_SET_SCAWSHALE[]				= "SCAWSHALE";
static const char STR_SET_SCAWBROKENROCK[]			= "SCAWBROKENROCK";
static const char STR_SET_SCAWHIGHDIRT[]			= "SCAWHIGHDIRT";
static const char STR_SET_SCAWHIGHLAVA[]			= "SCAWHIGHLAVA";
static const char STR_SET_SCAWHIGHSHALE[]			= "SCAWHIGHSHALE";
static const int INDEX_SET_SCAWMAGMA				= 1;
static const int INDEX_SET_SCAWDIRT					= 2;
static const int INDEX_SET_SCAWLAVA					= 3;
static const int INDEX_SET_SCAWSHALE				= 4;
static const int INDEX_SET_SCAWHIGHDIRT				= 5;
static const int INDEX_SET_SCAWHIGHLAVA				= 6;
static const int INDEX_SET_SCAWHIGHSHALE			= 7;
static const int INDEX_SET_SCAWBROKENROCK			= 8;
//  SC Jungle
static const char STR_SET_SCJUNGLEWORLD[]			= "SCJUNGLEWORLD";
static const char STR_SET_SCJWWATER[]				= "SCJWWATER";
static const char STR_SET_SCJWDIRT[]				= "SCJWDIRT";
static const char STR_SET_SCJWMUD[]					= "SCJWMUD";
static const char STR_SET_SCJWJUNGLE[]				= "SCJWJUNGLE";
static const char STR_SET_SCJWROCKYGROUND[]			= "SCJWROCKYGROUND";
static const char STR_SET_SCJWRUINS[]				= "SCJWRUINS";
static const char STR_SET_SCJWRAISEDJUNGLE[]		= "SCJWRAISEDJUNGLE";
static const char STR_SET_SCJWTEMPLE[]				= "SCJWTEMPLE";
static const char STR_SET_SCJWHIGHDIRT[]			= "SCJWHIGHDIRT";
static const char STR_SET_SCJWHIGHJUNGLE[]			= "SCJWHIGHJUNGLE";
static const char STR_SET_SCJWHIGHRUINS[]			= "SCJWHIGHRUINS";
static const char STR_SET_SCJWHIGHRAISEDJUNGLE[]	= "SCJWHIGHRAISEDJUNGLE";
static const char STR_SET_SCJWHIGHTEMPLE[]			= "SCJWHIGHTEMPLE";
static const int INDEX_SET_SCJWDIRT					= 1;
static const int INDEX_SET_SCJWHIGHDIRT				= 2;
static const int INDEX_SET_SCJWWATER				= 3;
static const int INDEX_SET_SCJWJUNGLE				= 4;
static const int INDEX_SET_SCJWRAISEDJUNGLE			= 5;
static const int INDEX_SET_SCJWROCKYGROUND			= 6;
static const int INDEX_SET_SCJWRUINS				= 7;
static const int INDEX_SET_SCJWTEMPLE				= 8;
static const int INDEX_SET_SCJWHIGHJUNGLE			= 9;
static const int INDEX_SET_SCJWHIGHRUINS			= 10;
static const int INDEX_SET_SCJWHIGHRAISEDJUNGLE		= 11;
static const int INDEX_SET_SCJWHIGHTEMPLE			= 12;
static const int INDEX_SET_SCJWMUD					= 13;
//  SC Desert
static const char STR_SET_SCDESERT[]				= "SCDESERT";
static const char STR_SET_SCDTAR[]					= "SCDTAR";
static const char STR_SET_SCDDIRT[]					= "SCDDIRT";
static const char STR_SET_SCDDRIEDMUD[]				= "SCDDRIEDMUD";
static const char STR_SET_SCDSANDDUNES[]			= "SCDSANDDUNES";
static const char STR_SET_SCDROCKYGROUND[]			= "SCDROCKYGROUND";
static const char STR_SET_SCDCRAGS[]				= "SCDCRAGS";
static const char STR_SET_SCDSANDYSUNKENPIT[]		= "SCDSANDYSUNKENPIT";
static const char STR_SET_SCDCOMPOUND[]				= "SCDCOMPOUND";
static const char STR_SET_SCDHIGHDIRT[]				= "SCDHIGHDIRT";
static const char STR_SET_SCDHIGHSANDDUNES[]		= "SCDHIGHSANDDUNES";
static const char STR_SET_SCDHIGHCRAGS[]			= "SCDHIGHCRAGS";
static const char STR_SET_SCDHIGHSANDYSUNKENPIT[]	= "SCDHIGHSANDYSUNKENPIT";
static const char STR_SET_SCDHIGHCOMPOUND[]			= "SCDHIGHCOMPOUND";
static const int INDEX_SET_SCDDIRT					= 1;
static const int INDEX_SET_SCDHIGHDIRT				= 2;
static const int INDEX_SET_SCDTAR					= 3;
static const int INDEX_SET_SCDSANDDUNES				= 4;
static const int INDEX_SET_SCDSANDYSUNKENPIT		= 5;
static const int INDEX_SET_SCDROCKYGROUND			= 6;
static const int INDEX_SET_SCDCRAGS					= 7;
static const int INDEX_SET_SCDCOMPOUND				= 8;
static const int INDEX_SET_SCDHIGHSANDDUNES			= 9;
static const int INDEX_SET_SCDHIGHCRAGS				= 10;
static const int INDEX_SET_SCDHIGHSANDYSUNKENPIT	= 11;
static const int INDEX_SET_SCDHIGHCOMPOUND			= 12;
static const int INDEX_SET_SCDDRIEDMUD				= 13;
//  SC Iceworld
static const char STR_SET_SCICEWORLD[]				= "SCICEWORLD";
static const char STR_SET_SCIWICE[]					= "SCIWICE";
static const char STR_SET_SCIWSNOW[]				= "SCIWSNOW";
static const char STR_SET_SCIWMOGULS[]				= "SCIWMOGULS";
static const char STR_SET_SCIWDIRT[]				= "SCIWDIRT";
static const char STR_SET_SCIWROCKYSNOW[]			= "SCIWROCKYSNOW";
static const char STR_SET_SCIWGRASS[]				= "SCIWGRASS";
static const char STR_SET_SCIWWATER[]				= "SCIWWATER";
static const char STR_SET_SCIWOUTPOST[]				= "SCIWOUTPOST";
static const char STR_SET_SCIWHIGHSNOW[]			= "SCIWHIGHSNOW";
static const char STR_SET_SCIWHIGHDIRT[]			= "SCIWHIGHDIRT";
static const char STR_SET_SCIWHIGHGRASS[]			= "SCIWHIGHGRASS";
static const char STR_SET_SCIWHIGHWATER[]			= "SCIWHIGHWATER";
static const char STR_SET_SCIWHIGHOUTPOST[]			= "SCIWHIGHOUTPOST";
static const int INDEX_SET_SCIWSNOW					= 1;
static const int INDEX_SET_SCIWHIGHSNOW				= 2;
static const int INDEX_SET_SCIWICE					= 3;
static const int INDEX_SET_SCIWDIRT					= 4;
static const int INDEX_SET_SCIWWATER				= 5;
static const int INDEX_SET_SCIWROCKYSNOW			= 6;
static const int INDEX_SET_SCIWGRASS				= 7;
static const int INDEX_SET_SCIWOUTPOST				= 8;
static const int INDEX_SET_SCIWHIGHDIRT				= 9;
static const int INDEX_SET_SCIWHIGHGRASS			= 10;
static const int INDEX_SET_SCIWHIGHWATER			= 11;
static const int INDEX_SET_SCIWHIGHOUTPOST			= 12;
static const int INDEX_SET_SCIWMOGULS				= 13;
//  SC Twilight
static const char STR_SET_SCTWILIGHT[]				= "SCTWILIGHT";
static const char STR_SET_SCTWATER[]				= "SCTWATER";
static const char STR_SET_SCTDIRT[]					= "SCTDIRT";
static const char STR_SET_SCTMUD[]					= "SCTMUD";
static const char STR_SET_SCTCRUSHEDROCK[]			= "SCTCRUSHEDROCK";
static const char STR_SET_SCTCREVICES[]				= "SCTCREVICES";
static const char STR_SET_SCTFLAGSTONES[]			= "SCTFLAGSTONES";
static const char STR_SET_SCTSUNKENGROUND[]			= "SCTSUNKENGROUND";
static const char STR_SET_SCTBASILICA[]				= "SCTBASILICA";
static const char STR_SET_SCTHIGHDIRT[]				= "SCTHIGHDIRT";
static const char STR_SET_SCTHIGHCRUSHEDROCKS[]		= "SCTHIGHCRUSHEDROCKS";
static const char STR_SET_SCTHIGHFLAGSTONES[]		= "SCTHIGHFLAGSTONES";
static const char STR_SET_SCTHIGHSUNKENGROUND[]		= "SCTHIGHSUNKENGROUND";
static const char STR_SET_SCTHIGHBASILICA[]			= "SCTHIGHBASILICA";
static const int INDEX_SET_SCTDIRT					= 1;
static const int INDEX_SET_SCTHIGHDIRT				= 2;
static const int INDEX_SET_SCTWATER					= 3;
static const int INDEX_SET_SCTCRUSHEDROCK			= 4;
static const int INDEX_SET_SCTSUNKENGROUND			= 5;
static const int INDEX_SET_SCTCREVICES				= 6;
static const int INDEX_SET_SCTFLAGSTONES			= 7;
static const int INDEX_SET_SCTBASILICA				= 8;
static const int INDEX_SET_SCTHIGHCRUSHEDROCKS		= 9;
static const int INDEX_SET_SCTHIGHFLAGSTONES		= 10;
static const int INDEX_SET_SCTHIGHSUNKENGROUND		= 11;
static const int INDEX_SET_SCTHIGHBASILICA			= 12;
static const int INDEX_SET_SCTMUD					= 13;
// Tileset Groups And Tilesets
static char		TS_STR_ID_UNDEFINED[]		= "none";
static char		TS_STR_NAME_UNDEFINED[]		= "Undefined";
const COLORREF	TS_COLOR_UNDEFINED			= 0x00808080;
const COLORREF	TS_WATER_COLOR				= 0x00FF0000;
const COLORREF	TS_RAMP_COLOR				= 0x000000FF;
const COLORREF	TS_BLIGHT_COLOR				= 0x00FF8000;
const COLORREF	TS_BOUNDARY_COLOR			= 0x00000000;
const float		TS_WATER_ALPHA				= 0.5f;
const float		TS_RAMP_ALPHA				= 1.0f;
const float		TS_BLIGHT_ALPHA				= 0.75f;
const float		TS_BOUNDARY_ALPHA			= 0.25f;
const float		TS_LEVEL_FACTOR				= 1.0f;
static char		TC_STR_ID_UNDEFINED[]		= "none";
static char		TC_STR_NAME_UNDEFINED[]		= "Undefined";
const char		TG_CHAR_ID_UNDEFINED		= ' ';
static char		TG_STR_NAME_UNDEFINED[]		= "Undefined";

// W3M Files (see also constants section)
//***********
static const char STR_W3M_LISTFILE[]		= "(listfile)";
static const char STR_W3M_SIGNATURE[]		= "(signature)";
static const char STR_W3M_ATTRIBUTES[]		= "(attributes)";
static const char STR_W3M_WTS[]				= "war3map.wts";
static const char STR_W3M_W3E[]				= "war3map.w3e";
static const char STR_W3M_W3I[]				= "war3map.w3i";
static const char STR_W3M_WPM[]				= "war3map.wpm";
static const char STR_W3M_PATHTGA[]			= "war3mapPath.tga";
static const char STR_W3M_DOO[]				= "war3map.doo";
static const char STR_W3M_UNITSDOO[]		= "war3mapUnits.doo";
static const char STR_W3M_JASS[]			= "war3map.j";
static const char STR_W3M_WTG[]				= "war3map.wtg";
static const char STR_W3M_WCT[]				= "war3map.wct";
static const char STR_W3M_SHD[]				= "war3map.shd";
static const char STR_W3M_MAPBLP[]			= "war3mapMap.blp";
static const char STR_W3M_MAPB00[]			= "war3mapMap.b00";
static const char STR_W3M_MAPTGA[]			= "war3mapMap.tga";
static const char STR_W3M_PREVIEWTGA[]		= "war3mapPreview.tga";
static const char STR_W3M_MMP[]				= "war3map.mmp";
static const char STR_W3M_W3R[]				= "war3map.w3r";
static const char STR_W3M_W3C[]				= "war3map.w3c";
static const char STR_W3M_W3U[]				= "war3map.w3u";
static const char STR_W3M_W3S[]				= "war3map.w3s";
static const char STR_W3M_IMP[]				= "war3map.imp";
static const char STR_W3M_SCRIPTS[]			= "Scripts\\";
static const char STR_WAR3_MAPS[]			= "Maps\\";
static const char STR_WAR3_TERRAINART[]		= "TerrainArt\\";
static const char STR_WAR3_UI[]				= "UI\\";


// SCM Files
//***********
// used for conversion
static const char STR_SC_SCENARIO[]			= "staredit\\scenario.chk";
static const char STR_SC_BLIZZARD_2_CND[]	= "blizzard_2.cnd";
static const char STR_SC_LADDER_2_CND[]		= "ladder_2.cnd";
static const char STR_SC_LADDER_3_CND[]		= "ladder_3.cnd";


// End Static Global Strings
/******************************************************************************/


/*
********************************************************************************
********************
* Global Constants *
********************


*/

// Misc
//******
// Max number of files possible to store in a new W3M
const int MPQ_MAX_FILES		= 2048;


// Edit Modes Constants
//**********************
const int MODE_DEFAULT		= 0;
const int MODE_TILEPOINTS	= 0;
const int MODE_DOODADS		= 1;
const int MODE_UNITS		= 2;
const int MODE_PATH			= 3;
const int MODE_SHADOWS		= 4;


// View Class constants
//**********************
// Bitmap Rendering
const int CR_WIDTH			= 8; // cell rendering width; must be even because of the bitmap
const int CR_HEIGHT			= 8; // cell rendering height; must be even because of the bitmap
// View Flags
const int VFL_LEVELS	= 0x00000001;
const int VFL_TILES		= 0x00000002;
const int VFL_DOODADS	= 0x00000004;
const int VFL_UNITS		= 0x00000008;
const int VFL_SHADOWS	= 0x00000010;
const int VFL_PATH		= 0x00000020;
const int VFL_PLAYERS	= 0x00000040;
//const int VFL_		= 0x00000080;
const int VFL_LAYERS	= 0x00000100;
const int VFL_RAMPS		= 0x00000200;
const int VFL_BLIGHTS	= 0x00000400;
const int VFL_WATER		= 0x00000800;
const int VFL_BOUNDS	= 0x00001000;
const int VFL_WEBOUNDS	= 0x00002000;
//Path Display Modes
const int PATH_NOTHING	= -1;// nothing
const int PATH_PLAIN	= 0;// plain color
const int PATH_STRIPED1	= 1;// striped //
const int PATH_STRIPED2	= 2;// striped \\  
const int PATH_STRIPED3	= 3;// striped ==
const int PATH_STRIPED4	= 4;// striped ||
const int PATH_STRIPED5	= 5;// striped ##
const int PATH_DOTS1	= 6;// dots ..
const int PATH_DOTS2	= 7;// more dots ::
// Status Bar Text
static const char szCOORDINATES[] = "Coordinates: (%.2f, %.2f, %.2f)";

// ToolBars Constants
//********************
// Popups Menu Indexes
// to be changed if the Popup Menu ressource (IDR_POPUPS) is edited
const int POPUP_TILEPOINTS_BAR	= 0;
const int POPUP_DOODADS_BAR		= 1;


// Tool 
//******
// TilePoints Tool
// Tilepoint Tool Modes:
const int TOOL_MODE_TILE_SELECT				= 0;
const int TOOL_MODE_TILE_PEN				= 1;
const int TOOL_MODE_TILE_RECT				= 2;
const int TOOL_MODE_TILE_ELLIPSE			= 3;
const int TOOL_MODE_TILE_FILL				= 4;
const int TOOL_MODE_TILE_REPLACE			= 5;
const int TOOL_MODE_TILE_BEND_DOWN			= 6;
const int TOOL_MODE_TILE_BEND_DOWN_WATER	= 7;
const int TOOL_MODE_TILE_BEND_UP			= 8;
const int TOOL_MODE_TILE_BEND_UP_WATER		= 9;
const int TOOL_MODE_TILE_FLAT				= 10;
const int TOOL_MODE_TILE_FLAT_WATER			= 11;
const int TOOL_MODE_TILE_RANDOM				= 12;
const int TOOL_MODE_TILE_RANDOM_WATER		= 13;
const int TOOL_MODE_TILE_ROTATE				= 14;
const int TOOL_MODE_TILE_SLOPE				= 15;
const int TOOL_MODE_TILE_SLOPE_WATER		= 16;
const int TOOL_MODE_TILE_H_MIRROR			= 17;
const int TOOL_MODE_TILE_V_MIRROR			= 18;
// Tilepoint Tool Parameters:
const int TOOL_TILE_MIN_SIZE				= 1;
const int TOOL_TILE_DEFAULT_SIZE			= 1;
const int TOOL_TILE_MAX_SIZE				= 32;

// Doodad Tool Modes:
const int TOOL_MODE_DOOD_ADD				= 0;
const int TOOL_MODE_DOOD_DELETE				= 1;
const int TOOL_MODE_DOOD_UPDATE				= 2;
const int TOOL_MODE_DOOD_SELECT				= 3;
const int TOOL_MODE_DOOD_REPLACE			= 4;
const int TOOL_MODE_DOOD_SPACING			= 5;
const int TOOL_MODE_DOOD_RECT				= 6;
const int TOOL_MODE_DOOD_F_RECT				= 7;
const int TOOL_MODE_DOOD_ELLIPSE			= 8;
const int TOOL_MODE_DOOD_F_ELLIPSE			= 9;
// Doodads Tool Parameters:
const float TOOL_DOOD_DEFAULT_DIST			= 128;
const float TOOL_DOOD_MIN_SIZE				= 1;
const float TOOL_DOOD_DEFAULT_SIZE			= 1;
const float TOOL_DOOD_MAX_SIZE				= 4096;

// Path Tool
// Path Tool Modes:
const int TOOL_MODE_PATH_WRITE				= 0;
// Path Tool Parameters:
// string used to set buttons text
static const char STR_PATH_NOWALK[]			= "No walk";
static const char STR_PATH_WALK[]			= "Walkable";
static const char STR_PATH_NOBUILD[]		= "No build";
static const char STR_PATH_BUILD[]			= "Buildable";
static const char STR_PATH_NOFLY[]			= "No fly";
static const char STR_PATH_FLY[]			= "Flyable";
static const char STR_PATH_NOBLIGHT[]		= "No Blight";
static const char STR_PATH_BLIGHT[]			= "Blight";
static const char STR_PATH_NOWATER[]		= "No water";
static const char STR_PATH_WATER[]			= "Water";
static const char STR_PATH_NOUNK[]			= "Unkn. off";
static const char STR_PATH_UNK[]			= "Unkn. on";
static const char STR_PATH_NOUNK01[]		= "Unkn1 off";
static const char STR_PATH_UNK01[]			= "Unkn1 on";
static const char STR_PATH_NOUNK02[]		= "Unkn2 off";
static const char STR_PATH_UNK02[]			= "Unkn2 on";
// Path Tool Sizes:
const int TOOL_PATH_MIN_SIZE				= 1;
const int TOOL_PATH_DEFAULT_SIZE			= 4;
const int TOOL_PATH_MAX_SIZE				= 64;


// Undo constants
//****************
const int UNDO_DOOD_ADD						= 0;
const int UNDO_DOOD_DEL						= 1;
const int UNDO_DOOD_UPD						= 2;
const int UNDO_DEFAULT_MAX					= 200;
static const char UNDO_STR_TILEPOINT[]		= "tilepoint";
static const char UNDO_STR_DOOD_ADD[]		= "add doodad";
static const char UNDO_STR_DOOD_REMOVE[]	= "remove doodad";
static const char UNDO_STR_DOOD_EDIT[]		= "edit doodad";
static const char UNDO_STR_PATHING[]		= "pathing";
static const char UNDO_STR_MENU00[]			= "&Undo (";
static const char UNDO_STR_MENU01[]			= ")\tCtrl+Z";
static const char UNDO_STR_MENU02[]			= "&Undo (nothing to undo)\tCtrl+Z";


// Map Property Dialog constants
//*******************************
// page flags
const int W3Z_PROP_ALLDISABLED		= 0x00000000;
const int W3Z_PROP_REGISTER			= 0x00000001;
const int W3Z_PROP_PROTECT			= 0x00000002;
const int W3Z_PROP_MAIN				= 0x00000004;
const int W3Z_PROP_SIZE				= 0x00000008;
const int W3Z_PROP_MINIMAP			= 0x00000010;
const int W3Z_PROP_MENUOPT			= 0x00000020;
const int W3Z_PROP_PLAYERS			= 0x00000040;
/*+zep:pages not implemented
const int W3Z_PROP_ALLNOPROTECT		= 0xFFFFFFFD;
const int W3Z_PROP_ALLNOREGISTER	= 0xFFFFFFFE;
const int W3Z_PROP_ALLENABLED		= 0xFFFFFFFF;
*/
const int W3Z_PROP_ALLNOPROTECT		= 0xFFFFFF8D;
const int W3Z_PROP_ALLNOREGISTER	= 0xFFFFFF8E;
const int W3Z_PROP_ALLENABLED		= 0xFFFFFF8F;

// W3M files
//***********
// File Load Status Flags
const __int64 FL_W3M_NONE				= 0x00000000;
const __int64 FL_W3M_W3M				= 0x00000001;
const __int64 FL_W3M_WTS				= 0x00000002;
const __int64 FL_W3M_W3I				= 0x00000008;
const __int64 FL_W3M_W3E				= 0x00000004;
const __int64 FL_W3M_WTG				= 0x00000010;
const __int64 FL_W3M_JASS				= 0x00000020;
const __int64 FL_W3M_SHD				= 0x00000040;
const __int64 FL_W3M_MAPBLP				= 0x00000080;
const __int64 FL_W3M_MAPB00				= 0x00000100;
const __int64 FL_W3M_MAPTGA				= 0x00000200;
const __int64 FL_W3M_WCT				= 0x00000400;
const __int64 FL_W3M_MMP				= 0x00000800;
const __int64 FL_W3M_PATHTGA			= 0x00001000;
const __int64 FL_W3M_WPM				= 0x00002000;
const __int64 FL_W3M_DOO				= 0x00004000;
const __int64 FL_W3M_UNITSDOO			= 0x00008000;
const __int64 FL_W3M_W3R				= 0x00010000;
const __int64 FL_W3M_W3C				= 0x00020000;
const __int64 FL_W3M_W3U				= 0x00040000;
const __int64 FL_W3M_W3S				= 0x00080000;
const __int64 FL_W3M_IMP				= 0x00100000;
const __int64 FL_W3M_PREVIEWTGA			= 0x00200000;
const __int64 FL_W3M_UNP				= 0x00400000;
const __int64 FL_W3M_LISTEFILE			= 0x00800000;
// File Headers and version
//W3M
static const char	STR_W3M_HEADER[]		= "HM3W";
const int			W3M_VERSION_DEFAULT		= 0;
//WTS
static const char	STR_WTS_HEADER[]		= "\x0EF\x0BB\x0BF";
//W3E
static const char	STR_W3E_HEADER[]		= "W3E!";
const int			W3E_VERSION_DEFAULT		= 11;
//W3I
const int			W3I_VERSION_DEFAULT		= 18;
//WPM
static const char	STR_WPM_HEADER[]		= "MP3W";
const int			WPM_VERSION_DEFAULT		= 0;
//DOO
static const char	STR_DOO_HEADER[]		= "W3do";
const int			DOO_VERSION_DEFAULT		= 7;
//MMP
const int			MMP_VERSION_DEFAULT		= 0;


// Trigger Strings Constants (WTS)
//*********************************
const int			TSTR_UNKNOWN_ID			= -1;
static const char	TSTR_UNKNOWN_VALUE[]	= "";
static const char	TSTR_TRIGSTR[]			= "TRIGSTR_";
const int			TSTR_TRIGSTR_LEN		= strlen(TSTR_TRIGSTR);
static const char	TSTR_TRIGSTR_KEY[]		= "STRING";
static const char	TSTR_TRIGSTR_DEF[]		= "STRING %i\r\n{\r\n%s\r\n}\r\n\r\n";


// W3Info Constants (W3I)
//************************
/*
 Map Flags:
 ----------
 0x000001: 1=hide minimap in preview screens
 0x000002: 1=modify ally priorities
 0x000004: 1=melee map
 0x000008: 1=playable map size was large and has never been reduced to medium
 0x000010: 1=masked area are partially visible
 0x000020: 1=fixed player setting for custom forces 
 0x000040: 1=use custom forces
 0x000080: 1=use custom techtree
 0x000100: 1=use custom abilities
 0x000200: 1=use custom upgrades
 0x000400: 1=map properties menu opened at least once since map creation
 0x000800: 1=show water waves on cliff shores
 0x001000: 1=show water waves on rolling shores
 W3Z custom flags:
 -----------------
 0x008000: 1=protected map
 0x010000: 1=W3Z Map Editor used
*/
const int W3I_FLG_HIDEMINIMAP			= 0x00000001;
const int W3I_FLG_ALLYPRIO				= 0x00000002;
const int W3I_FLG_MELEE					= 0x00000004;
const int W3I_FLG_NOTREDUCED			= 0x00000008;
const int W3I_FLG_MASKEDAREA			= 0x00000010;
const int W3I_FLG_FIXEDPLAYERS			= 0x00000020;
const int W3I_FLG_CUSTOMFORCES			= 0x00000040;
const int W3I_FLG_CUSTOMTECHTREE		= 0x00000080;
const int W3I_FLG_CUSTOMABILITY			= 0x00000100;
const int W3I_FLG_CUSTOMUPGRADE			= 0x00000200;
const int W3I_FLG_MENUPROP				= 0x00000400;
const int W3I_FLG_WAVESCLIFF			= 0x00000800;
const int W3I_FLG_WAVEROLLING			= 0x00001000;
//const int W3I_FLG_					= 0x00002000;
//const int W3I_FLG_					= 0x00004000;
const int W3I_FLG_PROTECTED				= 0x10000000;
const int W3I_FLG_W3Z					= 0x20000000;
const int W3I_FLG_WAR2CONV				= 0x40000000;
const int W3I_FLG_SCCONV				= 0x80000000;

// strings
static const char W3I_STR_MAPNAME_DEFAULT[]		= "Unnamed Map";
static const char W3I_STR_MAPAUTHOR_DEFAULT[]	= "Unknown";
static const char W3I_STR_MAPDESC_DEFAULT[]		= "No description available.";
static const char W3I_STR_MAPSUGPLYR_DEFAULT[]	= "Any";
static const char W3I_PLAYER_NAME_DEFAULT[]		= "Player %i";
static const char W3I_FORCE_NAME_DEFAULT[]		= "Force %i";

// Boundaries
const float	W3I_BOUND_BOTTOMLEFT_X		= -10240;
const float	W3I_BOUND_BOTTOMLEFT_Y		= -10240;
const float	W3I_BOUND_TOPRIGHT_X		= 10240;
const float	W3I_BOUND_TOPRIGHT_Y		= 10240;
const float	W3I_BOUND_TOPLEFT_X			= -10240;
const float	W3I_BOUND_TOPLEFT_Y			= 10240;
const float	W3I_BOUND_BOTTOMRIGHT_X		= 10240;
const float	W3I_BOUND_BOTTOMRIGHT_Y		= -10240;
//other constants
const int W3I_NBPLAYERS_DEFAULT					= 1;
const int W3I_EDITOR_ID_W3Z						= 2703; // W3Z editor ID


// Ground Map Constants (W3E)
//****************************
const int W3E_DEFAULT_WIDTH					= 160;
const int W3E_DEFAULT_HEIGHT				= 160;
const int W3E_DEFAULT_PLAYWIDTH				= 148;
const int W3E_DEFAULT_PLAYHEIGHT			= 148;
const int W3E_MIN_WIDTH						= 16;
const int W3E_MIN_HEIGHT					= 16;
const int W3E_MAX_WIDTH						= 512;
const int W3E_MAX_HEIGHT					= 512;
const int W3E_MAX_GROUNDTILES				= 16;
const char W3E_MAINTILE_DEFAULT				= 'L';
static const char W3E_TILENAME_DEFAULT[]	= "Lordaeron Summer";
static const char W3E_TILESET_DEFAULT[]		= "LdrtLdroLdrgLrokLgrsLgrd";
static const char W3E_CLIFFSET_DEFAULT[]	= "CLdiCLgr";
// Tilepoints Constants
const int TILE_LAYER_LEVEL_ZERO		= 2;      // layer 0, must be >= 2 (War2 conversion)
const int TILE_HEIGHT_LEVEL_ZERO	= 0x2000; // height 0
const int TILE_LAYER_HEIGHT			= 0x0200; // layer height
const int TILE_WATER_OFFSET			= 0x2168; // water level offset (-89.6)
const int TILE_MAX_LAYER			= 15;
// Tilepoints Flags
const int TILE_FL_RAMP				= 0x0010;
const int TILE_FL_BLIGHT			= 0x0020;
const int TILE_FL_WATER				= 0x0040;
const int TILE_FL_MINISHAD			= 0x0080;
const int TILE_FL_SHADOW			= 0x4000;
// Tilepoints Masks Flags
const int TILE_MSK_FLAGS			= 0xC0F0; // all flags mask: removes the gtound type and the water level part
const int TILE_MSK_FLAGS_EXT		= 0xC000; // extended flags "only" mask: remove the int part of 2 bytes shared for an int and 2 flags
const int TILE_MSK_WATER			= ~TILE_MSK_FLAGS_EXT; //water mask to remove shadow flag
// View Colors for Special Selected Tilepoints
const RGBQUAD RGB_BLACK		= {0,0,0,0};
const RGBQUAD RGB_RED		= {0,0,255,0};
const RGBQUAD RGB_GREEN		= {0,255,0,0};
const RGBQUAD RGB_BLUE		= {255,0,0,0};
const RGBQUAD RGB_WHITE		= {255,255,255,0};
const RGBQUAD RGB_RESERVED	= {0,0,0,255};
const RGBQUAD RGB_SRED		= {0,0,255,255};
const RGBQUAD RGB_SGREEN	= {0,255,0,255};
const RGBQUAD RGB_SBLUE		= {255,0,0,255};


// Doodads Constants (DOO)
//************************
static const char	DOOD_DEFAULT_TREE[]		= "LTlt";
const float	DOOD_DEFAULT_ANGLE				= (float)4.7123895; //rad = 270deg
const float	DOOD_ANGLE_CONST				= (float)180.0/(float)3.1415926535;
const int	DOOD_DEFAULT_VARIATION			= 0;
// Doodad Flags
const int DOOD_FL_NONSOLID					= 1;
const int DOOD_FL_NORMAL					= 2;
// Map Subdivision size (square) for the doodad table
const int DOOD_MAP_SUBDIV					= 128;


// Path Map Constants (PathTGA & WPM)
//************************************
const int PATH_MAP_SUBDIV			= 4; // subdivision of tiles
// Pathing flags (WPM)
const byte PATH_DEFAULT				= 0x00;
const byte PATH_UNKN01				= 0x01;
const byte PATH_NOWALK				= 0x02;
const byte PATH_NOFLY				= 0x04;
const byte PATH_NOBUILD				= 0x08;
const byte PATH_UNKN02				= 0x10;
const byte PATH_BLIGHT				= 0x20;
const byte PATH_NOWATER				= 0x40;
const byte PATH_UNKNOWN				= 0x80;
// max width and height for the PathTGA (TGA format limits)
const int PATH_MAX_WIDTH			= 32768;
const int PATH_MAX_HEIGHT			= 32768;
//WPM header size
const int WPM_HEADER_SIZE			= 16;
//max height delta between two neighbourg tilepoints before being unbuildable/unwalkable
const float PATH_MAX_BUILDHEIGHTDELTA	= 128.0f;
const float PATH_MAX_WALKHEIGHTDELTA	= 256.0f;

// Shadow Map Constants (SHD)
//****************************
const int SHAD_MAP_SUBDIV			= 4; // subdivision of tiles
const int SHAD_MAX_WIDTH			= 32768;
const int SHAD_MAX_HEIGHT			= 32768;


// Units Constants (JASS)
//************************
const int UNIT_OWNER_OTHER			= -3;
const int UNIT_OWNER_COMP_PASSIVE	= -2;
const int UNIT_OWNER_COMP_AGGRESIVE	= -1;
const int UNIT_OWNER_COMP_NEUTRAL	= 0;
const int UNIT_OWNER_PLAYER1		= 1;
const int UNIT_OWNER_PLAYER2		= 2;
const int UNIT_OWNER_PLAYER3		= 3;
const int UNIT_OWNER_PLAYER4		= 4;
const int UNIT_OWNER_PLAYER5		= 5;
const int UNIT_OWNER_PLAYER6		= 6;
const int UNIT_OWNER_PLAYER7		= 7;
const int UNIT_OWNER_PLAYER8		= 8;
const int UNIT_OWNER_PLAYER9		= 9;
const int UNIT_OWNER_PLAYER10		= 10;
const int UNIT_OWNER_PLAYER11		= 11;
const int UNIT_OWNER_PLAYER12		= 12;
static const char JASS_STR_CREATEUNIT[]		= "CreateUnit";
static const char JASS_STR_DEFSTARTLOC[]	= "DefineStartLocation";

// Units Doodad Constants
static const char UNIT_STR_ID_STARTPOS[]	= "sloc";
static const char UNIT_STR_ID_GOLDMINE[]	= "ngol";


// Minimap Constants
//*******************
// Icons
const int MMP_ICON_UNDEFINED				= 0xFFFFFFFF;
const int MMP_ICON_GOLDMINE					= 0x00000000;
const int MMP_ICON_HOUSE					= 0x00000001;
const int MMP_ICON_CROSS					= 0x00000002;
// Coordinates
const int MMP_COORD_MIN						= 0x00000000;
const int MMP_COORD_MIDDLE					= 0x00000080;
const int MMP_COORD_MAX						= 0x000000FF;
// Colors
// note: COLORREF is 0xAABBGGRR but here colors are stored 0xAARRGGBB
const COLORREF MMP_COLOR_RED				= 0xFFFF0303;
const COLORREF MMP_COLOR_BLUE				= 0xFF0042FF;
const COLORREF MMP_COLOR_CYAN				= 0xFF1CE6B9;
const COLORREF MMP_COLOR_PURPLE				= 0xFF540081;
const COLORREF MMP_COLOR_YELLOW				= 0xFFFFFC00;
const COLORREF MMP_COLOR_ORANGE				= 0xFFFE8A0E;
const COLORREF MMP_COLOR_GREEN				= 0xFF20C000;
const COLORREF MMP_COLOR_PINK				= 0xFFE55BB0;
const COLORREF MMP_COLOR_LIGHTGRAY			= 0xFF959697;
const COLORREF MMP_COLOR_LIGHTBLUE			= 0xFF7EBFF1;
const COLORREF MMP_COLOR_AQUA				= 0xFF106246;
const COLORREF MMP_COLOR_BROWN				= 0xFF492A04;
const COLORREF MMP_COLOR_NONE				= 0xFFFFFFFF;


// Map Protection Constants
//**************************
// Protection Types
const int	W3Z_MAP_PROT_UNKNOWN			= -1;
const int	W3Z_MAP_PROT_NOTPROTECTED		= 0;
const int	W3Z_MAP_PROT_UNLUCKY			= 1;
const int	W3Z_MAP_PROT_W3ZV1L1			= 2;
const int	W3Z_MAP_PROT_W3ZV1L2			= 3;
const int	W3Z_MAP_PROT_W3ZV1L3			= 4;
// Protection Types names
static const char	STR_MAP_PROT_NOTPROTECTED[]	= "Map not protected";
static const char	STR_MAP_PROT_PROTECTED[]	= "Map protected";
static const char	STR_MAP_PROT_UNLUCKY[]		= "Unlucky_Footman-Weaaddar wtg Protection";
static const char	STR_MAP_PROT_W3ZV1L1[]		= "W3Z Protector v1.0 Lvl1"; // watermark
static const char	STR_MAP_PROT_W3ZV1L2[]		= "W3Z Protector v1.0 Lvl2"; // watermark + WE read only
static const char	STR_MAP_PROT_W3ZV1L3[]		= "W3Z Protector v1.0 Lvl3"; // watermark + WE blocked
static const char	STR_MAP_PROT_UNKNOWN[]		= "Unknown protection";
// Registered Status
static const char	STR_MAP_PROT_NOTREGGED[]	= "User not registered.";
static const char	STR_MAP_PROT_AUTHORREGGED[]	= "Author registered.";
static const char	STR_MAP_PROT_PUBLICREGGED[]	= "Public user registered.";

// Protection Constants
const int	W3Z_MAX_TRIES						= 5; // maximum number of tries before the password box closes
const int	W3Z_MAX_NAME_LENGTH					= 16; // must be a multiple of 4 (cf. W3E-cliffsets and tilepoints definition)
const int	W3Z_MAX_PASS_LENGTH					= 16;
const int	W3Z_MIN_PASS_LENGTH					= 0;
static const char W3Z_W3E_PROT_TILE01[]			= "\0Z10";
const int W3Z_W3E_PROT_STARTSEQ101				= 0x57335A11; // W3Z v1.0 Lvl1
const int W3Z_W3E_PROT_STARTSEQ102				= 0x57335A12; // W3Z v1.0 Lvl2
const int W3Z_W3E_PROT_STARTSEQ103				= 0x57335A13; // W3Z v1.0 Lvl2
static const char STR_CRYPT_KEY[W3Z_MAX_NAME_LENGTH+1] = "123"; // crypt key TODO:IDA
// unprotect record ID
const char W3Z_UNP_ID[]							= "UNP3";
// unprotect record version
const int W3Z_UNP_VER							= 1;

static const int W3Z_CRYPTTABLE[0x100] = 
{
	0xd1310ba6, 0x98dfb5ac, 0x2ffd72db, 0xd01adfb7,
	0xb8e1afed, 0x6a267e96, 0xba7c9045, 0xf12c7f99,
	0x24a19947, 0xb3916cf7, 0x0801f2e2, 0x858efc16,
	0x636920d8, 0x71574e69, 0xa458fea3, 0xf4933d7e,
	0x0d95748f, 0x728eb658, 0x718bcd58, 0x82154aee,
	0x7b54a41d, 0xc25a59b5, 0x9c30d539, 0x2af26013,
	0xc5d1b023, 0x286085f0, 0xca417918, 0xb8db38ef,
	0x8e79dcb0, 0x603a180e, 0x6c9e0e8b, 0xb01e8a3e,
	0xd71577c1, 0xbd314b27, 0x78af2fda, 0x55605c60,
	0xe65525f3, 0xaa55ab94, 0x57489862, 0x63e81440,
	0x55ca396a, 0x2aab10b6, 0xb4cc5c34, 0x1141e8ce,
	0xa15486af, 0x7c72e993, 0xb3ee1411, 0x636fbc2a,
	0x2ba9c55d, 0x741831f6, 0xce5c3e16, 0x9b87931e,
	0xafd6ba33, 0x6c24cf5c, 0x7a325381, 0x28958677,
	0x3b8f4898, 0x6b4bb9af, 0xc4bfe81b, 0x66282193,
	0x61d809cc, 0xfb21a991, 0x487cac60, 0x5dec8032,
	0xef845d5d, 0xe98575b1, 0xdc262302, 0xeb651b88,
	0x23893e81, 0xd396acc5, 0x0f6d6ff3, 0x83f44239,
	0x2e0b4482, 0xa4842004, 0x69c8f04a, 0x9e1f9b5e,
	0x21c66842, 0xf6e96c9a, 0x670c9c61, 0xabd388f0,
	0x6a51a0d2, 0xd8542f68, 0x960fa728, 0xab5133a3,
	0x6eef0b6c, 0x137a3be4, 0xba3bf050, 0x7efb2a98,
	0xa1f1651d, 0x39af0176, 0x66ca593e, 0x82430e88,
	0x8cee8619, 0x456f9fb4, 0x7d84a5c3, 0x3b8b5ebe,
	0xe06f75d8, 0x85c12073, 0x401a449f, 0x56c16aa6,
	0x4ed3aa62, 0x363f7706, 0x1bfedf72, 0x429b023d,
	0x37d0d724, 0xd00a1248, 0xdb0fead3, 0x49f1c09b,
	0x075372c9, 0x80991b7b, 0x25d479d8, 0xf6e8def7,
	0xe3fe501a, 0xb6794c3b, 0x976ce0bd, 0x04c006ba,
	0xc1a94fb6, 0x409f60c4, 0x5e5c9ec2, 0x196a2463,
	0x68fb6faf, 0x3e6c53b5, 0x1339b2eb, 0x3b52ec6f,
	0x6dfc511f, 0x9b30952c, 0xcc814544, 0xaf5ebd09,
	0xbee3d004, 0xde334afd, 0x660f2807, 0x192e4bb3,
	0xc0cba857, 0x45c8740f, 0xd20b5f39, 0xb9d3fbdb,
	0x5579c0bd, 0x1a60320a, 0xd6a100c6, 0x402c7279,
	0x679f25fe, 0xfb1fa3cc, 0x8ea5e9f8, 0xdb3222f8,
	0x3c7516df, 0xfd616b15, 0x2f501ec8, 0xad0552ab,
	0x323db5fa, 0xfd238760, 0x53317b48, 0x3e00df82,
	0x9e5c57bb, 0xca6f8ca0, 0x1a87562e, 0xdf1769db,
	0xd542a8f6, 0x287effc3, 0xac6732c6, 0x8c4f5573,
	0x695b27b0, 0xbbca58c8, 0xe1ffa35d, 0xb8f011a0,
	0x10fa3d98, 0xfd2183b8, 0x4afcb56c, 0x2dd1d35b,
	0x9a53e479, 0xb6f84565, 0xd28e49bc, 0x4bfb9790,
	0xe1ddf2da, 0xa4cb7e33, 0x62fb1341, 0xcee4c6e8,
	0xef20cada, 0x36774c01, 0xd07e9efe, 0x2bf11fb4,
	0x95dbda4d, 0xae909198, 0xeaad8e71, 0x6b93d5a0,
	0xd08ed1d0, 0xafc725e0, 0x8e3c5b2f, 0x8e7594b7,
	0x8ff6e2fb, 0xf2122b64, 0x8888b812, 0x900df01c,
	0x4fad5ea0, 0x688fc31c, 0xd1cff191, 0xb3a8c1ad,
	0x2f2f2218, 0xbe0e1777, 0xea752dfe, 0x8b021fa1,
	0xe5a0cc0f, 0xb56f74e8, 0x18acf3d6, 0xce89e299,
	0xb4a84fe0, 0xfd13e0b7, 0x7cc43b81, 0xd2ada8d9,
	0x165fa266, 0x80957705, 0x93cc7314, 0x211a1477,
	0xe6ad2065, 0x77b5fa86, 0xc75442f5, 0xfb9d35cf,
	0xebcdaf0c, 0x7b3e89a0, 0xd6411bd3, 0xae1e7e49,
	0x00250e2d, 0x2071b35e, 0x226800bb, 0x57b8e0af,
	0x2464369b, 0xf009b91e, 0x5563911d, 0x59dfa6aa,
	0x78c14389, 0xd95a537f, 0x207d5ba2, 0x02e5b9c5,
	0x83260376, 0x6295cfa9, 0x11c81968, 0x4e734a41,
	0xb3472dca, 0x7b14a94a, 0x1b510052, 0x9a532915,
	0xd60f573f, 0xbc9bc6e4, 0x2b60a476, 0x81e67400,
	0x08ba6fb5, 0x571be91f, 0xf296ec6b, 0x2a0dd915,
	0xb6636521, 0xe7b9f9b6, 0xff34052e, 0xc5855664,
	0x53b02d5d, 0xa99f8fa1, 0x08ba4799, 0x6e85076a
};


// End Global Constants
/******************************************************************************/


/*
********************************************************************************
*********************
* Types Definitions *
*********************


*/
typedef int			CWar3Int;
typedef int			CWar3Flags;
typedef float		CWar3Float;
typedef char		CWar3Char;
typedef CString		CWar3String;

// Auhtor name string
typedef char AUTHORNAME[W3Z_MAX_NAME_LENGTH];

// protection structure 1
typedef struct 
{
	int iProtectID;
	unsigned int uHashAPass;
	unsigned int uHashPPass;
	AUTHORNAME acAuthName;
	int iChecksum;
} W3ZPROTECTDATA01;
const int W3ZPROTECTDATA01_LENGTH	= sizeof(W3ZPROTECTDATA01);

// protection structure 2 (without author name)
typedef struct 
{
	int iProtectID;
	unsigned int uHashAPass;
	unsigned int uHashPPass;
	int iChecksum;
} W3ZPROTECTDATA02;
const int W3ZPROTECTDATA02_LENGTH	= sizeof(W3ZPROTECTDATA02);

// PUD conversion: section header
typedef struct
{
	char acSectionID[4];
	UINT iSectionSize;
} W2PUDSECTIONHEADER;
const int W2PUDSECTIONHEADER_LENGTH	= sizeof(W2PUDSECTIONHEADER);

// StarCraft CHK conversion: section header
typedef struct
{
	char acSectionID[4];
	UINT iSectionSize;
} SCCHKSECTIONHEADER;
const int SCCHKSECTIONHEADER_LENGTH	= sizeof(SCCHKSECTIONHEADER);

// End Types Definitions
/******************************************************************************/


/*
********************************************************************************
**********
* Macros *
**********
*/


#define W3Z_ERROR(szErrorMsg) \
	AfxMessageBox(szErrorMsg, MB_OK | MB_APPLMODAL | MB_ICONSTOP);
#define W3Z_WARNING(szWarningMsg) \
	AfxMessageBox(szWarningMsg, MB_OK | MB_APPLMODAL | MB_ICONEXCLAMATION);
#define W3Z_INFO(szWarningMsg) \
	AfxMessageBox(szWarningMsg, MB_OK | MB_APPLMODAL | MB_ICONINFORMATION);

#define WIN_CR "\r\n"

// End Macros
/******************************************************************************/

#endif // !defined(WARTYPES__INCLUDED_)