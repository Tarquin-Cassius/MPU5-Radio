class HiddenButton;
class HiddenRotator;
class RscEditLCD;
class RscBackPicture;

class GVAR(mpu5) {
    idd = IDD_mpu5;
    movingEnable = 1;

    onLoad = QUOTE([ARR_2(_this select 0,'mpu5')] call FUNC(onLoad));
    onUnload = QUOTE([ARR_2(QQGVAR(mpu5),false)] call FUNC(onUnload));

    objects[] = {};
    controls[] = {
        "background", "enter", "edit",
        "channel_edit", "clear", "prev_channel",
        "next_channel", "volume_Switch",
        "stereo", "additional", "speakers"
    };
    controlsBackground[] = {};
    class background: RscBackPicture {
        idc = TFAR_IDC_BACKGROUND;
        text = QPATHTOEF(radios,data\mpu5.paa);
        x = QUOTE(safeZoneX + safeZoneW * 0.267969);
        y = QUOTE(safeZoneY + safeZoneH * 0.128);
        w = QUOTE(safeZoneW * 0.460938);
        h = QUOTE(safeZoneH * 0.793403);
        moving = 1;
    };
    class channel_edit: RscEditLCD {
        idc = TFAR_IDC_CHANNEL_SR;
        moving = 1;
        x = QUOTE(safeZoneX + safeZoneW * 0.355625);
        y = QUOTE(safeZoneY + safeZoneH * 0.357);
        w = QUOTE(safeZoneW * 0.04125);
        h = QUOTE(safeZoneH * 0.055);
        shadow = 2;
        tooltip = "$STR_tfar_core_current_channel";
        canModify = 0;
    };
    class edit: RscEditLCD {
        idc = TFAR_IDC_EDIT_SR;
        moving = 1;
        x = QUOTE(safeZoneX + safeZoneW * 0.432969);
        y = QUOTE(safeZoneY + safeZoneH * 0.357);
        w = QUOTE(safeZoneW * 0.04125);
        h = QUOTE(safeZoneH * 0.055);
        shadow = 2;
        tooltip = "$STR_tfar_core_current_freq";
        canModify = 1;
    };
    class enter: HiddenButton {
        idc = IDC_RADIO_ENTER;
        x = QUOTE(safeZoneX + safeZoneW * 0.603125);
        y = QUOTE(safeZoneY + safeZoneH * 0.434);
        w = QUOTE(safeZoneW * 0.04125);
        h = QUOTE(safeZoneH * 0.055);
        tooltip = "$STR_tfar_core_set_frequency";
        onButtonClick = ENTER_BUTTON_SR;
    };
    class clear: HiddenButton {
        idc = IDC_RADIO_CLEAR;
        x = QUOTE(safeZoneX + safeZoneW * 0.603125);
        y = QUOTE(safeZoneY + safeZoneH * 0.368);
        w = QUOTE(safeZoneW * 0.04125);
        h = QUOTE(safeZoneH * 0.055);
        tooltip = "$STR_tfar_core_clear_frequency";
        action = CLEAR_CHANNEL_SR(IDD_CloneComlink);
    };
    class volume_Switch: HiddenRotator {
        idc = IDC_RADIO_INCREASE_VOLUME;
        x = QUOTE(safeZoneX + safeZoneW * 0.345312);
        y = QUOTE(safeZoneY + safeZoneH * 0.434);
        w = QUOTE(safeZoneW * 0.04125);
        h = QUOTE(safeZoneH * 0.1);
        tooltip = "$STR_tfar_core_rotator_volume";
        // left click increases, right click decreases
        onMouseButtonDown = "[_this select 1, false] call TFAR_fnc_setVolumeViaDialog;";
    };
    class stereo: HiddenButton {
        idc = IDC_RADIO_STEREO;
        x = QUOTE(safeZoneX + safeZoneW * 0.345312);
        y = QUOTE(safeZoneY + safeZoneH * 0.555);
        w = QUOTE(safeZoneW * 0.04125);
        h = QUOTE(safeZoneH * 0.055);
        action = STEREO_BUTTON_SR;
        tooltip = "$STR_tfar_core_stereo_settings";
    };
    class additional: HiddenButton {
        idc = IDC_RADIO_ADDITIONAL;
        x = QUOTE(safeZoneX + safeZoneW * 0.396875);
        y = QUOTE(safeZoneY + safeZoneH * 0.555);
        w = QUOTE(safeZoneW * 0.04125);
        h = QUOTE(safeZoneH * 0.055);
        tooltip = "$STR_tfar_core_set_additional";
        action = ADDITIONAL_BUTTON_SR;
    };
    class speakers: HiddenButton {
        idc = IDC_RADIO_SPEAKERS;
        x = QUOTE(safeZoneX + safeZoneW * 0.448438);
        y = QUOTE(safeZoneY + safeZoneH * 0.555);
        w = QUOTE(safeZoneW * 0.04125);
        h = QUOTE(safeZoneH * 0.055);
        tooltip = "$STR_tfar_core_speakers_settings_true";
        action = SPEAKERS_BUTTON_SR;
    };
    class next_channel: HiddenButton {
        idc = IDC_RADIO_NEXT_CHANNEL;
        x = QUOTE(safeZoneX + safeZoneW * 0.603125);
        y = QUOTE(safeZoneY + safeZoneH * 0.5);
        w = QUOTE(safeZoneW * 0.04125);
        h = QUOTE(safeZoneH * 0.055);
        tooltip = "$STR_tfar_core_next_channel";
        action = "[1, false] call TFAR_fnc_setChannelViaDialog;";
    };
    class prev_channel: HiddenButton {
        idc = IDC_RADIO_PREVIOUS_CHANNEL;
        x = QUOTE(safeZoneX + safeZoneW * 0.603125);
        y = QUOTE(safeZoneY + safeZoneH * 0.555);
        w = QUOTE(safeZoneW * 0.04125);
        h = QUOTE(safeZoneH * 0.055);
        tooltip = "$STR_tfar_core_previous_channel";
        action = "[0, false] call TFAR_fnc_setChannelViaDialog;";
    };
};
