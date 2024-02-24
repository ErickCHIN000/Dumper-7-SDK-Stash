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

// 0x2 (0x2 - 0x0)
// Function WBP_GuideBook_QuestDetailPane.WBP_GuideBook_QuestDetailPane_C.SetInputActionPreviewOnTrackButtons
struct UWBP_GuideBook_QuestDetailPane_C_SetInputActionPreviewOnTrackButtons_Params
{
public:
	bool                                         ShowInputAction;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x140 (0x140 - 0x0)
// Function WBP_GuideBook_QuestDetailPane.WBP_GuideBook_QuestDetailPane_C.UntrackQuest
struct UWBP_GuideBook_QuestDetailPane_C_UntrackQuest_Params
{
public:
	class UBP_HUDGoalTrackingComponent_C*        HudGoalComponent;                                  // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UQuestTrackerComponent*                QuestTracker;                                      // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ANWXPlayerController*                  PlayerController;                                  // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class FName                                  Quest;                                             // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQuestAssetReference                  QuestReference;                                    // 0x20(0x70)(Edit, BlueprintVisible)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5ECA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UQuestTrackerComponent*                CallFunc_GetComponentByClass_ReturnValue;          // 0x98(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetUniqueNameFromQuestAssetReference_ReturnValue; // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RemoveQuestTrack_bWasRemoved;             // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5ED7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_HUDGoalTrackingComponent_C*        CallFunc_GetComponentByClass_ReturnValue_1;        // 0xB0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ANWXPlayerController*                  CallFunc_GetOwningPlayerController_ReturnValue;    // 0xB8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5EE2[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuestAssetReference                  CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue; // 0xD0(0x70)(None)
};

// 0xC8 (0xC8 - 0x0)
// Function WBP_GuideBook_QuestDetailPane.WBP_GuideBook_QuestDetailPane_C.TrackQuest
struct UWBP_GuideBook_QuestDetailPane_C_TrackQuest_Params
{
public:
	class UBP_HUDGoalTrackingComponent_C*        HudGoalComponent;                                  // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UQuestTrackerComponent*                QuestTracker;                                      // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ANWXPlayerController*                  PlayerController;                                  // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class FName                                  Quest;                                             // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5F68[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UQuestTrackerComponent*                CallFunc_GetComponentByClass_ReturnValue;          // 0x28(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_AddQuestTrack_bWasAdded;                  // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5F71[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_HUDGoalTrackingComponent_C*        CallFunc_GetComponentByClass_ReturnValue_1;        // 0x38(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ANWXPlayerController*                  CallFunc_GetOwningPlayerController_ReturnValue;    // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5F7B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuestAssetReference                  CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue; // 0x50(0x70)(None)
	class FName                                  CallFunc_GetUniqueNameFromQuestAssetReference_ReturnValue; // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function WBP_GuideBook_QuestDetailPane.WBP_GuideBook_QuestDetailPane_C.ToggleTracking
struct UWBP_GuideBook_QuestDetailPane_C_ToggleTracking_Params
{
public:
	class UWidget*                               CallFunc_GetActiveWidget_ReturnValue;              // 0x0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x29 (0x29 - 0x0)
// Function WBP_GuideBook_QuestDetailPane.WBP_GuideBook_QuestDetailPane_C.UpdateGoalTrackingButtons
struct UWBP_GuideBook_QuestDetailPane_C_UpdateGoalTrackingButtons_Params
{
public:
	class UBP_HUDGoalTrackingComponent_C*        HudTrackingComponent;                              // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UQuestTrackerComponent*                QuestTracker;                                      // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ANWXPlayerState*                       CallFunc_GetOwningPlayerState_ReturnValue;         // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6025[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UQuestTrackerComponent*                CallFunc_GetComponentByClass_ReturnValue;          // 0x20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_FindQuestHUDVisibilityFromTask_ReturnValue; // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB1 (0xB1 - 0x0)
// Function WBP_GuideBook_QuestDetailPane.WBP_GuideBook_QuestDetailPane_C.SetTaskProgressAndContractState
struct UWBP_GuideBook_QuestDetailPane_C_SetTaskProgressAndContractState_Params
{
public:
	struct FOngoingTaskProgress                  NewTaskProgress;                                   // 0x0(0xB0)(BlueprintVisible, BlueprintReadOnly, Parm)
	enum class E_Contract_StateType              NewContractState;                                  // 0xB0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A8 (0x1A8 - 0x0)
// Function WBP_GuideBook_QuestDetailPane.WBP_GuideBook_QuestDetailPane_C.Show Rewards
struct UWBP_GuideBook_QuestDetailPane_C_Show_Rewards_Params
{
public:
	TArray<struct FDataTableRowHandle>           Reward_Values_LOCAL;                               // 0x0(0x10)(Edit, BlueprintVisible)
	TArray<enum class E_UI_QuestRewardFormating> Reward_Keys_LOCAL;                                 // 0x10(0x10)(Edit, BlueprintVisible)
	TArray<int32>                                Reward_Quantity_LOCAL;                             // 0x20(0x10)(Edit, BlueprintVisible)
	TMap<enum class E_UI_QuestRewardFormating, struct FDataTableRowHandle> Reward_Table_LOCAL;                                // 0x30(0x50)(Edit, BlueprintVisible)
	TMap<enum class E_UI_QuestRewardFormating, struct FDataTableRowHandle> K2Node_MakeVariable_MakeVariableOutput;            // 0x80(0x50)(None)
	int32                                        Temp_int_Array_Index_Variable;                     // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_610B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_sw_Guidebook_QuestRewardEntry_C*  CallFunc_Create_ReturnValue;                       // 0xD8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6119[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuestPresentationData                CallFunc_MakeQuestPresentationDataFromTaskProgress_OutQuestPresentationData; // 0xE8(0x48)(None)
	bool                                         CallFunc_MakeQuestPresentationDataFromTaskProgress_ReturnValue; // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6121[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x134(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQuestRewardPresentationData          CallFunc_Array_Get_Item;                           // 0x138(0x60)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x198(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x19C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsEmpty_ReturnValue;                // 0x19D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_613A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x1A0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x178 (0x178 - 0x0)
// Function WBP_GuideBook_QuestDetailPane.WBP_GuideBook_QuestDetailPane_C.SetupTaskInfo
struct UWBP_GuideBook_QuestDetailPane_C_SetupTaskInfo_Params
{
public:
	struct FOngoingTaskProgress                  TaskProgress;                                      // 0x0(0xB0)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UWBP_sw_Guidebook_QuestTaskEntry_C*    CallFunc_Create_ReturnValue;                       // 0xB0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FQuestTaskPresentationData            CallFunc_MakeQuestTaskPresentationDataFromTaskProgress_OutQuestTaskPresentationData; // 0xB8(0xB0)(None)
	bool                                         CallFunc_MakeQuestTaskPresentationDataFromTaskProgress_ReturnValue; // 0x168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_61A8[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UHorizontalBoxSlot*                    CallFunc_AddChildToHorizontalBox_ReturnValue;      // 0x170(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x219 (0x219 - 0x0)
// Function WBP_GuideBook_QuestDetailPane.WBP_GuideBook_QuestDetailPane_C.SetupStaticData
struct UWBP_GuideBook_QuestDetailPane_C_SetupStaticData_Params
{
public:
	class FText                                  BlankString;                                       // 0x0(0x18)(Edit, BlueprintVisible)
	struct FQuestTaskPresentationData            TaskPresentationData;                              // 0x18(0xB0)(Edit, BlueprintVisible)
	struct FQuestPresentationData                QuestPresentationData;                             // 0xC8(0x48)(Edit, BlueprintVisible)
	bool                                         Temp_bool_Variable;                                // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x111(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x112(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_TextText_ReturnValue;            // 0x113(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x114(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_622D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuestTaskPresentationData            CallFunc_MakeQuestTaskPresentationDataFromTaskProgress_OutQuestTaskPresentationData; // 0x118(0xB0)(None)
	bool                                         CallFunc_MakeQuestTaskPresentationDataFromTaskProgress_ReturnValue; // 0x1C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6233[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuestPresentationData                CallFunc_MakeQuestPresentationDataFromTaskProgress_OutQuestPresentationData; // 0x1D0(0x48)(None)
	bool                                         CallFunc_MakeQuestPresentationDataFromTaskProgress_ReturnValue; // 0x218(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x109 (0x109 - 0x0)
// Function WBP_GuideBook_QuestDetailPane.WBP_GuideBook_QuestDetailPane_C.SetupQuestDetails
struct UWBP_GuideBook_QuestDetailPane_C_SetupQuestDetails_Params
{
public:
	struct FQuestAssetReference                  CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue; // 0x0(0x70)(None)
	struct FQuest                                CallFunc_GetQuestDataFromQuestAssetReference_OutData; // 0x70(0x98)(ContainsInstancedReference)
	bool                                         CallFunc_GetQuestDataFromQuestAssetReference_ReturnValue; // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_GuideBook_QuestDetailPane.WBP_GuideBook_QuestDetailPane_C.BndEvt__WBP_GuideBook_QuestDetailPane_CBU_Track_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
struct UWBP_GuideBook_QuestDetailPane_C_BndEvt__WBP_GuideBook_QuestDetailPane_CBU_Track_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_GuideBook_QuestDetailPane.WBP_GuideBook_QuestDetailPane_C.BndEvt__WBP_GuideBook_QuestDetailPane_CBU_Untrack_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature
struct UWBP_GuideBook_QuestDetailPane_C_BndEvt__WBP_GuideBook_QuestDetailPane_CBU_Untrack_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function WBP_GuideBook_QuestDetailPane.WBP_GuideBook_QuestDetailPane_C.ExecuteUbergraph_WBP_GuideBook_QuestDetailPane
struct UWBP_GuideBook_QuestDetailPane_C_ExecuteUbergraph_WBP_GuideBook_QuestDetailPane_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6376[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_1;               // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button;                 // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0xB1 (0xB1 - 0x0)
// Function WBP_GuideBook_QuestDetailPane.WBP_GuideBook_QuestDetailPane_C.QuestAccepted__DelegateSignature
struct UWBP_GuideBook_QuestDetailPane_C_QuestAccepted__DelegateSignature_Params
{
public:
	struct FOngoingTaskProgress                  Accepted;                                          // 0x0(0xB0)(BlueprintVisible, BlueprintReadOnly, Parm)
	enum class E_Contract_StateType              Contract_State;                                    // 0xB0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


