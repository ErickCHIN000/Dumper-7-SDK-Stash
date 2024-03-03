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

// 0x3C (0x3C - 0x0)
// UserDefinedStruct s_input_axis.s_input_axis
struct FS_input_axis
{
public:
	class FName                                  Visual_positive_name_61_EA773239474E8B4407D7FF88F93C099F; // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Visual_negative_name_62_31F89FA4478C01095EA32A918CDA2FBC; // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FKey>                          Axis_pc_68_9F0FB6FE4C74AC8F15CB5C92CDB495E2;       // 0x10(0x10)(Edit, BlueprintVisible)
	TArray<struct FKey>                          Axis_gamepad_69_BFB9F8F64A8691FD82E4BCA6FB7C5CA7;  // 0x20(0x10)(Edit, BlueprintVisible)
	bool                                         Is_trigger_64_9AC8A5C44AB4D41A8B3F6DBF3D9D554C;    // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_EE5[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Input_category_73_D4FCE5CC4E49FBDF81082B8E5CE1F6FF; // 0x34(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


