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

// 0x140 (0x140 - 0x0)
// Function WBP_sw_ContractDetailPane.WBP_sw_ContractDetailPane_C.UntrackQuest
struct UWBP_sw_ContractDetailPane_C_UntrackQuest_Params
{
public:
	class UBP_HUDGoalTrackingComponent_C*        HudGoalComponent;                                  // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UQuestTrackerComponent*                QuestTracker;                                      // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ANWXPlayerController*                  PlayerController;                                  // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class FName                                  Quest;                                             // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQuestAssetReference                  QuestReference;                                    // 0x20(0x70)(Edit, BlueprintVisible)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5C47[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UQuestTrackerComponent*                CallFunc_GetComponentByClass_ReturnValue;          // 0x98(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetUniqueNameFromQuestAssetReference_ReturnValue; // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RemoveQuestTrack_bWasRemoved;             // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5C54[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_HUDGoalTrackingComponent_C*        CallFunc_GetComponentByClass_ReturnValue_1;        // 0xB0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ANWXPlayerController*                  CallFunc_GetOwningPlayerController_ReturnValue;    // 0xB8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5C5F[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuestAssetReference                  CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue; // 0xD0(0x70)(None)
};

// 0xC8 (0xC8 - 0x0)
// Function WBP_sw_ContractDetailPane.WBP_sw_ContractDetailPane_C.TrackQuest
struct UWBP_sw_ContractDetailPane_C_TrackQuest_Params
{
public:
	class UBP_HUDGoalTrackingComponent_C*        HudGoalComponent;                                  // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ANWXPlayerController*                  PlayerController;                                  // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class UQuestTrackerComponent*                QuestTracker;                                      // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                  Quest;                                             // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5CDC[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UQuestTrackerComponent*                CallFunc_GetComponentByClass_ReturnValue;          // 0x28(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_AddQuestTrack_bWasAdded;                  // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5CE6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UBP_HUDGoalTrackingComponent_C*        CallFunc_GetComponentByClass_ReturnValue_1;        // 0x38(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class ANWXPlayerController*                  CallFunc_GetOwningPlayerController_ReturnValue;    // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5CF1[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuestAssetReference                  CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue; // 0x50(0x70)(None)
	class FName                                  CallFunc_GetUniqueNameFromQuestAssetReference_ReturnValue; // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x6 (0x6 - 0x0)
// Function WBP_sw_ContractDetailPane.WBP_sw_ContractDetailPane_C.ShopPurchaseResponse
struct UWBP_sw_ContractDetailPane_C_ShopPurchaseResponse_Params
{
public:
	int32                                        TransactionID;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EShopTransactionResponse          TransactionResponse;                               // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC8 (0xC8 - 0x0)
// Function WBP_sw_ContractDetailPane.WBP_sw_ContractDetailPane_C.SetIsShopAndShopOffer
struct UWBP_sw_ContractDetailPane_C_SetIsShopAndShopOffer_Params
{
public:
	bool                                         IsShop;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5D73[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FShopOfferPresentation                ShopOffer;                                         // 0x8(0xC0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x38 (0x38 - 0x0)
// Function WBP_sw_ContractDetailPane.WBP_sw_ContractDetailPane_C.RequestPurchase
struct UWBP_sw_ContractDetailPane_C_RequestPurchase_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ANWXPlayerController*                  CallFunc_GetLocalPlayerController_LocalPlayerController; // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UShopPurchaserComponent*               CallFunc_GetComponentByClass_ReturnValue;          // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IShopInteractionModel> CallFunc_GetShopInteractionSessionModel_ReturnValue; // 0x20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5DD4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_RequestPurchase_ReturnValue;              // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x31 (0x31 - 0x0)
// Function WBP_sw_ContractDetailPane.WBP_sw_ContractDetailPane_C.UpdateButtonEnabled
struct UWBP_sw_ContractDetailPane_C_UpdateButtonEnabled_Params
{
public:
	class ANWXPlayerState*                       CallFunc_GetOwningPlayerState_ReturnValue;         // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IQuestTrackerProviderInterface> K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface; // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5E4B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IQuestTrackerInterface> CallFunc_GetQuestTracker_ReturnValue;              // 0x20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_CanTaskBeHandedIn_ReturnValue;            // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x350 (0x350 - 0x0)
// Function WBP_sw_ContractDetailPane.WBP_sw_ContractDetailPane_C.GetInstanceIdsandQuantitiesfromEntries
struct UWBP_sw_ContractDetailPane_C_GetInstanceIdsandQuantitiesfromEntries_Params
{
public:
	TArray<struct FInventoryEntry>               Entries;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FInventoryEntryIdAndQuantity>  InstanceIdsAndQuantities;                          // 0x10(0x10)(Parm, OutParm)
	TArray<struct FInventoryEntryIdAndQuantity>  OutInstanceIdsAndQuantities;                       // 0x20(0x10)(Edit, BlueprintVisible)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5EC4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntry                       CallFunc_Array_Get_Item;                           // 0x40(0x2F0)(None)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x330(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5ECE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryEntryIdAndQuantity          K2Node_MakeStruct_InventoryEntryIdAndQuantity;     // 0x334(0x14)(NoDestructor)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x348(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x34C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x152 (0x152 - 0x0)
// Function WBP_sw_ContractDetailPane.WBP_sw_ContractDetailPane_C.ShouldOpenItemSelectWindow
struct UWBP_sw_ContractDetailPane_C_ShouldOpenItemSelectWindow_Params
{
public:
	struct FPlayerTask                           Task;                                              // 0x0(0xA0)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FInventoryEntry>               AllQuestItems;                                     // 0xA0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         ShouldOpenWindow;                                  // 0xB0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5F90[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FItemConstraint>               AllItemConstraints;                                // 0xB8(0x10)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xCC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5FA5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItemConstraint                       CallFunc_Array_Get_Item;                           // 0xD8(0x40)(ContainsInstancedReference)
	TArray<struct FItemConstraint>               CallFunc_GetTaskItemConstraints_OutItemConstraints; // 0x118(0x10)(ReferenceParm, ContainsInstancedReference)
	TArray<struct FInventoryEntry>               CallFunc_FilterEntriesBasedOnConstraint_OutEntriesMeetConstraint; // 0x128(0x10)(ReferenceParm)
	TArray<struct FInventoryEntry>               CallFunc_FilterEntriesBasedOnConstraint_OutEntriesRelevant; // 0x138(0x10)(ReferenceParm)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsEmpty_ReturnValue;                // 0x149(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue_1;         // 0x14A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x14B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x14C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x151(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function WBP_sw_ContractDetailPane.WBP_sw_ContractDetailPane_C.OnItemsConfirmed
struct UWBP_sw_ContractDetailPane_C_OnItemsConfirmed_Params
{
public:
	class UWBP_ContractReturn_ItemSelect_C*      ItemSelectWidget;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IQuestTrackerInterface> QuestTrackerInterface;                             // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FInventoryEntryIdAndQuantity>  CallFunc_GetSelectedItemIdAndQuantities_IdAndQuantities; // 0x18(0x10)(ReferenceParm)
};

// 0x34 (0x34 - 0x0)
// Function WBP_sw_ContractDetailPane.WBP_sw_ContractDetailPane_C.OnItemSelectWindowClosed
struct UWBP_sw_ContractDetailPane_C_OnItemSelectWindowClosed_Params
{
public:
	class UNWXCommonWindowWidget*                Window;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UWBP_ContractReturn_ItemSelect_C*      K2Node_DynamicCast_AsWBP_Contract_Return_Item_Select; // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6085[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x24(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0xD0 (0xD0 - 0x0)
// Function WBP_sw_ContractDetailPane.WBP_sw_ContractDetailPane_C.SubmitItems
struct UWBP_sw_ContractDetailPane_C_SubmitItems_Params
{
public:
	TArray<struct FInventoryEntryIdAndQuantity>  ItemIdAndQuantities;                               // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TScriptInterface<class IQuestTrackerInterface> QuestTrackerInterface;                             // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ANWXPlayerState*                       CallFunc_GetOwningPlayerState_ReturnValue;         // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IQuestTrackerProviderInterface> K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface; // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_611F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IQuestTrackerInterface> CallFunc_GetQuestTracker_ReturnValue;              // 0x40(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UObject*                               CallFunc_Conv_InterfaceToObject_ReturnValue;       // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6138[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuestAssetReference                  CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue; // 0x60(0x70)(None)
};

// 0x141 (0x141 - 0x0)
// Function WBP_sw_ContractDetailPane.WBP_sw_ContractDetailPane_C.HandleItemTurnIn
struct UWBP_sw_ContractDetailPane_C_HandleItemTurnIn_Params
{
public:
	struct FPlayerTask                           Task;                                              // 0x0(0xA0)(Edit, BlueprintVisible)
	TArray<struct FInventoryEntry>               PotentialInventoryItems;                           // 0xA0(0x10)(Edit, BlueprintVisible)
	class ANWXPlayerState*                       CallFunc_GetOwningPlayerState_ReturnValue;         // 0xB0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ANWXPlayerController*                  CallFunc_GetOwningPlayerController_ReturnValue;    // 0xB8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IQuestTrackerProviderInterface> K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface; // 0xC0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_61FA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULocalPlayer*                          CallFunc_GetLocalPlayerFromController_ReturnValue; // 0xD8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IQuestTrackerInterface> CallFunc_GetQuestTracker_ReturnValue;              // 0xE0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UWBP_ContractReturn_ItemSelect_C*      CallFunc_CreateWidgetInstanceFromLayer_ReturnValue; // 0xF0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ShouldOpenItemSelectWindow_ShouldOpenWindow; // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_620A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xFC(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x10C(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_621B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInventoryEntryIdAndQuantity>  CallFunc_GetInstanceIdsandQuantitiesfromEntries_InstanceIdsAndQuantities; // 0x120(0x10)(ReferenceParm)
	TArray<struct FInventoryEntry>               CallFunc_GetTaskTurnInItemsFromPlayerInventory_OutInventoryItems; // 0x130(0x10)(ReferenceParm)
	bool                                         CallFunc_GetTaskTurnInItemsFromPlayerInventory_ReturnValue; // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD1 (0xD1 - 0x0)
// Function WBP_sw_ContractDetailPane.WBP_sw_ContractDetailPane_C.CompleteQuest
struct UWBP_sw_ContractDetailPane_C_CompleteQuest_Params
{
public:
	struct FPlayerTask                           PlayerTask;                                        // 0x0(0xA0)(Edit, BlueprintVisible)
	class ANWXPlayerState*                       CallFunc_GetOwningPlayerState_ReturnValue;         // 0xA0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IQuestTrackerProviderInterface> K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface; // 0xA8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_62A4[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IQuestTrackerInterface> CallFunc_GetQuestTracker_ReturnValue;              // 0xC0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_DoesTaskNeedItemsToTurnIn_ReturnValue;    // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x160 (0x160 - 0x0)
// Function WBP_sw_ContractDetailPane.WBP_sw_ContractDetailPane_C.AcceptQuest
struct UWBP_sw_ContractDetailPane_C_AcceptQuest_Params
{
public:
	TScriptInterface<class IQuestTrackerInterface> QuestTrackerInterface;                             // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class ANWXPlayerState*                       CallFunc_GetOwningPlayerState_ReturnValue;         // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IQuestTrackerProviderInterface> K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface; // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6351[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IQuestTrackerInterface> CallFunc_GetQuestTracker_ReturnValue;              // 0x30(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FQuestAssetReference                  CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue; // 0x40(0x70)(None)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6367[0xF];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuestAssetReference                  CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue_1; // 0xC0(0x70)(None)
	class ANWXPlayerState*                       CallFunc_GetOwningPlayerState_ReturnValue_1;       // 0x130(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IQuestTrackerProviderInterface> K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface_1; // 0x138(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_637B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IQuestTrackerInterface> CallFunc_GetQuestTracker_ReturnValue_1;            // 0x150(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
};

// 0x59 (0x59 - 0x0)
// Function WBP_sw_ContractDetailPane.WBP_sw_ContractDetailPane_C.UpdateGoalTrackingButtons
struct UWBP_sw_ContractDetailPane_C_UpdateGoalTrackingButtons_Params
{
public:
	class ABP_PlayerState_C*                     CallFunc_GetLocalPlayerState_PlayerState;          // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_FindQuestHUDVisibilityFromTask_ReturnValue; // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_63DE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuestPresentationData                CallFunc_MakeQuestPresentationDataFromTaskProgress_OutQuestPresentationData; // 0x10(0x48)(None)
	bool                                         CallFunc_MakeQuestPresentationDataFromTaskProgress_ReturnValue; // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x320 (0x320 - 0x0)
// Function WBP_sw_ContractDetailPane.WBP_sw_ContractDetailPane_C.HandleBGPaperStyle
struct UWBP_sw_ContractDetailPane_C_HandleBGPaperStyle_Params
{
public:
	class UTexture2D*                            L_RewardPreviewIcon;                               // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable;                                // 0x8(0x18)(None)
	class FText                                  Temp_text_Variable_1;                              // 0x20(0x18)(None)
	bool                                         Temp_bool_Variable;                                // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x3B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_65D3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable_2;                              // 0x40(0x18)(None)
	class FText                                  Temp_text_Variable_3;                              // 0x58(0x18)(None)
	bool                                         Temp_bool_Variable_2;                              // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0x72(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_3;                              // 0x73(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_65F4[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            Temp_object_Variable;                              // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_4;                              // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateBrushDrawType               Temp_byte_Variable_4;                              // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateBrushDrawType               Temp_byte_Variable_5;                              // 0x82(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_5;                              // 0x83(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6613[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuestPresentationData                CallFunc_MakeQuestPresentationDataFromShopOfferPresentation_OutQuestPresentationData; // 0x88(0x48)(None)
	struct FQuestRewardPresentationData          CallFunc_Array_Get_Item;                           // 0xD0(0x60)(None)
	class UObject*                               CallFunc_LoadAsset_Blocking_ReturnValue;           // 0x130(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_Select_Default;                             // 0x138(0x18)(None)
	class UTexture2D*                            K2Node_DynamicCast_AsTexture_2D;                   // 0x150(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0x159(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6637[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default_2;                           // 0x160(0x18)(None)
	enum class ESlateVisibility                  K2Node_Select_Default_3;                           // 0x178(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6640[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuestPresentationData                CallFunc_MakeQuestPresentationDataFromTaskProgress_OutQuestPresentationData; // 0x180(0x48)(None)
	bool                                         CallFunc_MakeQuestPresentationDataFromTaskProgress_ReturnValue; // 0x1C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_664B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            K2Node_Select_Default_4;                           // 0x1D0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FQuestRewardPresentationData          CallFunc_Array_Get_Item_1;                         // 0x1D8(0x60)(None)
	class UObject*                               CallFunc_LoadAsset_Blocking_ReturnValue_1;         // 0x238(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            K2Node_DynamicCast_AsTexture_2D_1;                 // 0x240(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x248(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateBrushDrawType               K2Node_Select_Default_5;                           // 0x249(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_666A[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x250(0xD0)(None)
};

// 0xB1 (0xB1 - 0x0)
// Function WBP_sw_ContractDetailPane.WBP_sw_ContractDetailPane_C.SetTaskProgressAndContractState
struct UWBP_sw_ContractDetailPane_C_SetTaskProgressAndContractState_Params
{
public:
	struct FOngoingTaskProgress                  NewTaskProgress;                                   // 0x0(0xB0)(BlueprintVisible, BlueprintReadOnly, Parm)
	enum class E_Contract_StateType              NewContractState;                                  // 0xB0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB0 (0xB0 - 0x0)
// Function WBP_sw_ContractDetailPane.WBP_sw_ContractDetailPane_C.SetTaskProgress
struct UWBP_sw_ContractDetailPane_C_SetTaskProgress_Params
{
public:
	struct FOngoingTaskProgress                  NewTaskProgress;                                   // 0x0(0xB0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0xB0 (0xB0 - 0x0)
// Function WBP_sw_ContractDetailPane.WBP_sw_ContractDetailPane_C.GetTaskProgress
struct UWBP_sw_ContractDetailPane_C_GetTaskProgress_Params
{
public:
	struct FOngoingTaskProgress                  TaskProgress;                                      // 0x0(0xB0)(Parm, OutParm)
};

// 0x1 (0x1 - 0x0)
// Function WBP_sw_ContractDetailPane.WBP_sw_ContractDetailPane_C.SetContractState
struct UWBP_sw_ContractDetailPane_C_SetContractState_Params
{
public:
	enum class E_Contract_StateType              NewContractState;                                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_sw_ContractDetailPane.WBP_sw_ContractDetailPane_C.GetContractState
struct UWBP_sw_ContractDetailPane_C_GetContractState_Params
{
public:
	enum class E_Contract_StateType              ContractState;                                     // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x120 (0x120 - 0x0)
// Function WBP_sw_ContractDetailPane.WBP_sw_ContractDetailPane_C.RefreshButton
struct UWBP_sw_ContractDetailPane_C_RefreshButton_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6896[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable;                                // 0x8(0x18)(None)
	enum class E_Contract_StateType              Temp_byte_Variable;                                // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_68A2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable_1;                              // 0x28(0x18)(None)
	class FText                                  Temp_text_Variable_2;                              // 0x40(0x18)(None)
	class FText                                  Temp_text_Variable_3;                              // 0x58(0x18)(None)
	class FText                                  Temp_text_Variable_4;                              // 0x70(0x18)(None)
	class FText                                  Temp_text_Variable_5;                              // 0x88(0x18)(None)
	class FText                                  Temp_text_Variable_6;                              // 0xA0(0x18)(None)
	bool                                         Temp_bool_Variable_1;                              // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_68BF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Temp_text_Variable_7;                              // 0xC0(0x18)(None)
	class FText                                  K2Node_Select_Default;                             // 0xD8(0x18)(None)
	class FText                                  K2Node_Select_Default_1;                           // 0xF0(0x18)(None)
	class FText                                  K2Node_Select_Default_2;                           // 0x108(0x18)(None)
};

// 0x270 (0x270 - 0x0)
// Function WBP_sw_ContractDetailPane.WBP_sw_ContractDetailPane_C.Show Rewards
struct UWBP_sw_ContractDetailPane_C_Show_Rewards_Params
{
public:
	TArray<struct FDataTableRowHandle>           Reward_Values_LOCAL;                               // 0x0(0x10)(Edit, BlueprintVisible)
	TArray<enum class E_UI_QuestRewardFormating> Reward_Keys_LOCAL;                                 // 0x10(0x10)(Edit, BlueprintVisible)
	TArray<int32>                                Reward_Quantity_LOCAL;                             // 0x20(0x10)(Edit, BlueprintVisible)
	TMap<enum class E_UI_QuestRewardFormating, struct FDataTableRowHandle> Reward_Table_LOCAL;                                // 0x30(0x50)(Edit, BlueprintVisible)
	class UWBP_QuestRewardEntry_C*               CallFunc_Create_ReturnValue;                       // 0x80(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TMap<enum class E_UI_QuestRewardFormating, struct FDataTableRowHandle> K2Node_MakeVariable_MakeVariableOutput;            // 0x88(0x50)(None)
	int32                                        Temp_int_Array_Index_Variable;                     // 0xD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xDC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0xE4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQuestPresentationData                CallFunc_MakeQuestPresentationDataFromShopOfferPresentation_OutQuestPresentationData; // 0xE8(0x48)(None)
	struct FQuestRewardPresentationData          CallFunc_Array_Get_Item;                           // 0x130(0x60)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x190(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x194(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6A42[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWBP_QuestRewardEntry_C*               CallFunc_Create_ReturnValue_1;                     // 0x198(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FQuestPresentationData                CallFunc_MakeQuestPresentationDataFromTaskProgress_OutQuestPresentationData; // 0x1A0(0x48)(None)
	bool                                         CallFunc_MakeQuestPresentationDataFromTaskProgress_ReturnValue; // 0x1E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6A5A[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x1F0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x1F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x1FC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQuestRewardPresentationData          CallFunc_Array_Get_Item_1;                         // 0x200(0x60)(None)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x260(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x264(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6A9E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue_1;      // 0x268(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_sw_ContractDetailPane.WBP_sw_ContractDetailPane_C.Show Progress States
struct UWBP_sw_ContractDetailPane_C_Show_Progress_States_Params
{
public:
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4F0 (0x4F0 - 0x0)
// Function WBP_sw_ContractDetailPane.WBP_sw_ContractDetailPane_C.SetupTaskInfo
struct UWBP_sw_ContractDetailPane_C_SetupTaskInfo_Params
{
public:
	struct FOngoingTaskProgress                  TaskProgress;                                      // 0x0(0xB0)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  Temp_text_Variable;                                // 0xB0(0x18)(None)
	class FText                                  Temp_text_Variable_1;                              // 0xC8(0x18)(None)
	class FText                                  Temp_text_Variable_2;                              // 0xE0(0x18)(None)
	class UWBP_sw_QuestTaskEntry_C*              CallFunc_Create_ReturnValue;                       // 0xF8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable_3;                              // 0x100(0x18)(None)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x118(0x18)(None)
	class FText                                  Temp_text_Variable_4;                              // 0x130(0x18)(None)
	class FText                                  Temp_text_Variable_5;                              // 0x148(0x18)(None)
	class FText                                  Temp_text_Variable_6;                              // 0x160(0x18)(None)
	struct FQuestTaskPresentationData            CallFunc_MakeQuestTaskPresentationDataFromTaskProgress_OutQuestTaskPresentationData; // 0x178(0xB0)(None)
	bool                                         CallFunc_MakeQuestTaskPresentationDataFromTaskProgress_ReturnValue; // 0x228(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFaction                          Temp_byte_Variable;                                // 0x229(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6C6C[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuestTaskConditionPresentationData   CallFunc_Array_Get_Item;                           // 0x230(0x68)(None)
	class FText                                  K2Node_Select_Default;                             // 0x298(0x18)(None)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue_1;             // 0x2B0(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x2C8(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x318(0x10)(ReferenceParm)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x328(0x50)(HasGetValueTypeHash)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x378(0x18)(None)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_1;                          // 0x390(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue_1;                     // 0x3A0(0x18)(None)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_2;            // 0x3B8(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_2;                          // 0x408(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue_2;                     // 0x418(0x18)(None)
	struct FQuestTaskPresentationData            CallFunc_MakeQuestTaskPresentationDataFromTaskProgress_OutQuestTaskPresentationData_1; // 0x430(0xB0)(None)
	bool                                         CallFunc_MakeQuestTaskPresentationDataFromTaskProgress_ReturnValue_1; // 0x4E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6CAB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UVerticalBoxSlot*                      CallFunc_AddChildToVerticalBox_ReturnValue;        // 0x4E8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x218 (0x218 - 0x0)
// Function WBP_sw_ContractDetailPane.WBP_sw_ContractDetailPane_C.Setup Static Data
struct UWBP_sw_ContractDetailPane_C_Setup_Static_Data_Params
{
public:
	struct FQuestPresentationData                QuestPresentationData;                             // 0x0(0x48)(Edit, BlueprintVisible)
	bool                                         Temp_bool_Variable;                                // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6D8E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuestPresentationData                CallFunc_MakeQuestPresentationDataFromShopOfferPresentation_OutQuestPresentationData; // 0x50(0x48)(None)
	struct FQuestPresentationData                CallFunc_MakeQuestPresentationDataFromTaskProgress_OutQuestPresentationData; // 0x98(0x48)(None)
	bool                                         CallFunc_MakeQuestPresentationDataFromTaskProgress_ReturnValue; // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6DB6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuestRewardPresentationData          CallFunc_Array_Get_Item;                           // 0xE8(0x60)(None)
	bool                                         Temp_bool_Variable_1;                              // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6DC0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Select_Default;                             // 0x150(0x18)(ConstParm)
	class ANWXPlayerController*                  CallFunc_GetLocalPlayerController_LocalPlayerController; // 0x168(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class IQuestTrackerProviderInterface> K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface; // 0x170(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6DE5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TScriptInterface<class IQuestTrackerInterface> CallFunc_GetQuestTracker_ReturnValue;              // 0x188(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         CallFunc_CanTaskBeHandedIn_ReturnValue;            // 0x198(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x199(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6DF9[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQuestRewardPresentationData          CallFunc_Array_Get_Item_1;                         // 0x1A0(0x60)(None)
	class FText                                  K2Node_Select_Default_1;                           // 0x200(0x18)(ConstParm)
};

// 0x109 (0x109 - 0x0)
// Function WBP_sw_ContractDetailPane.WBP_sw_ContractDetailPane_C.SetupQuestDetails
struct UWBP_sw_ContractDetailPane_C_SetupQuestDetails_Params
{
public:
	struct FQuestAssetReference                  CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue; // 0x0(0x70)(None)
	struct FQuest                                CallFunc_GetQuestDataFromQuestAssetReference_OutData; // 0x70(0x98)(ContainsInstancedReference)
	bool                                         CallFunc_GetQuestDataFromQuestAssetReference_ReturnValue; // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_sw_ContractDetailPane.WBP_sw_ContractDetailPane_C.BndEvt__WBP_sw_ContractDetailPane_CBU_Track_Add_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature
struct UWBP_sw_ContractDetailPane_C_BndEvt__WBP_sw_ContractDetailPane_CBU_Track_Add_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_sw_ContractDetailPane.WBP_sw_ContractDetailPane_C.BndEvt__WBP_sw_ContractDetailPane_CBU_Track_Remove_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature
struct UWBP_sw_ContractDetailPane_C_BndEvt__WBP_sw_ContractDetailPane_CBU_Track_Remove_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function WBP_sw_ContractDetailPane.WBP_sw_ContractDetailPane_C.BndEvt__WBP_sw_ContractDetailPane_CBU_Quest_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature
struct UWBP_sw_ContractDetailPane_C_BndEvt__WBP_sw_ContractDetailPane_CBU_Quest_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature_Params
{
public:
	class UCommonButtonBase*                     Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function WBP_sw_ContractDetailPane.WBP_sw_ContractDetailPane_C.ExecuteUbergraph_WBP_sw_ContractDetailPane
struct UWBP_sw_ContractDetailPane_C_ExecuteUbergraph_WBP_sw_ContractDetailPane_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6FF5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_2;               // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button_1;               // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCommonButtonBase*                     K2Node_ComponentBoundEvent_Button;                 // 0x18(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0xB1 (0xB1 - 0x0)
// Function WBP_sw_ContractDetailPane.WBP_sw_ContractDetailPane_C.QuestAccepted__DelegateSignature
struct UWBP_sw_ContractDetailPane_C_QuestAccepted__DelegateSignature_Params
{
public:
	struct FOngoingTaskProgress                  Accepted;                                          // 0x0(0xB0)(BlueprintVisible, BlueprintReadOnly, Parm)
	enum class E_Contract_StateType              Contract_State;                                    // 0xB0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


