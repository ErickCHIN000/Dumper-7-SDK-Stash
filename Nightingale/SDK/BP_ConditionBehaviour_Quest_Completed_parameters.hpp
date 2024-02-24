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

// 0xB8 (0xB8 - 0x0)
// Function BP_ConditionBehaviour_Quest_Completed.BP_ConditionBehaviour_Quest_Completed_C.GetDebugText
struct UBP_ConditionBehaviour_Quest_Completed_C_GetDebugText_Params
{
public:
	class FText                                  Description;                                       // 0x0(0x18)(Parm, OutParm)
	class FString                                CallFunc_GetDebugStringFromQuestAssetReference_ReturnValue; // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x28(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x40(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x90(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xA0(0x18)(None)
};

// 0x8E (0x8E - 0x0)
// Function BP_ConditionBehaviour_Quest_Completed.BP_ConditionBehaviour_Quest_Completed_C.OnQuestCompleted
struct UBP_ConditionBehaviour_Quest_Completed_C_OnQuestCompleted_Params
{
public:
	struct FQuestAssetReference                  Quest;                                             // 0x0(0x70)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         bIsSatisfied;                                      // 0x70(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F45[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FConditionPersistentData              CallFunc_MakeConditionPersistentDataFromBool_ReturnValue; // 0x74(0x8)(NoDestructor)
	bool                                         CallFunc_IsComplete_ReturnValue;                   // 0x7C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F54[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FConditionPersistentData              CallFunc_MakeConditionPersistentDataFromBool_ReturnValue_1; // 0x80(0x8)(NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x89(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsComplete_ReturnValue_1;                 // 0x8A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x8B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x8C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsQuestCompleted_ReturnValue;             // 0x8D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_ConditionBehaviour_Quest_Completed.BP_ConditionBehaviour_Quest_Completed_C.SetContextObject
struct UBP_ConditionBehaviour_Quest_Completed_C_SetContextObject_Params
{
public:
	class UObject*                               ContextObject;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0xD0 (0xD0 - 0x0)
// Function BP_ConditionBehaviour_Quest_Completed.BP_ConditionBehaviour_Quest_Completed_C.ExecuteUbergraph_BP_ConditionBehaviour_Quest_Completed
struct UBP_ConditionBehaviour_Quest_Completed_C_ExecuteUbergraph_BP_ConditionBehaviour_Quest_Completed_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x14(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3070[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               K2Node_Event_ContextObject;                        // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IQuestTrackerProviderInterface> K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface; // 0x30(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3086[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IQuestTrackerInterface> CallFunc_GetQuestTracker_ReturnValue;              // 0x48(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	uint8                                        Pad_308D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuestAssetReference                  Temp_struct_Variable;                              // 0x60(0x70)(None)
};

}
}


