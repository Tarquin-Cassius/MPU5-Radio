#define MAINPREFIX x
#define PREFIX tqc
#define MOD_NAME MPU5 TFAR Radio
#define MOD_NAME_BEAUTIFIED QUOTE(MPU5 TFAR Radio)

#define AUTHOR "Cassius"
#define URL "https://github.com/Tarquin-Cassius/MPU5-Radio"

#include "\x\tqc\addons\core\script_version.hpp"

#define VERSION MAJOR
#define VERSION_STR MAJOR.MINOR.PATCHLVL.BUILD
#define VERSION_AR MAJOR,MINOR,PATCHLVL,BUILD

#define REQUIRED_VERSION 2.20
#define REQUIRED_CBA_VERSION {3,18,4}

#define MOD_INFO QUOTE(MOD_NAME | Version VERSION_STR)

// Defines addon names, component names, and beautified component names.
#ifndef COMPONENT_BEAUTIFIED
    #define COMPONENT_BEAUTIFIED COMPONENT
#endif

#ifdef SUBCOMPONENT
    #ifndef SUBCOMPONENT_BEAUTIFIED
        #define SUBCOMPONENT_BEAUTIFIED SUBCOMPONENT
    #endif
    #define COMPONENT_NAME QUOTE(MOD_NAME - COMPONENT_BEAUTIFIED (SUBCOMPONENT_BEAUTIFIED))
#else
    #define COMPONENT_NAME QUOTE(MOD_NAME - COMPONENT_BEAUTIFIED)
#endif
