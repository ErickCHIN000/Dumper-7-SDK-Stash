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

// 0x68 (0x68 - 0x0)
// UserDefinedStruct Struct_DT_NPC_Dialogue.Struct_DT_NPC_Dialogue
struct FStruct_DT_NPC_Dialogue
{
public:
	int32                                        ID_28_58304DCC4B780C66C42E9ABE8E4A8ECF;            // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Category_2_AF44439943AE71137F27E1A427422967;       // 0x4(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  SubMinusCategory_4_49B694B048B5BA694F1E6EB59773232F; // 0xC(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_DialogueType                 Type_31_1DE8DB98445AE72C33B242AB4764BBC1;          // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_194C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Text_20_CF3A47F14B6E169D4F028CB0FC1A2AA9;          // 0x18(0x18)(Edit, BlueprintVisible)
	float                                        Duration_23_D48D93B74199B1D953EEABB8C91B4340;      // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FollowUpID_29_A1B521A54ABFDD66FB7A33A16F609A18;    // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UAnimMontage*>                  ActiveAnimations_37_E502FF03427CEF352899EE99430B5BDB; // 0x38(0x10)(Edit, BlueprintVisible)
	TArray<class UAnimMontage*>                  PassiveAnimations_40_06373B774384DDB7D71ACD822B44A449; // 0x48(0x10)(Edit, BlueprintVisible)
	TArray<struct FStruct_DialogueClip>          AudioClips_16_3F0FDF6C482ADCFDAC2CF186D9F2D250;    // 0x58(0x10)(Edit, BlueprintVisible)
};

}


