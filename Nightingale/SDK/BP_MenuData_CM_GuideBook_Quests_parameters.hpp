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

// 0xD1 (0xD1 - 0x0)
// Function BP_MenuData_CM_GuideBook_Quests.BP_MenuData_CM_GuideBook_Quests_C.OnQuestAbandoned
struct UBP_MenuData_CM_GuideBook_Quests_C_OnQuestAbandoned_Params
{
public:
	struct FQuestAssetReference                  QuestRowHandle;                                    // 0x0(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UBP_MenuDataEntry_Quests_C*            QuestGuideBookEntry;                               // 0x70(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UNWXMenuDataEntry*>             CachedEntries;                                     // 0x78(0x10)(Edit, BlueprintVisible)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                 CallFunc_GetID_ReturnValue;                        // 0x94(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6685[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNWXMenuDataEntry*                     CallFunc_Array_Get_Item;                           // 0xA8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                 CallFunc_GetUniqueIDFromQuestAssetReference_ReturnValue; // 0xB0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_MenuDataEntry_Quests_C*            K2Node_DynamicCast_AsBP_Menu_Data_Entry_Quests;    // 0xC0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_GuidGuid_ReturnValue;          // 0xC9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_66A4[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xCC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB0 (0xB0 - 0x0)
// Function BP_MenuData_CM_GuideBook_Quests.BP_MenuData_CM_GuideBook_Quests_C.OnQuestAccepted
struct UBP_MenuData_CM_GuideBook_Quests_C_OnQuestAccepted_Params
{
public:
	struct FOngoingTaskProgress                  TaskProgress;                                      // 0x0(0xB0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x241 (0x241 - 0x0)
// Function BP_MenuData_CM_GuideBook_Quests.BP_MenuData_CM_GuideBook_Quests_C.IsPlayerTaskForOngoingTaskProgress
struct UBP_MenuData_CM_GuideBook_Quests_C_IsPlayerTaskForOngoingTaskProgress_Params
{
public:
	struct FPlayerTask                           PlayerTask;                                        // 0x0(0xA0)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FOngoingTaskProgress                  OngoingTaskProgress;                               // 0xA0(0xB0)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         IsEqual;                                           // 0x150(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6758[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuestAssetReference                  CallFunc_GetQuestReferenceFromPlayerTask_ReturnValue; // 0x160(0x70)(None)
	struct FQuestAssetReference                  CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue; // 0x1D0(0x70)(None)
	bool                                         CallFunc_CheckQuestAssetReferencesAreEqual_ReturnValue; // 0x240(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A1 (0x1A1 - 0x0)
// Function BP_MenuData_CM_GuideBook_Quests.BP_MenuData_CM_GuideBook_Quests_C.OnQuestCompleted
struct UBP_MenuData_CM_GuideBook_Quests_C_OnQuestCompleted_Params
{
public:
	struct FOngoingTaskProgress                  TaskProgress;                                      // 0x0(0xB0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UNWXMenuDataEntry*>             CachedEntries;                                     // 0xB0(0x10)(Edit, BlueprintVisible)
	int32                                        Temp_int_Array_Index_Variable;                     // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_67FD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNWXMenuDataEntry*                     CallFunc_Array_Get_Item;                           // 0xD0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6804[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_MenuDataEntry_Quests_C*            K2Node_DynamicCast_AsBP_Menu_Data_Entry_Quests;    // 0xE0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xE9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_681A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOngoingTaskProgress                  CallFunc_GetTaskProgress_ReturnValue;              // 0xF0(0xB0)(ConstParm)
	bool                                         CallFunc_IsPlayerTaskForOngoingTaskProgress_IsEqual; // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A1 (0x1A1 - 0x0)
// Function BP_MenuData_CM_GuideBook_Quests.BP_MenuData_CM_GuideBook_Quests_C.OnQuestUpdated
struct UBP_MenuData_CM_GuideBook_Quests_C_OnQuestUpdated_Params
{
public:
	struct FOngoingTaskProgress                  TaskProgress;                                      // 0x0(0xB0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<class UNWXMenuDataEntry*>             CachedEntries;                                     // 0xB0(0x10)(Edit, BlueprintVisible)
	int32                                        Temp_int_Array_Index_Variable;                     // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_68C8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNWXMenuDataEntry*                     CallFunc_Array_Get_Item;                           // 0xD0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_68D6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_MenuDataEntry_Quests_C*            K2Node_DynamicCast_AsBP_Menu_Data_Entry_Quests;    // 0xE0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xE9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_68E3[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOngoingTaskProgress                  CallFunc_GetTaskProgress_ReturnValue;              // 0xF0(0xB0)(ConstParm)
	bool                                         CallFunc_IsPlayerTaskForOngoingTaskProgress_IsEqual; // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC1 (0xC1 - 0x0)
// Function BP_MenuData_CM_GuideBook_Quests.BP_MenuData_CM_GuideBook_Quests_C.CreateAndQuickAddEntry
struct UBP_MenuData_CM_GuideBook_Quests_C_CreateAndQuickAddEntry_Params
{
public:
	struct FOngoingTaskProgress                  TaskProgress;                                      // 0x0(0xB0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UNWXMenuDataEntry*                     CallFunc_CreateEntry_ReturnValue;                  // 0xB0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_MenuDataEntry_Quests_C*            K2Node_DynamicCast_AsBP_Menu_Data_Entry_Quests;    // 0xB8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x240 (0x240 - 0x0)
// Function BP_MenuData_CM_GuideBook_Quests.BP_MenuData_CM_GuideBook_Quests_C.ExecuteUbergraph_BP_MenuData_CM_GuideBook_Quests
struct UBP_MenuData_CM_GuideBook_Quests_C_ExecuteUbergraph_BP_MenuData_CM_GuideBook_Quests_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_PlayerState_C*                     CallFunc_GetLocalPlayerState_PlayerState;          // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IQuestTrackerProviderInterface> CallFunc_GetQuestTracker_self_CastInput;           // 0x20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IQuestTrackerInterface> CallFunc_GetQuestTracker_ReturnValue;              // 0x30(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6AC2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FOngoingTaskProgress>          CallFunc_GetAllTaskProgress_OngoingTasks;          // 0x48(0x10)(ReferenceParm)
	TArray<struct FOngoingTaskProgress>          CallFunc_GetAllTaskProgress_ReadyToCompleteTasks;  // 0x58(0x10)(ReferenceParm)
	uint8                                        Pad_6AD3[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOngoingTaskProgress                  CallFunc_Array_Get_Item;                           // 0x70(0xB0)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x120(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x124(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6AE5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x128(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x12C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6AF6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x130(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x140(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x150(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x160(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x170(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x180(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6B20[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOngoingTaskProgress                  CallFunc_Array_Get_Item_1;                         // 0x190(0xB0)(None)
};

}
}


