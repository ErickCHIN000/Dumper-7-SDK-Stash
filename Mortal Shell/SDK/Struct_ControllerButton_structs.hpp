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

// 0x90 (0x90 - 0x0)
// UserDefinedStruct Struct_ControllerButton.Struct_ControllerButton
struct FStruct_ControllerButton
{
public:
	enum class EControllerButton                 ButtonType_2_5CDDDE144CDE53A2848D628D78D914A1;     // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_22E7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  DisplayText_5_B7141A1E4DB5640C13AB199B112D2B8C;    // 0x8(0x18)(Edit, BlueprintVisible)
	class FText                                  DisplayTextLeft_21_A1BF11EA46ABD685BEDD658A9B1B8E77; // 0x20(0x18)(Edit, BlueprintVisible)
	bool                                         EditorShowKBVersion_8_E9160396427C9C4170CE01855DF7970A; // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EHintKBBehaviour                  KBBehaviour_12_99D5F03742A7119352598E87CD3D7654;   // 0x39(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2301[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            KBVersionImg_15_D1C3E1E54D48F46FE7757AACE7136CFC;  // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PrintDebug_18_47955AA84B91F173E9FB71AA8DC9A78D;    // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_230A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LeftPadding_24_7B61D0FB47620660E5D72081FA102FEF;   // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsDynamicPrompt_30_175979CD4262C768654F7BAC1A439CF1; // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2315[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ActionName_29_C3F169834935B780F8BF0383AFE18F1B;    // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                ActionName_2_33_654534654B93DFD99C2C1EBB4DC5FE14;  // 0x68(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	bool                                         KeyboardHasOwnActionName_38_9CC761944F8C405803F51FB72138BCA8; // 0x78(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2335[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                ActionName_Keyboard_36_C3BB64B740B98D51BB264083544B1AE6; // 0x80(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
};

}


