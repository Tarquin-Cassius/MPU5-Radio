class ItemRadio;
class tqc_radio_mpu5 : ItemRadio {
    SCOPE_PUBLIC;
    author = AUTHOR;
    displayName = "MPU5 Handheld Radio";
    descriptionShort = "Description of item goes here, but idk what to write.";

    tf_prototype = 1;
    tf_range = 7500;
    tf_subtype = "digital";
    tf_additional_channel = 1;
    tf_dialog = "tqc_radios_mpu5";
    tf_dialogUpdate = "call TFAR_fnc_updateSWDialogToChannel";
    tf_encryptionCode = "tf_west_radio_code";
    tf_parent = "tqc_radio_mpu5";
};

TF_RADIO_IDS(tqc_radio_mpu5,MPU5 Handheld Radio])
