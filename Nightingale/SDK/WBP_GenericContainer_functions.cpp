#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_GenericContainer.WBP_GenericContainer_C
// (None)

class UClass* UWBP_GenericContainer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_GenericContainer_C");

	return Clss;
}


// WBP_GenericContainer_C WBP_GenericContainer.Default__WBP_GenericContainer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_GenericContainer_C* UWBP_GenericContainer_C::GetDefaultObj()
{
	static class UWBP_GenericContainer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_GenericContainer_C*>(UWBP_GenericContainer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_GenericContainer.WBP_GenericContainer_C.CREATEDELEGATE_PROXYFUNCTION_6
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             InventoryEntry                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_GenericContainer_C::CREATEDELEGATE_PROXYFUNCTION_6(struct FInventoryEntry& InventoryEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GenericContainer_C", "CREATEDELEGATE_PROXYFUNCTION_6");

	Params::UWBP_GenericContainer_C_CREATEDELEGATE_PROXYFUNCTION_6_Params Parms{};

	Parms.InventoryEntry = InventoryEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GenericContainer.WBP_GenericContainer_C.CREATEDELEGATE_PROXYFUNCTION_5
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             InventoryEntry                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_GenericContainer_C::CREATEDELEGATE_PROXYFUNCTION_5(struct FInventoryEntry& InventoryEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GenericContainer_C", "CREATEDELEGATE_PROXYFUNCTION_5");

	Params::UWBP_GenericContainer_C_CREATEDELEGATE_PROXYFUNCTION_5_Params Parms{};

	Parms.InventoryEntry = InventoryEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GenericContainer.WBP_GenericContainer_C.CREATEDELEGATE_PROXYFUNCTION_4
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDataReference          ItemId                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// bool                               IsEquipped                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GenericContainer_C::CREATEDELEGATE_PROXYFUNCTION_4(struct FItemDataReference& ItemId, bool IsEquipped)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GenericContainer_C", "CREATEDELEGATE_PROXYFUNCTION_4");

	Params::UWBP_GenericContainer_C_CREATEDELEGATE_PROXYFUNCTION_4_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.IsEquipped = IsEquipped;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GenericContainer.WBP_GenericContainer_C.CREATEDELEGATE_PROXYFUNCTION_3
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             InventoryEntry                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_GenericContainer_C::CREATEDELEGATE_PROXYFUNCTION_3(struct FInventoryEntry& InventoryEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GenericContainer_C", "CREATEDELEGATE_PROXYFUNCTION_3");

	Params::UWBP_GenericContainer_C_CREATEDELEGATE_PROXYFUNCTION_3_Params Parms{};

	Parms.InventoryEntry = InventoryEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GenericContainer.WBP_GenericContainer_C.CREATEDELEGATE_PROXYFUNCTION_2
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             InventoryEntry                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_GenericContainer_C::CREATEDELEGATE_PROXYFUNCTION_2(struct FInventoryEntry& InventoryEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GenericContainer_C", "CREATEDELEGATE_PROXYFUNCTION_2");

	Params::UWBP_GenericContainer_C_CREATEDELEGATE_PROXYFUNCTION_2_Params Parms{};

	Parms.InventoryEntry = InventoryEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GenericContainer.WBP_GenericContainer_C.CREATEDELEGATE_PROXYFUNCTION_1
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             InventoryEntry                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UWBP_GenericContainer_C::CREATEDELEGATE_PROXYFUNCTION_1(struct FInventoryEntry& InventoryEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GenericContainer_C", "CREATEDELEGATE_PROXYFUNCTION_1");

	Params::UWBP_GenericContainer_C_CREATEDELEGATE_PROXYFUNCTION_1_Params Parms{};

	Parms.InventoryEntry = InventoryEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GenericContainer.WBP_GenericContainer_C.CREATEDELEGATE_PROXYFUNCTION_0
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDataReference          ItemId                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// bool                               IsEquipped                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GenericContainer_C::CREATEDELEGATE_PROXYFUNCTION_0(struct FItemDataReference& ItemId, bool IsEquipped)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GenericContainer_C", "CREATEDELEGATE_PROXYFUNCTION_0");

	Params::UWBP_GenericContainer_C_CREATEDELEGATE_PROXYFUNCTION_0_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.IsEquipped = IsEquipped;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GenericContainer.WBP_GenericContainer_C.OnEntryFocused
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             InventoryEntry                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_GenericContainer_C::OnEntryFocused(const struct FInventoryEntry& InventoryEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GenericContainer_C", "OnEntryFocused");

	Params::UWBP_GenericContainer_C_OnEntryFocused_Params Parms{};

	Parms.InventoryEntry = InventoryEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GenericContainer.WBP_GenericContainer_C.UpdateSortOrderPersistence
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EEntrySortOrder         CallFunc_GetCurrentSortOrder_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerState*             CallFunc_GetOwningPlayerState_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_UI_PersistenceComponent_C*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_GenericContainer_C::UpdateSortOrderPersistence(enum class EEntrySortOrder CallFunc_GetCurrentSortOrder_ReturnValue, class ANWXPlayerState* CallFunc_GetOwningPlayerState_ReturnValue, class UBP_UI_PersistenceComponent_C* CallFunc_GetComponentByClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GenericContainer_C", "UpdateSortOrderPersistence");

	Params::UWBP_GenericContainer_C_UpdateSortOrderPersistence_Params Parms{};

	Parms.CallFunc_GetCurrentSortOrder_ReturnValue = CallFunc_GetCurrentSortOrder_ReturnValue;
	Parms.CallFunc_GetOwningPlayerState_ReturnValue = CallFunc_GetOwningPlayerState_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GenericContainer.WBP_GenericContainer_C.PostIntialize
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANWXPlayerState*             CallFunc_GetOwningPlayerState_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_UI_PersistenceComponent_C*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_GenericContainer_C::PostIntialize(class ANWXPlayerState* CallFunc_GetOwningPlayerState_ReturnValue, class UBP_UI_PersistenceComponent_C* CallFunc_GetComponentByClass_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GenericContainer_C", "PostIntialize");

	Params::UWBP_GenericContainer_C_PostIntialize_Params Parms{};

	Parms.CallFunc_GetOwningPlayerState_ReturnValue = CallFunc_GetOwningPlayerState_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GenericContainer.WBP_GenericContainer_C.CreateAndAddWidget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             InventoryEntry                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UWBP_sw_GridEntryItem_C*     CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSortingByWeight_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUniformGridSlot*            CallFunc_AddGridItem_ReturnValue                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSortingByWeight_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GenericContainer_C::CreateAndAddWidget(struct FInventoryEntry& InventoryEntry, class UWBP_sw_GridEntryItem_C* CallFunc_Create_ReturnValue, bool CallFunc_IsSortingByWeight_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UUniformGridSlot* CallFunc_AddGridItem_ReturnValue, bool CallFunc_IsSortingByWeight_ReturnValue_1, const struct FVector2D& Temp_struct_Variable, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GenericContainer_C", "CreateAndAddWidget");

	Params::UWBP_GenericContainer_C_CreateAndAddWidget_Params Parms{};

	Parms.InventoryEntry = InventoryEntry;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsSortingByWeight_ReturnValue = CallFunc_IsSortingByWeight_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_AddGridItem_ReturnValue = CallFunc_AddGridItem_ReturnValue;
	Parms.CallFunc_IsSortingByWeight_ReturnValue_1 = CallFunc_IsSortingByWeight_ReturnValue_1;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GenericContainer.WBP_GenericContainer_C.RefreshGridEntries
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_GenericContainer_C::RefreshGridEntries()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GenericContainer_C", "RefreshGridEntries");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GenericContainer.WBP_GenericContainer_C.CreateAndAddEmptyWidget
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_sw_EmptyGridEntry_C*    CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUniformGridSlot*            CallFunc_AddGridItem_ReturnValue                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_GenericContainer_C::CreateAndAddEmptyWidget(class UWBP_sw_EmptyGridEntry_C* CallFunc_Create_ReturnValue, const struct FVector2D& Temp_struct_Variable, class UUniformGridSlot* CallFunc_AddGridItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GenericContainer_C", "CreateAndAddEmptyWidget");

	Params::UWBP_GenericContainer_C_CreateAndAddEmptyWidget_Params Parms{};

	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_AddGridItem_ReturnValue = CallFunc_AddGridItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GenericContainer.WBP_GenericContainer_C.GetDefaultFocusWidget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasEntries_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetDefaultFocusWidget_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_sw_GridEntryItem_C*     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_GenericContainer_C::GetDefaultFocusWidget(bool CallFunc_HasEntries_ReturnValue, class UWidget* CallFunc_GetDefaultFocusWidget_ReturnValue, class UWBP_sw_GridEntryItem_C* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GenericContainer_C", "GetDefaultFocusWidget");

	Params::UWBP_GenericContainer_C_GetDefaultFocusWidget_Params Parms{};

	Parms.CallFunc_HasEntries_ReturnValue = CallFunc_HasEntries_ReturnValue;
	Parms.CallFunc_GetDefaultFocusWidget_ReturnValue = CallFunc_GetDefaultFocusWidget_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_GenericContainer.WBP_GenericContainer_C.OnEntryButtonLeft
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             InventoryEntry                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_GenericContainer_C::OnEntryButtonLeft(const struct FInventoryEntry& InventoryEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GenericContainer_C", "OnEntryButtonLeft");

	Params::UWBP_GenericContainer_C_OnEntryButtonLeft_Params Parms{};

	Parms.InventoryEntry = InventoryEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GenericContainer.WBP_GenericContainer_C.OnEntryButtonTop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             InventoryEntry                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_GenericContainer_C::OnEntryButtonTop(const struct FInventoryEntry& InventoryEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GenericContainer_C", "OnEntryButtonTop");

	Params::UWBP_GenericContainer_C_OnEntryButtonTop_Params Parms{};

	Parms.InventoryEntry = InventoryEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GenericContainer.WBP_GenericContainer_C.OnEntryConfirm
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDataReference          ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               IsEquipped                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GenericContainer_C::OnEntryConfirm(const struct FItemDataReference& ItemId, bool IsEquipped)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GenericContainer_C", "OnEntryConfirm");

	Params::UWBP_GenericContainer_C_OnEntryConfirm_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.IsEquipped = IsEquipped;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GenericContainer.WBP_GenericContainer_C.OnEntryMouseButtonUp
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPointerEvent               Mouse_Event                                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_GenericContainer_C::OnEntryMouseButtonUp(const struct FPointerEvent& Mouse_Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GenericContainer_C", "OnEntryMouseButtonUp");

	Params::UWBP_GenericContainer_C_OnEntryMouseButtonUp_Params Parms{};

	Parms.Mouse_Event = Mouse_Event;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GenericContainer.WBP_GenericContainer_C.OnEntryDoubleClicked
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             ItemEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_GenericContainer_C::OnEntryDoubleClicked(const struct FInventoryEntry& ItemEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GenericContainer_C", "OnEntryDoubleClicked");

	Params::UWBP_GenericContainer_C_OnEntryDoubleClicked_Params Parms{};

	Parms.ItemEntry = ItemEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GenericContainer.WBP_GenericContainer_C.UnbindFromEntryWidgets
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_sw_GridEntryItem_C*     CurrentGridEntryWidget                                           (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_sw_GridEntryItem_C*     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GenericContainer_C::UnbindFromEntryWidgets(class UWBP_sw_GridEntryItem_C* CurrentGridEntryWidget, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class UWBP_sw_GridEntryItem_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GenericContainer_C", "UnbindFromEntryWidgets");

	Params::UWBP_GenericContainer_C_UnbindFromEntryWidgets_Params Parms{};

	Parms.CurrentGridEntryWidget = CurrentGridEntryWidget;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GenericContainer.WBP_GenericContainer_C.BindToEntriesWidgets
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_sw_GridEntryItem_C*     EntryWidget                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_GenericContainer_C::BindToEntriesWidgets(class UWBP_sw_GridEntryItem_C* EntryWidget, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GenericContainer_C", "BindToEntriesWidgets");

	Params::UWBP_GenericContainer_C_BindToEntriesWidgets_Params Parms{};

	Parms.EntryWidget = EntryWidget;
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


// Function WBP_GenericContainer.WBP_GenericContainer_C.TryGetEntryWidget
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             InventoryEntry                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               IsEntryFound                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_sw_GridEntryItem_C*     GridEntryWidget                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_sw_GridEntryItem_C*     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_GetInventoryEntry_InventoryEntry                        (None)
// bool                               CallFunc_EqualEqual_GuidGuid_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GenericContainer_C::TryGetEntryWidget(const struct FInventoryEntry& InventoryEntry, bool* IsEntryFound, class UWBP_sw_GridEntryItem_C** GridEntryWidget, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWBP_sw_GridEntryItem_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FInventoryEntry& CallFunc_GetInventoryEntry_InventoryEntry, bool CallFunc_EqualEqual_GuidGuid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GenericContainer_C", "TryGetEntryWidget");

	Params::UWBP_GenericContainer_C_TryGetEntryWidget_Params Parms{};

	Parms.InventoryEntry = InventoryEntry;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetInventoryEntry_InventoryEntry = CallFunc_GetInventoryEntry_InventoryEntry;
	Parms.CallFunc_EqualEqual_GuidGuid_ReturnValue = CallFunc_EqualEqual_GuidGuid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsEntryFound != nullptr)
		*IsEntryFound = Parms.IsEntryFound;

	if (GridEntryWidget != nullptr)
		*GridEntryWidget = Parms.GridEntryWidget;

}


// Function WBP_GenericContainer.WBP_GenericContainer_C.GetGridEntryWidgets
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UWBP_sw_GridEntryItem_C*>GridEntries                                                      (Parm, OutParm, ContainsInstancedReference)

void UWBP_GenericContainer_C::GetGridEntryWidgets(TArray<class UWBP_sw_GridEntryItem_C*>* GridEntries)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GenericContainer_C", "GetGridEntryWidgets");

	Params::UWBP_GenericContainer_C_GetGridEntryWidgets_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (GridEntries != nullptr)
		*GridEntries = std::move(Parms.GridEntries);

}


// Function WBP_GenericContainer.WBP_GenericContainer_C.OnEntryDragged
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ELoadoutSlotType        Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Display                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_GenericContainer_C::OnEntryDragged(enum class ELoadoutSlotType Slot, bool Display, const struct FInventoryEntry& Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GenericContainer_C", "OnEntryDragged");

	Params::UWBP_GenericContainer_C_OnEntryDragged_Params Parms{};

	Parms.Slot = Slot;
	Parms.Display = Display;
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GenericContainer.WBP_GenericContainer_C.OnEntryHovered
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               HoverOn                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             ItemEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_GenericContainer_C::OnEntryHovered(bool HoverOn, const struct FInventoryEntry& ItemEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GenericContainer_C", "OnEntryHovered");

	Params::UWBP_GenericContainer_C_OnEntryHovered_Params Parms{};

	Parms.HoverOn = HoverOn;
	Parms.ItemEntry = ItemEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GenericContainer.WBP_GenericContainer_C.OnEntrySelected
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             InventoryEntry                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_GenericContainer_C::OnEntrySelected(const struct FInventoryEntry& InventoryEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GenericContainer_C", "OnEntrySelected");

	Params::UWBP_GenericContainer_C_OnEntrySelected_Params Parms{};

	Parms.InventoryEntry = InventoryEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GenericContainer.WBP_GenericContainer_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_GenericContainer_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GenericContainer_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GenericContainer.WBP_GenericContainer_C.ExecuteUbergraph_WBP_GenericContainer
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GenericContainer_C::ExecuteUbergraph_WBP_GenericContainer(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GenericContainer_C", "ExecuteUbergraph_WBP_GenericContainer");

	Params::UWBP_GenericContainer_C_ExecuteUbergraph_WBP_GenericContainer_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GenericContainer.WBP_GenericContainer_C.ContainerItemDragged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ELoadoutSlotType        Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Display                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_GenericContainer_C::ContainerItemDragged__DelegateSignature(enum class ELoadoutSlotType Slot, bool Display, const struct FInventoryEntry& Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GenericContainer_C", "ContainerItemDragged__DelegateSignature");

	Params::UWBP_GenericContainer_C_ContainerItemDragged__DelegateSignature_Params Parms{};

	Parms.Slot = Slot;
	Parms.Display = Display;
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}

}


