#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_sw_ContractDetailPane.WBP_sw_ContractDetailPane_C
// (None)

class UClass* UWBP_sw_ContractDetailPane_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_sw_ContractDetailPane_C");

	return Clss;
}


// WBP_sw_ContractDetailPane_C WBP_sw_ContractDetailPane.Default__WBP_sw_ContractDetailPane_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_sw_ContractDetailPane_C* UWBP_sw_ContractDetailPane_C::GetDefaultObj()
{
	static class UWBP_sw_ContractDetailPane_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_sw_ContractDetailPane_C*>(UWBP_sw_ContractDetailPane_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_sw_ContractDetailPane.WBP_sw_ContractDetailPane_C.UntrackQuest
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UBP_HUDGoalTrackingComponent_C*HudGoalComponent                                                 (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UQuestTrackerComponent*      QuestTracker                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        PlayerController                                                 (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class FName                        Quest                                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuestAssetReference        QuestReference                                                   (Edit, BlueprintVisible)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQuestTrackerComponent*      CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetUniqueNameFromQuestAssetReference_ReturnValue        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveQuestTrack_bWasRemoved                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_HUDGoalTrackingComponent_C*CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuestAssetReference        CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue            (None)

void UWBP_sw_ContractDetailPane_C::UntrackQuest(class UBP_HUDGoalTrackingComponent_C* HudGoalComponent, class UQuestTrackerComponent* QuestTracker, class ANWXPlayerController* PlayerController, class FName Quest, const struct FQuestAssetReference& QuestReference, bool CallFunc_IsValid_ReturnValue, class UQuestTrackerComponent* CallFunc_GetComponentByClass_ReturnValue, class FName CallFunc_GetUniqueNameFromQuestAssetReference_ReturnValue, bool CallFunc_RemoveQuestTrack_bWasRemoved, class UBP_HUDGoalTrackingComponent_C* CallFunc_GetComponentByClass_ReturnValue_1, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FQuestAssetReference& CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_ContractDetailPane_C", "UntrackQuest");

	Params::UWBP_sw_ContractDetailPane_C_UntrackQuest_Params Parms{};

	Parms.HudGoalComponent = HudGoalComponent;
	Parms.QuestTracker = QuestTracker;
	Parms.PlayerController = PlayerController;
	Parms.Quest = Quest;
	Parms.QuestReference = QuestReference;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetUniqueNameFromQuestAssetReference_ReturnValue = CallFunc_GetUniqueNameFromQuestAssetReference_ReturnValue;
	Parms.CallFunc_RemoveQuestTrack_bWasRemoved = CallFunc_RemoveQuestTrack_bWasRemoved;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue = CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_ContractDetailPane.WBP_sw_ContractDetailPane_C.TrackQuest
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UBP_HUDGoalTrackingComponent_C*HudGoalComponent                                                 (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        PlayerController                                                 (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class UQuestTrackerComponent*      QuestTracker                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        Quest                                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQuestTrackerComponent*      CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AddQuestTrack_bWasAdded                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_HUDGoalTrackingComponent_C*CallFunc_GetComponentByClass_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuestAssetReference        CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue            (None)
// class FName                        CallFunc_GetUniqueNameFromQuestAssetReference_ReturnValue        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_ContractDetailPane_C::TrackQuest(class UBP_HUDGoalTrackingComponent_C* HudGoalComponent, class ANWXPlayerController* PlayerController, class UQuestTrackerComponent* QuestTracker, class FName Quest, bool CallFunc_IsValid_ReturnValue, class UQuestTrackerComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_AddQuestTrack_bWasAdded, class UBP_HUDGoalTrackingComponent_C* CallFunc_GetComponentByClass_ReturnValue_1, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FQuestAssetReference& CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue, class FName CallFunc_GetUniqueNameFromQuestAssetReference_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_ContractDetailPane_C", "TrackQuest");

	Params::UWBP_sw_ContractDetailPane_C_TrackQuest_Params Parms{};

	Parms.HudGoalComponent = HudGoalComponent;
	Parms.PlayerController = PlayerController;
	Parms.QuestTracker = QuestTracker;
	Parms.Quest = Quest;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_AddQuestTrack_bWasAdded = CallFunc_AddQuestTrack_bWasAdded;
	Parms.CallFunc_GetComponentByClass_ReturnValue_1 = CallFunc_GetComponentByClass_ReturnValue_1;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue = CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue;
	Parms.CallFunc_GetUniqueNameFromQuestAssetReference_ReturnValue = CallFunc_GetUniqueNameFromQuestAssetReference_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_ContractDetailPane.WBP_sw_ContractDetailPane_C.ShopPurchaseResponse
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              TransactionID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EShopTransactionResponseTransactionResponse                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_ContractDetailPane_C::ShopPurchaseResponse(int32 TransactionID, enum class EShopTransactionResponse TransactionResponse, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_ContractDetailPane_C", "ShopPurchaseResponse");

	Params::UWBP_sw_ContractDetailPane_C_ShopPurchaseResponse_Params Parms{};

	Parms.TransactionID = TransactionID;
	Parms.TransactionResponse = TransactionResponse;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_ContractDetailPane.WBP_sw_ContractDetailPane_C.SetIsShopAndShopOffer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsShop                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FShopOfferPresentation      ShopOffer                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_sw_ContractDetailPane_C::SetIsShopAndShopOffer(bool IsShop, const struct FShopOfferPresentation& ShopOffer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_ContractDetailPane_C", "SetIsShopAndShopOffer");

	Params::UWBP_sw_ContractDetailPane_C_SetIsShopAndShopOffer_Params Parms{};

	Parms.IsShop = IsShop;
	Parms.ShopOffer = ShopOffer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_ContractDetailPane.WBP_sw_ContractDetailPane_C.RequestPurchase
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetLocalPlayerController_LocalPlayerController          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UShopPurchaserComponent*     CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IShopInteractionModel>CallFunc_GetShopInteractionSessionModel_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RequestPurchase_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_ContractDetailPane_C::RequestPurchase(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, class UShopPurchaserComponent* CallFunc_GetComponentByClass_ReturnValue, TScriptInterface<class IShopInteractionModel> CallFunc_GetShopInteractionSessionModel_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_RequestPurchase_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_ContractDetailPane_C", "RequestPurchase");

	Params::UWBP_sw_ContractDetailPane_C_RequestPurchase_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetLocalPlayerController_LocalPlayerController = CallFunc_GetLocalPlayerController_LocalPlayerController;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetShopInteractionSessionModel_ReturnValue = CallFunc_GetShopInteractionSessionModel_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_RequestPurchase_ReturnValue = CallFunc_RequestPurchase_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_ContractDetailPane.WBP_sw_ContractDetailPane_C.UpdateButtonEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANWXPlayerState*             CallFunc_GetOwningPlayerState_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQuestTrackerProviderInterface>K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQuestTrackerInterface>CallFunc_GetQuestTracker_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_CanTaskBeHandedIn_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_ContractDetailPane_C::UpdateButtonEnabled(class ANWXPlayerState* CallFunc_GetOwningPlayerState_ReturnValue, TScriptInterface<class IQuestTrackerProviderInterface> K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IQuestTrackerInterface> CallFunc_GetQuestTracker_ReturnValue, bool CallFunc_CanTaskBeHandedIn_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_ContractDetailPane_C", "UpdateButtonEnabled");

	Params::UWBP_sw_ContractDetailPane_C_UpdateButtonEnabled_Params Parms{};

	Parms.CallFunc_GetOwningPlayerState_ReturnValue = CallFunc_GetOwningPlayerState_ReturnValue;
	Parms.K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface = K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetQuestTracker_ReturnValue = CallFunc_GetQuestTracker_ReturnValue;
	Parms.CallFunc_CanTaskBeHandedIn_ReturnValue = CallFunc_CanTaskBeHandedIn_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_ContractDetailPane.WBP_sw_ContractDetailPane_C.GetInstanceIdsandQuantitiesfromEntries
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<struct FInventoryEntry>     Entries                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FInventoryEntryIdAndQuantity>InstanceIdsAndQuantities                                         (Parm, OutParm)
// TArray<struct FInventoryEntryIdAndQuantity>OutInstanceIdsAndQuantities                                      (Edit, BlueprintVisible)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntryIdAndQuantityK2Node_MakeStruct_InventoryEntryIdAndQuantity                    (NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_ContractDetailPane_C::GetInstanceIdsandQuantitiesfromEntries(TArray<struct FInventoryEntry>& Entries, TArray<struct FInventoryEntryIdAndQuantity>* InstanceIdsAndQuantities, const TArray<struct FInventoryEntryIdAndQuantity>& OutInstanceIdsAndQuantities, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FInventoryEntry& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FInventoryEntryIdAndQuantity& K2Node_MakeStruct_InventoryEntryIdAndQuantity, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_ContractDetailPane_C", "GetInstanceIdsandQuantitiesfromEntries");

	Params::UWBP_sw_ContractDetailPane_C_GetInstanceIdsandQuantitiesfromEntries_Params Parms{};

	Parms.Entries = Entries;
	Parms.OutInstanceIdsAndQuantities = OutInstanceIdsAndQuantities;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_InventoryEntryIdAndQuantity = K2Node_MakeStruct_InventoryEntryIdAndQuantity;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InstanceIdsAndQuantities != nullptr)
		*InstanceIdsAndQuantities = std::move(Parms.InstanceIdsAndQuantities);

}


// Function WBP_sw_ContractDetailPane.WBP_sw_ContractDetailPane_C.ShouldOpenItemSelectWindow
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FPlayerTask                 Task                                                             (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FInventoryEntry>     AllQuestItems                                                    (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ShouldOpenWindow                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FItemConstraint>     AllItemConstraints                                               (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemConstraint             CallFunc_Array_Get_Item                                          (ContainsInstancedReference)
// TArray<struct FItemConstraint>     CallFunc_GetTaskItemConstraints_OutItemConstraints               (ReferenceParm, ContainsInstancedReference)
// TArray<struct FInventoryEntry>     CallFunc_FilterEntriesBasedOnConstraint_OutEntriesMeetConstraint (ReferenceParm)
// TArray<struct FInventoryEntry>     CallFunc_FilterEntriesBasedOnConstraint_OutEntriesRelevant       (ReferenceParm)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsEmpty_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_ContractDetailPane_C::ShouldOpenItemSelectWindow(struct FPlayerTask& Task, TArray<struct FInventoryEntry>& AllQuestItems, bool* ShouldOpenWindow, const TArray<struct FItemConstraint>& AllItemConstraints, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FItemConstraint& CallFunc_Array_Get_Item, TArray<struct FItemConstraint>& CallFunc_GetTaskItemConstraints_OutItemConstraints, TArray<struct FInventoryEntry>& CallFunc_FilterEntriesBasedOnConstraint_OutEntriesMeetConstraint, TArray<struct FInventoryEntry>& CallFunc_FilterEntriesBasedOnConstraint_OutEntriesRelevant, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_Array_IsEmpty_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_ContractDetailPane_C", "ShouldOpenItemSelectWindow");

	Params::UWBP_sw_ContractDetailPane_C_ShouldOpenItemSelectWindow_Params Parms{};

	Parms.Task = Task;
	Parms.AllQuestItems = AllQuestItems;
	Parms.AllItemConstraints = AllItemConstraints;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetTaskItemConstraints_OutItemConstraints = CallFunc_GetTaskItemConstraints_OutItemConstraints;
	Parms.CallFunc_FilterEntriesBasedOnConstraint_OutEntriesMeetConstraint = CallFunc_FilterEntriesBasedOnConstraint_OutEntriesMeetConstraint;
	Parms.CallFunc_FilterEntriesBasedOnConstraint_OutEntriesRelevant = CallFunc_FilterEntriesBasedOnConstraint_OutEntriesRelevant;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_IsEmpty_ReturnValue = CallFunc_Array_IsEmpty_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_1 = CallFunc_Array_IsValidIndex_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ShouldOpenWindow != nullptr)
		*ShouldOpenWindow = Parms.ShouldOpenWindow;

}


// Function WBP_sw_ContractDetailPane.WBP_sw_ContractDetailPane_C.OnItemsConfirmed
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_ContractReturn_ItemSelect_C*ItemSelectWidget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQuestTrackerInterface>QuestTrackerInterface                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntryIdAndQuantity>CallFunc_GetSelectedItemIdAndQuantities_IdAndQuantities          (ReferenceParm)

void UWBP_sw_ContractDetailPane_C::OnItemsConfirmed(class UWBP_ContractReturn_ItemSelect_C* ItemSelectWidget, TScriptInterface<class IQuestTrackerInterface> QuestTrackerInterface, TArray<struct FInventoryEntryIdAndQuantity>& CallFunc_GetSelectedItemIdAndQuantities_IdAndQuantities)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_ContractDetailPane_C", "OnItemsConfirmed");

	Params::UWBP_sw_ContractDetailPane_C_OnItemsConfirmed_Params Parms{};

	Parms.ItemSelectWidget = ItemSelectWidget;
	Parms.QuestTrackerInterface = QuestTrackerInterface;
	Parms.CallFunc_GetSelectedItemIdAndQuantities_IdAndQuantities = CallFunc_GetSelectedItemIdAndQuantities_IdAndQuantities;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_ContractDetailPane.WBP_sw_ContractDetailPane_C.OnItemSelectWindowClosed
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNWXCommonWindowWidget*      Window                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_ContractReturn_ItemSelect_C*K2Node_DynamicCast_AsWBP_Contract_Return_Item_Select             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_ContractDetailPane_C::OnItemSelectWindowClosed(class UNWXCommonWindowWidget* Window, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UWBP_ContractReturn_ItemSelect_C* K2Node_DynamicCast_AsWBP_Contract_Return_Item_Select, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_ContractDetailPane_C", "OnItemSelectWindowClosed");

	Params::UWBP_sw_ContractDetailPane_C_OnItemSelectWindowClosed_Params Parms{};

	Parms.Window = Window;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsWBP_Contract_Return_Item_Select = K2Node_DynamicCast_AsWBP_Contract_Return_Item_Select;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_ContractDetailPane.WBP_sw_ContractDetailPane_C.SubmitItems
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FInventoryEntryIdAndQuantity>ItemIdAndQuantities                                              (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TScriptInterface<class IQuestTrackerInterface>QuestTrackerInterface                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerState*             CallFunc_GetOwningPlayerState_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQuestTrackerProviderInterface>K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQuestTrackerInterface>CallFunc_GetQuestTracker_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuestAssetReference        CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue            (None)

void UWBP_sw_ContractDetailPane_C::SubmitItems(TArray<struct FInventoryEntryIdAndQuantity>& ItemIdAndQuantities, TScriptInterface<class IQuestTrackerInterface> QuestTrackerInterface, class ANWXPlayerState* CallFunc_GetOwningPlayerState_ReturnValue, TScriptInterface<class IQuestTrackerProviderInterface> K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IQuestTrackerInterface> CallFunc_GetQuestTracker_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FQuestAssetReference& CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_ContractDetailPane_C", "SubmitItems");

	Params::UWBP_sw_ContractDetailPane_C_SubmitItems_Params Parms{};

	Parms.ItemIdAndQuantities = ItemIdAndQuantities;
	Parms.QuestTrackerInterface = QuestTrackerInterface;
	Parms.CallFunc_GetOwningPlayerState_ReturnValue = CallFunc_GetOwningPlayerState_ReturnValue;
	Parms.K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface = K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetQuestTracker_ReturnValue = CallFunc_GetQuestTracker_ReturnValue;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue = CallFunc_Conv_InterfaceToObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue = CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_ContractDetailPane.WBP_sw_ContractDetailPane_C.HandleItemTurnIn
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerTask                 Task                                                             (Edit, BlueprintVisible)
// TArray<struct FInventoryEntry>     PotentialInventoryItems                                          (Edit, BlueprintVisible)
// class ANWXPlayerState*             CallFunc_GetOwningPlayerState_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQuestTrackerProviderInterface>K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULocalPlayer*                CallFunc_GetLocalPlayerFromController_ReturnValue                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQuestTrackerInterface>CallFunc_GetQuestTracker_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UWBP_ContractReturn_ItemSelect_C*CallFunc_CreateWidgetInstanceFromLayer_ReturnValue               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldOpenItemSelectWindow_ShouldOpenWindow             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntryIdAndQuantity>CallFunc_GetInstanceIdsandQuantitiesfromEntries_InstanceIdsAndQuantities(ReferenceParm)
// TArray<struct FInventoryEntry>     CallFunc_GetTaskTurnInItemsFromPlayerInventory_OutInventoryItems (ReferenceParm)
// bool                               CallFunc_GetTaskTurnInItemsFromPlayerInventory_ReturnValue       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_ContractDetailPane_C::HandleItemTurnIn(const struct FPlayerTask& Task, const TArray<struct FInventoryEntry>& PotentialInventoryItems, class ANWXPlayerState* CallFunc_GetOwningPlayerState_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, TScriptInterface<class IQuestTrackerProviderInterface> K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface, bool K2Node_DynamicCast_bSuccess, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue, TScriptInterface<class IQuestTrackerInterface> CallFunc_GetQuestTracker_ReturnValue, class UWBP_ContractReturn_ItemSelect_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue, bool CallFunc_ShouldOpenItemSelectWindow_ShouldOpenWindow, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TArray<struct FInventoryEntryIdAndQuantity>& CallFunc_GetInstanceIdsandQuantitiesfromEntries_InstanceIdsAndQuantities, TArray<struct FInventoryEntry>& CallFunc_GetTaskTurnInItemsFromPlayerInventory_OutInventoryItems, bool CallFunc_GetTaskTurnInItemsFromPlayerInventory_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_ContractDetailPane_C", "HandleItemTurnIn");

	Params::UWBP_sw_ContractDetailPane_C_HandleItemTurnIn_Params Parms{};

	Parms.Task = Task;
	Parms.PotentialInventoryItems = PotentialInventoryItems;
	Parms.CallFunc_GetOwningPlayerState_ReturnValue = CallFunc_GetOwningPlayerState_ReturnValue;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface = K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetLocalPlayerFromController_ReturnValue = CallFunc_GetLocalPlayerFromController_ReturnValue;
	Parms.CallFunc_GetQuestTracker_ReturnValue = CallFunc_GetQuestTracker_ReturnValue;
	Parms.CallFunc_CreateWidgetInstanceFromLayer_ReturnValue = CallFunc_CreateWidgetInstanceFromLayer_ReturnValue;
	Parms.CallFunc_ShouldOpenItemSelectWindow_ShouldOpenWindow = CallFunc_ShouldOpenItemSelectWindow_ShouldOpenWindow;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetInstanceIdsandQuantitiesfromEntries_InstanceIdsAndQuantities = CallFunc_GetInstanceIdsandQuantitiesfromEntries_InstanceIdsAndQuantities;
	Parms.CallFunc_GetTaskTurnInItemsFromPlayerInventory_OutInventoryItems = CallFunc_GetTaskTurnInItemsFromPlayerInventory_OutInventoryItems;
	Parms.CallFunc_GetTaskTurnInItemsFromPlayerInventory_ReturnValue = CallFunc_GetTaskTurnInItemsFromPlayerInventory_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_ContractDetailPane.WBP_sw_ContractDetailPane_C.CompleteQuest
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerTask                 PlayerTask                                                       (Edit, BlueprintVisible)
// class ANWXPlayerState*             CallFunc_GetOwningPlayerState_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQuestTrackerProviderInterface>K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQuestTrackerInterface>CallFunc_GetQuestTracker_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_DoesTaskNeedItemsToTurnIn_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_ContractDetailPane_C::CompleteQuest(const struct FPlayerTask& PlayerTask, class ANWXPlayerState* CallFunc_GetOwningPlayerState_ReturnValue, TScriptInterface<class IQuestTrackerProviderInterface> K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IQuestTrackerInterface> CallFunc_GetQuestTracker_ReturnValue, bool CallFunc_DoesTaskNeedItemsToTurnIn_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_ContractDetailPane_C", "CompleteQuest");

	Params::UWBP_sw_ContractDetailPane_C_CompleteQuest_Params Parms{};

	Parms.PlayerTask = PlayerTask;
	Parms.CallFunc_GetOwningPlayerState_ReturnValue = CallFunc_GetOwningPlayerState_ReturnValue;
	Parms.K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface = K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetQuestTracker_ReturnValue = CallFunc_GetQuestTracker_ReturnValue;
	Parms.CallFunc_DoesTaskNeedItemsToTurnIn_ReturnValue = CallFunc_DoesTaskNeedItemsToTurnIn_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_ContractDetailPane.WBP_sw_ContractDetailPane_C.AcceptQuest
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IQuestTrackerInterface>QuestTrackerInterface                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class ANWXPlayerState*             CallFunc_GetOwningPlayerState_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQuestTrackerProviderInterface>K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQuestTrackerInterface>CallFunc_GetQuestTracker_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FQuestAssetReference        CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue            (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuestAssetReference        CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue_1          (None)
// class ANWXPlayerState*             CallFunc_GetOwningPlayerState_ReturnValue_1                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQuestTrackerProviderInterface>K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQuestTrackerInterface>CallFunc_GetQuestTracker_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UWBP_sw_ContractDetailPane_C::AcceptQuest(TScriptInterface<class IQuestTrackerInterface> QuestTrackerInterface, class ANWXPlayerState* CallFunc_GetOwningPlayerState_ReturnValue, TScriptInterface<class IQuestTrackerProviderInterface> K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IQuestTrackerInterface> CallFunc_GetQuestTracker_ReturnValue, const struct FQuestAssetReference& CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FQuestAssetReference& CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue_1, class ANWXPlayerState* CallFunc_GetOwningPlayerState_ReturnValue_1, TScriptInterface<class IQuestTrackerProviderInterface> K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface_1, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IQuestTrackerInterface> CallFunc_GetQuestTracker_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_ContractDetailPane_C", "AcceptQuest");

	Params::UWBP_sw_ContractDetailPane_C_AcceptQuest_Params Parms{};

	Parms.QuestTrackerInterface = QuestTrackerInterface;
	Parms.CallFunc_GetOwningPlayerState_ReturnValue = CallFunc_GetOwningPlayerState_ReturnValue;
	Parms.K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface = K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetQuestTracker_ReturnValue = CallFunc_GetQuestTracker_ReturnValue;
	Parms.CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue = CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue_1 = CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue_1;
	Parms.CallFunc_GetOwningPlayerState_ReturnValue_1 = CallFunc_GetOwningPlayerState_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface_1 = K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetQuestTracker_ReturnValue_1 = CallFunc_GetQuestTracker_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_ContractDetailPane.WBP_sw_ContractDetailPane_C.UpdateGoalTrackingButtons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PlayerState_C*           CallFunc_GetLocalPlayerState_PlayerState                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FindQuestHUDVisibilityFromTask_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuestPresentationData      CallFunc_MakeQuestPresentationDataFromTaskProgress_OutQuestPresentationData(None)
// bool                               CallFunc_MakeQuestPresentationDataFromTaskProgress_ReturnValue   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_ContractDetailPane_C::UpdateGoalTrackingButtons(class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState, bool CallFunc_FindQuestHUDVisibilityFromTask_ReturnValue, const struct FQuestPresentationData& CallFunc_MakeQuestPresentationDataFromTaskProgress_OutQuestPresentationData, bool CallFunc_MakeQuestPresentationDataFromTaskProgress_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_ContractDetailPane_C", "UpdateGoalTrackingButtons");

	Params::UWBP_sw_ContractDetailPane_C_UpdateGoalTrackingButtons_Params Parms{};

	Parms.CallFunc_GetLocalPlayerState_PlayerState = CallFunc_GetLocalPlayerState_PlayerState;
	Parms.CallFunc_FindQuestHUDVisibilityFromTask_ReturnValue = CallFunc_FindQuestHUDVisibilityFromTask_ReturnValue;
	Parms.CallFunc_MakeQuestPresentationDataFromTaskProgress_OutQuestPresentationData = CallFunc_MakeQuestPresentationDataFromTaskProgress_OutQuestPresentationData;
	Parms.CallFunc_MakeQuestPresentationDataFromTaskProgress_ReturnValue = CallFunc_MakeQuestPresentationDataFromTaskProgress_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_ContractDetailPane.WBP_sw_ContractDetailPane_C.HandleBGPaperStyle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture2D*                  L_RewardPreviewIcon                                              (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_2                                             (None)
// class FText                        Temp_text_Variable_3                                             (None)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateBrushDrawType     Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateBrushDrawType     Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuestPresentationData      CallFunc_MakeQuestPresentationDataFromShopOfferPresentation_OutQuestPresentationData(None)
// struct FQuestRewardPresentationDataCallFunc_Array_Get_Item                                          (None)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_2                                          (None)
// enum class ESlateVisibility        K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuestPresentationData      CallFunc_MakeQuestPresentationDataFromTaskProgress_OutQuestPresentationData(None)
// bool                               CallFunc_MakeQuestPresentationDataFromTaskProgress_ReturnValue   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_Select_Default_4                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FQuestRewardPresentationDataCallFunc_Array_Get_Item_1                                        (None)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_1                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateBrushDrawType     K2Node_Select_Default_5                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)

void UWBP_sw_ContractDetailPane_C::HandleBGPaperStyle(class UTexture2D* L_RewardPreviewIcon, class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_3, class UTexture2D* Temp_object_Variable, bool Temp_bool_Variable_4, enum class ESlateBrushDrawType Temp_byte_Variable_4, enum class ESlateBrushDrawType Temp_byte_Variable_5, bool Temp_bool_Variable_5, const struct FQuestPresentationData& CallFunc_MakeQuestPresentationDataFromShopOfferPresentation_OutQuestPresentationData, const struct FQuestRewardPresentationData& CallFunc_Array_Get_Item, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class FText K2Node_Select_Default, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, enum class ESlateVisibility K2Node_Select_Default_1, class FText K2Node_Select_Default_2, enum class ESlateVisibility K2Node_Select_Default_3, const struct FQuestPresentationData& CallFunc_MakeQuestPresentationDataFromTaskProgress_OutQuestPresentationData, bool CallFunc_MakeQuestPresentationDataFromTaskProgress_ReturnValue, class UTexture2D* K2Node_Select_Default_4, const struct FQuestRewardPresentationData& CallFunc_Array_Get_Item_1, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_1, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_1, bool K2Node_DynamicCast_bSuccess_1, enum class ESlateBrushDrawType K2Node_Select_Default_5, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_ContractDetailPane_C", "HandleBGPaperStyle");

	Params::UWBP_sw_ContractDetailPane_C_HandleBGPaperStyle_Params Parms{};

	Parms.L_RewardPreviewIcon = L_RewardPreviewIcon;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.CallFunc_MakeQuestPresentationDataFromShopOfferPresentation_OutQuestPresentationData = CallFunc_MakeQuestPresentationDataFromShopOfferPresentation_OutQuestPresentationData;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue = CallFunc_LoadAsset_Blocking_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_MakeQuestPresentationDataFromTaskProgress_OutQuestPresentationData = CallFunc_MakeQuestPresentationDataFromTaskProgress_OutQuestPresentationData;
	Parms.CallFunc_MakeQuestPresentationDataFromTaskProgress_ReturnValue = CallFunc_MakeQuestPresentationDataFromTaskProgress_ReturnValue;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue_1 = CallFunc_LoadAsset_Blocking_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsTexture_2D_1 = K2Node_DynamicCast_AsTexture_2D_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_ContractDetailPane.WBP_sw_ContractDetailPane_C.SetTaskProgressAndContractState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOngoingTaskProgress        NewTaskProgress                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class E_Contract_StateType    NewContractState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_ContractDetailPane_C::SetTaskProgressAndContractState(const struct FOngoingTaskProgress& NewTaskProgress, enum class E_Contract_StateType NewContractState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_ContractDetailPane_C", "SetTaskProgressAndContractState");

	Params::UWBP_sw_ContractDetailPane_C_SetTaskProgressAndContractState_Params Parms{};

	Parms.NewTaskProgress = NewTaskProgress;
	Parms.NewContractState = NewContractState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_ContractDetailPane.WBP_sw_ContractDetailPane_C.SetTaskProgress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOngoingTaskProgress        NewTaskProgress                                                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_sw_ContractDetailPane_C::SetTaskProgress(const struct FOngoingTaskProgress& NewTaskProgress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_ContractDetailPane_C", "SetTaskProgress");

	Params::UWBP_sw_ContractDetailPane_C_SetTaskProgress_Params Parms{};

	Parms.NewTaskProgress = NewTaskProgress;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_ContractDetailPane.WBP_sw_ContractDetailPane_C.GetTaskProgress
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FOngoingTaskProgress        TaskProgress                                                     (Parm, OutParm)

void UWBP_sw_ContractDetailPane_C::GetTaskProgress(struct FOngoingTaskProgress* TaskProgress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_ContractDetailPane_C", "GetTaskProgress");

	Params::UWBP_sw_ContractDetailPane_C_GetTaskProgress_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (TaskProgress != nullptr)
		*TaskProgress = std::move(Parms.TaskProgress);

}


// Function WBP_sw_ContractDetailPane.WBP_sw_ContractDetailPane_C.SetContractState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_Contract_StateType    NewContractState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_ContractDetailPane_C::SetContractState(enum class E_Contract_StateType NewContractState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_ContractDetailPane_C", "SetContractState");

	Params::UWBP_sw_ContractDetailPane_C_SetContractState_Params Parms{};

	Parms.NewContractState = NewContractState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_ContractDetailPane.WBP_sw_ContractDetailPane_C.GetContractState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class E_Contract_StateType    ContractState                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_ContractDetailPane_C::GetContractState(enum class E_Contract_StateType* ContractState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_ContractDetailPane_C", "GetContractState");

	Params::UWBP_sw_ContractDetailPane_C_GetContractState_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ContractState != nullptr)
		*ContractState = Parms.ContractState;

}


// Function WBP_sw_ContractDetailPane.WBP_sw_ContractDetailPane_C.RefreshButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// enum class E_Contract_StateType    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// class FText                        Temp_text_Variable_3                                             (None)
// class FText                        Temp_text_Variable_4                                             (None)
// class FText                        Temp_text_Variable_5                                             (None)
// class FText                        Temp_text_Variable_6                                             (None)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_7                                             (None)
// class FText                        K2Node_Select_Default                                            (None)
// class FText                        K2Node_Select_Default_1                                          (None)
// class FText                        K2Node_Select_Default_2                                          (None)

void UWBP_sw_ContractDetailPane_C::RefreshButton(bool Temp_bool_Variable, class FText Temp_text_Variable, enum class E_Contract_StateType Temp_byte_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, bool Temp_bool_Variable_1, class FText Temp_text_Variable_7, class FText K2Node_Select_Default, class FText K2Node_Select_Default_1, class FText K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_ContractDetailPane_C", "RefreshButton");

	Params::UWBP_sw_ContractDetailPane_C_RefreshButton_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.Temp_text_Variable_5 = Temp_text_Variable_5;
	Parms.Temp_text_Variable_6 = Temp_text_Variable_6;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_text_Variable_7 = Temp_text_Variable_7;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_ContractDetailPane.WBP_sw_ContractDetailPane_C.Show Rewards
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FDataTableRowHandle> Reward_Values_LOCAL                                              (Edit, BlueprintVisible)
// TArray<enum class E_UI_QuestRewardFormating>Reward_Keys_LOCAL                                                (Edit, BlueprintVisible)
// TArray<int32>                      Reward_Quantity_LOCAL                                            (Edit, BlueprintVisible)
// TMap<enum class E_UI_QuestRewardFormating, struct FDataTableRowHandle>Reward_Table_LOCAL                                               (Edit, BlueprintVisible)
// class UWBP_QuestRewardEntry_C*     CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TMap<enum class E_UI_QuestRewardFormating, struct FDataTableRowHandle>K2Node_MakeVariable_MakeVariableOutput                           (None)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuestPresentationData      CallFunc_MakeQuestPresentationDataFromShopOfferPresentation_OutQuestPresentationData(None)
// struct FQuestRewardPresentationDataCallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_QuestRewardEntry_C*     CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FQuestPresentationData      CallFunc_MakeQuestPresentationDataFromTaskProgress_OutQuestPresentationData(None)
// bool                               CallFunc_MakeQuestPresentationDataFromTaskProgress_ReturnValue   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuestRewardPresentationDataCallFunc_Array_Get_Item_1                                        (None)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue_1                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_ContractDetailPane_C::Show_Rewards(const TArray<struct FDataTableRowHandle>& Reward_Values_LOCAL, const TArray<enum class E_UI_QuestRewardFormating>& Reward_Keys_LOCAL, const TArray<int32>& Reward_Quantity_LOCAL, TMap<enum class E_UI_QuestRewardFormating, struct FDataTableRowHandle> Reward_Table_LOCAL, class UWBP_QuestRewardEntry_C* CallFunc_Create_ReturnValue, TMap<enum class E_UI_QuestRewardFormating, struct FDataTableRowHandle> K2Node_MakeVariable_MakeVariableOutput, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, const struct FQuestPresentationData& CallFunc_MakeQuestPresentationDataFromShopOfferPresentation_OutQuestPresentationData, const struct FQuestRewardPresentationData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_QuestRewardEntry_C* CallFunc_Create_ReturnValue_1, const struct FQuestPresentationData& CallFunc_MakeQuestPresentationDataFromTaskProgress_OutQuestPresentationData, bool CallFunc_MakeQuestPresentationDataFromTaskProgress_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FQuestRewardPresentationData& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_ContractDetailPane_C", "Show Rewards");

	Params::UWBP_sw_ContractDetailPane_C_Show_Rewards_Params Parms{};

	Parms.Reward_Values_LOCAL = Reward_Values_LOCAL;
	Parms.Reward_Keys_LOCAL = Reward_Keys_LOCAL;
	Parms.Reward_Quantity_LOCAL = Reward_Quantity_LOCAL;
	Parms.Reward_Table_LOCAL = Reward_Table_LOCAL;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_MakeVariable_MakeVariableOutput = K2Node_MakeVariable_MakeVariableOutput;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_MakeQuestPresentationDataFromShopOfferPresentation_OutQuestPresentationData = CallFunc_MakeQuestPresentationDataFromShopOfferPresentation_OutQuestPresentationData;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_MakeQuestPresentationDataFromTaskProgress_OutQuestPresentationData = CallFunc_MakeQuestPresentationDataFromTaskProgress_OutQuestPresentationData;
	Parms.CallFunc_MakeQuestPresentationDataFromTaskProgress_ReturnValue = CallFunc_MakeQuestPresentationDataFromTaskProgress_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue_1 = CallFunc_AddChildToVerticalBox_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_ContractDetailPane.WBP_sw_ContractDetailPane_C.Show Progress States
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_ContractDetailPane_C::Show_Progress_States(bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_ContractDetailPane_C", "Show Progress States");

	Params::UWBP_sw_ContractDetailPane_C_Show_Progress_States_Params Parms{};

	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_ContractDetailPane.WBP_sw_ContractDetailPane_C.SetupTaskInfo
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOngoingTaskProgress        TaskProgress                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// class UWBP_sw_QuestTaskEntry_C*    CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_3                                             (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// class FText                        Temp_text_Variable_4                                             (None)
// class FText                        Temp_text_Variable_5                                             (None)
// class FText                        Temp_text_Variable_6                                             (None)
// struct FQuestTaskPresentationData  CallFunc_MakeQuestTaskPresentationDataFromTaskProgress_OutQuestTaskPresentationData(None)
// bool                               CallFunc_MakeQuestTaskPresentationDataFromTaskProgress_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFaction                Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuestTaskConditionPresentationDataCallFunc_Array_Get_Item                                          (None)
// class FText                        K2Node_Select_Default                                            (None)
// class FText                        CallFunc_Conv_IntToText_ReturnValue_1                            (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_2                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_2                                    (None)
// struct FQuestTaskPresentationData  CallFunc_MakeQuestTaskPresentationDataFromTaskProgress_OutQuestTaskPresentationData_1(None)
// bool                               CallFunc_MakeQuestTaskPresentationDataFromTaskProgress_ReturnValue_1(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_ContractDetailPane_C::SetupTaskInfo(const struct FOngoingTaskProgress& TaskProgress, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class UWBP_sw_QuestTaskEntry_C* CallFunc_Create_ReturnValue, class FText Temp_text_Variable_3, class FText CallFunc_Conv_IntToText_ReturnValue, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, const struct FQuestTaskPresentationData& CallFunc_MakeQuestTaskPresentationDataFromTaskProgress_OutQuestTaskPresentationData, bool CallFunc_MakeQuestTaskPresentationDataFromTaskProgress_ReturnValue, enum class EFaction Temp_byte_Variable, const struct FQuestTaskConditionPresentationData& CallFunc_Array_Get_Item, class FText K2Node_Select_Default, class FText CallFunc_Conv_IntToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FText CallFunc_Format_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue_2, const struct FQuestTaskPresentationData& CallFunc_MakeQuestTaskPresentationDataFromTaskProgress_OutQuestTaskPresentationData_1, bool CallFunc_MakeQuestTaskPresentationDataFromTaskProgress_ReturnValue_1, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_ContractDetailPane_C", "SetupTaskInfo");

	Params::UWBP_sw_ContractDetailPane_C_SetupTaskInfo_Params Parms{};

	Parms.TaskProgress = TaskProgress;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.Temp_text_Variable_5 = Temp_text_Variable_5;
	Parms.Temp_text_Variable_6 = Temp_text_Variable_6;
	Parms.CallFunc_MakeQuestTaskPresentationDataFromTaskProgress_OutQuestTaskPresentationData = CallFunc_MakeQuestTaskPresentationDataFromTaskProgress_OutQuestTaskPresentationData;
	Parms.CallFunc_MakeQuestTaskPresentationDataFromTaskProgress_ReturnValue = CallFunc_MakeQuestTaskPresentationDataFromTaskProgress_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_IntToText_ReturnValue_1 = CallFunc_Conv_IntToText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_Format_ReturnValue_2 = CallFunc_Format_ReturnValue_2;
	Parms.CallFunc_MakeQuestTaskPresentationDataFromTaskProgress_OutQuestTaskPresentationData_1 = CallFunc_MakeQuestTaskPresentationDataFromTaskProgress_OutQuestTaskPresentationData_1;
	Parms.CallFunc_MakeQuestTaskPresentationDataFromTaskProgress_ReturnValue_1 = CallFunc_MakeQuestTaskPresentationDataFromTaskProgress_ReturnValue_1;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_ContractDetailPane.WBP_sw_ContractDetailPane_C.Setup Static Data
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuestPresentationData      QuestPresentationData                                            (Edit, BlueprintVisible)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuestPresentationData      CallFunc_MakeQuestPresentationDataFromShopOfferPresentation_OutQuestPresentationData(None)
// struct FQuestPresentationData      CallFunc_MakeQuestPresentationDataFromTaskProgress_OutQuestPresentationData(None)
// bool                               CallFunc_MakeQuestPresentationDataFromTaskProgress_ReturnValue   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuestRewardPresentationDataCallFunc_Array_Get_Item                                          (None)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (ConstParm)
// class ANWXPlayerController*        CallFunc_GetLocalPlayerController_LocalPlayerController          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQuestTrackerProviderInterface>K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQuestTrackerInterface>CallFunc_GetQuestTracker_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_CanTaskBeHandedIn_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQuestRewardPresentationDataCallFunc_Array_Get_Item_1                                        (None)
// class FText                        K2Node_Select_Default_1                                          (ConstParm)

void UWBP_sw_ContractDetailPane_C::Setup_Static_Data(const struct FQuestPresentationData& QuestPresentationData, bool Temp_bool_Variable, const struct FQuestPresentationData& CallFunc_MakeQuestPresentationDataFromShopOfferPresentation_OutQuestPresentationData, const struct FQuestPresentationData& CallFunc_MakeQuestPresentationDataFromTaskProgress_OutQuestPresentationData, bool CallFunc_MakeQuestPresentationDataFromTaskProgress_ReturnValue, const struct FQuestRewardPresentationData& CallFunc_Array_Get_Item, bool Temp_bool_Variable_1, class FText K2Node_Select_Default, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, TScriptInterface<class IQuestTrackerProviderInterface> K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IQuestTrackerInterface> CallFunc_GetQuestTracker_ReturnValue, bool CallFunc_CanTaskBeHandedIn_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FQuestRewardPresentationData& CallFunc_Array_Get_Item_1, class FText K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_ContractDetailPane_C", "Setup Static Data");

	Params::UWBP_sw_ContractDetailPane_C_Setup_Static_Data_Params Parms{};

	Parms.QuestPresentationData = QuestPresentationData;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_MakeQuestPresentationDataFromShopOfferPresentation_OutQuestPresentationData = CallFunc_MakeQuestPresentationDataFromShopOfferPresentation_OutQuestPresentationData;
	Parms.CallFunc_MakeQuestPresentationDataFromTaskProgress_OutQuestPresentationData = CallFunc_MakeQuestPresentationDataFromTaskProgress_OutQuestPresentationData;
	Parms.CallFunc_MakeQuestPresentationDataFromTaskProgress_ReturnValue = CallFunc_MakeQuestPresentationDataFromTaskProgress_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetLocalPlayerController_LocalPlayerController = CallFunc_GetLocalPlayerController_LocalPlayerController;
	Parms.K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface = K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetQuestTracker_ReturnValue = CallFunc_GetQuestTracker_ReturnValue;
	Parms.CallFunc_CanTaskBeHandedIn_ReturnValue = CallFunc_CanTaskBeHandedIn_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_ContractDetailPane.WBP_sw_ContractDetailPane_C.SetupQuestDetails
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQuestAssetReference        CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue            (None)
// struct FQuest                      CallFunc_GetQuestDataFromQuestAssetReference_OutData             (ContainsInstancedReference)
// bool                               CallFunc_GetQuestDataFromQuestAssetReference_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_ContractDetailPane_C::SetupQuestDetails(const struct FQuestAssetReference& CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue, const struct FQuest& CallFunc_GetQuestDataFromQuestAssetReference_OutData, bool CallFunc_GetQuestDataFromQuestAssetReference_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_ContractDetailPane_C", "SetupQuestDetails");

	Params::UWBP_sw_ContractDetailPane_C_SetupQuestDetails_Params Parms{};

	Parms.CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue = CallFunc_GetQuestReferenceFromOngoingTask_ReturnValue;
	Parms.CallFunc_GetQuestDataFromQuestAssetReference_OutData = CallFunc_GetQuestDataFromQuestAssetReference_OutData;
	Parms.CallFunc_GetQuestDataFromQuestAssetReference_ReturnValue = CallFunc_GetQuestDataFromQuestAssetReference_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_ContractDetailPane.WBP_sw_ContractDetailPane_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_sw_ContractDetailPane_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_ContractDetailPane_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_sw_ContractDetailPane.WBP_sw_ContractDetailPane_C.Refresh_SW_ContractDetailPane
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_sw_ContractDetailPane_C::Refresh_SW_ContractDetailPane()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_ContractDetailPane_C", "Refresh_SW_ContractDetailPane");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_sw_ContractDetailPane.WBP_sw_ContractDetailPane_C.BndEvt__WBP_sw_ContractDetailPane_CBU_Track_Add_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_ContractDetailPane_C::BndEvt__WBP_sw_ContractDetailPane_CBU_Track_Add_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_ContractDetailPane_C", "BndEvt__WBP_sw_ContractDetailPane_CBU_Track_Add_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_sw_ContractDetailPane_C_BndEvt__WBP_sw_ContractDetailPane_CBU_Track_Add_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_ContractDetailPane.WBP_sw_ContractDetailPane_C.BndEvt__WBP_sw_ContractDetailPane_CBU_Track_Remove_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_ContractDetailPane_C::BndEvt__WBP_sw_ContractDetailPane_CBU_Track_Remove_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_ContractDetailPane_C", "BndEvt__WBP_sw_ContractDetailPane_CBU_Track_Remove_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_sw_ContractDetailPane_C_BndEvt__WBP_sw_ContractDetailPane_CBU_Track_Remove_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_ContractDetailPane.WBP_sw_ContractDetailPane_C.BndEvt__WBP_sw_ContractDetailPane_CBU_Quest_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_ContractDetailPane_C::BndEvt__WBP_sw_ContractDetailPane_CBU_Quest_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_ContractDetailPane_C", "BndEvt__WBP_sw_ContractDetailPane_CBU_Quest_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_sw_ContractDetailPane_C_BndEvt__WBP_sw_ContractDetailPane_CBU_Quest_K2Node_ComponentBoundEvent_5_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_ContractDetailPane.WBP_sw_ContractDetailPane_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_sw_ContractDetailPane_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_ContractDetailPane_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_sw_ContractDetailPane.WBP_sw_ContractDetailPane_C.ExecuteUbergraph_WBP_sw_ContractDetailPane
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_ContractDetailPane_C::ExecuteUbergraph_WBP_sw_ContractDetailPane(int32 EntryPoint, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_ContractDetailPane_C", "ExecuteUbergraph_WBP_sw_ContractDetailPane");

	Params::UWBP_sw_ContractDetailPane_C_ExecuteUbergraph_WBP_sw_ContractDetailPane_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_sw_ContractDetailPane.WBP_sw_ContractDetailPane_C.QuestAccepted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FOngoingTaskProgress        Accepted                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class E_Contract_StateType    Contract_State                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_sw_ContractDetailPane_C::QuestAccepted__DelegateSignature(const struct FOngoingTaskProgress& Accepted, enum class E_Contract_StateType Contract_State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_sw_ContractDetailPane_C", "QuestAccepted__DelegateSignature");

	Params::UWBP_sw_ContractDetailPane_C_QuestAccepted__DelegateSignature_Params Parms{};

	Parms.Accepted = Accepted;
	Parms.Contract_State = Contract_State;

	UObject::ProcessEvent(Func, &Parms);

}

}


