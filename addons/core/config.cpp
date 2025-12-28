#include "script_component.hpp"

class CfgPatches {
	class ADDON {
		author = AUTHOR;
		name = COMPONENT_NAME;
		requiredVersion = REQUIRED_VERSION;
		url = URL;
		authors[]= {"Cassius"};
		requiredAddons[] = {"cba_main"};
		units[] = {};
		weapons[] = {};
		VERSION_CONFIG;
	};
};

#include "CfgSettings.hpp"
