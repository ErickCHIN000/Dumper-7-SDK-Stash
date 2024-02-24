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

// 0x30 (0x30 - 0x0)
// UserDefinedStruct st_DialogueAnimationData.st_DialogueAnimationData
struct FSt_DialogueAnimationData
{
public:
	bool                                         Used_17_571CEF664F6C6D7BC8880382516658E1;          // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsFullBody_8_C942C9E74B58FD93EB32D4912489E40B;     // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_193A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DelayInSeconds_5_170E69734200C9D044F9489B8C1154AB; // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        GestureID_11_82339832446036098462CE9712D777B2;     // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bShouldUseDialogueAnimBP_27_3847680549B382EE963E8A87BD95431D; // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bShouldRemainIfLast_31_79D8AF664F635DF893E3D9A16440A2E3; // 0xD(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1947[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimSequence*                         IdlePose_20_0F9033E74A0E621D4458D8BCF1597B35;      // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         IdleAdditive_22_4D1149E84FF100F0F1A1BD886DE9EF5B;  // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         Transition_24_7504256644DDAABA84E93EB8F8DCE2A7;    // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimSequence*                         CustomGesture_34_3B5947AA4430AB525A3D4DBBA2232D43; // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


