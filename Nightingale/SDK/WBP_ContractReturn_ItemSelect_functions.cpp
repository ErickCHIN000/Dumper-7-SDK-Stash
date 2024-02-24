#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_ContractReturn_ItemSelect.WBP_ContractReturn_ItemSelect_C
// (None)

class UClass* UWBP_ContractReturn_ItemSelect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_ContractReturn_ItemSelect_C");

	return Clss;
}


// WBP_ContractReturn_ItemSelect_C WBP_ContractReturn_ItemSelect.Default__WBP_ContractReturn_ItemSelect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_ContractReturn_ItemSelect_C* UWBP_ContractReturn_ItemSelect_C::GetDefaultObj()
{
	static class UWBP_ContractReturn_ItemSelect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_ContractReturn_ItemSelect_C*>(UWBP_ContractReturn_ItemSelect_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_ContractReturn_ItemSelect.WBP_ContractReturn_ItemSelect_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_ContractReturn_ItemSelect_C::BP_GetDesiredFocusTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ContractReturn_ItemSelect_C", "BP_GetDesiredFocusTarget");

	Params::UWBP_ContractReturn_ItemSelect_C_BP_GetDesiredFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_ContractReturn_ItemSelect.WBP_ContractReturn_ItemSelect_C.OnConstraintGroupItemSelected
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_ContractReturn_ItemSelect_ConstraintGroup_C*K2Node_DynamicCast_AsWBP_Contract_Return_Item_Select_Constraint_Group(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsConstraintSatisfied_IsSatisfied                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ContractReturn_ItemSelect_C::OnConstraintGroupItemSelected(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_ContractReturn_ItemSelect_ConstraintGroup_C* K2Node_DynamicCast_AsWBP_Contract_Return_Item_Select_Constraint_Group, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsConstraintSatisfied_IsSatisfied, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ContractReturn_ItemSelect_C", "OnConstraintGroupItemSelected");

	Params::UWBP_ContractReturn_ItemSelect_C_OnConstraintGroupItemSelected_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Contract_Return_Item_Select_Constraint_Group = K2Node_DynamicCast_AsWBP_Contract_Return_Item_Select_Constraint_Group;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsConstraintSatisfied_IsSatisfied = CallFunc_IsConstraintSatisfied_IsSatisfied;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ContractReturn_ItemSelect.WBP_ContractReturn_ItemSelect_C.UnbindFromEvents
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_ContractReturn_ItemSelect_ConstraintGroup_C*K2Node_DynamicCast_AsWBP_Contract_Return_Item_Select_Constraint_Group(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ContractReturn_ItemSelect_C::UnbindFromEvents(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_ContractReturn_ItemSelect_ConstraintGroup_C* K2Node_DynamicCast_AsWBP_Contract_Return_Item_Select_Constraint_Group, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ContractReturn_ItemSelect_C", "UnbindFromEvents");

	Params::UWBP_ContractReturn_ItemSelect_C_UnbindFromEvents_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Contract_Return_Item_Select_Constraint_Group = K2Node_DynamicCast_AsWBP_Contract_Return_Item_Select_Constraint_Group;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ContractReturn_ItemSelect.WBP_ContractReturn_ItemSelect_C.Confirm Item
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FInventoryEntry>     SelectedItems                                                    (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntryIdAndQuantityK2Node_MakeStruct_InventoryEntryIdAndQuantity                    (NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_ContractReturn_ItemSelect_ConstraintGroup_C*K2Node_DynamicCast_AsWBP_Contract_Return_Item_Select_Constraint_Group(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     CallFunc_GetSelectedItems_SelectedItem                           (ReferenceParm)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ContractReturn_ItemSelect_C::Confirm_Item(const TArray<struct FInventoryEntry>& SelectedItems, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, const struct FInventoryEntry& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FInventoryEntryIdAndQuantity& K2Node_MakeStruct_InventoryEntryIdAndQuantity, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue, class UWidget* CallFunc_Array_Get_Item_1, class UWBP_ContractReturn_ItemSelect_ConstraintGroup_C* K2Node_DynamicCast_AsWBP_Contract_Return_Item_Select_Constraint_Group, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue_1, TArray<struct FInventoryEntry>& CallFunc_GetSelectedItems_SelectedItem, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ContractReturn_ItemSelect_C", "Confirm Item");

	Params::UWBP_ContractReturn_ItemSelect_C_Confirm_Item_Params Parms{};

	Parms.SelectedItems = SelectedItems;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_MakeStruct_InventoryEntryIdAndQuantity = K2Node_MakeStruct_InventoryEntryIdAndQuantity;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_GetIsEnabled_ReturnValue = CallFunc_GetIsEnabled_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_DynamicCast_AsWBP_Contract_Return_Item_Select_Constraint_Group = K2Node_DynamicCast_AsWBP_Contract_Return_Item_Select_Constraint_Group;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_GetSelectedItems_SelectedItem = CallFunc_GetSelectedItems_SelectedItem;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ContractReturn_ItemSelect.WBP_ContractReturn_ItemSelect_C.Initialize
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FItemConstraint>     AllItemConstraints                                               (Edit, BlueprintVisible, ContainsInstancedReference)
// TScriptInterface<class IQuestTrackerInterface>QuestTracker                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CurrentInventoryEntry                                            (Edit, BlueprintVisible)
// TArray<struct FInventoryEntry>     PotentialItems                                                   (Edit, BlueprintVisible)
// class APlayerState*                PlayerState                                                      (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_ContractReturn_ItemSelect_ConstraintGroup_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerState*             CallFunc_GetOwningPlayerState_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FItemConstraint             CallFunc_Array_Get_Item                                          (ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FItemConstraint>     CallFunc_GetTaskItemConstraints_OutItemConstraints               (ReferenceParm, ContainsInstancedReference)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQuestTrackerProviderInterface>K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     CallFunc_GetTaskTurnInItemsFromPlayerInventory_OutInventoryItems (ReferenceParm)
// bool                               CallFunc_GetTaskTurnInItemsFromPlayerInventory_ReturnValue       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQuestTrackerInterface>CallFunc_GetQuestTracker_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UWBP_ContractReturn_ItemSelect_C::Initialize(const TArray<struct FItemConstraint>& AllItemConstraints, TScriptInterface<class IQuestTrackerInterface> QuestTracker, const struct FInventoryEntry& CurrentInventoryEntry, const TArray<struct FInventoryEntry>& PotentialItems, class APlayerState* PlayerState, int32 Temp_int_Array_Index_Variable, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, class UWBP_ContractReturn_ItemSelect_ConstraintGroup_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ANWXPlayerState* CallFunc_GetOwningPlayerState_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue, const struct FItemConstraint& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TArray<struct FItemConstraint>& CallFunc_GetTaskItemConstraints_OutItemConstraints, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TScriptInterface<class IQuestTrackerProviderInterface> K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface, bool K2Node_DynamicCast_bSuccess, TArray<struct FInventoryEntry>& CallFunc_GetTaskTurnInItemsFromPlayerInventory_OutInventoryItems, bool CallFunc_GetTaskTurnInItemsFromPlayerInventory_ReturnValue, TScriptInterface<class IQuestTrackerInterface> CallFunc_GetQuestTracker_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ContractReturn_ItemSelect_C", "Initialize");

	Params::UWBP_ContractReturn_ItemSelect_C_Initialize_Params Parms{};

	Parms.AllItemConstraints = AllItemConstraints;
	Parms.QuestTracker = QuestTracker;
	Parms.CurrentInventoryEntry = CurrentInventoryEntry;
	Parms.PotentialItems = PotentialItems;
	Parms.PlayerState = PlayerState;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue = CallFunc_Conv_InterfaceToObject_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwningPlayerState_ReturnValue = CallFunc_GetOwningPlayerState_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetTaskItemConstraints_OutItemConstraints = CallFunc_GetTaskItemConstraints_OutItemConstraints;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface = K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetTaskTurnInItemsFromPlayerInventory_OutInventoryItems = CallFunc_GetTaskTurnInItemsFromPlayerInventory_OutInventoryItems;
	Parms.CallFunc_GetTaskTurnInItemsFromPlayerInventory_ReturnValue = CallFunc_GetTaskTurnInItemsFromPlayerInventory_ReturnValue;
	Parms.CallFunc_GetQuestTracker_ReturnValue = CallFunc_GetQuestTracker_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ContractReturn_ItemSelect.WBP_ContractReturn_ItemSelect_C.GetSelectedItemIdAndQuantities
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<struct FInventoryEntryIdAndQuantity>IdAndQuantities                                                  (Parm, OutParm)

void UWBP_ContractReturn_ItemSelect_C::GetSelectedItemIdAndQuantities(TArray<struct FInventoryEntryIdAndQuantity>* IdAndQuantities)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ContractReturn_ItemSelect_C", "GetSelectedItemIdAndQuantities");

	Params::UWBP_ContractReturn_ItemSelect_C_GetSelectedItemIdAndQuantities_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IdAndQuantities != nullptr)
		*IdAndQuantities = std::move(Parms.IdAndQuantities);

}


// Function WBP_ContractReturn_ItemSelect.WBP_ContractReturn_ItemSelect_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_ContractReturn_ItemSelect_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ContractReturn_ItemSelect_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ContractReturn_ItemSelect.WBP_ContractReturn_ItemSelect_C.BndEvt__WBP_JB_ContractReturn_ItemSelect_BU_Cancel_K2Node_ComponentBoundEvent_0_BU_Click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_ContractReturn_ItemSelect_C::BndEvt__WBP_JB_ContractReturn_ItemSelect_BU_Cancel_K2Node_ComponentBoundEvent_0_BU_Click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ContractReturn_ItemSelect_C", "BndEvt__WBP_JB_ContractReturn_ItemSelect_BU_Cancel_K2Node_ComponentBoundEvent_0_BU_Click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ContractReturn_ItemSelect.WBP_ContractReturn_ItemSelect_C.BndEvt__WBP_JB_ContractReturn_ItemSelect_BU_Confirm_K2Node_ComponentBoundEvent_1_BU_Click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_ContractReturn_ItemSelect_C::BndEvt__WBP_JB_ContractReturn_ItemSelect_BU_Confirm_K2Node_ComponentBoundEvent_1_BU_Click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ContractReturn_ItemSelect_C", "BndEvt__WBP_JB_ContractReturn_ItemSelect_BU_Confirm_K2Node_ComponentBoundEvent_1_BU_Click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ContractReturn_ItemSelect.WBP_ContractReturn_ItemSelect_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_ContractReturn_ItemSelect_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ContractReturn_ItemSelect_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ContractReturn_ItemSelect.WBP_ContractReturn_ItemSelect_C.ExecuteUbergraph_WBP_ContractReturn_ItemSelect
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ContractReturn_ItemSelect_C::ExecuteUbergraph_WBP_ContractReturn_ItemSelect(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ContractReturn_ItemSelect_C", "ExecuteUbergraph_WBP_ContractReturn_ItemSelect");

	Params::UWBP_ContractReturn_ItemSelect_C_ExecuteUbergraph_WBP_ContractReturn_ItemSelect_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ContractReturn_ItemSelect.WBP_ContractReturn_ItemSelect_C.OnItemsConfirmed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_ContractReturn_ItemSelect_C*ItemSelectWidget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_ContractReturn_ItemSelect_C::OnItemsConfirmed__DelegateSignature(class UWBP_ContractReturn_ItemSelect_C* ItemSelectWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ContractReturn_ItemSelect_C", "OnItemsConfirmed__DelegateSignature");

	Params::UWBP_ContractReturn_ItemSelect_C_OnItemsConfirmed__DelegateSignature_Params Parms{};

	Parms.ItemSelectWidget = ItemSelectWidget;

	UObject::ProcessEvent(Func, &Parms);

}

}


