#define _ARMA_

class CfgPatches
{
	class Dada_ALV_Retextures
	{
		requiredAddons[] = {"DZ_Data","DZ_Scripts","ALV_Better_Clothes"};
		units[] = {};
		weapons[] = {};
	};
};
class CfgMods
{
	class Dada_ALV_Retextures
	{
		dir = "Dada_ALV_Retextures";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "Dada_ALV_Retextures";
		credits = "";
		author = "Dada";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = {"Game","World","Mission"};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"\Source_Files\Dada_ALV_Retextures\scripts\3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"\Source_Files\Dada_ALV_Retextures\scripts\4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"\Source_Files\Dada_ALV_Retextures\scripts\5_Mission"};
			};
		};
	};
};