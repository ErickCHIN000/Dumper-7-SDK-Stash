#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_ContractReturn_ItemSelect_ConstraintGroup.WBP_ContractReturn_ItemSelect_ConstraintGroup_C
// (None)

class UClass* UWBP_ContractReturn_ItemSelect_ConstraintGroup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_ContractReturn_ItemSelect_ConstraintGroup_C");

	return Clss;
}


// WBP_ContractReturn_ItemSelect_ConstraintGroup_C WBP_ContractReturn_ItemSelect_ConstraintGroup.Default__WBP_ContractReturn_ItemSelect_ConstraintGroup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_ContractReturn_ItemSelect_ConstraintGroup_C* UWBP_ContractReturn_ItemSelect_ConstraintGroup_C::GetDefaultObj()
{
	static class UWBP_ContractReturn_ItemSelect_ConstraintGroup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_ContractReturn_ItemSelect_ConstraintGroup_C*>(UWBP_ContractReturn_ItemSelect_ConstraintGroup_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_ContractReturn_ItemSelect_ConstraintGroup.WBP_ContractReturn_ItemSelect_ConstraintGroup_C.GetItemCount
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              ItemCount                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentItemCount                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ContractReturn_ItemSelect_ConstraintGroup_C::GetItemCount(int32* ItemCount, int32 CurrentItemCount, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FInventoryEntry& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ContractReturn_ItemSelect_ConstraintGroup_C", "GetItemCount");

	Params::UWBP_ContractReturn_ItemSelect_ConstraintGroup_C_GetItemCount_Params Parms{};

	Parms.CurrentItemCount = CurrentItemCount;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemCount != nullptr)
		*ItemCount = Parms.ItemCount;

}


// Function WBP_ContractReturn_ItemSelect_ConstraintGroup.WBP_ContractReturn_ItemSelect_ConstraintGroup_C.UnbindFromEvents
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UWidget*>             AllWidgets                                                       (Edit, BlueprintVisible, ContainsInstancedReference)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_sw_GridEntryItem_C*     K2Node_DynamicCast_AsWBP_Sw_Grid_Entry_Item                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)

void UWBP_ContractReturn_ItemSelect_ConstraintGroup_C::UnbindFromEvents(const TArray<class UWidget*>& AllWidgets, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UWBP_sw_GridEntryItem_C* K2Node_DynamicCast_AsWBP_Sw_Grid_Entry_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ContractReturn_ItemSelect_ConstraintGroup_C", "UnbindFromEvents");

	Params::UWBP_ContractReturn_ItemSelect_ConstraintGroup_C_UnbindFromEvents_Params Parms{};

	Parms.AllWidgets = AllWidgets;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Sw_Grid_Entry_Item = K2Node_DynamicCast_AsWBP_Sw_Grid_Entry_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ContractReturn_ItemSelect_ConstraintGroup.WBP_ContractReturn_ItemSelect_ConstraintGroup_C.UpdateCounter
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CurrentItemCount                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetItemConstraintQuantityRequired_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// int32                              CallFunc_GetItemCount_ItemCount                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetItemConstraintQuantityRequired_ReturnValue_1         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetItemConstraintQuantityRequired_ReturnValue_2         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_Conv_IntToInt64_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UWBP_ContractReturn_ItemSelect_ConstraintGroup_C::UpdateCounter(int32 CurrentItemCount, int64 CallFunc_Conv_IntToInt64_ReturnValue, int32 CallFunc_GetItemConstraintQuantityRequired_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int32 CallFunc_GetItemCount_ItemCount, int32 CallFunc_GetItemConstraintQuantityRequired_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_GetItemConstraintQuantityRequired_ReturnValue_2, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ContractReturn_ItemSelect_ConstraintGroup_C", "UpdateCounter");

	Params::UWBP_ContractReturn_ItemSelect_ConstraintGroup_C_UpdateCounter_Params Parms{};

	Parms.CurrentItemCount = CurrentItemCount;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue = CallFunc_Conv_IntToInt64_ReturnValue;
	Parms.CallFunc_GetItemConstraintQuantityRequired_ReturnValue = CallFunc_GetItemConstraintQuantityRequired_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_GetItemCount_ItemCount = CallFunc_GetItemCount_ItemCount;
	Parms.CallFunc_GetItemConstraintQuantityRequired_ReturnValue_1 = CallFunc_GetItemConstraintQuantityRequired_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetItemConstraintQuantityRequired_ReturnValue_2 = CallFunc_GetItemConstraintQuantityRequired_ReturnValue_2;
	Parms.CallFunc_Conv_IntToInt64_ReturnValue_1 = CallFunc_Conv_IntToInt64_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ContractReturn_ItemSelect_ConstraintGroup.WBP_ContractReturn_ItemSelect_ConstraintGroup_C.ClearEntryWidgetSelected
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_sw_GridEntryItem_C*     K2Node_DynamicCast_AsWBP_Sw_Grid_Entry_Item                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ContractReturn_ItemSelect_ConstraintGroup_C::ClearEntryWidgetSelected(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_sw_GridEntryItem_C* K2Node_DynamicCast_AsWBP_Sw_Grid_Entry_Item, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ContractReturn_ItemSelect_ConstraintGroup_C", "ClearEntryWidgetSelected");

	Params::UWBP_ContractReturn_ItemSelect_ConstraintGroup_C_ClearEntryWidgetSelected_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Sw_Grid_Entry_Item = K2Node_DynamicCast_AsWBP_Sw_Grid_Entry_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ContractReturn_ItemSelect_ConstraintGroup.WBP_ContractReturn_ItemSelect_ConstraintGroup_C.UpdateEntryWidgetCosmetics
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             Entry                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_sw_GridEntryItem_C*     K2Node_DynamicCast_AsWBP_Sw_Grid_Entry_Item                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_GetInventoryEntry_InventoryEntry                        (None)
// bool                               CallFunc_EqualEqual_FInventoryEntry_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ContractReturn_ItemSelect_ConstraintGroup_C::UpdateEntryWidgetCosmetics(struct FInventoryEntry& Entry, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_sw_GridEntryItem_C* K2Node_DynamicCast_AsWBP_Sw_Grid_Entry_Item, bool K2Node_DynamicCast_bSuccess, const struct FInventoryEntry& CallFunc_GetInventoryEntry_InventoryEntry, bool CallFunc_EqualEqual_FInventoryEntry_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ContractReturn_ItemSelect_ConstraintGroup_C", "UpdateEntryWidgetCosmetics");

	Params::UWBP_ContractReturn_ItemSelect_ConstraintGroup_C_UpdateEntryWidgetCosmetics_Params Parms{};

	Parms.Entry = Entry;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsWBP_Sw_Grid_Entry_Item = K2Node_DynamicCast_AsWBP_Sw_Grid_Entry_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetInventoryEntry_InventoryEntry = CallFunc_GetInventoryEntry_InventoryEntry;
	Parms.CallFunc_EqualEqual_FInventoryEntry_ReturnValue = CallFunc_EqualEqual_FInventoryEntry_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ContractReturn_ItemSelect_ConstraintGroup.WBP_ContractReturn_ItemSelect_ConstraintGroup_C.UpdateSelectedEntries
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             Entry                                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsConstraintSatisfied_IsSatisfied                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ContractReturn_ItemSelect_ConstraintGroup_C::UpdateSelectedEntries(struct FInventoryEntry& Entry, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_IsConstraintSatisfied_IsSatisfied, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ContractReturn_ItemSelect_ConstraintGroup_C", "UpdateSelectedEntries");

	Params::UWBP_ContractReturn_ItemSelect_ConstraintGroup_C_UpdateSelectedEntries_Params Parms{};

	Parms.Entry = Entry;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_IsConstraintSatisfied_IsSatisfied = CallFunc_IsConstraintSatisfied_IsSatisfied;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ContractReturn_ItemSelect_ConstraintGroup.WBP_ContractReturn_ItemSelect_ConstraintGroup_C.OnEntryWidgetSelected
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             InventoryEntry                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_ContractReturn_ItemSelect_ConstraintGroup_C::OnEntryWidgetSelected(const struct FInventoryEntry& InventoryEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ContractReturn_ItemSelect_ConstraintGroup_C", "OnEntryWidgetSelected");

	Params::UWBP_ContractReturn_ItemSelect_ConstraintGroup_C_OnEntryWidgetSelected_Params Parms{};

	Parms.InventoryEntry = InventoryEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ContractReturn_ItemSelect_ConstraintGroup.WBP_ContractReturn_ItemSelect_ConstraintGroup_C.CreateEmptyWidgets
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NumItemsDisplayed                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             ItemsBeingDisplayed                                              (Edit, BlueprintVisible)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_sw_EmptyGridEntry_C*    CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUniformGridSlot*            CallFunc_AddGridItem_ReturnValue                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ContractReturn_ItemSelect_ConstraintGroup_C::CreateEmptyWidgets(int32 NumItemsDisplayed, const struct FInventoryEntry& ItemsBeingDisplayed, int32 Temp_int_Variable, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UWBP_sw_EmptyGridEntry_C* CallFunc_Create_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue_1, class UUniformGridSlot* CallFunc_AddGridItem_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ContractReturn_ItemSelect_ConstraintGroup_C", "CreateEmptyWidgets");

	Params::UWBP_ContractReturn_ItemSelect_ConstraintGroup_C_CreateEmptyWidgets_Params Parms{};

	Parms.NumItemsDisplayed = NumItemsDisplayed;
	Parms.ItemsBeingDisplayed = ItemsBeingDisplayed;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Percent_IntInt_ReturnValue_1 = CallFunc_Percent_IntInt_ReturnValue_1;
	Parms.CallFunc_AddGridItem_ReturnValue = CallFunc_AddGridItem_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ContractReturn_ItemSelect_ConstraintGroup.WBP_ContractReturn_ItemSelect_ConstraintGroup_C.CreateItemWidgets
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FInventoryEntry>     InventoryEntries                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UWBP_sw_GridEntryItem_C*     CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUniformGridSlot*            CallFunc_AddGridItem_ReturnValue                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_ContractReturn_ItemSelect_ConstraintGroup_C::CreateItemWidgets(TArray<struct FInventoryEntry>& InventoryEntries, class UWBP_sw_GridEntryItem_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FInventoryEntry& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUniformGridSlot* CallFunc_AddGridItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ContractReturn_ItemSelect_ConstraintGroup_C", "CreateItemWidgets");

	Params::UWBP_ContractReturn_ItemSelect_ConstraintGroup_C_CreateItemWidgets_Params Parms{};

	Parms.InventoryEntries = InventoryEntries;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_AddGridItem_ReturnValue = CallFunc_AddGridItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ContractReturn_ItemSelect_ConstraintGroup.WBP_ContractReturn_ItemSelect_ConstraintGroup_C.UpdateGroupName
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemConstraintPresentationDataCallFunc_GetItemConstraintUIData_OutPresentationData             (None)
// struct FItemConstraintPresentationDataCallFunc_GetItemConstraintUIData_OutPresentationData_1           (None)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ContractReturn_ItemSelect_ConstraintGroup_C::UpdateGroupName(const struct FItemConstraintPresentationData& CallFunc_GetItemConstraintUIData_OutPresentationData, const struct FItemConstraintPresentationData& CallFunc_GetItemConstraintUIData_OutPresentationData_1, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ContractReturn_ItemSelect_ConstraintGroup_C", "UpdateGroupName");

	Params::UWBP_ContractReturn_ItemSelect_ConstraintGroup_C_UpdateGroupName_Params Parms{};

	Parms.CallFunc_GetItemConstraintUIData_OutPresentationData = CallFunc_GetItemConstraintUIData_OutPresentationData;
	Parms.CallFunc_GetItemConstraintUIData_OutPresentationData_1 = CallFunc_GetItemConstraintUIData_OutPresentationData_1;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ContractReturn_ItemSelect_ConstraintGroup.WBP_ContractReturn_ItemSelect_ConstraintGroup_C.Initialize
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FInventoryEntry>     RelevantItems                                                    (Edit, BlueprintVisible)
// TArray<struct FInventoryEntry>     ConstraintItems                                                  (Edit, BlueprintVisible)
// bool                               CallFunc_Array_IsEmpty_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     CallFunc_FilterEntriesBasedOnConstraint_OutEntriesMeetConstraint (ReferenceParm)
// TArray<struct FInventoryEntry>     CallFunc_FilterEntriesBasedOnConstraint_OutEntriesRelevant       (ReferenceParm)

void UWBP_ContractReturn_ItemSelect_ConstraintGroup_C::Initialize(const TArray<struct FInventoryEntry>& RelevantItems, const TArray<struct FInventoryEntry>& ConstraintItems, bool CallFunc_Array_IsEmpty_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FInventoryEntry>& CallFunc_FilterEntriesBasedOnConstraint_OutEntriesMeetConstraint, TArray<struct FInventoryEntry>& CallFunc_FilterEntriesBasedOnConstraint_OutEntriesRelevant)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ContractReturn_ItemSelect_ConstraintGroup_C", "Initialize");

	Params::UWBP_ContractReturn_ItemSelect_ConstraintGroup_C_Initialize_Params Parms{};

	Parms.RelevantItems = RelevantItems;
	Parms.ConstraintItems = ConstraintItems;
	Parms.CallFunc_Array_IsEmpty_ReturnValue = CallFunc_Array_IsEmpty_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_FilterEntriesBasedOnConstraint_OutEntriesMeetConstraint = CallFunc_FilterEntriesBasedOnConstraint_OutEntriesMeetConstraint;
	Parms.CallFunc_FilterEntriesBasedOnConstraint_OutEntriesRelevant = CallFunc_FilterEntriesBasedOnConstraint_OutEntriesRelevant;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ContractReturn_ItemSelect_ConstraintGroup.WBP_ContractReturn_ItemSelect_ConstraintGroup_C.GetSelectedItems
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<struct FInventoryEntry>     SelectedItem                                                     (Parm, OutParm)

void UWBP_ContractReturn_ItemSelect_ConstraintGroup_C::GetSelectedItems(TArray<struct FInventoryEntry>* SelectedItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ContractReturn_ItemSelect_ConstraintGroup_C", "GetSelectedItems");

	Params::UWBP_ContractReturn_ItemSelect_ConstraintGroup_C_GetSelectedItems_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SelectedItem != nullptr)
		*SelectedItem = std::move(Parms.SelectedItem);

}


// Function WBP_ContractReturn_ItemSelect_ConstraintGroup.WBP_ContractReturn_ItemSelect_ConstraintGroup_C.IsConstraintSatisfied
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               IsSatisfied                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentItemCount                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FItemConstraint>     K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_AreAllConstraintsLooselyMet_bAllMet                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      CallFunc_AreAllConstraintsLooselyMet_OutUnmetSlots               (ReferenceParm)

void UWBP_ContractReturn_ItemSelect_ConstraintGroup_C::IsConstraintSatisfied(bool* IsSatisfied, int32 CurrentItemCount, TArray<struct FItemConstraint>& K2Node_MakeArray_Array, bool CallFunc_AreAllConstraintsLooselyMet_bAllMet, TArray<int32>& CallFunc_AreAllConstraintsLooselyMet_OutUnmetSlots)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ContractReturn_ItemSelect_ConstraintGroup_C", "IsConstraintSatisfied");

	Params::UWBP_ContractReturn_ItemSelect_ConstraintGroup_C_IsConstraintSatisfied_Params Parms{};

	Parms.CurrentItemCount = CurrentItemCount;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_AreAllConstraintsLooselyMet_bAllMet = CallFunc_AreAllConstraintsLooselyMet_bAllMet;
	Parms.CallFunc_AreAllConstraintsLooselyMet_OutUnmetSlots = CallFunc_AreAllConstraintsLooselyMet_OutUnmetSlots;

	UObject::ProcessEvent(Func, &Parms);

	if (IsSatisfied != nullptr)
		*IsSatisfied = Parms.IsSatisfied;

}


// Function WBP_ContractReturn_ItemSelect_ConstraintGroup.WBP_ContractReturn_ItemSelect_ConstraintGroup_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_ContractReturn_ItemSelect_ConstraintGroup_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ContractReturn_ItemSelect_ConstraintGroup_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ContractReturn_ItemSelect_ConstraintGroup.WBP_ContractReturn_ItemSelect_ConstraintGroup_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_ContractReturn_ItemSelect_ConstraintGroup_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ContractReturn_ItemSelect_ConstraintGroup_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ContractReturn_ItemSelect_ConstraintGroup.WBP_ContractReturn_ItemSelect_ConstraintGroup_C.ExecuteUbergraph_WBP_ContractReturn_ItemSelect_ConstraintGroup
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ContractReturn_ItemSelect_ConstraintGroup_C::ExecuteUbergraph_WBP_ContractReturn_ItemSelect_ConstraintGroup(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ContractReturn_ItemSelect_ConstraintGroup_C", "ExecuteUbergraph_WBP_ContractReturn_ItemSelect_ConstraintGroup");

	Params::UWBP_ContractReturn_ItemSelect_ConstraintGroup_C_ExecuteUbergraph_WBP_ContractReturn_ItemSelect_ConstraintGroup_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ContractReturn_ItemSelect_ConstraintGroup.WBP_ContractReturn_ItemSelect_ConstraintGroup_C.OnEntrySelected__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_ContractReturn_ItemSelect_ConstraintGroup_C::OnEntrySelected__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ContractReturn_ItemSelect_ConstraintGroup_C", "OnEntrySelected__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


