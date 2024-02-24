#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Inv_StructureTransfer.WBP_Inv_StructureTransfer_C
// (None)

class UClass* UWBP_Inv_StructureTransfer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Inv_StructureTransfer_C");

	return Clss;
}


// WBP_Inv_StructureTransfer_C WBP_Inv_StructureTransfer.Default__WBP_Inv_StructureTransfer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Inv_StructureTransfer_C* UWBP_Inv_StructureTransfer_C::GetDefaultObj()
{
	static class UWBP_Inv_StructureTransfer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Inv_StructureTransfer_C*>(UWBP_Inv_StructureTransfer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Inv_StructureTransfer.WBP_Inv_StructureTransfer_C.CREATEDELEGATE_PROXYFUNCTION_3
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             InventoryEntry                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_Inv_StructureTransfer_C::CREATEDELEGATE_PROXYFUNCTION_3(struct FInventoryEntry& InventoryEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_StructureTransfer_C", "CREATEDELEGATE_PROXYFUNCTION_3");

	Params::UWBP_Inv_StructureTransfer_C_CREATEDELEGATE_PROXYFUNCTION_3_Params Parms{};

	Parms.InventoryEntry = InventoryEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inv_StructureTransfer.WBP_Inv_StructureTransfer_C.CREATEDELEGATE_PROXYFUNCTION_2
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             InventoryEntry                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_Inv_StructureTransfer_C::CREATEDELEGATE_PROXYFUNCTION_2(struct FInventoryEntry& InventoryEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_StructureTransfer_C", "CREATEDELEGATE_PROXYFUNCTION_2");

	Params::UWBP_Inv_StructureTransfer_C_CREATEDELEGATE_PROXYFUNCTION_2_Params Parms{};

	Parms.InventoryEntry = InventoryEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inv_StructureTransfer.WBP_Inv_StructureTransfer_C.CREATEDELEGATE_PROXYFUNCTION_1
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             InventoryEntry                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_Inv_StructureTransfer_C::CREATEDELEGATE_PROXYFUNCTION_1(struct FInventoryEntry& InventoryEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_StructureTransfer_C", "CREATEDELEGATE_PROXYFUNCTION_1");

	Params::UWBP_Inv_StructureTransfer_C_CREATEDELEGATE_PROXYFUNCTION_1_Params Parms{};

	Parms.InventoryEntry = InventoryEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inv_StructureTransfer.WBP_Inv_StructureTransfer_C.CREATEDELEGATE_PROXYFUNCTION_0
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             InventoryEntry                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_Inv_StructureTransfer_C::CREATEDELEGATE_PROXYFUNCTION_0(struct FInventoryEntry& InventoryEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_StructureTransfer_C", "CREATEDELEGATE_PROXYFUNCTION_0");

	Params::UWBP_Inv_StructureTransfer_C_CREATEDELEGATE_PROXYFUNCTION_0_Params Parms{};

	Parms.InventoryEntry = InventoryEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inv_StructureTransfer.WBP_Inv_StructureTransfer_C.Enable Inventory Input Action Icon
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWBP_sw_GridEntryItem_C*>CallFunc_GetGridEntryWidgets_GridEntries                         (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_sw_GridEntryItem_C*     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_sw_GridEntryItem_C*     K2Node_DynamicCast_AsWBP_Sw_Grid_Entry_Item                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Inv_StructureTransfer_C::Enable_Inventory_Input_Action_Icon(bool Enable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWBP_sw_GridEntryItem_C*>& CallFunc_GetGridEntryWidgets_GridEntries, int32 CallFunc_Array_Length_ReturnValue, class UWBP_sw_GridEntryItem_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_sw_GridEntryItem_C* K2Node_DynamicCast_AsWBP_Sw_Grid_Entry_Item, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_StructureTransfer_C", "Enable Inventory Input Action Icon");

	Params::UWBP_Inv_StructureTransfer_C_Enable_Inventory_Input_Action_Icon_Params Parms{};

	Parms.Enable = Enable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetGridEntryWidgets_GridEntries = CallFunc_GetGridEntryWidgets_GridEntries;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Sw_Grid_Entry_Item = K2Node_DynamicCast_AsWBP_Sw_Grid_Entry_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inv_StructureTransfer.WBP_Inv_StructureTransfer_C.DoCustomNavigation_LeftInventoryToButtons
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_Inv_StructureTransfer_C::DoCustomNavigation_LeftInventoryToButtons(enum class EUINavigation Navigation, bool Temp_bool_Variable, bool CallFunc_GetIsEnabled_ReturnValue, class UWidget* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_StructureTransfer_C", "DoCustomNavigation_LeftInventoryToButtons");

	Params::UWBP_Inv_StructureTransfer_C_DoCustomNavigation_LeftInventoryToButtons_Params Parms{};

	Parms.Navigation = Navigation;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetIsEnabled_ReturnValue = CallFunc_GetIsEnabled_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_Inv_StructureTransfer.WBP_Inv_StructureTransfer_C.OnQueueEntryDoubleClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             InventoryEntry                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetChildAt_IsValid                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ItemWidget                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Inv_StructureTransfer_C::OnQueueEntryDoubleClicked(const struct FInventoryEntry& InventoryEntry, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_GetChildrenCount_ReturnValue, bool CallFunc_GetChildAt_IsValid, class UWidget* CallFunc_GetChildAt_ItemWidget, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_StructureTransfer_C", "OnQueueEntryDoubleClicked");

	Params::UWBP_Inv_StructureTransfer_C_OnQueueEntryDoubleClicked_Params Parms{};

	Parms.InventoryEntry = InventoryEntry;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_GetChildAt_IsValid = CallFunc_GetChildAt_IsValid;
	Parms.CallFunc_GetChildAt_ItemWidget = CallFunc_GetChildAt_ItemWidget;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inv_StructureTransfer.WBP_Inv_StructureTransfer_C.DoCustomNavigation_LeftToGridInventory
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasEntries_HasEntries                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWBP_sw_GridEntryItem_C*>CallFunc_GetGridEntryWidgets_GridEntries                         (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_sw_GridEntryItem_C*     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_Inv_StructureTransfer_C::DoCustomNavigation_LeftToGridInventory(enum class EUINavigation Navigation, bool CallFunc_HasEntries_HasEntries, TArray<class UWBP_sw_GridEntryItem_C*>& CallFunc_GetGridEntryWidgets_GridEntries, bool CallFunc_Array_IsValidIndex_ReturnValue, class UWBP_sw_GridEntryItem_C* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_StructureTransfer_C", "DoCustomNavigation_LeftToGridInventory");

	Params::UWBP_Inv_StructureTransfer_C_DoCustomNavigation_LeftToGridInventory_Params Parms{};

	Parms.Navigation = Navigation;
	Parms.CallFunc_HasEntries_HasEntries = CallFunc_HasEntries_HasEntries;
	Parms.CallFunc_GetGridEntryWidgets_GridEntries = CallFunc_GetGridEntryWidgets_GridEntries;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_Inv_StructureTransfer.WBP_Inv_StructureTransfer_C.DoCustomNavigation_RightToLeft
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetDefaultFocusWidget_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_Inv_StructureTransfer_C::DoCustomNavigation_RightToLeft(enum class EUINavigation Navigation, class UWidget* CallFunc_GetDefaultFocusWidget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_StructureTransfer_C", "DoCustomNavigation_RightToLeft");

	Params::UWBP_Inv_StructureTransfer_C_DoCustomNavigation_RightToLeft_Params Parms{};

	Parms.Navigation = Navigation;
	Parms.CallFunc_GetDefaultFocusWidget_ReturnValue = CallFunc_GetDefaultFocusWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_Inv_StructureTransfer.WBP_Inv_StructureTransfer_C.DoCustomNavigation_LeftToRight
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUINavigation           Navigation                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     ResultFocus                                                      (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     Temp_object_Variable                                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetChildAt_IsValid                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ItemWidget                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetActiveWidget_ReturnValue                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_sw_GridEntryItem_C*     K2Node_DynamicCast_AsWBP_Sw_Grid_Entry_Item                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_GetInventoryEntry_InventoryEntry                        (None)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select_Default_1                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasFocusedDescendants_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_Inv_StructureTransfer_C::DoCustomNavigation_LeftToRight(enum class EUINavigation Navigation, class UWidget* ResultFocus, class UWidget* Temp_object_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool CallFunc_GetChildAt_IsValid, class UWidget* CallFunc_GetChildAt_ItemWidget, class UWidget* CallFunc_GetActiveWidget_ReturnValue, class UWBP_sw_GridEntryItem_C* K2Node_DynamicCast_AsWBP_Sw_Grid_Entry_Item, bool K2Node_DynamicCast_bSuccess, const struct FInventoryEntry& CallFunc_GetInventoryEntry_InventoryEntry, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UWidget* K2Node_Select_Default, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue, class UWidget* K2Node_Select_Default_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_HasFocusedDescendants_ReturnValue, bool CallFunc_IsVisible_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_StructureTransfer_C", "DoCustomNavigation_LeftToRight");

	Params::UWBP_Inv_StructureTransfer_C_DoCustomNavigation_LeftToRight_Params Parms{};

	Parms.Navigation = Navigation;
	Parms.ResultFocus = ResultFocus;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_GetChildAt_IsValid = CallFunc_GetChildAt_IsValid;
	Parms.CallFunc_GetChildAt_ItemWidget = CallFunc_GetChildAt_ItemWidget;
	Parms.CallFunc_GetActiveWidget_ReturnValue = CallFunc_GetActiveWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Sw_Grid_Entry_Item = K2Node_DynamicCast_AsWBP_Sw_Grid_Entry_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetInventoryEntry_InventoryEntry = CallFunc_GetInventoryEntry_InventoryEntry;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetIsEnabled_ReturnValue = CallFunc_GetIsEnabled_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_HasFocusedDescendants_ReturnValue = CallFunc_HasFocusedDescendants_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_Inv_StructureTransfer.WBP_Inv_StructureTransfer_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWBP_sw_GridEntryItem_C*>CallFunc_GetGridEntryWidgets_GridEntries                         (ReferenceParm, ContainsInstancedReference)
// struct FInventoryEntry             CallFunc_GetSelectedEntry_ReturnValue                            (ConstParm)
// class UWBP_sw_GridEntryItem_C*     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryGetEntryWidget_IsEntryFound                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_sw_GridEntryItem_C*     CallFunc_TryGetEntryWidget_GridEntryWidget                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_Inv_StructureTransfer_C::BP_GetDesiredFocusTarget(bool Temp_bool_Variable, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, TArray<class UWBP_sw_GridEntryItem_C*>& CallFunc_GetGridEntryWidgets_GridEntries, const struct FInventoryEntry& CallFunc_GetSelectedEntry_ReturnValue, class UWBP_sw_GridEntryItem_C* CallFunc_Array_Get_Item, bool CallFunc_TryGetEntryWidget_IsEntryFound, class UWBP_sw_GridEntryItem_C* CallFunc_TryGetEntryWidget_GridEntryWidget, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue, class UWidget* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_StructureTransfer_C", "BP_GetDesiredFocusTarget");

	Params::UWBP_Inv_StructureTransfer_C_BP_GetDesiredFocusTarget_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetGridEntryWidgets_GridEntries = CallFunc_GetGridEntryWidgets_GridEntries;
	Parms.CallFunc_GetSelectedEntry_ReturnValue = CallFunc_GetSelectedEntry_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_TryGetEntryWidget_IsEntryFound = CallFunc_TryGetEntryWidget_IsEntryFound;
	Parms.CallFunc_TryGetEntryWidget_GridEntryWidget = CallFunc_TryGetEntryWidget_GridEntryWidget;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_GetIsEnabled_ReturnValue = CallFunc_GetIsEnabled_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_Inv_StructureTransfer.WBP_Inv_StructureTransfer_C.OnEntryDoubleClicked
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             InventoryEntry                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_Inv_StructureTransfer_C::OnEntryDoubleClicked(struct FInventoryEntry& InventoryEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_StructureTransfer_C", "OnEntryDoubleClicked");

	Params::UWBP_Inv_StructureTransfer_C_OnEntryDoubleClicked_Params Parms{};

	Parms.InventoryEntry = InventoryEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inv_StructureTransfer.WBP_Inv_StructureTransfer_C.UpdateTimeChange
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               EnableDisplay                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsIncreasingTime                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             InventoryEntry                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// TScriptInterface<class IStructureStateInterface>K2Node_DynamicCast_AsStructure_State_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsStructureComplete_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Inv_StructureTransfer_C::UpdateTimeChange(bool EnableDisplay, bool IsIncreasingTime, const struct FInventoryEntry& InventoryEntry, TScriptInterface<class IStructureStateInterface> K2Node_DynamicCast_AsStructure_State_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetIsStructureComplete_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_StructureTransfer_C", "UpdateTimeChange");

	Params::UWBP_Inv_StructureTransfer_C_UpdateTimeChange_Params Parms{};

	Parms.EnableDisplay = EnableDisplay;
	Parms.IsIncreasingTime = IsIncreasingTime;
	Parms.InventoryEntry = InventoryEntry;
	Parms.K2Node_DynamicCast_AsStructure_State_Interface = K2Node_DynamicCast_AsStructure_State_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetIsStructureComplete_ReturnValue = CallFunc_GetIsStructureComplete_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inv_StructureTransfer.WBP_Inv_StructureTransfer_C.OnPanelUpdated
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Inv_StructureTransfer_C::OnPanelUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_StructureTransfer_C", "OnPanelUpdated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Inv_StructureTransfer.WBP_Inv_StructureTransfer_C.InitializeButtons
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEntrySortOrder         CallFunc_GetCurrentSortOrder_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Inv_StructureTransfer_C::InitializeButtons(enum class EEntrySortOrder CallFunc_GetCurrentSortOrder_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_StructureTransfer_C", "InitializeButtons");

	Params::UWBP_Inv_StructureTransfer_C_InitializeButtons_Params Parms{};

	Parms.CallFunc_GetCurrentSortOrder_ReturnValue = CallFunc_GetCurrentSortOrder_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inv_StructureTransfer.WBP_Inv_StructureTransfer_C.InitializeFuelPanelReference
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Inv_StructureTransfer_C::InitializeFuelPanelReference()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_StructureTransfer_C", "InitializeFuelPanelReference");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Inv_StructureTransfer.WBP_Inv_StructureTransfer_C.OnItemHovered
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsHovered                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             InventoryEntry                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class ETooltipSource          TooltipSource                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Inv_StructureTransfer_C::OnItemHovered(bool IsHovered, struct FInventoryEntry& InventoryEntry, enum class ETooltipSource TooltipSource)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_StructureTransfer_C", "OnItemHovered");

	Params::UWBP_Inv_StructureTransfer_C_OnItemHovered_Params Parms{};

	Parms.IsHovered = IsHovered;
	Parms.InventoryEntry = InventoryEntry;
	Parms.TooltipSource = TooltipSource;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inv_StructureTransfer.WBP_Inv_StructureTransfer_C.OnQueueEntryDragged
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             InventoryEntry                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               IsDragging                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanAcceptEntry_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Inv_StructureTransfer_C::OnQueueEntryDragged(const struct FInventoryEntry& InventoryEntry, bool IsDragging, bool CallFunc_CanAcceptEntry_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_StructureTransfer_C", "OnQueueEntryDragged");

	Params::UWBP_Inv_StructureTransfer_C_OnQueueEntryDragged_Params Parms{};

	Parms.InventoryEntry = InventoryEntry;
	Parms.IsDragging = IsDragging;
	Parms.CallFunc_CanAcceptEntry_ReturnValue = CallFunc_CanAcceptEntry_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inv_StructureTransfer.WBP_Inv_StructureTransfer_C.UpdateDropTarget
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShouldDisplayDropTarget                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Draggable_DropTarget_C* DropTarget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Inv_StructureTransfer_C::UpdateDropTarget(bool ShouldDisplayDropTarget, class UWBP_Draggable_DropTarget_C* DropTarget, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_StructureTransfer_C", "UpdateDropTarget");

	Params::UWBP_Inv_StructureTransfer_C_UpdateDropTarget_Params Parms{};

	Parms.ShouldDisplayDropTarget = ShouldDisplayDropTarget;
	Parms.DropTarget = DropTarget;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inv_StructureTransfer.WBP_Inv_StructureTransfer_C.OnSplitterWindowClosed
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNWXCommonWindowWidget*      Window                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_Popup_InvItemSplitter_C*K2Node_DynamicCast_AsWBP_Popup_Inv_Item_Splitter                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Inv_StructureTransfer_C::OnSplitterWindowClosed(class UNWXCommonWindowWidget* Window, class UWBP_Popup_InvItemSplitter_C* K2Node_DynamicCast_AsWBP_Popup_Inv_Item_Splitter, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_StructureTransfer_C", "OnSplitterWindowClosed");

	Params::UWBP_Inv_StructureTransfer_C_OnSplitterWindowClosed_Params Parms{};

	Parms.Window = Window;
	Parms.K2Node_DynamicCast_AsWBP_Popup_Inv_Item_Splitter = K2Node_DynamicCast_AsWBP_Popup_Inv_Item_Splitter;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inv_StructureTransfer.WBP_Inv_StructureTransfer_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                   InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)
// struct FInputEvent                 CallFunc_GetInputEventFromKeyEvent_ReturnValue                   (None)
// bool                               CallFunc_InputEvent_IsShiftDown_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FEventReply UWBP_Inv_StructureTransfer_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FInputEvent& CallFunc_GetInputEventFromKeyEvent_ReturnValue, bool CallFunc_InputEvent_IsShiftDown_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_StructureTransfer_C", "OnKeyUp");

	Params::UWBP_Inv_StructureTransfer_C_OnKeyUp_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_GetInputEventFromKeyEvent_ReturnValue = CallFunc_GetInputEventFromKeyEvent_ReturnValue;
	Parms.CallFunc_InputEvent_IsShiftDown_ReturnValue = CallFunc_InputEvent_IsShiftDown_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_Inv_StructureTransfer.WBP_Inv_StructureTransfer_C.OnKeyDown
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                   InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)
// struct FInputEvent                 CallFunc_GetInputEventFromKeyEvent_ReturnValue                   (None)
// bool                               CallFunc_InputEvent_IsShiftDown_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FEventReply UWBP_Inv_StructureTransfer_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FInputEvent& CallFunc_GetInputEventFromKeyEvent_ReturnValue, bool CallFunc_InputEvent_IsShiftDown_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_StructureTransfer_C", "OnKeyDown");

	Params::UWBP_Inv_StructureTransfer_C_OnKeyDown_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_GetInputEventFromKeyEvent_ReturnValue = CallFunc_GetInputEventFromKeyEvent_ReturnValue;
	Parms.CallFunc_InputEvent_IsShiftDown_ReturnValue = CallFunc_InputEvent_IsShiftDown_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_Inv_StructureTransfer.WBP_Inv_StructureTransfer_C.OpenSplitterWindow
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             InventoryEntry                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              MaxQuantityOverride                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESplittingUnits         SplittingUnits                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsTransferToStructure                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ULocalPlayer*                CallFunc_GetLocalPlayerFromController_ReturnValue                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_Popup_InvItemSplitter_C*CallFunc_CreateWidgetInstanceFromLayer_ReturnValue               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (ConstParm)

void UWBP_Inv_StructureTransfer_C::OpenSplitterWindow(struct FInventoryEntry& InventoryEntry, int32 MaxQuantityOverride, enum class ESplittingUnits SplittingUnits, bool IsTransferToStructure, bool CallFunc_Greater_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class ULocalPlayer* CallFunc_GetLocalPlayerFromController_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UWBP_Popup_InvItemSplitter_C* CallFunc_CreateWidgetInstanceFromLayer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FText Temp_text_Variable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_StructureTransfer_C", "OpenSplitterWindow");

	Params::UWBP_Inv_StructureTransfer_C_OpenSplitterWindow_Params Parms{};

	Parms.InventoryEntry = InventoryEntry;
	Parms.MaxQuantityOverride = MaxQuantityOverride;
	Parms.SplittingUnits = SplittingUnits;
	Parms.IsTransferToStructure = IsTransferToStructure;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_GetLocalPlayerFromController_ReturnValue = CallFunc_GetLocalPlayerFromController_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_CreateWidgetInstanceFromLayer_ReturnValue = CallFunc_CreateWidgetInstanceFromLayer_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_text_Variable = Temp_text_Variable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inv_StructureTransfer.WBP_Inv_StructureTransfer_C.HandleTransferToInventoryOnDrop
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             Entry                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FInventoryEntry             EmptyEntry                                                       (Edit, BlueprintVisible)

void UWBP_Inv_StructureTransfer_C::HandleTransferToInventoryOnDrop(const struct FInventoryEntry& Entry, const struct FInventoryEntry& EmptyEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_StructureTransfer_C", "HandleTransferToInventoryOnDrop");

	Params::UWBP_Inv_StructureTransfer_C_HandleTransferToInventoryOnDrop_Params Parms{};

	Parms.Entry = Entry;
	Parms.EmptyEntry = EmptyEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inv_StructureTransfer.WBP_Inv_StructureTransfer_C.HandleTransferToStructureOnDrop
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             Entry                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FInventoryEntry             EmptyEntry                                                       (Edit, BlueprintVisible)

void UWBP_Inv_StructureTransfer_C::HandleTransferToStructureOnDrop(const struct FInventoryEntry& Entry, const struct FInventoryEntry& EmptyEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_StructureTransfer_C", "HandleTransferToStructureOnDrop");

	Params::UWBP_Inv_StructureTransfer_C_HandleTransferToStructureOnDrop_Params Parms{};

	Parms.Entry = Entry;
	Parms.EmptyEntry = EmptyEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inv_StructureTransfer.WBP_Inv_StructureTransfer_C.InitializeFuelIndicatorWidget
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class INWXFuelableObserverInterface>CallFunc_BindDelegate_OnAppliedFuelItemsChanged_self_CastInput   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBPI_SchematicInterfaces_C>K2Node_DynamicCast_AsBPI_Schematic_Interfaces                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_StructureFuelComponent_C*CallFunc_GetFuelComponent_FuelComponent                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Inv_StructureTransfer_C::InitializeFuelIndicatorWidget(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, TScriptInterface<class INWXFuelableObserverInterface> CallFunc_BindDelegate_OnAppliedFuelItemsChanged_self_CastInput, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IBPI_SchematicInterfaces_C> K2Node_DynamicCast_AsBPI_Schematic_Interfaces, bool K2Node_DynamicCast_bSuccess, class UBP_StructureFuelComponent_C* CallFunc_GetFuelComponent_FuelComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_StructureTransfer_C", "InitializeFuelIndicatorWidget");

	Params::UWBP_Inv_StructureTransfer_C_InitializeFuelIndicatorWidget_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_BindDelegate_OnAppliedFuelItemsChanged_self_CastInput = CallFunc_BindDelegate_OnAppliedFuelItemsChanged_self_CastInput;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBPI_Schematic_Interfaces = K2Node_DynamicCast_AsBPI_Schematic_Interfaces;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetFuelComponent_FuelComponent = CallFunc_GetFuelComponent_FuelComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inv_StructureTransfer.WBP_Inv_StructureTransfer_C.InitializeStructureRequirementsWidget
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureStateInterface>K2Node_DynamicCast_AsStructure_State_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsStructureComplete_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Inv_StructureTransfer_C::InitializeStructureRequirementsWidget(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IStructureStateInterface> K2Node_DynamicCast_AsStructure_State_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetIsStructureComplete_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_StructureTransfer_C", "InitializeStructureRequirementsWidget");

	Params::UWBP_Inv_StructureTransfer_C_InitializeStructureRequirementsWidget_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsStructure_State_Interface = K2Node_DynamicCast_AsStructure_State_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetIsStructureComplete_ReturnValue = CallFunc_GetIsStructureComplete_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inv_StructureTransfer.WBP_Inv_StructureTransfer_C.OnFuelChanged
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FInventoryEntry>     AppliedFuelItems                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               CallFunc_HasFocusedDescendants_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetChildAt_IsValid                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ItemWidget                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetDesiredFocusTarget_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     CallFunc_GetNonBurningInventoryEntries_NonBurningEntries         (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasFocusedDescendants_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDrainingFuel_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Inv_StructureTransfer_C::OnFuelChanged(TArray<struct FInventoryEntry>& AppliedFuelItems, bool CallFunc_HasFocusedDescendants_ReturnValue, bool CallFunc_GetChildAt_IsValid, class UWidget* CallFunc_GetChildAt_ItemWidget, class UWidget* CallFunc_GetDesiredFocusTarget_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, TArray<struct FInventoryEntry>& CallFunc_GetNonBurningInventoryEntries_NonBurningEntries, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_HasFocusedDescendants_ReturnValue_1, bool CallFunc_IsDrainingFuel_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_StructureTransfer_C", "OnFuelChanged");

	Params::UWBP_Inv_StructureTransfer_C_OnFuelChanged_Params Parms{};

	Parms.AppliedFuelItems = AppliedFuelItems;
	Parms.CallFunc_HasFocusedDescendants_ReturnValue = CallFunc_HasFocusedDescendants_ReturnValue;
	Parms.CallFunc_GetChildAt_IsValid = CallFunc_GetChildAt_IsValid;
	Parms.CallFunc_GetChildAt_ItemWidget = CallFunc_GetChildAt_ItemWidget;
	Parms.CallFunc_GetDesiredFocusTarget_ReturnValue = CallFunc_GetDesiredFocusTarget_ReturnValue;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetNonBurningInventoryEntries_NonBurningEntries = CallFunc_GetNonBurningInventoryEntries_NonBurningEntries;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_HasFocusedDescendants_ReturnValue_1 = CallFunc_HasFocusedDescendants_ReturnValue_1;
	Parms.CallFunc_IsDrainingFuel_ReturnValue = CallFunc_IsDrainingFuel_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inv_StructureTransfer.WBP_Inv_StructureTransfer_C.OnSchematicStateUpdated
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Inv_StructureTransfer_C::OnSchematicStateUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_StructureTransfer_C", "OnSchematicStateUpdated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Inv_StructureTransfer.WBP_Inv_StructureTransfer_C.OnItemDragged
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ELoadoutSlotType        Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Display                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FInventoryEntry             CallFunc_GetSelectedEntry_ReturnValue                            (ConstParm)
// bool                               CallFunc_CanAddEntry_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Inv_StructureTransfer_C::OnItemDragged(enum class ELoadoutSlotType Slot, bool Display, const struct FInventoryEntry& Item, const struct FInventoryEntry& CallFunc_GetSelectedEntry_ReturnValue, bool CallFunc_CanAddEntry_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_StructureTransfer_C", "OnItemDragged");

	Params::UWBP_Inv_StructureTransfer_C_OnItemDragged_Params Parms{};

	Parms.Slot = Slot;
	Parms.Display = Display;
	Parms.Item = Item;
	Parms.CallFunc_GetSelectedEntry_ReturnValue = CallFunc_GetSelectedEntry_ReturnValue;
	Parms.CallFunc_CanAddEntry_ReturnValue = CallFunc_CanAddEntry_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inv_StructureTransfer.WBP_Inv_StructureTransfer_C.OnStructureDestroyed
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      DestroyedActor                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Inv_StructureTransfer_C::OnStructureDestroyed(class AActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_StructureTransfer_C", "OnStructureDestroyed");

	Params::UWBP_Inv_StructureTransfer_C_OnStructureDestroyed_Params Parms{};

	Parms.DestroyedActor = DestroyedActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inv_StructureTransfer.WBP_Inv_StructureTransfer_C.ConfirmItem
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsTransferToStructure                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             InventoryEntry                                                   (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_GetSelectedEntry_ReturnValue                            (ConstParm)
// TScriptInterface<class IStructureResourceManagerOwnerInterface>K2Node_DynamicCast_AsStructure_Resource_Manager_Owner_Interface  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FStructureResourceRequirements>CallFunc_GetTotalResourceRequirementsForCurrentState_TotalRequirements(ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetQuantityRemaining_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Min_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureStateInterface>K2Node_DynamicCast_AsStructure_State_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsStructureComplete_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Inv_StructureTransfer_C::ConfirmItem(bool IsTransferToStructure, struct FInventoryEntry& InventoryEntry, bool CallFunc_GetIsEnabled_ReturnValue, const struct FInventoryEntry& CallFunc_GetSelectedEntry_ReturnValue, TScriptInterface<class IStructureResourceManagerOwnerInterface> K2Node_DynamicCast_AsStructure_Resource_Manager_Owner_Interface, bool K2Node_DynamicCast_bSuccess, TArray<struct FStructureResourceRequirements>& CallFunc_GetTotalResourceRequirementsForCurrentState_TotalRequirements, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetQuantityRemaining_ReturnValue, bool Temp_bool_Variable, int32 CallFunc_Min_ReturnValue, int32 K2Node_Select_Default, TScriptInterface<class IStructureStateInterface> K2Node_DynamicCast_AsStructure_State_Interface, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GetIsStructureComplete_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_StructureTransfer_C", "ConfirmItem");

	Params::UWBP_Inv_StructureTransfer_C_ConfirmItem_Params Parms{};

	Parms.IsTransferToStructure = IsTransferToStructure;
	Parms.InventoryEntry = InventoryEntry;
	Parms.CallFunc_GetIsEnabled_ReturnValue = CallFunc_GetIsEnabled_ReturnValue;
	Parms.CallFunc_GetSelectedEntry_ReturnValue = CallFunc_GetSelectedEntry_ReturnValue;
	Parms.K2Node_DynamicCast_AsStructure_Resource_Manager_Owner_Interface = K2Node_DynamicCast_AsStructure_Resource_Manager_Owner_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetTotalResourceRequirementsForCurrentState_TotalRequirements = CallFunc_GetTotalResourceRequirementsForCurrentState_TotalRequirements;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetQuantityRemaining_ReturnValue = CallFunc_GetQuantityRemaining_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Min_ReturnValue = CallFunc_Min_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_DynamicCast_AsStructure_State_Interface = K2Node_DynamicCast_AsStructure_State_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetIsStructureComplete_ReturnValue = CallFunc_GetIsStructureComplete_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inv_StructureTransfer.WBP_Inv_StructureTransfer_C.GetDefaultFocusWidget
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetDesiredFocusTarget_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_Inv_StructureTransfer_C::GetDefaultFocusWidget(class UWidget* CallFunc_GetDesiredFocusTarget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_StructureTransfer_C", "GetDefaultFocusWidget");

	Params::UWBP_Inv_StructureTransfer_C_GetDefaultFocusWidget_Params Parms{};

	Parms.CallFunc_GetDesiredFocusTarget_ReturnValue = CallFunc_GetDesiredFocusTarget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_Inv_StructureTransfer.WBP_Inv_StructureTransfer_C.OnStructureTransferButtonTop
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             InventoryEntry                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Inv_StructureTransfer_C::OnStructureTransferButtonTop(const struct FInventoryEntry& InventoryEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_StructureTransfer_C", "OnStructureTransferButtonTop");

	Params::UWBP_Inv_StructureTransfer_C_OnStructureTransferButtonTop_Params Parms{};

	Parms.InventoryEntry = InventoryEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inv_StructureTransfer.WBP_Inv_StructureTransfer_C.OnStructureTransferButtonLeft
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             InventoryEntry                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Inv_StructureTransfer_C::OnStructureTransferButtonLeft(const struct FInventoryEntry& InventoryEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_StructureTransfer_C", "OnStructureTransferButtonLeft");

	Params::UWBP_Inv_StructureTransfer_C_OnStructureTransferButtonLeft_Params Parms{};

	Parms.InventoryEntry = InventoryEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inv_StructureTransfer.WBP_Inv_StructureTransfer_C.OnInputContext
// (HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ContextIndex                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

struct FEventReply UWBP_Inv_StructureTransfer_C::OnInputContext(int32 ContextIndex, bool K2Node_SwitchInteger_CmpSuccess, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_StructureTransfer_C", "OnInputContext");

	Params::UWBP_Inv_StructureTransfer_C_OnInputContext_Params Parms{};

	Parms.ContextIndex = ContextIndex;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_Inv_StructureTransfer.WBP_Inv_StructureTransfer_C.RefreshIsCharacterBlockingStructure
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureStateInterface>K2Node_DynamicCast_AsStructure_State_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EStructureState         CallFunc_GetSchematicState_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Inv_StructureTransfer_C::RefreshIsCharacterBlockingStructure(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, TScriptInterface<class IStructureStateInterface> K2Node_DynamicCast_AsStructure_State_Interface, bool K2Node_DynamicCast_bSuccess, enum class EStructureState CallFunc_GetSchematicState_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_StructureTransfer_C", "RefreshIsCharacterBlockingStructure");

	Params::UWBP_Inv_StructureTransfer_C_RefreshIsCharacterBlockingStructure_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_DynamicCast_AsStructure_State_Interface = K2Node_DynamicCast_AsStructure_State_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetSchematicState_ReturnValue = CallFunc_GetSchematicState_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inv_StructureTransfer.WBP_Inv_StructureTransfer_C.UpdateSortingButtonText
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEntrySortOrder         SortOrder                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_button_base_C*          ButtonReference                                                  (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetSortOrderName_ReturnValue                            (None)

void UWBP_Inv_StructureTransfer_C::UpdateSortingButtonText(enum class EEntrySortOrder SortOrder, class UWBP_button_base_C* ButtonReference, class FText CallFunc_GetSortOrderName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_StructureTransfer_C", "UpdateSortingButtonText");

	Params::UWBP_Inv_StructureTransfer_C_UpdateSortingButtonText_Params Parms{};

	Parms.SortOrder = SortOrder;
	Parms.ButtonReference = ButtonReference;
	Parms.CallFunc_GetSortOrderName_ReturnValue = CallFunc_GetSortOrderName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inv_StructureTransfer.WBP_Inv_StructureTransfer_C.InitializeStructureActor
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANWXPlayerController*        PlayerController                                                 (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class UStructureEventsObject*      LStructureEventsObject                                           (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IControllerInteractionInterface>CallFunc_GetLastInteractedActor_self_CastInput                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetLastInteractedActor_ReturnValue                      (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXStructure*               K2Node_DynamicCast_AsNWXStructure                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureEventInterface>K2Node_DynamicCast_AsStructure_Event_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructureEventsObject*      CallFunc_GetStructureEventsObject_ReturnValue                    (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Inv_StructureTransfer_C::InitializeStructureActor(class ANWXPlayerController* PlayerController, class UStructureEventsObject* LStructureEventsObject, TScriptInterface<class IControllerInteractionInterface> CallFunc_GetLastInteractedActor_self_CastInput, class AActor* CallFunc_GetLastInteractedActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class ANWXStructure* K2Node_DynamicCast_AsNWXStructure, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IStructureEventInterface> K2Node_DynamicCast_AsStructure_Event_Interface, bool K2Node_DynamicCast_bSuccess_1, class UStructureEventsObject* CallFunc_GetStructureEventsObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_StructureTransfer_C", "InitializeStructureActor");

	Params::UWBP_Inv_StructureTransfer_C_InitializeStructureActor_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.LStructureEventsObject = LStructureEventsObject;
	Parms.CallFunc_GetLastInteractedActor_self_CastInput = CallFunc_GetLastInteractedActor_self_CastInput;
	Parms.CallFunc_GetLastInteractedActor_ReturnValue = CallFunc_GetLastInteractedActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_DynamicCast_AsNWXStructure = K2Node_DynamicCast_AsNWXStructure;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsStructure_Event_Interface = K2Node_DynamicCast_AsStructure_Event_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetStructureEventsObject_ReturnValue = CallFunc_GetStructureEventsObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inv_StructureTransfer.WBP_Inv_StructureTransfer_C.InitializeInventoryPanel
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_InventoryComponent_C*    LInventoryComponent                                              (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_InventoryComponent_C*    CallFunc_GetLocalPlayerInventoryComponent_BPInventoryComponent   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainerProvider>K2Node_DynamicCast_AsItem_Container_Provider                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_GetDefaultContainer_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Inv_StructureTransfer_C::InitializeInventoryPanel(class UBP_InventoryComponent_C* LInventoryComponent, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText CallFunc_Format_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UBP_InventoryComponent_C* CallFunc_GetLocalPlayerInventoryComponent_BPInventoryComponent, TScriptInterface<class IItemContainerProvider> K2Node_DynamicCast_AsItem_Container_Provider, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IItemContainer> CallFunc_GetDefaultContainer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_StructureTransfer_C", "InitializeInventoryPanel");

	Params::UWBP_Inv_StructureTransfer_C_InitializeInventoryPanel_Params Parms{};

	Parms.LInventoryComponent = LInventoryComponent;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetLocalPlayerInventoryComponent_BPInventoryComponent = CallFunc_GetLocalPlayerInventoryComponent_BPInventoryComponent;
	Parms.K2Node_DynamicCast_AsItem_Container_Provider = K2Node_DynamicCast_AsItem_Container_Provider;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetDefaultContainer_ReturnValue = CallFunc_GetDefaultContainer_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inv_StructureTransfer.WBP_Inv_StructureTransfer_C.OnSelectedEntryUpdated
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Inv_StructureTransfer_C::OnSelectedEntryUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_StructureTransfer_C", "OnSelectedEntryUpdated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Inv_StructureTransfer.WBP_Inv_StructureTransfer_C.OnResourcesRemoved
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStructureRemoveResourcesContextRemovedResourcesContext                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_Inv_StructureTransfer_C::OnResourcesRemoved(struct FStructureRemoveResourcesContext& RemovedResourcesContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_StructureTransfer_C", "OnResourcesRemoved");

	Params::UWBP_Inv_StructureTransfer_C_OnResourcesRemoved_Params Parms{};

	Parms.RemovedResourcesContext = RemovedResourcesContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inv_StructureTransfer.WBP_Inv_StructureTransfer_C.OnResourceAdded
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStructureAddResourcesContextAddResourcesContext                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_Inv_StructureTransfer_C::OnResourceAdded(struct FStructureAddResourcesContext& AddResourcesContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_StructureTransfer_C", "OnResourceAdded");

	Params::UWBP_Inv_StructureTransfer_C_OnResourceAdded_Params Parms{};

	Parms.AddResourcesContext = AddResourcesContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inv_StructureTransfer.WBP_Inv_StructureTransfer_C.OnStructureCompleted
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Structure                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UWidgetInventoryEntryFilter>LStructureConstraintFilter                                       (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDragDropping_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Inv_StructureTransfer_C::OnStructureCompleted(class UObject* Structure, TSubclassOf<class UWidgetInventoryEntryFilter> LStructureConstraintFilter, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsDragDropping_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_StructureTransfer_C", "OnStructureCompleted");

	Params::UWBP_Inv_StructureTransfer_C_OnStructureCompleted_Params Parms{};

	Parms.Structure = Structure;
	Parms.LStructureConstraintFilter = LStructureConstraintFilter;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsDragDropping_ReturnValue = CallFunc_IsDragDropping_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inv_StructureTransfer.WBP_Inv_StructureTransfer_C.UnbindEvents
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class INWXFuelableObserverInterface>CallFunc_UnbindDelegate_OnAppliedFuelItemsChanged_self_CastInput (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXStructure*               K2Node_DynamicCast_AsNWXStructure                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_14                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IStructureEventInterface>K2Node_DynamicCast_AsStructure_Event_Interface                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStructureEventsObject*      CallFunc_GetStructureEventsObject_ReturnValue                    (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Inv_StructureTransfer_C::UnbindEvents(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class INWXFuelableObserverInterface> CallFunc_UnbindDelegate_OnAppliedFuelItemsChanged_self_CastInput, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class ANWXStructure* K2Node_DynamicCast_AsNWXStructure, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, TScriptInterface<class IStructureEventInterface> K2Node_DynamicCast_AsStructure_Event_Interface, bool K2Node_DynamicCast_bSuccess_1, class UStructureEventsObject* CallFunc_GetStructureEventsObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_StructureTransfer_C", "UnbindEvents");

	Params::UWBP_Inv_StructureTransfer_C_UnbindEvents_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_UnbindDelegate_OnAppliedFuelItemsChanged_self_CastInput = CallFunc_UnbindDelegate_OnAppliedFuelItemsChanged_self_CastInput;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_DynamicCast_AsNWXStructure = K2Node_DynamicCast_AsNWXStructure;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.K2Node_CreateDelegate_OutputDelegate_13 = K2Node_CreateDelegate_OutputDelegate_13;
	Parms.K2Node_CreateDelegate_OutputDelegate_14 = K2Node_CreateDelegate_OutputDelegate_14;
	Parms.K2Node_DynamicCast_AsStructure_Event_Interface = K2Node_DynamicCast_AsStructure_Event_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetStructureEventsObject_ReturnValue = CallFunc_GetStructureEventsObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inv_StructureTransfer.WBP_Inv_StructureTransfer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Inv_StructureTransfer_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_StructureTransfer_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Inv_StructureTransfer.WBP_Inv_StructureTransfer_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Inv_StructureTransfer_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_StructureTransfer_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Inv_StructureTransfer.WBP_Inv_StructureTransfer_C.OnInternalOpened
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_Inv_StructureTransfer_C::OnInternalOpened()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_StructureTransfer_C", "OnInternalOpened");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Inv_StructureTransfer.WBP_Inv_StructureTransfer_C.BndEvt__WBP_Inv_StructureTransfer_DropTarget_Structure_K2Node_ComponentBoundEvent_3_DragDropped_Item__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UDragDropOperation*          Payload                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Inv_StructureTransfer_C::BndEvt__WBP_Inv_StructureTransfer_DropTarget_Structure_K2Node_ComponentBoundEvent_3_DragDropped_Item__DelegateSignature(class UDragDropOperation* Payload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_StructureTransfer_C", "BndEvt__WBP_Inv_StructureTransfer_DropTarget_Structure_K2Node_ComponentBoundEvent_3_DragDropped_Item__DelegateSignature");

	Params::UWBP_Inv_StructureTransfer_C_BndEvt__WBP_Inv_StructureTransfer_DropTarget_Structure_K2Node_ComponentBoundEvent_3_DragDropped_Item__DelegateSignature_Params Parms{};

	Parms.Payload = Payload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inv_StructureTransfer.WBP_Inv_StructureTransfer_C.BndEvt__WBP_Inv_StructureTransfer_DropTarget_Inventory_K2Node_ComponentBoundEvent_4_DragDropped_Item__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UDragDropOperation*          Payload                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Inv_StructureTransfer_C::BndEvt__WBP_Inv_StructureTransfer_DropTarget_Inventory_K2Node_ComponentBoundEvent_4_DragDropped_Item__DelegateSignature(class UDragDropOperation* Payload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_StructureTransfer_C", "BndEvt__WBP_Inv_StructureTransfer_DropTarget_Inventory_K2Node_ComponentBoundEvent_4_DragDropped_Item__DelegateSignature");

	Params::UWBP_Inv_StructureTransfer_C_BndEvt__WBP_Inv_StructureTransfer_DropTarget_Inventory_K2Node_ComponentBoundEvent_4_DragDropped_Item__DelegateSignature_Params Parms{};

	Parms.Payload = Payload;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inv_StructureTransfer.WBP_Inv_StructureTransfer_C.BndEvt__WBP_Inv_StructureTransfer_WBP_StructureTranfser_StructureRequirements_K2Node_ComponentBoundEvent_2_OnCloseButtonSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_Inv_StructureTransfer_C::BndEvt__WBP_Inv_StructureTransfer_WBP_StructureTranfser_StructureRequirements_K2Node_ComponentBoundEvent_2_OnCloseButtonSelected__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_StructureTransfer_C", "BndEvt__WBP_Inv_StructureTransfer_WBP_StructureTranfser_StructureRequirements_K2Node_ComponentBoundEvent_2_OnCloseButtonSelected__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Inv_StructureTransfer.WBP_Inv_StructureTransfer_C.BndEvt__WBP_Inv_StructureTransfer_WBP_Structure_FuelIndicator_K2Node_ComponentBoundEvent_5_OnCloseButtonSelected__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_Inv_StructureTransfer_C::BndEvt__WBP_Inv_StructureTransfer_WBP_Structure_FuelIndicator_K2Node_ComponentBoundEvent_5_OnCloseButtonSelected__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_StructureTransfer_C", "BndEvt__WBP_Inv_StructureTransfer_WBP_Structure_FuelIndicator_K2Node_ComponentBoundEvent_5_OnCloseButtonSelected__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Inv_StructureTransfer.WBP_Inv_StructureTransfer_C.BndEvt__WBP_Inv_StructureTransfer_but_Sort_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Inv_StructureTransfer_C::BndEvt__WBP_Inv_StructureTransfer_but_Sort_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_StructureTransfer_C", "BndEvt__WBP_Inv_StructureTransfer_but_Sort_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_Inv_StructureTransfer_C_BndEvt__WBP_Inv_StructureTransfer_but_Sort_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inv_StructureTransfer.WBP_Inv_StructureTransfer_C.BndEvt__WBP_Inv_StructureTransfer_BU_CommonBulkTransfer_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Inv_StructureTransfer_C::BndEvt__WBP_Inv_StructureTransfer_BU_CommonBulkTransfer_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_StructureTransfer_C", "BndEvt__WBP_Inv_StructureTransfer_BU_CommonBulkTransfer_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_Inv_StructureTransfer_C_BndEvt__WBP_Inv_StructureTransfer_BU_CommonBulkTransfer_K2Node_ComponentBoundEvent_7_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inv_StructureTransfer.WBP_Inv_StructureTransfer_C.BndEvt__WBP_Inv_StructureTransfer_BU_CommonSingleTransfer_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Inv_StructureTransfer_C::BndEvt__WBP_Inv_StructureTransfer_BU_CommonSingleTransfer_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_StructureTransfer_C", "BndEvt__WBP_Inv_StructureTransfer_BU_CommonSingleTransfer_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_Inv_StructureTransfer_C_BndEvt__WBP_Inv_StructureTransfer_BU_CommonSingleTransfer_K2Node_ComponentBoundEvent_8_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Inv_StructureTransfer.WBP_Inv_StructureTransfer_C.BndEvt__WBP_Inv_StructureTransfer_Inventory_K2Node_ComponentBoundEvent_10_OnPanelUpdated__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_Inv_StructureTransfer_C::BndEvt__WBP_Inv_StructureTransfer_Inventory_K2Node_ComponentBoundEvent_10_OnPanelUpdated__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_StructureTransfer_C", "BndEvt__WBP_Inv_StructureTransfer_Inventory_K2Node_ComponentBoundEvent_10_OnPanelUpdated__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Inv_StructureTransfer.WBP_Inv_StructureTransfer_C.ExecuteUbergraph_WBP_Inv_StructureTransfer
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetDesiredFocusTarget_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDragDropOperation*          K2Node_ComponentBoundEvent_Payload_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UDragOperation_Item_C*       K2Node_DynamicCast_AsDrag_Operation_Item                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDragDropOperation*          K2Node_ComponentBoundEvent_Payload                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UDragOperation_Item_C*       K2Node_DynamicCast_AsDrag_Operation_Item_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_GetSelectedEntry_ReturnValue                            (ConstParm)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasFocusedDescendants_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWBP_sw_GridEntryItem_C*>CallFunc_GetGridEntryWidgets_GridEntries                         (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_TryGetEntryWidget_IsEntryFound                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_sw_GridEntryItem_C*     CallFunc_TryGetEntryWidget_GridEntryWidget                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryGetEntryWidget_IsEntryFound_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_sw_GridEntryItem_C*     CallFunc_TryGetEntryWidget_GridEntryWidget_1                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Inv_StructureTransfer_C::ExecuteUbergraph_WBP_Inv_StructureTransfer(int32 EntryPoint, class UWidget* CallFunc_GetDesiredFocusTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UDragDropOperation* K2Node_ComponentBoundEvent_Payload_1, class UDragOperation_Item_C* K2Node_DynamicCast_AsDrag_Operation_Item, bool K2Node_DynamicCast_bSuccess, class UDragDropOperation* K2Node_ComponentBoundEvent_Payload, class UDragOperation_Item_C* K2Node_DynamicCast_AsDrag_Operation_Item_1, bool K2Node_DynamicCast_bSuccess_1, const struct FInventoryEntry& CallFunc_GetSelectedEntry_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, bool CallFunc_HasFocusedDescendants_ReturnValue, TArray<class UWBP_sw_GridEntryItem_C*>& CallFunc_GetGridEntryWidgets_GridEntries, bool CallFunc_TryGetEntryWidget_IsEntryFound, class UWBP_sw_GridEntryItem_C* CallFunc_TryGetEntryWidget_GridEntryWidget, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_TryGetEntryWidget_IsEntryFound_1, class UWBP_sw_GridEntryItem_C* CallFunc_TryGetEntryWidget_GridEntryWidget_1, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Inv_StructureTransfer_C", "ExecuteUbergraph_WBP_Inv_StructureTransfer");

	Params::UWBP_Inv_StructureTransfer_C_ExecuteUbergraph_WBP_Inv_StructureTransfer_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetDesiredFocusTarget_ReturnValue = CallFunc_GetDesiredFocusTarget_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Payload_1 = K2Node_ComponentBoundEvent_Payload_1;
	Parms.K2Node_DynamicCast_AsDrag_Operation_Item = K2Node_DynamicCast_AsDrag_Operation_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_ComponentBoundEvent_Payload = K2Node_ComponentBoundEvent_Payload;
	Parms.K2Node_DynamicCast_AsDrag_Operation_Item_1 = K2Node_DynamicCast_AsDrag_Operation_Item_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetSelectedEntry_ReturnValue = CallFunc_GetSelectedEntry_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_HasFocusedDescendants_ReturnValue = CallFunc_HasFocusedDescendants_ReturnValue;
	Parms.CallFunc_GetGridEntryWidgets_GridEntries = CallFunc_GetGridEntryWidgets_GridEntries;
	Parms.CallFunc_TryGetEntryWidget_IsEntryFound = CallFunc_TryGetEntryWidget_IsEntryFound;
	Parms.CallFunc_TryGetEntryWidget_GridEntryWidget = CallFunc_TryGetEntryWidget_GridEntryWidget;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.CallFunc_TryGetEntryWidget_IsEntryFound_1 = CallFunc_TryGetEntryWidget_IsEntryFound_1;
	Parms.CallFunc_TryGetEntryWidget_GridEntryWidget_1 = CallFunc_TryGetEntryWidget_GridEntryWidget_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


