// SR Extention
#define TF_RADIO_ID_full(baseClass,displayNameBase) class baseClass##_1 : baseClass \
    { \
        displayName = QUOTE(displayNameBase 1); \
        scope = 1; \
        scopeCurator = 1; \
        scopeArsenal = 1; \
        ace_arsenal_hide = 1; \
        tf_prototype = 0; \
        tf_radio = 1; \
        ace_arsenal_uniqueBase = QUOTE(baseClass); \
    };

#define TF_RADIO_IDS_1(baseClass,displayNameBase,index) class baseClass##_##index : baseClass##_1 \
{ \
    displayName = QUOTE(displayNameBase index); \
};

#define TF_RADIO_IDS_10(baseClass,displayNameBase,index10) \
    TF_RADIO_IDS_1(baseClass,displayNameBase,index10##0) \
    TF_RADIO_IDS_1(baseClass,displayNameBase,index10##1) \
    TF_RADIO_IDS_1(baseClass,displayNameBase,index10##2) \
    TF_RADIO_IDS_1(baseClass,displayNameBase,index10##3) \
    TF_RADIO_IDS_1(baseClass,displayNameBase,index10##4) \
    TF_RADIO_IDS_1(baseClass,displayNameBase,index10##5) \
    TF_RADIO_IDS_1(baseClass,displayNameBase,index10##6) \
    TF_RADIO_IDS_1(baseClass,displayNameBase,index10##7) \
    TF_RADIO_IDS_1(baseClass,displayNameBase,index10##8) \
    TF_RADIO_IDS_1(baseClass,displayNameBase,index10##9)

#define TF_RADIO_IDS_100(baseClass,displayNameBase,index100) \
    TF_RADIO_IDS_10(baseClass,displayNameBase,index100##0) \
    TF_RADIO_IDS_10(baseClass,displayNameBase,index100##1) \
    TF_RADIO_IDS_10(baseClass,displayNameBase,index100##2) \
    TF_RADIO_IDS_10(baseClass,displayNameBase,index100##3) \
    TF_RADIO_IDS_10(baseClass,displayNameBase,index100##4) \
    TF_RADIO_IDS_10(baseClass,displayNameBase,index100##5) \
    TF_RADIO_IDS_10(baseClass,displayNameBase,index100##6) \
    TF_RADIO_IDS_10(baseClass,displayNameBase,index100##7) \
    TF_RADIO_IDS_10(baseClass,displayNameBase,index100##8) \
    TF_RADIO_IDS_10(baseClass,displayNameBase,index100##9)


#define TF_RADIO_IDS_999(baseClass,displayNameBase) \
    TF_RADIO_IDS_1(baseClass,displayNameBase,2) \
    TF_RADIO_IDS_1(baseClass,displayNameBase,3) \
    TF_RADIO_IDS_1(baseClass,displayNameBase,4) \
    TF_RADIO_IDS_1(baseClass,displayNameBase,5) \
    TF_RADIO_IDS_1(baseClass,displayNameBase,6) \
    TF_RADIO_IDS_1(baseClass,displayNameBase,7) \
    TF_RADIO_IDS_1(baseClass,displayNameBase,8) \
    TF_RADIO_IDS_1(baseClass,displayNameBase,9) \
    TF_RADIO_IDS_10(baseClass,displayNameBase,1) \
    TF_RADIO_IDS_10(baseClass,displayNameBase,2) \
    TF_RADIO_IDS_10(baseClass,displayNameBase,3) \
    TF_RADIO_IDS_10(baseClass,displayNameBase,4) \
    TF_RADIO_IDS_10(baseClass,displayNameBase,5) \
    TF_RADIO_IDS_10(baseClass,displayNameBase,6) \
    TF_RADIO_IDS_10(baseClass,displayNameBase,7) \
    TF_RADIO_IDS_10(baseClass,displayNameBase,8) \
    TF_RADIO_IDS_10(baseClass,displayNameBase,9) \
    TF_RADIO_IDS_100(baseClass,displayNameBase,1) \
    TF_RADIO_IDS_100(baseClass,displayNameBase,2) \
    TF_RADIO_IDS_100(baseClass,displayNameBase,3) \
    TF_RADIO_IDS_100(baseClass,displayNameBase,4) \
    TF_RADIO_IDS_100(baseClass,displayNameBase,5) \
    TF_RADIO_IDS_100(baseClass,displayNameBase,6) \
    TF_RADIO_IDS_100(baseClass,displayNameBase,7) \
    TF_RADIO_IDS_100(baseClass,displayNameBase,8) \
    TF_RADIO_IDS_100(baseClass,displayNameBase,9) \
    TF_RADIO_IDS_1(baseClass,displayNameBase,1000)

#define TF_RADIO_IDS(baseClass,displayNameBase) \
    TF_RADIO_ID_full(baseClass,displayNameBase) \
    TF_RADIO_IDS_999(baseClass,displayNameBase)


// UI Defines
#define IDD_mpu5 70100

#define IDC_RADIO_ENTER 70101
#define IDC_RADIO_CLEAR 70102
#define IDC_RADIO_CHANNEL_SWITCH 70103
#define IDC_RADIO_INCREASE_VOLUME 70104
#define IDC_RADIO_DECREASE_VOLUME 70105
#define IDC_RADIO_STEREO 70106
#define IDC_RADIO_CHANNEL_01 70107
#define IDC_RADIO_CHANNEL_02 70108
#define IDC_RADIO_CHANNEL_03 70109
#define IDC_RADIO_CHANNEL_04 70110
#define IDC_RADIO_CHANNEL_05 70111
#define IDC_RADIO_CHANNEL_06 70112
#define IDC_RADIO_CHANNEL_07 70113
#define IDC_RADIO_CHANNEL_08 70114
#define IDC_RADIO_CHANNEL_09 70115
#define IDC_RADIO_ADDITIONAL 70116
#define IDC_RADIO_SPEAKERS 70117
#define IDC_RADIO_NEXT_CHANNEL 70118
#define IDC_RADIO_PREVIOUS_CHANNEL 70119

// TFAR macros
#define TFAR_IDC_BACKGROUND 67676
#define TFAR_IDC_EDIT_LR 1410
#define TFAR_IDC_CHANNEL_LR 1411
#define TFAR_IDC_EDIT_SR 1400
#define TFAR_IDC_CHANNEL_SR 1604
#define TFAR_MAX_STEREO 3

// Used for channel_X buttons, index is channel number - 1
#define CHANNEL_BUTTON(index) QUOTE([ARR_2(TF_lr_dialog_radio,index)] call TFAR_fnc_setLrChannel; [""CH:%1""] call TFAR_fnc_updateLRDialogToChannel; [ARR_2(TF_lr_dialog_radio,true)] call TFAR_fnc_showRadioInfo;)

#define STEREO_BUTTON_SR QUOTE([ARR_2(TF_sw_dialog_radio,((TF_sw_dialog_radio call TFAR_fnc_getCurrentSwStereo) + 1) mod TFAR_MAX_STEREO)] call TFAR_fnc_setSwStereo; [TF_sw_dialog_radio] call TFAR_fnc_showRadioVolume;)
#define STEREO_BUTTON_LR QUOTE([ARR_2(TF_lr_dialog_radio,((TF_lr_dialog_radio call TFAR_fnc_getCurrentLrStereo) + 1) mod TFAR_MAX_STEREO)] call TFAR_fnc_setLrStereo; [TF_lr_dialog_radio] call TFAR_fnc_showRadioVolume;)

#define ADDITIONAL_BUTTON_SR QUOTE([ARR_2(TF_sw_dialog_radio,TF_sw_dialog_radio call TFAR_fnc_getSwChannel)] call TFAR_fnc_setAdditionalSwChannel; call TFAR_fnc_updateSWDialogToChannel; [ARR_2(TF_sw_dialog_radio,false)] call TFAR_fnc_showRadioInfo;)
#define ADDITIONAL_BUTTON_LR QUOTE([ARR_2(TF_lr_dialog_radio,TF_lr_dialog_radio call TFAR_fnc_getLrChannel)] call TFAR_fnc_setAdditionalLrChannel; call TFAR_fnc_updateLRDialogToChannel; [ARR_2(TF_lr_dialog_radio,true)] call TFAR_fnc_showRadioInfo;)

#define SPEAKERS_BUTTON_SR QUOTE(playSound 'TFAR_rotatorPush'; [TF_sw_dialog_radio] call TFAR_fnc_setSwSpeakers; [TF_sw_dialog_radio] call TFAR_fnc_showRadioSpeakers;)
#define SPEAKERS_BUTTON_LR QUOTE(playSound 'TFAR_rotatorPush'; TF_lr_dialog_radio call TFAR_fnc_setLrSpeakers; [TF_lr_dialog_radio] call TFAR_fnc_showRadioSpeakers;)

#define ENTER_BUTTON_SR QUOTE([((ctrlParent (_this select 0))) displayCtrl TFAR_IDC_EDIT_SR] call TFAR_handhelds_fnc_onButtonClick_Enter)
#define ENTER_BUTTON_LR QUOTE(playSound 'TFAR_rotatorPush'; [((ctrlParent (_this select 0))) displayCtrl TFAR_IDC_EDIT_LR] call TFAR_backpacks_fnc_onButtonClick_Enter)

// "Clear Channel" action, takes display IDD
#define CLEAR_CHANNEL_SR(IDD) QUOTE(ctrlSetText [ARR_2(TFAR_IDC_EDIT_SR,'')]; ctrlSetFocus ((findDisplay IDD) displayCtrl TFAR_IDC_EDIT_SR);)
#define CLEAR_CHANNEL_LR(IDD) QUOTE(ctrlSetText [ARR_2(TFAR_IDC_EDIT_LR,'')]; ctrlSetFocus ((findDisplay IDD) displayCtrl TFAR_IDC_EDIT_LR);)

#define INCREASE_VOLUME QUOTE([ARR_2(1,true)] call TFAR_fnc_setVolumeViaDialog;)
#define DECREASE_VOLUME QUOTE([ARR_2(0,true)] call TFAR_fnc_setVolumeViaDialog;)


