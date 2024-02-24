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

// 0x23A (0x23A - 0x0)
// Function WBP_DialogueJobBoard.WBP_DialogueJobBoard_C.FocusDefaultWidget
struct UWBP_DialogueJobBoard_C_FocusDefaultWidget_Params
{
public:
	struct FEventReply                           ReturnValue;                                       // 0x0(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Unhandled_ReturnValue;                    // 0xB8(0xB8)(None)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x170(0xB8)(None)
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x228(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetChildAt_ReturnValue_1;                 // 0x230(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAnyChildren_ReturnValue;               // 0x238(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAnyChildren_ReturnValue_1;             // 0x239(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1B0 (0x1B0 - 0x0)
// Function WBP_DialogueJobBoard.WBP_DialogueJobBoard_C.OnFocusReceived
struct UWBP_DialogueJobBoard_C_OnFocusReceived_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FFocusEvent                           InFocusEvent;                                      // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FEventReply                           ReturnValue;                                       // 0x40(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_FocusDefaultWidget_ReturnValue;           // 0xF8(0xB8)(None)
};

// 0x51 (0x51 - 0x0)
// Function WBP_DialogueJobBoard.WBP_DialogueJobBoard_C.SetGridPanelQuestEntriesToUnselected
struct UWBP_DialogueJobBoard_C_SetGridPanelQuestEntriesToUnselected_Params
{
public:
	class UPanelWidget*                          GridPanelWidget;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        IndexToIgnore;                                     // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A44[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               CurrentChildWidget;                                // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class UWidget*>                       CallFunc_GetAllChildren_ReturnValue;               // 0x18(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_Array_Get_Item;                           // 0x30(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x3D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A80[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A83[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_JobBoard_QuestGrid_Entry_C*       K2Node_DynamicCast_AsWBP_Job_Board_Quest_Grid_Entry; // 0x48(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_DialogueJobBoard.WBP_DialogueJobBoard_C.ResetQuestBoard
struct UWBP_DialogueJobBoard_C_ResetQuestBoard_Params
{
public:
	class UNWXWindowWidget*                      Window;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0xB0 (0xB0 - 0x0)
// Function WBP_DialogueJobBoard.WBP_DialogueJobBoard_C.OnTaskHandedIn
struct UWBP_DialogueJobBoard_C_OnTaskHandedIn_Params
{
public:
	struct FOngoingTaskProgress                  TaskProgress;                                      // 0x0(0xB0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x70 (0x70 - 0x0)
// Function WBP_DialogueJobBoard.WBP_DialogueJobBoard_C.OnQuestAccepted
struct UWBP_DialogueJobBoard_C_OnQuestAccepted_Params
{
public:
	struct FQuestAssetReference                  QuestRowHandle;                                    // 0x0(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x40 (0x40 - 0x0)
// Function WBP_DialogueJobBoard.WBP_DialogueJobBoard_C.SetupQuestContractBoard
struct UWBP_DialogueJobBoard_C_SetupQuestContractBoard_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2BED[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AQuestGiverSession*                    CallFunc_GetQuestGiverSession_ReturnValue;         // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x20(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x30(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0xB9 (0xB9 - 0x0)
// Function WBP_DialogueJobBoard.WBP_DialogueJobBoard_C.QuestSelected
struct UWBP_DialogueJobBoard_C_QuestSelected_Params
{
public:
	struct FOngoingTaskProgress                  TaskProgress;                                      // 0x0(0xB0)(BlueprintVisible, BlueprintReadOnly, Parm)
	enum class E_Contract_StateType              State;                                             // 0xB0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C64[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Grid_Index;                                        // 0xB4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2E0 (0x2E0 - 0x0)
// Function WBP_DialogueJobBoard.WBP_DialogueJobBoard_C.PopulateTasksToComplete
struct UWBP_DialogueJobBoard_C_PopulateTasksToComplete_Params
{
public:
	class UWBP_JobBoard_QuestGrid_Entry_C*       JobBoardQuestEntry;                                // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        TaskToCompleteIndex;                               // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D4A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   QuestRowHandle;                                    // 0x10(0x10)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	struct FOngoingTaskProgress                  TaskToComplete;                                    // 0x20(0xB0)(Edit, BlueprintVisible)
	class UWBP_JobBoard_QuestGrid_Entry_C*       CallFunc_Create_ReturnValue;                       // 0xD0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D7B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuestAssetReference                  CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue; // 0xE0(0x70)(None)
	struct FQuest                                CallFunc_GetQuestDataFromQuestAssetReference_OutData; // 0x150(0x98)(ContainsInstancedReference)
	bool                                         CallFunc_GetQuestDataFromQuestAssetReference_ReturnValue; // 0x1E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2D88[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x1F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x1F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x1F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x1F9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1FA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAnyChildren_ReturnValue;               // 0x1FB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAnyChildren_ReturnValue_1;             // 0x1FC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x1FD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x1FE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x1FF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FOngoingTaskProgress>          CallFunc_GetTasksToComplete_ReturnValue;           // 0x200(0x10)(ConstParm, ReferenceParm)
	struct FOngoingTaskProgress                  CallFunc_Array_Get_Item;                           // 0x210(0xB0)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x2C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x2C4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_MakeLiteralByte_ReturnValue;              // 0x2C5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x2C6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2DF5[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUniformGridSlot*                      CallFunc_AddChildToUniformGrid_ReturnValue;        // 0x2C8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x2D0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x240 (0x240 - 0x0)
// Function WBP_DialogueJobBoard.WBP_DialogueJobBoard_C.PopulateQuestsToAccept
struct UWBP_DialogueJobBoard_C_PopulateQuestsToAccept_Params
{
public:
	int32                                        GridWidth;                                         // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F34[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_JobBoard_QuestGrid_Entry_C*       JobBoardQuestEntry;                                // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        QuestIndex;                                        // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F4D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_JobBoard_QuestGrid_Entry_C*       CallFunc_Create_ReturnValue;                       // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x2D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAnyChildren_ReturnValue;               // 0x2E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAnyChildren_ReturnValue_1;             // 0x2F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F7D[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Percent_IntInt_ReturnValue;               // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_MakeLiteralByte_ReturnValue;              // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F8C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FQuestAssetReference>          CallFunc_GetAvailableQuests_ReturnValue;           // 0x40(0x10)(ConstParm, ReferenceParm)
	struct FQuestAssetReference                  CallFunc_Array_Get_Item;                           // 0x50(0x70)(None)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F99[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOngoingTaskProgress                  CallFunc_MakeStartingOngoingTaskProgressFromQuestReference_ReturnValue; // 0xD0(0xB0)(None)
	struct FQuest                                CallFunc_GetQuestDataFromQuestAssetReference_OutData; // 0x180(0x98)(ContainsInstancedReference)
	bool                                         CallFunc_GetQuestDataFromQuestAssetReference_ReturnValue; // 0x218(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2FAE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x21C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x220(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2FB5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Divide_IntInt_ReturnValue;                // 0x224(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUniformGridSlot*                      CallFunc_AddChildToUniformGrid_ReturnValue;        // 0x228(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x230(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0xC9 (0xC9 - 0x0)
// Function WBP_DialogueJobBoard.WBP_DialogueJobBoard_C.RefreshQuestsList
struct UWBP_DialogueJobBoard_C_RefreshQuestsList_Params
{
public:
	struct FEventReply                           CallFunc_FocusDefaultWidget_ReturnValue;           // 0x0(0xB8)(None)
	bool                                         CallFunc_IsUsingGamepad_ReturnValue;               // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_302F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_QuestGiverComponent_C*             CallFunc_GetComponentByClass_ReturnValue;          // 0xC0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function WBP_DialogueJobBoard.WBP_DialogueJobBoard_C.CallCreatureKilled
struct UWBP_DialogueJobBoard_C_CallCreatureKilled_Params
{
public:
	struct FDataTableRowHandle                   Creature_Information;                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 CreatureTagContainer;                              // 0x10(0x20)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayTagContainer                 KillerTagContainer;                                // 0x30(0x20)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x8 (0x8 - 0x0)
// Function WBP_DialogueJobBoard.WBP_DialogueJobBoard_C.CallGiveTag
struct UWBP_DialogueJobBoard_C_CallGiveTag_Params
{
public:
	struct FGameplayTag                          Gameplay_Tag;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function WBP_DialogueJobBoard.WBP_DialogueJobBoard_C.CallStructureBlueprintPlaced
struct UWBP_DialogueJobBoard_C_CallStructureBlueprintPlaced_Params
{
public:
	struct FDataTableRowHandle                   StructureDataHandle;                               // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x2F4 (0x2F4 - 0x0)
// Function WBP_DialogueJobBoard.WBP_DialogueJobBoard_C.CallResourceHarvested
struct UWBP_DialogueJobBoard_C_CallResourceHarvested_Params
{
public:
	struct FInventoryEntry                       ItemEntry;                                         // 0x0(0x2F0)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                        Amount;                                            // 0x2F0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function WBP_DialogueJobBoard.WBP_DialogueJobBoard_C.CallStructureCompleted
struct UWBP_DialogueJobBoard_C_CallStructureCompleted_Params
{
public:
	class AActor*                                Owning_Actor;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Piece_ID;                                          // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8C (0x8C - 0x0)
// Function WBP_DialogueJobBoard.WBP_DialogueJobBoard_C.CallItemDeposited_InWorldContainer
struct UWBP_DialogueJobBoard_C_CallItemDeposited_InWorldContainer_Params
{
public:
	struct FItemDataReference                    ItemRowHandle;                                     // 0x0(0x80)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	int32                                        Quantity;                                          // 0x80(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          ContainerTag;                                      // 0x84(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x128 (0x128 - 0x0)
// Function WBP_DialogueJobBoard.WBP_DialogueJobBoard_C.CallWeakpointHit
struct UWBP_DialogueJobBoard_C_CallWeakpointHit_Params
{
public:
	struct FGameplayTagContainer                 WeakpointType;                                     // 0x0(0x20)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FGameplayTagContainer                 CreatureTags;                                      // 0x20(0x20)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FHitResult                            HitResult;                                         // 0x40(0xE8)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0x28 (0x28 - 0x0)
// Function WBP_DialogueJobBoard.WBP_DialogueJobBoard_C.CallOnSpellCast
struct UWBP_DialogueJobBoard_C_CallOnSpellCast_Params
{
public:
	TSoftObjectPtr<class UTechniqueDataAsset>    SpellCast;                                         // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x90 (0x90 - 0x0)
// Function WBP_DialogueJobBoard.WBP_DialogueJobBoard_C.CallFishCaught
struct UWBP_DialogueJobBoard_C_CallFishCaught_Params
{
public:
	struct FFish                                 CaughtFish;                                        // 0x0(0x90)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x8 (0x8 - 0x0)
// Function WBP_DialogueJobBoard.WBP_DialogueJobBoard_C.CallOnInteractedWithPlayer
struct UWBP_DialogueJobBoard_C_CallOnInteractedWithPlayer_Params
{
public:
	class APawn*                                 InteractingPawn;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x7F4 (0x7F4 - 0x0)
// Function WBP_DialogueJobBoard.WBP_DialogueJobBoard_C.ExecuteUbergraph_WBP_DialogueJobBoard
struct UWBP_DialogueJobBoard_C_ExecuteUbergraph_WBP_DialogueJobBoard_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Temp_struct_Variable;                              // 0x4(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Temp_struct_Variable_1;                            // 0xC(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsGameplayTagValid_ReturnValue;           // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsGameplayTagValid_ReturnValue_1;         // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33AD[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   K2Node_Event_Creature_Information;                 // 0x18(0x10)(NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 K2Node_Event_CreatureTagContainer;                 // 0x28(0x20)(None)
	struct FGameplayTagContainer                 K2Node_Event_KillerTagContainer;                   // 0x48(0x20)(None)
	struct FGameplayTag                          K2Node_Event_Gameplay_Tag;                         // 0x68(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   K2Node_Event_StructureDataHandle;                  // 0x70(0x10)(NoDestructor, HasGetValueTypeHash)
	struct FInventoryEntry                       K2Node_Event_ItemEntry;                            // 0x80(0x2F0)(None)
	int32                                        K2Node_Event_Amount;                               // 0x370(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33C8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                K2Node_Event_Owning_Actor;                         // 0x378(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_Piece_ID;                             // 0x380(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33CC[0xC];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemDataReference                    K2Node_Event_ItemRowHandle;                        // 0x390(0x80)(HasGetValueTypeHash)
	int32                                        K2Node_Event_Quantity;                             // 0x410(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          K2Node_Event_ContainerTag;                         // 0x414(0x8)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33D5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 K2Node_Event_WeakpointType;                        // 0x420(0x20)(None)
	struct FGameplayTagContainer                 K2Node_Event_CreatureTags;                         // 0x440(0x20)(None)
	struct FHitResult                            K2Node_Event_HitResult;                            // 0x460(0xE8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	TSoftObjectPtr<class UTechniqueDataAsset>    K2Node_Event_SpellCast;                            // 0x548(0x28)(HasGetValueTypeHash)
	struct FFish                                 K2Node_Event_CaughtFish;                           // 0x570(0x90)(ConstParm, ContainsInstancedReference)
	class APawn*                                 K2Node_Event_InteractingPawn;                      // 0x600(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ANWXPlayerController*                  CallFunc_GetLocalPlayerController_LocalPlayerController; // 0x608(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IQuestTrackerProviderInterface> K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface; // 0x610(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x620(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33EA[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x624(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33F0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IQuestTrackerInterface> CallFunc_GetQuestTracker_ReturnValue;              // 0x638(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TArray<class UActorComponent*>               CallFunc_GetComponentsByInterface_ReturnValue;     // 0x648(0x10)(ReferenceParm, ContainsInstancedReference)
	class UActorComponent*                       CallFunc_Array_Get_Item;                           // 0x658(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IQuestGiverInterface> K2Node_DynamicCast_AsQuest_Giver_Interface;        // 0x660(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x670(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_33FB[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x674(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          CallFunc_GetQuestGiverTag_ReturnValue;             // 0x678(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x680(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3402[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_ObjectToText_ReturnValue;            // 0x688(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x6A0(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x6F0(0x10)(ReferenceParm)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x700(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x710(0x18)(None)
	class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x728(0x10)(ZeroConstructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x738(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x748(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ANWXPlayerController*                  CallFunc_GetLocalPlayerController_LocalPlayerController_1; // 0x758(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AQuestGiverSession*                    CallFunc_GetQuestGiverSession_ReturnValue;         // 0x760(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x768(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_341F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IQuestTrackerProviderInterface> K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface_1; // 0x770(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x780(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3425[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IQuestTrackerInterface> CallFunc_GetQuestTracker_ReturnValue_1;            // 0x788(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	TArray<class UActorComponent*>               CallFunc_GetComponentsByInterface_ReturnValue_1;   // 0x798(0x10)(ReferenceParm, ContainsInstancedReference)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x7A8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UActorComponent*                       CallFunc_Array_Get_Item_1;                         // 0x7B8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IQuestGiverInterface> K2Node_DynamicCast_AsQuest_Giver_Interface_1;      // 0x7C0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x7D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3435[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x7D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          CallFunc_GetQuestGiverTag_ReturnValue_1;           // 0x7D8(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x7E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_343F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x7E4(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0xC1 (0xC1 - 0x0)
// Function WBP_DialogueJobBoard.WBP_DialogueJobBoard_C.ShowDetailPane__DelegateSignature
struct UWBP_DialogueJobBoard_C_ShowDetailPane__DelegateSignature_Params
{
public:
	bool                                         Hovered;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_349B[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FOngoingTaskProgress                  TaskProgress;                                      // 0x10(0xB0)(BlueprintVisible, BlueprintReadOnly, Parm)
	enum class E_Contract_StateType              State;                                             // 0xC0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


