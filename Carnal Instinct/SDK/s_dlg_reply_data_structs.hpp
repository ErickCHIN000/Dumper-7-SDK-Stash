#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x100 (0x100 - 0x0)
// UserDefinedStruct s_dlg_reply_data.s_dlg_reply_data
struct FS_dlg_reply_data
{
public:
	struct FS_dlg_cinematic_info                 Cinematic_info_23_CF6F3416497D5A22E6634BA8AC3BCE8B; // 0x0(0x28)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FS_dlg_camera_info                    Camera_info_38_8C532D2A46EEEEAA566498A7EC90430D;   // 0x28(0x40)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_dlg_shared                         Shared_start_43_91B3A9BB49F869D832E4FC8A7B919B24;  // 0x68(0x40)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FS_dlg_shared                         Shared_end_44_2A3E39A14D35B30998DE8098D028CCB7;    // 0xA8(0x40)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FS_dlg_reply_settings                 Reply_settings_46_BE5376EE40431DA6EF12668819D2F35D; // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_dlg_reply_entry>            Reply_info_5_68CEE7D84A54AF31D160599376640E9A;     // 0xF0(0x10)(Edit, BlueprintVisible)
};

}


