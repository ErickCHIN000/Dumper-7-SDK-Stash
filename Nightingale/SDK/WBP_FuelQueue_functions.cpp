#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_FuelQueue.WBP_FuelQueue_C
// (None)

class UClass* UWBP_FuelQueue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_FuelQueue_C");

	return Clss;
}


// WBP_FuelQueue_C WBP_FuelQueue.Default__WBP_FuelQueue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_FuelQueue_C* UWBP_FuelQueue_C::GetDefaultObj()
{
	static class UWBP_FuelQueue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_FuelQueue_C*>(UWBP_FuelQueue_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_FuelQueue.WBP_FuelQueue_C.OnActiveEntryUpdated
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             ActiveItem                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_FuelQueue_C::OnActiveEntryUpdated(struct FInventoryEntry& ActiveItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_FuelQueue_C", "OnActiveEntryUpdated");

	Params::UWBP_FuelQueue_C_OnActiveEntryUpdated_Params Parms{};

	Parms.ActiveItem = ActiveItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FuelQueue.WBP_FuelQueue_C.CreateEmptyWidgets
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NumItemsDisplayed                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             ItemsBeingDisplayed                                              (Edit, BlueprintVisible)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_sw_EmptyGridEntry_C*    CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UUniformGridSlot*            CallFunc_AddGridItem_ReturnValue                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_FuelQueue_C::CreateEmptyWidgets(int32 NumItemsDisplayed, const struct FInventoryEntry& ItemsBeingDisplayed, int32 Temp_int_Variable, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, class UWBP_sw_EmptyGridEntry_C* CallFunc_Create_ReturnValue, class UUniformGridSlot* CallFunc_AddGridItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_FuelQueue_C", "CreateEmptyWidgets");

	Params::UWBP_FuelQueue_C_CreateEmptyWidgets_Params Parms{};

	Parms.NumItemsDisplayed = NumItemsDisplayed;
	Parms.ItemsBeingDisplayed = ItemsBeingDisplayed;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddGridItem_ReturnValue = CallFunc_AddGridItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FuelQueue.WBP_FuelQueue_C.GeneratePadding
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NumDisplayedStacks                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureResourceManagerOwnerInterface>K2Node_DynamicCast_AsStructure_Resource_Manager_Owner_Interface  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureResourceRequirementsInterface>CallFunc_GetPostConstructionResourceRequirements_ReturnValue     (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FStructureResourceRequirements>CallFunc_GetTotalResourceRequirements_TotalResourceRequirements  (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_GetQuantityRemaining_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FuelQueue_C::GeneratePadding(int32 NumDisplayedStacks, int32 CallFunc_Percent_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, TScriptInterface<class IStructureResourceManagerOwnerInterface> K2Node_DynamicCast_AsStructure_Resource_Manager_Owner_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IStructureResourceRequirementsInterface> CallFunc_GetPostConstructionResourceRequirements_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<struct FStructureResourceRequirements>& CallFunc_GetTotalResourceRequirements_TotalResourceRequirements, int32 CallFunc_GetQuantityRemaining_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_FuelQueue_C", "GeneratePadding");

	Params::UWBP_FuelQueue_C_GeneratePadding_Params Parms{};

	Parms.NumDisplayedStacks = NumDisplayedStacks;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsStructure_Resource_Manager_Owner_Interface = K2Node_DynamicCast_AsStructure_Resource_Manager_Owner_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPostConstructionResourceRequirements_ReturnValue = CallFunc_GetPostConstructionResourceRequirements_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetTotalResourceRequirements_TotalResourceRequirements = CallFunc_GetTotalResourceRequirements_TotalResourceRequirements;
	Parms.CallFunc_GetQuantityRemaining_ReturnValue = CallFunc_GetQuantityRemaining_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FuelQueue.WBP_FuelQueue_C.UnbindFromEntryWidgets
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UWidget*>             LAllSlotWidgets                                                  (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_sw_GridEntryItem_C*     K2Node_DynamicCast_AsWBP_Sw_Grid_Entry_Item                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)

void UWBP_FuelQueue_C::UnbindFromEntryWidgets(const TArray<class UWidget*>& LAllSlotWidgets, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UWBP_sw_GridEntryItem_C* K2Node_DynamicCast_AsWBP_Sw_Grid_Entry_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_FuelQueue_C", "UnbindFromEntryWidgets");

	Params::UWBP_FuelQueue_C_UnbindFromEntryWidgets_Params Parms{};

	Parms.LAllSlotWidgets = LAllSlotWidgets;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Sw_Grid_Entry_Item = K2Node_DynamicCast_AsWBP_Sw_Grid_Entry_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FuelQueue.WBP_FuelQueue_C.OnEntryDoubleClicked
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             ItemEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_FuelQueue_C::OnEntryDoubleClicked(const struct FInventoryEntry& ItemEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_FuelQueue_C", "OnEntryDoubleClicked");

	Params::UWBP_FuelQueue_C_OnEntryDoubleClicked_Params Parms{};

	Parms.ItemEntry = ItemEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FuelQueue.WBP_FuelQueue_C.OnEntryDragged
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ELoadoutSlotType        Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Display                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_FuelQueue_C::OnEntryDragged(enum class ELoadoutSlotType Slot, bool Display, const struct FInventoryEntry& Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_FuelQueue_C", "OnEntryDragged");

	Params::UWBP_FuelQueue_C_OnEntryDragged_Params Parms{};

	Parms.Slot = Slot;
	Parms.Display = Display;
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FuelQueue.WBP_FuelQueue_C.UpdateQueue
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_sw_GridEntryItem_C*     LEntryWidget                                                     (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     LNonBurningEntries                                               (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUniformGridSlot*            CallFunc_AddGridItem_ReturnValue                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_sw_GridEntryItem_C*     CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     CallFunc_GetNonBurningInventoryEntries_NonBurningEntries         (ReferenceParm)

void UWBP_FuelQueue_C::UpdateQueue(class UWBP_sw_GridEntryItem_C* LEntryWidget, const TArray<struct FInventoryEntry>& LNonBurningEntries, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUniformGridSlot* CallFunc_AddGridItem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 CallFunc_Array_Length_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class UWBP_sw_GridEntryItem_C* CallFunc_Create_ReturnValue, const struct FInventoryEntry& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, TArray<struct FInventoryEntry>& CallFunc_GetNonBurningInventoryEntries_NonBurningEntries)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_FuelQueue_C", "UpdateQueue");

	Params::UWBP_FuelQueue_C_UpdateQueue_Params Parms{};

	Parms.LEntryWidget = LEntryWidget;
	Parms.LNonBurningEntries = LNonBurningEntries;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_AddGridItem_ReturnValue = CallFunc_AddGridItem_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetNonBurningInventoryEntries_NonBurningEntries = CallFunc_GetNonBurningInventoryEntries_NonBurningEntries;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FuelQueue.WBP_FuelQueue_C.OnFuelUpdated
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FInventoryEntry>     AppliedFuelItems                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_FuelQueue_C::OnFuelUpdated(TArray<struct FInventoryEntry>& AppliedFuelItems)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_FuelQueue_C", "OnFuelUpdated");

	Params::UWBP_FuelQueue_C_OnFuelUpdated_Params Parms{};

	Parms.AppliedFuelItems = AppliedFuelItems;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FuelQueue.WBP_FuelQueue_C.RemoveBindings
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class INWXFuelableObserverInterface>CallFunc_UnbindDelegate_OnActiveFuelItemChanged_self_CastInput   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class INWXFuelableObserverInterface>CallFunc_UnbindDelegate_OnAppliedFuelItemsChanged_self_CastInput (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FuelQueue_C::RemoveBindings(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TScriptInterface<class INWXFuelableObserverInterface> CallFunc_UnbindDelegate_OnActiveFuelItemChanged_self_CastInput, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TScriptInterface<class INWXFuelableObserverInterface> CallFunc_UnbindDelegate_OnAppliedFuelItemsChanged_self_CastInput, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_FuelQueue_C", "RemoveBindings");

	Params::UWBP_FuelQueue_C_RemoveBindings_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_UnbindDelegate_OnActiveFuelItemChanged_self_CastInput = CallFunc_UnbindDelegate_OnActiveFuelItemChanged_self_CastInput;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_UnbindDelegate_OnAppliedFuelItemsChanged_self_CastInput = CallFunc_UnbindDelegate_OnAppliedFuelItemsChanged_self_CastInput;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FuelQueue.WBP_FuelQueue_C.SetupBindings
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class INWXFuelableObserverInterface>CallFunc_BindDelegate_OnActiveFuelItemChanged_self_CastInput     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class INWXFuelableObserverInterface>CallFunc_BindDelegate_OnAppliedFuelItemsChanged_self_CastInput   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FuelQueue_C::SetupBindings(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TScriptInterface<class INWXFuelableObserverInterface> CallFunc_BindDelegate_OnActiveFuelItemChanged_self_CastInput, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TScriptInterface<class INWXFuelableObserverInterface> CallFunc_BindDelegate_OnAppliedFuelItemsChanged_self_CastInput, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_FuelQueue_C", "SetupBindings");

	Params::UWBP_FuelQueue_C_SetupBindings_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_BindDelegate_OnActiveFuelItemChanged_self_CastInput = CallFunc_BindDelegate_OnActiveFuelItemChanged_self_CastInput;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_BindDelegate_OnAppliedFuelItemsChanged_self_CastInput = CallFunc_BindDelegate_OnAppliedFuelItemsChanged_self_CastInput;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FuelQueue.WBP_FuelQueue_C.Initialize
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANWXPlayerController*        PlayerController                                                 (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IControllerInteractionInterface>CallFunc_GetLastInteractedActor_self_CastInput                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetLastInteractedActor_ReturnValue                      (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_SchematicInterfaces_C>K2Node_DynamicCast_AsBPI_Schematic_Interfaces                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_StructureFuelComponent_C*CallFunc_GetFuelComponent_FuelComponent                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FuelQueue_C::Initialize(class ANWXPlayerController* PlayerController, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IControllerInteractionInterface> CallFunc_GetLastInteractedActor_self_CastInput, class AActor* CallFunc_GetLastInteractedActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IBPI_SchematicInterfaces_C> K2Node_DynamicCast_AsBPI_Schematic_Interfaces, bool K2Node_DynamicCast_bSuccess, class UBP_StructureFuelComponent_C* CallFunc_GetFuelComponent_FuelComponent, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_FuelQueue_C", "Initialize");

	Params::UWBP_FuelQueue_C_Initialize_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetLastInteractedActor_self_CastInput = CallFunc_GetLastInteractedActor_self_CastInput;
	Parms.CallFunc_GetLastInteractedActor_ReturnValue = CallFunc_GetLastInteractedActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBPI_Schematic_Interfaces = K2Node_DynamicCast_AsBPI_Schematic_Interfaces;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetFuelComponent_FuelComponent = CallFunc_GetFuelComponent_FuelComponent;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FuelQueue.WBP_FuelQueue_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_FuelQueue_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_FuelQueue_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_FuelQueue.WBP_FuelQueue_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_FuelQueue_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_FuelQueue_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_FuelQueue.WBP_FuelQueue_C.ExecuteUbergraph_WBP_FuelQueue
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FuelQueue_C::ExecuteUbergraph_WBP_FuelQueue(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_FuelQueue_C", "ExecuteUbergraph_WBP_FuelQueue");

	Params::UWBP_FuelQueue_C_ExecuteUbergraph_WBP_FuelQueue_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FuelQueue.WBP_FuelQueue_C.OnSlotEntryDoubleClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             InventoryEntry                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_FuelQueue_C::OnSlotEntryDoubleClicked__DelegateSignature(const struct FInventoryEntry& InventoryEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_FuelQueue_C", "OnSlotEntryDoubleClicked__DelegateSignature");

	Params::UWBP_FuelQueue_C_OnSlotEntryDoubleClicked__DelegateSignature_Params Parms{};

	Parms.InventoryEntry = InventoryEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FuelQueue.WBP_FuelQueue_C.OnSlotEntryDragged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             InventoryEntry                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               IsDragging                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FuelQueue_C::OnSlotEntryDragged__DelegateSignature(const struct FInventoryEntry& InventoryEntry, bool IsDragging)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_FuelQueue_C", "OnSlotEntryDragged__DelegateSignature");

	Params::UWBP_FuelQueue_C_OnSlotEntryDragged__DelegateSignature_Params Parms{};

	Parms.InventoryEntry = InventoryEntry;
	Parms.IsDragging = IsDragging;

	UObject::ProcessEvent(Func, &Parms);

}

}


