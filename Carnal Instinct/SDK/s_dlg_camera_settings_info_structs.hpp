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

// 0x20 (0x20 - 0x0)
// UserDefinedStruct s_dlg_camera_settings_info.s_dlg_camera_settings_info
struct FS_dlg_camera_settings_info
{
public:
	float                                        blend_in_9_5F91C9474854D06E77FF8EB9E1DAF431;       // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        blend_out_10_CC65080E4DA852AC95DA20B497112AE9;     // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Transform_interp_16_08EB05A340A539C4D12789AD4A81E957; // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Data_interp_17_BAB9E17144DE8809D8A38A997447B87E;   // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Constraint_aspect_ratio_23_B69E950F4587DD6834783BAEC07724A7; // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Override_control_rotation_25_23C0CA554195287EC1DA3AA4A3199AD3; // 0x11(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Lock_outgoing_27_887620424ABCFA359330219A4D0A119E; // 0x12(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Update_post_process_32_9248D5034F2B185FEBD2CD88C005F9FE; // 0x13(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Update_animation_33_2E6287054747629099FABDAE47A2A975; // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1408[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCameraAnim*                           Camera_animation_29_B222496F4DBA21AFF31CA4990CC9E846; // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


