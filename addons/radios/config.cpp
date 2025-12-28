#include "script_component.hpp"

class CfgPatches {
	class ADDON {
		author = AUTHOR;
		name = COMPONENT_NAME;
		requiredVersion = REQUIRED_VERSION;
		url = URL;
		authors[]= {"Cassius"};
		requiredAddons[] = {"tqc_core", "tfar_core"};
		units[] = {};
		weapons[] = {"tqc_radio_mpu5"};
		VERSION_CONFIG;
		skipWhenMissingDependencies = 1;
	};
};

#include "ui\mpu5.hpp"
class CfgWeapons {
	#include "CfgWeapons.hpp"
};
