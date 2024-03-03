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

// 0x98 (0x98 - 0x0)
// UserDefinedStruct s_dlg_branch_settings.s_dlg_branch_settings
struct FS_dlg_branch_settings
{
public:
	struct FS_dlg_branch_override                Override_flags_44_637E7F8C480026CCAA8D52B7835810FC; // 0x0(0x6)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B53[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_dlg_shared                         Shared_start_56_BB15BDB84A75FEBA5E29FFBA73CE0F18;  // 0x8(0x40)(Edit, BlueprintVisible, HasGetValueTypeHash)
	struct FS_dlg_shared                         Shared_end_55_9FB08A874C4D64AFFE2854BF00279144;    // 0x48(0x40)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class UClass*                                Dlg_position_48_2972F3154701F63F5B7295A53238CFF8;  // 0x88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_dlg_mode                     Dlg_mode_4_557987A3402D1CE77E137590763D3D49;       // 0x90(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_dlg_camera_mode              Camera_mode_40_1C561C4E450CDDDAC8F9DD9F256DDD89;   // 0x91(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_dlg_skip                     Reply_mode_47_D68A9A7B435FE8766A67B58924BAD82B;    // 0x92(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_dlg_subtitle_mode            Subtitle_mode_32_90E997574D5B9EEADE31DE97C4670D93; // 0x93(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Subtitle_priority_21_0B38D02141E141B1D72A33A3617256AC; // 0x94(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


