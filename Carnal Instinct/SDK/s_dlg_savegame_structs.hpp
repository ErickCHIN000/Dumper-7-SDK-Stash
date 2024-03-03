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

// 0x645 (0x645 - 0x0)
// UserDefinedStruct s_dlg_savegame.s_dlg_savegame
struct FS_dlg_savegame
{
public:
	class FName                                  Dlg_unique_id_2_6BDF84C94192FE22C9B851B2720DC5DB;  // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Dlg_current_data_4_49B81E1748B04FCFF18EFA9489D001EF; // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Dlg_current_branch_6_FB6D74E34DF9307252F25DBA0D470A67; // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_dlg_bind_actor_settings            Dlg_actor_settings_93_CC8A69A4435AB67244AF1D99980D2A1A; // 0x18(0x20)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FS_dlg_branch_settings                Dlg_branch_settings_15_C871E3794A327F9769A71ABCDC1560E6; // 0x38(0x98)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FS_dlg_start_dynamic_info             Dlg_dynamic_settings_96_CB8E499F40B584D0C31F55988BA68D17; // 0xD0(0x110)(Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
	struct FS_dlg_distance_settings              Dlg_distance_settings_26_E175E4464F1BC8BBC8A4D29FCD05A81B; // 0x1E0(0x1A)(Edit, BlueprintVisible, HasGetValueTypeHash)
	uint8                                        Pad_1A19[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Is_distance_enabled_27_BCB1D8F640B194E8C279B3B39DD87467; // 0x200(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Is_distance_far_30_7CF9DEEB4C7DBFDE0279DAB869877A65; // 0x201(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Is_dlg_active_22_2C78487243C5D3501A4C7EBD5B7150AA; // 0x202(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class Enum_dlg_start                    Dlg_status_90_04EA6FA54CB41D4444EF9C8E40115A25;    // 0x203(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1A35[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FS_dlg_bind_actor_info>        Actor_dynamic_38_C6FA086243FF43E306B447ABF4ACA485; // 0x208(0x10)(Edit, BlueprintVisible, ContainsInstancedReference)
	TArray<struct FS_dlg_branch_storage>         Dlg_branch_storage_72_BE9B4DF14B435EF04E8B87AE002F92C0; // 0x218(0x10)(Edit, BlueprintVisible)
	struct FS_dlg_branch_reply                   Dlg_active_reply_79_2F362DB34A4ACDABEEE91180DB5CE740; // 0x228(0xA0)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FS_dlg_branch_reply                   Dlg_latest_active_reply_49_3B07006144AECDF8ABAE4AB157D96B22; // 0x2C8(0xA0)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FS_dlg_branch_choice_data             Dlg_latest_active_choice_54_6FC6270B46420AE72F6024904D8A4B63; // 0x368(0x1B8)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FS_dlg_camera_info                    Dlg_latest_active_camera_83_C3A439EE4C77E39FE753EBB25DB108BD; // 0x520(0x40)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_dlg_reply_info                     Dlg_latest_reply_94_4CD341734DE539008239508BDF25A1FE; // 0x560(0xD4)(Edit, BlueprintVisible, HasGetValueTypeHash)
	uint8                                        Pad_1A56[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Dlg_choice_mode_57_A1412AB641247409766B70A9E7370E75; // 0x638(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Dlg_last_reply_59_0737302F4BD5F40715749F8EBD9DABD2; // 0x639(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Dlg_reply_random_62_2D9128D14DBCC33DF398108D9DD3FA73; // 0x63A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1A62[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Dlg_reply_index_48_553CCFE943981469E6775EB3C8C4C2FB; // 0x63C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Dlg_reply_time_65_A6D93763468E7538D92461A675F3B1C6; // 0x640(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Dlg_destroy_on_finish_99_D3C8BF454541A22AE3473BB087E1AD34; // 0x644(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};

}


