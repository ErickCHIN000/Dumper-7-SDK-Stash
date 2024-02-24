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

// 0xB0 (0xB0 - 0x0)
// Function WBP_Quests_QuestEntry.WBP_Quests_QuestEntry_C.SetTaskProgress
struct UWBP_Quests_QuestEntry_C_SetTaskProgress_Params
{
public:
	struct FOngoingTaskProgress                  NewTaskProgress;                                   // 0x0(0xB0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0xB0 (0xB0 - 0x0)
// Function WBP_Quests_QuestEntry.WBP_Quests_QuestEntry_C.GetTaskProgress
struct UWBP_Quests_QuestEntry_C_GetTaskProgress_Params
{
public:
	struct FOngoingTaskProgress                  TaskProgress;                                      // 0x0(0xB0)(Parm, OutParm)
};

// 0x1 (0x1 - 0x0)
// Function WBP_Quests_QuestEntry.WBP_Quests_QuestEntry_C.SetContractState
struct UWBP_Quests_QuestEntry_C_SetContractState_Params
{
public:
	enum class E_Contract_StateType              NewContractState;                                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_Quests_QuestEntry.WBP_Quests_QuestEntry_C.GetContractState
struct UWBP_Quests_QuestEntry_C_GetContractState_Params
{
public:
	enum class E_Contract_StateType              ContractState;                                     // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x70 (0x70 - 0x0)
// Function WBP_Quests_QuestEntry.WBP_Quests_QuestEntry_C.ExecuteUbergraph_WBP_Quests_QuestEntry
struct UWBP_Quests_QuestEntry_C_ExecuteUbergraph_WBP_Quests_QuestEntry_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5458[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuestPresentationData                CallFunc_MakeQuestPresentationDataFromTaskProgress_OutQuestPresentationData; // 0x8(0x48)(None)
	bool                                         CallFunc_MakeQuestPresentationDataFromTaskProgress_ReturnValue; // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_545D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_UI_Text_TruncationCheck_ReturnValue;      // 0x58(0x18)(None)
};

// 0xC1 (0xC1 - 0x0)
// Function WBP_Quests_QuestEntry.WBP_Quests_QuestEntry_C.QuestEntryHovered__DelegateSignature
struct UWBP_Quests_QuestEntry_C_QuestEntryHovered__DelegateSignature_Params
{
public:
	bool                                         Hovered;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5485[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOngoingTaskProgress                  TaskProgress;                                      // 0x10(0xB0)(BlueprintVisible, BlueprintReadOnly, Parm)
	enum class E_Contract_StateType              State;                                             // 0xC0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB1 (0xB1 - 0x0)
// Function WBP_Quests_QuestEntry.WBP_Quests_QuestEntry_C.QuestEntrySelected__DelegateSignature
struct UWBP_Quests_QuestEntry_C_QuestEntrySelected__DelegateSignature_Params
{
public:
	struct FOngoingTaskProgress                  TaskProgress;                                      // 0x0(0xB0)(BlueprintVisible, BlueprintReadOnly, Parm)
	enum class E_Contract_StateType              State;                                             // 0xB0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


