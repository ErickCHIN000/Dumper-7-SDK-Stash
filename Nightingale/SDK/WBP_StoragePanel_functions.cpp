#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_StoragePanel.WBP_StoragePanel_C
// (None)

class UClass* UWBP_StoragePanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_StoragePanel_C");

	return Clss;
}


// WBP_StoragePanel_C WBP_StoragePanel.Default__WBP_StoragePanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_StoragePanel_C* UWBP_StoragePanel_C::GetDefaultObj()
{
	static class UWBP_StoragePanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_StoragePanel_C*>(UWBP_StoragePanel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_StoragePanel.WBP_StoragePanel_C.CREATEDELEGATE_PROXYFUNCTION_3
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             InventoryEntry                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_StoragePanel_C::CREATEDELEGATE_PROXYFUNCTION_3(struct FInventoryEntry& InventoryEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StoragePanel_C", "CREATEDELEGATE_PROXYFUNCTION_3");

	Params::UWBP_StoragePanel_C_CREATEDELEGATE_PROXYFUNCTION_3_Params Parms{};

	Parms.InventoryEntry = InventoryEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StoragePanel.WBP_StoragePanel_C.CREATEDELEGATE_PROXYFUNCTION_2
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             InventoryEntry                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_StoragePanel_C::CREATEDELEGATE_PROXYFUNCTION_2(struct FInventoryEntry& InventoryEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StoragePanel_C", "CREATEDELEGATE_PROXYFUNCTION_2");

	Params::UWBP_StoragePanel_C_CREATEDELEGATE_PROXYFUNCTION_2_Params Parms{};

	Parms.InventoryEntry = InventoryEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StoragePanel.WBP_StoragePanel_C.CREATEDELEGATE_PROXYFUNCTION_1
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             InventoryEntry                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_StoragePanel_C::CREATEDELEGATE_PROXYFUNCTION_1(struct FInventoryEntry& InventoryEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StoragePanel_C", "CREATEDELEGATE_PROXYFUNCTION_1");

	Params::UWBP_StoragePanel_C_CREATEDELEGATE_PROXYFUNCTION_1_Params Parms{};

	Parms.InventoryEntry = InventoryEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StoragePanel.WBP_StoragePanel_C.CREATEDELEGATE_PROXYFUNCTION_0
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             InventoryEntry                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_StoragePanel_C::CREATEDELEGATE_PROXYFUNCTION_0(struct FInventoryEntry& InventoryEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StoragePanel_C", "CREATEDELEGATE_PROXYFUNCTION_0");

	Params::UWBP_StoragePanel_C_CREATEDELEGATE_PROXYFUNCTION_0_Params Parms{};

	Parms.InventoryEntry = InventoryEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StoragePanel.WBP_StoragePanel_C.InitializeFilters
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StoragePanel_C::InitializeFilters(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UClass* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StoragePanel_C", "InitializeFilters");

	Params::UWBP_StoragePanel_C_InitializeFilters_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StoragePanel.WBP_StoragePanel_C.UpdateSelectedWidgetCosmetic
// (Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               LHasAnyFocus                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasFocusedDescendants_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWBP_sw_GridEntryItem_C*>CallFunc_GetGridEntryWidgets_GridEntries                         (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_sw_GridEntryItem_C*     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_GetInventoryEntry_InventoryEntry                        (None)
// bool                               CallFunc_EqualEqual_FInventoryEntry_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StoragePanel_C::UpdateSelectedWidgetCosmetic(bool LHasAnyFocus, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_HasFocusedDescendants_ReturnValue, TArray<class UWBP_sw_GridEntryItem_C*>& CallFunc_GetGridEntryWidgets_GridEntries, int32 CallFunc_Array_Length_ReturnValue, class UWBP_sw_GridEntryItem_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FInventoryEntry& CallFunc_GetInventoryEntry_InventoryEntry, bool CallFunc_EqualEqual_FInventoryEntry_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StoragePanel_C", "UpdateSelectedWidgetCosmetic");

	Params::UWBP_StoragePanel_C_UpdateSelectedWidgetCosmetic_Params Parms{};

	Parms.LHasAnyFocus = LHasAnyFocus;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_HasFocusedDescendants_ReturnValue = CallFunc_HasFocusedDescendants_ReturnValue;
	Parms.CallFunc_GetGridEntryWidgets_GridEntries = CallFunc_GetGridEntryWidgets_GridEntries;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetInventoryEntry_InventoryEntry = CallFunc_GetInventoryEntry_InventoryEntry;
	Parms.CallFunc_EqualEqual_FInventoryEntry_ReturnValue = CallFunc_EqualEqual_FInventoryEntry_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StoragePanel.WBP_StoragePanel_C.OnInitialize
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        PanelLabel                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_StoragePanel_C::OnInitialize(class FText& PanelLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StoragePanel_C", "OnInitialize");

	Params::UWBP_StoragePanel_C_OnInitialize_Params Parms{};

	Parms.PanelLabel = PanelLabel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StoragePanel.WBP_StoragePanel_C.GetDefaultFocusWidget
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasEntries_HasEntries                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_StoragePanel_C::GetDefaultFocusWidget(bool CallFunc_HasEntries_HasEntries)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StoragePanel_C", "GetDefaultFocusWidget");

	Params::UWBP_StoragePanel_C_GetDefaultFocusWidget_Params Parms{};

	Parms.CallFunc_HasEntries_HasEntries = CallFunc_HasEntries_HasEntries;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_StoragePanel.WBP_StoragePanel_C.OnGridItemButtonLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             InventoryEntry                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_StoragePanel_C::OnGridItemButtonLeft(const struct FInventoryEntry& InventoryEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StoragePanel_C", "OnGridItemButtonLeft");

	Params::UWBP_StoragePanel_C_OnGridItemButtonLeft_Params Parms{};

	Parms.InventoryEntry = InventoryEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StoragePanel.WBP_StoragePanel_C.OnGridItemButtonTop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             InventoryEntry                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_StoragePanel_C::OnGridItemButtonTop(const struct FInventoryEntry& InventoryEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StoragePanel_C", "OnGridItemButtonTop");

	Params::UWBP_StoragePanel_C_OnGridItemButtonTop_Params Parms{};

	Parms.InventoryEntry = InventoryEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StoragePanel.WBP_StoragePanel_C.OnGridItemConfirm
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDataReference          ItemId                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// bool                               IsEquipped                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StoragePanel_C::OnGridItemConfirm(struct FItemDataReference& ItemId, bool IsEquipped)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StoragePanel_C", "OnGridItemConfirm");

	Params::UWBP_StoragePanel_C_OnGridItemConfirm_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.IsEquipped = IsEquipped;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StoragePanel.WBP_StoragePanel_C.HasEntries
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               HasEntries                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasEntries_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StoragePanel_C::HasEntries(bool* HasEntries, bool CallFunc_HasEntries_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StoragePanel_C", "HasEntries");

	Params::UWBP_StoragePanel_C_HasEntries_Params Parms{};

	Parms.CallFunc_HasEntries_ReturnValue = CallFunc_HasEntries_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (HasEntries != nullptr)
		*HasEntries = Parms.HasEntries;

}


// Function WBP_StoragePanel.WBP_StoragePanel_C.OnSortOrderUpdated
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEntrySortOrder         SortOrder                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StoragePanel_C::OnSortOrderUpdated(enum class EEntrySortOrder SortOrder)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StoragePanel_C", "OnSortOrderUpdated");

	Params::UWBP_StoragePanel_C_OnSortOrderUpdated_Params Parms{};

	Parms.SortOrder = SortOrder;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StoragePanel.WBP_StoragePanel_C.OnGridItemSelected
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             InventoryEntry                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_StoragePanel_C::OnGridItemSelected(struct FInventoryEntry& InventoryEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StoragePanel_C", "OnGridItemSelected");

	Params::UWBP_StoragePanel_C_OnGridItemSelected_Params Parms{};

	Parms.InventoryEntry = InventoryEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StoragePanel.WBP_StoragePanel_C.On Grid Item Hovered
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsHovered                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             InventoryEntry                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class ETooltipSource          TooltipSource                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StoragePanel_C::On_Grid_Item_Hovered(bool IsHovered, struct FInventoryEntry& InventoryEntry, enum class ETooltipSource TooltipSource)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StoragePanel_C", "On Grid Item Hovered");

	Params::UWBP_StoragePanel_C_On_Grid_Item_Hovered_Params Parms{};

	Parms.IsHovered = IsHovered;
	Parms.InventoryEntry = InventoryEntry;
	Parms.TooltipSource = TooltipSource;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StoragePanel.WBP_StoragePanel_C.OnGridItemDoubleClicked
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             InventoryEntry                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_StoragePanel_C::OnGridItemDoubleClicked(struct FInventoryEntry& InventoryEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StoragePanel_C", "OnGridItemDoubleClicked");

	Params::UWBP_StoragePanel_C_OnGridItemDoubleClicked_Params Parms{};

	Parms.InventoryEntry = InventoryEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StoragePanel.WBP_StoragePanel_C.InitializeWeightCounter
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_StoragePanel_C::InitializeWeightCounter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StoragePanel_C", "InitializeWeightCounter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StoragePanel.WBP_StoragePanel_C.UpdateWeightCounter
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetOwningPlayerPawn_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurrentWeightOfContainer_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_UpdateCount_CurrentValue_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_UpdateCount_MaxValue_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StoragePanel_C::UpdateWeightCounter(class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, float CallFunc_GetCurrentWeightOfContainer_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue, double CallFunc_UpdateCount_CurrentValue_ImplicitCast, double CallFunc_UpdateCount_MaxValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StoragePanel_C", "UpdateWeightCounter");

	Params::UWBP_StoragePanel_C_UpdateWeightCounter_Params Parms{};

	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue = CallFunc_Conv_InterfaceToObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetOwningPlayerPawn_ReturnValue = CallFunc_GetOwningPlayerPawn_ReturnValue;
	Parms.CallFunc_GetCurrentWeightOfContainer_ReturnValue = CallFunc_GetCurrentWeightOfContainer_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute = CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute;
	Parms.CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue = CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_UpdateCount_CurrentValue_ImplicitCast = CallFunc_UpdateCount_CurrentValue_ImplicitCast;
	Parms.CallFunc_UpdateCount_MaxValue_ImplicitCast = CallFunc_UpdateCount_MaxValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StoragePanel.WBP_StoragePanel_C.OnGridUpdated
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_StoragePanel_C::OnGridUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StoragePanel_C", "OnGridUpdated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StoragePanel.WBP_StoragePanel_C.RemoveBindings
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_StoragePanel_C::RemoveBindings(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StoragePanel_C", "RemoveBindings");

	Params::UWBP_StoragePanel_C_RemoveBindings_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StoragePanel.WBP_StoragePanel_C.SetupBindings
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_StoragePanel_C::SetupBindings(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StoragePanel_C", "SetupBindings");

	Params::UWBP_StoragePanel_C_SetupBindings_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StoragePanel.WBP_StoragePanel_C.UpdateCapacityCounter
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumberItemEntries_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FContainerCapacityData      CallFunc_GetContainerCapacityData_ReturnValue                    (NoDestructor)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UWBP_StoragePanel_C::UpdateCapacityCounter(class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, int32 CallFunc_GetNumberItemEntries_ReturnValue, bool CallFunc_IsValid_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FContainerCapacityData& CallFunc_GetContainerCapacityData_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StoragePanel_C", "UpdateCapacityCounter");

	Params::UWBP_StoragePanel_C_UpdateCapacityCounter_Params Parms{};

	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue = CallFunc_Conv_InterfaceToObject_ReturnValue;
	Parms.CallFunc_GetNumberItemEntries_ReturnValue = CallFunc_GetNumberItemEntries_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_GetContainerCapacityData_ReturnValue = CallFunc_GetContainerCapacityData_ReturnValue;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue_1 = CallFunc_Conv_IntToInt64_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StoragePanel.WBP_StoragePanel_C.OnGridItemDragged
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ELoadoutSlotType        Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Display                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_StoragePanel_C::OnGridItemDragged(enum class ELoadoutSlotType Slot, bool Display, const struct FInventoryEntry& Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StoragePanel_C", "OnGridItemDragged");

	Params::UWBP_StoragePanel_C_OnGridItemDragged_Params Parms{};

	Parms.Slot = Slot;
	Parms.Display = Display;
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StoragePanel.WBP_StoragePanel_C.ValidateSelectedEntry
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             EmptyEntry                                                       (Edit, BlueprintVisible)
// bool                               CallFunc_TryGetEntryWidget_IsEntryFound                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_sw_GridEntryItem_C*     CallFunc_TryGetEntryWidget_GridEntryWidget                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_GetInventoryEntry_InventoryEntry                        (None)

void UWBP_StoragePanel_C::ValidateSelectedEntry(const struct FInventoryEntry& EmptyEntry, bool CallFunc_TryGetEntryWidget_IsEntryFound, class UWBP_sw_GridEntryItem_C* CallFunc_TryGetEntryWidget_GridEntryWidget, const struct FInventoryEntry& CallFunc_GetInventoryEntry_InventoryEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StoragePanel_C", "ValidateSelectedEntry");

	Params::UWBP_StoragePanel_C_ValidateSelectedEntry_Params Parms{};

	Parms.EmptyEntry = EmptyEntry;
	Parms.CallFunc_TryGetEntryWidget_IsEntryFound = CallFunc_TryGetEntryWidget_IsEntryFound;
	Parms.CallFunc_TryGetEntryWidget_GridEntryWidget = CallFunc_TryGetEntryWidget_GridEntryWidget;
	Parms.CallFunc_GetInventoryEntry_InventoryEntry = CallFunc_GetInventoryEntry_InventoryEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StoragePanel.WBP_StoragePanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_StoragePanel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StoragePanel_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StoragePanel.WBP_StoragePanel_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_StoragePanel_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StoragePanel_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_StoragePanel.WBP_StoragePanel_C.ExecuteUbergraph_WBP_StoragePanel
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_StoragePanel_C::ExecuteUbergraph_WBP_StoragePanel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StoragePanel_C", "ExecuteUbergraph_WBP_StoragePanel");

	Params::UWBP_StoragePanel_C_ExecuteUbergraph_WBP_StoragePanel_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_StoragePanel.WBP_StoragePanel_C.OnEntryDragged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ELoadoutSlotType        Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Display                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_StoragePanel_C::OnEntryDragged__DelegateSignature(enum class ELoadoutSlotType Slot, bool Display, const struct FInventoryEntry& Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_StoragePanel_C", "OnEntryDragged__DelegateSignature");

	Params::UWBP_StoragePanel_C_OnEntryDragged__DelegateSignature_Params Parms{};

	Parms.Slot = Slot;
	Parms.Display = Display;
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}

}


