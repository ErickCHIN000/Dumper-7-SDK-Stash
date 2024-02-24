#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x1 - 0x0)
// Function UMG_DynamicQuestOption.UMG_DynamicQuestOption_C.PreConstruct
struct UUMG_DynamicQuestOption_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function UMG_DynamicQuestOption.UMG_DynamicQuestOption_C.BndEvt__UMG_QuestRewardOption_ClaimButtoin_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature
struct UUMG_DynamicQuestOption_C_BndEvt__UMG_QuestRewardOption_ClaimButtoin_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature_Params
{
public:
	class UUMG_ButtonBase_C*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A8 (0x1A8 - 0x0)
// Function UMG_DynamicQuestOption.UMG_DynamicQuestOption_C.ExecuteUbergraph_UMG_DynamicQuestOption
struct UUMG_DynamicQuestOption_C_ExecuteUbergraph_UMG_DynamicQuestOption_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EDynamicQuestDifficulty           Temp_byte_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_43BF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x8(0x18)(None)
	class FText                                  Temp_text_Variable_1;                              // 0x20(0x18)(None)
	class FText                                  Temp_text_Variable_2;                              // 0x38(0x18)(None)
	class FText                                  Temp_text_Variable_3;                              // 0x50(0x18)(None)
	enum class EDynamicQuestDifficulty           Temp_byte_Variable_1;                              // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_43CA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable_4;                              // 0x70(0x18)(None)
	class FText                                  Temp_text_Variable_5;                              // 0x88(0x18)(None)
	class FText                                  Temp_text_Variable_6;                              // 0xA0(0x18)(None)
	class FText                                  Temp_text_Variable_7;                              // 0xB8(0x18)(None)
	bool                                         K2Node_Event_IsDesignTime;                         // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_43E0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUMG_ButtonBase_C*                     K2Node_ComponentBoundEvent_Button;                 // 0xD8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDynamicQuest                         CallFunc_GetDynamicQuestsStruct_DynamicQuests;     // 0xE0(0x90)(None)
	enum class EValid                            CallFunc_GetDynamicQuestsStruct_Paths;             // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x171(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValidSoftObjectReference_ReturnValue;   // 0x172(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_43F0[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0x178(0x18)(None)
	class FText                                  K2Node_Select_Default_1;                           // 0x190(0x18)(None)
};

// 0x18 (0x18 - 0x0)
// Function UMG_DynamicQuestOption.UMG_DynamicQuestOption_C.QuestSelected__DelegateSignature
struct UUMG_DynamicQuestOption_C_QuestSelected__DelegateSignature_Params
{
public:
	struct FDynamicQuestsRowHandle               Quest;                                             // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

}
}


