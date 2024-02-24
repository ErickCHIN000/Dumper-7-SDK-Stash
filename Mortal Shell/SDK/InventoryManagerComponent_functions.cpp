#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass InventoryManagerComponent.InventoryManagerComponent_C
// (None)

class UClass* UInventoryManagerComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InventoryManagerComponent_C");

	return Clss;
}


// InventoryManagerComponent_C InventoryManagerComponent.Default__InventoryManagerComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInventoryManagerComponent_C* UInventoryManagerComponent_C::GetDefaultObj()
{
	static class UInventoryManagerComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInventoryManagerComponent_C*>(UInventoryManagerComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function InventoryManagerComponent.InventoryManagerComponent_C.DebugIndexStartSearch
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void UInventoryManagerComponent_C::DebugIndexStartSearch(int32 Index, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "DebugIndexStartSearch");

	Params::UInventoryManagerComponent_C_DebugIndexStartSearch_Params Parms{};

	Parms.Index = Index;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.RemoveItemFromType
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LocalInventorySlot                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryItem>      CallFunc_GetInventoryItems_InventoryItems                        (ReferenceParm, HasGetValueTypeHash)
// struct FInventoryItem              CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveFromItemAmount_WasFullAmountRemoved               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem              CallFunc_RemoveFromItemAmount_OutnventoryItem                    (HasGetValueTypeHash)
// int32                              CallFunc_RemoveFromItemAmount_AmountRemoved                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetInventoryItem_Success                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventoryManagerComponent_C::RemoveItemFromType(class FName ItemId, int32 LocalInventorySlot, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, TArray<struct FInventoryItem>& CallFunc_GetInventoryItems_InventoryItems, const struct FInventoryItem& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_RemoveFromItemAmount_WasFullAmountRemoved, const struct FInventoryItem& CallFunc_RemoveFromItemAmount_OutnventoryItem, int32 CallFunc_RemoveFromItemAmount_AmountRemoved, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_SetInventoryItem_Success, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "RemoveItemFromType");

	Params::UInventoryManagerComponent_C_RemoveItemFromType_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.LocalInventorySlot = LocalInventorySlot;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetInventoryItems_InventoryItems = CallFunc_GetInventoryItems_InventoryItems;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_RemoveFromItemAmount_WasFullAmountRemoved = CallFunc_RemoveFromItemAmount_WasFullAmountRemoved;
	Parms.CallFunc_RemoveFromItemAmount_OutnventoryItem = CallFunc_RemoveFromItemAmount_OutnventoryItem;
	Parms.CallFunc_RemoveFromItemAmount_AmountRemoved = CallFunc_RemoveFromItemAmount_AmountRemoved;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_SetInventoryItem_Success = CallFunc_SetInventoryItem_Success;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.CallItemAddNotify
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryItem              InventoryItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSet<class FName>                  MushroomIDs                                                      (Edit, BlueprintVisible)
// bool                               CallFunc_Set_Contains_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetItemMaxFamiliarity_MaxFamiliarity                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetItemFamiliarity_Value                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSet<class FName>                  K2Node_MakeVariable_MakeVariableOutput                           (None)
// int32                              CallFunc_GetItemFamiliarity_Value_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FToolTipInfo                K2Node_MakeStruct_ToolTipInfo                                    (HasGetValueTypeHash)

void UInventoryManagerComponent_C::CallItemAddNotify(const struct FInventoryItem& InventoryItem, class FName ID, int32 Amount, TSet<class FName> MushroomIDs, bool CallFunc_Set_Contains_ReturnValue, int32 CallFunc_GetItemMaxFamiliarity_MaxFamiliarity, int32 CallFunc_GetItemFamiliarity_Value, TSet<class FName> K2Node_MakeVariable_MakeVariableOutput, int32 CallFunc_GetItemFamiliarity_Value_1, const struct FToolTipInfo& K2Node_MakeStruct_ToolTipInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "CallItemAddNotify");

	Params::UInventoryManagerComponent_C_CallItemAddNotify_Params Parms{};

	Parms.InventoryItem = InventoryItem;
	Parms.ID = ID;
	Parms.Amount = Amount;
	Parms.MushroomIDs = MushroomIDs;
	Parms.CallFunc_Set_Contains_ReturnValue = CallFunc_Set_Contains_ReturnValue;
	Parms.CallFunc_GetItemMaxFamiliarity_MaxFamiliarity = CallFunc_GetItemMaxFamiliarity_MaxFamiliarity;
	Parms.CallFunc_GetItemFamiliarity_Value = CallFunc_GetItemFamiliarity_Value;
	Parms.K2Node_MakeVariable_MakeVariableOutput = K2Node_MakeVariable_MakeVariableOutput;
	Parms.CallFunc_GetItemFamiliarity_Value_1 = CallFunc_GetItemFamiliarity_Value_1;
	Parms.K2Node_MakeStruct_ToolTipInfo = K2Node_MakeStruct_ToolTipInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.RemoveQuickAccessItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              QuickSlotIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryManagerComponent_C::RemoveQuickAccessItem(int32 QuickSlotIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "RemoveQuickAccessItem");

	Params::UInventoryManagerComponent_C_RemoveQuickAccessItem_Params Parms{};

	Parms.QuickSlotIndex = QuickSlotIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.CycleQuickSlot
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CurrentIndex                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Direction                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                              ReturnIndex                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ItemFound                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               NoValidItem                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_NoValidItem                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_ItemFound                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Local_ReturnIndex                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_CurrentIndex                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              CallFunc_GetInventoryItem_InventoryItem                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              CallFunc_GetInventoryItem_InventoryItem_1                        (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem              CallFunc_GetInventoryItem_InventoryItem_2                        (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              CallFunc_GetInventoryItem_InventoryItem_3                        (HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem              CallFunc_GetInventoryItem_InventoryItem_4                        (HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item_5                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem              CallFunc_GetInventoryItem_InventoryItem_5                        (HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item_6                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              CallFunc_GetInventoryItem_InventoryItem_6                        (HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventoryManagerComponent_C::CycleQuickSlot(int32 CurrentIndex, const class FString& Direction, int32* ReturnIndex, bool* ItemFound, bool* NoValidItem, bool Local_NoValidItem, bool Local_ItemFound, int32 Local_ReturnIndex, int32 Local_CurrentIndex, bool Temp_bool_True_if_break_was_hit_Variable, bool K2Node_SwitchString_CmpSuccess, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable_1, int32 Temp_int_Array_Index_Variable_3, bool CallFunc_Not_PreBool_ReturnValue_1, int32 CallFunc_Array_Get_Item, const struct FInventoryItem& CallFunc_GetInventoryItem_InventoryItem, int32 CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Get_Item_2, const struct FInventoryItem& CallFunc_GetInventoryItem_InventoryItem_1, bool CallFunc_IsValid_ReturnValue_1, const struct FInventoryItem& CallFunc_GetInventoryItem_InventoryItem_2, bool CallFunc_IsValid_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Array_Get_Item_3, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FInventoryItem& CallFunc_GetInventoryItem_InventoryItem_3, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Max_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Array_Get_Item_4, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FInventoryItem& CallFunc_GetInventoryItem_InventoryItem_4, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Subtract_IntInt_ReturnValue_2, int32 CallFunc_Array_Get_Item_5, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, const struct FInventoryItem& CallFunc_GetInventoryItem_InventoryItem_5, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_5, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue_3, int32 CallFunc_Max_ReturnValue_1, int32 CallFunc_Array_Get_Item_6, const struct FInventoryItem& CallFunc_GetInventoryItem_InventoryItem_6, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_6, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "CycleQuickSlot");

	Params::UInventoryManagerComponent_C_CycleQuickSlot_Params Parms{};

	Parms.CurrentIndex = CurrentIndex;
	Parms.Direction = Direction;
	Parms.Local_NoValidItem = Local_NoValidItem;
	Parms.Local_ItemFound = Local_ItemFound;
	Parms.Local_ReturnIndex = Local_ReturnIndex;
	Parms.Local_CurrentIndex = Local_CurrentIndex;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable_1 = Temp_bool_True_if_break_was_hit_Variable_1;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetInventoryItem_InventoryItem = CallFunc_GetInventoryItem_InventoryItem;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_GetInventoryItem_InventoryItem_1 = CallFunc_GetInventoryItem_InventoryItem_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetInventoryItem_InventoryItem_2 = CallFunc_GetInventoryItem_InventoryItem_2;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetInventoryItem_InventoryItem_3 = CallFunc_GetInventoryItem_InventoryItem_3;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetInventoryItem_InventoryItem_4 = CallFunc_GetInventoryItem_InventoryItem_4;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_2 = CallFunc_Subtract_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue_1 = CallFunc_GreaterEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_GetInventoryItem_InventoryItem_5 = CallFunc_GetInventoryItem_InventoryItem_5;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_3 = CallFunc_Subtract_IntInt_ReturnValue_3;
	Parms.CallFunc_Max_ReturnValue_1 = CallFunc_Max_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_6 = CallFunc_Array_Get_Item_6;
	Parms.CallFunc_GetInventoryItem_InventoryItem_6 = CallFunc_GetInventoryItem_InventoryItem_6;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (ReturnIndex != nullptr)
		*ReturnIndex = Parms.ReturnIndex;

	if (ItemFound != nullptr)
		*ItemFound = Parms.ItemFound;

	if (NoValidItem != nullptr)
		*NoValidItem = Parms.NoValidItem;

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.Debug_PrintUsedItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryItem              InventoryItem                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void UInventoryManagerComponent_C::Debug_PrintUsedItem(struct FInventoryItem& InventoryItem, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "Debug_PrintUsedItem");

	Params::UInventoryManagerComponent_C_Debug_PrintUsedItem_Params Parms{};

	Parms.InventoryItem = InventoryItem;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.CallItemPickedUpOnEffect
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ItemId                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDHItemEffectBase*           CallFunc_GetItemEffect_Value                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  CallFunc_GetPlayerCharacter_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventoryManagerComponent_C::CallItemPickedUpOnEffect(class FName& ItemId, class UDHItemEffectBase* CallFunc_GetItemEffect_Value, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "CallItemPickedUpOnEffect");

	Params::UInventoryManagerComponent_C_CallItemPickedUpOnEffect_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.CallFunc_GetItemEffect_Value = CallFunc_GetItemEffect_Value;
	Parms.CallFunc_GetPlayerCharacter_ReturnValue = CallFunc_GetPlayerCharacter_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.GetItemEffect
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Key                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDHItemEffectBase*           Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<class FName, class UDHItemEffectBase*>CallFunc_GetEffectCopies_OutEffects                              (None)
// int32                              CallFunc_Map_Length_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDHItemEffectBase*           CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventoryManagerComponent_C::GetItemEffect(class FName& Key, class UDHItemEffectBase** Value, TMap<class FName, class UDHItemEffectBase*> CallFunc_GetEffectCopies_OutEffects, int32 CallFunc_Map_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UDHItemEffectBase* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "GetItemEffect");

	Params::UInventoryManagerComponent_C_GetItemEffect_Params Parms{};

	Parms.Key = Key;
	Parms.CallFunc_GetEffectCopies_OutEffects = CallFunc_GetEffectCopies_OutEffects;
	Parms.CallFunc_Map_Length_ReturnValue = CallFunc_Map_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.ApplyItemEffect
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ItemId                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bApplied                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDHItemEffectBase*           CallFunc_GetItemEffect_Value                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Apply_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventoryManagerComponent_C::ApplyItemEffect(class FName& ItemId, bool* bApplied, class UDHItemEffectBase* CallFunc_GetItemEffect_Value, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Apply_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "ApplyItemEffect");

	Params::UInventoryManagerComponent_C_ApplyItemEffect_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.CallFunc_GetItemEffect_Value = CallFunc_GetItemEffect_Value;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Apply_ReturnValue = CallFunc_Apply_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bApplied != nullptr)
		*bApplied = Parms.bApplied;

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.AssignItemToQuickSlotDirect
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemType               Local_ItemType                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Local_ID                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_Item                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_Slot                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_2                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_3                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_2                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_7                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_8                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_9                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_4                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_10                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_11                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_12                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_13                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_14                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_15                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_16                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_17                            (ZeroConstructor, HasGetValueTypeHash)
// struct FInventoryItem              CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)

void UInventoryManagerComponent_C::AssignItemToQuickSlotDirect(int32 Slot, int32 Item, enum class EItemType Local_ItemType, class FName Local_ID, int32 Local_Item, int32 Local_Slot, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Conv_NameToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, const class FString& CallFunc_Conv_IntToString_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_10, const class FString& CallFunc_Concat_StrStr_ReturnValue_11, const class FString& CallFunc_Concat_StrStr_ReturnValue_12, const class FString& CallFunc_Concat_StrStr_ReturnValue_13, const class FString& CallFunc_Concat_StrStr_ReturnValue_14, const class FString& CallFunc_Concat_StrStr_ReturnValue_15, const class FString& CallFunc_Concat_StrStr_ReturnValue_16, const class FString& CallFunc_Concat_StrStr_ReturnValue_17, const struct FInventoryItem& CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "AssignItemToQuickSlotDirect");

	Params::UInventoryManagerComponent_C_AssignItemToQuickSlotDirect_Params Parms{};

	Parms.Slot = Slot;
	Parms.Item = Item;
	Parms.Local_ItemType = Local_ItemType;
	Parms.Local_ID = Local_ID;
	Parms.Local_Item = Local_Item;
	Parms.Local_Slot = Local_Slot;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_2 = CallFunc_Conv_IntToString_ReturnValue_2;
	Parms.CallFunc_Conv_NameToString_ReturnValue_1 = CallFunc_Conv_NameToString_ReturnValue_1;
	Parms.CallFunc_Conv_IntToString_ReturnValue_3 = CallFunc_Conv_IntToString_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Conv_NameToString_ReturnValue_2 = CallFunc_Conv_NameToString_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_7 = CallFunc_Concat_StrStr_ReturnValue_7;
	Parms.CallFunc_Concat_StrStr_ReturnValue_8 = CallFunc_Concat_StrStr_ReturnValue_8;
	Parms.CallFunc_Concat_StrStr_ReturnValue_9 = CallFunc_Concat_StrStr_ReturnValue_9;
	Parms.CallFunc_Conv_IntToString_ReturnValue_4 = CallFunc_Conv_IntToString_ReturnValue_4;
	Parms.CallFunc_Concat_StrStr_ReturnValue_10 = CallFunc_Concat_StrStr_ReturnValue_10;
	Parms.CallFunc_Concat_StrStr_ReturnValue_11 = CallFunc_Concat_StrStr_ReturnValue_11;
	Parms.CallFunc_Concat_StrStr_ReturnValue_12 = CallFunc_Concat_StrStr_ReturnValue_12;
	Parms.CallFunc_Concat_StrStr_ReturnValue_13 = CallFunc_Concat_StrStr_ReturnValue_13;
	Parms.CallFunc_Concat_StrStr_ReturnValue_14 = CallFunc_Concat_StrStr_ReturnValue_14;
	Parms.CallFunc_Concat_StrStr_ReturnValue_15 = CallFunc_Concat_StrStr_ReturnValue_15;
	Parms.CallFunc_Concat_StrStr_ReturnValue_16 = CallFunc_Concat_StrStr_ReturnValue_16;
	Parms.CallFunc_Concat_StrStr_ReturnValue_17 = CallFunc_Concat_StrStr_ReturnValue_17;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.GetPreviousFullQuickSlot
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CurrentSlot                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InventorySlot                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               SlotFound                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               FoundSlot                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              ReturnSlot                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              CallFunc_GetInventoryItem_InventoryItem                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventoryManagerComponent_C::GetPreviousFullQuickSlot(int32 CurrentSlot, int32* InventorySlot, bool* SlotFound, bool FoundSlot, int32 ReturnSlot, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_Less_IntInt_ReturnValue, bool Temp_bool_Variable, int32 K2Node_Select_Default, int32 CallFunc_Array_Get_Item, const struct FInventoryItem& CallFunc_GetInventoryItem_InventoryItem, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Max_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "GetPreviousFullQuickSlot");

	Params::UInventoryManagerComponent_C_GetPreviousFullQuickSlot_Params Parms{};

	Parms.CurrentSlot = CurrentSlot;
	Parms.FoundSlot = FoundSlot;
	Parms.ReturnSlot = ReturnSlot;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetInventoryItem_InventoryItem = CallFunc_GetInventoryItem_InventoryItem;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (InventorySlot != nullptr)
		*InventorySlot = Parms.InventorySlot;

	if (SlotFound != nullptr)
		*SlotFound = Parms.SlotFound;

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.GetNextFullQuickSlot
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CurrentSlot                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bCyclic                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              InventorySlot                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ReturnSlot                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetNextFullQuickSlot_InventorySlot                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              CallFunc_GetInventoryItem_InventoryItem                          (HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventoryManagerComponent_C::GetNextFullQuickSlot(int32 CurrentSlot, bool bCyclic, int32* InventorySlot, int32 ReturnSlot, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue_1, int32 CallFunc_GetNextFullQuickSlot_InventorySlot, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Array_Get_Item, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, const struct FInventoryItem& CallFunc_GetInventoryItem_InventoryItem, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "GetNextFullQuickSlot");

	Params::UInventoryManagerComponent_C_GetNextFullQuickSlot_Params Parms{};

	Parms.CurrentSlot = CurrentSlot;
	Parms.bCyclic = bCyclic;
	Parms.ReturnSlot = ReturnSlot;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_GetNextFullQuickSlot_InventorySlot = CallFunc_GetNextFullQuickSlot_InventorySlot;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_GetInventoryItem_InventoryItem = CallFunc_GetInventoryItem_InventoryItem;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InventorySlot != nullptr)
		*InventorySlot = Parms.InventorySlot;

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.SetQuickAccessItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              QuickAccessSlot                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InventoryitemIndex                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LocItemId                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LocSlot                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryManagerComponent_C::SetQuickAccessItem(int32 QuickAccessSlot, int32 InventoryitemIndex, int32 LocItemId, int32 LocSlot, int32 Temp_int_Array_Index_Variable, bool CallFunc_Array_Contains_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "SetQuickAccessItem");

	Params::UInventoryManagerComponent_C_SetQuickAccessItem_Params Parms{};

	Parms.QuickAccessSlot = QuickAccessSlot;
	Parms.InventoryitemIndex = InventoryitemIndex;
	Parms.LocItemId = LocItemId;
	Parms.LocSlot = LocSlot;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.GetItemIDFromQuickAccessSlot
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              QuickAccessSlot                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ItemId                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bValidItem                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventoryManagerComponent_C::GetItemIDFromQuickAccessSlot(int32 QuickAccessSlot, int32* ItemId, bool* bValidItem, int32 CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "GetItemIDFromQuickAccessSlot");

	Params::UInventoryManagerComponent_C_GetItemIDFromQuickAccessSlot_Params Parms{};

	Parms.QuickAccessSlot = QuickAccessSlot;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemId != nullptr)
		*ItemId = Parms.ItemId;

	if (bValidItem != nullptr)
		*bValidItem = Parms.bValidItem;

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.GetQuickAccessItem
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              QuickAccessSlot                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              QuickAccessItem                                                  (Parm, OutParm, HasGetValueTypeHash)
// bool                               bValidItem                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem              K2Node_MakeStruct_InventoryItem                                  (HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem              CallFunc_Array_Get_Item_1                                        (HasGetValueTypeHash)

void UInventoryManagerComponent_C::GetQuickAccessItem(int32 QuickAccessSlot, struct FInventoryItem* QuickAccessItem, bool* bValidItem, const struct FInventoryItem& K2Node_MakeStruct_InventoryItem, int32 CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FInventoryItem& CallFunc_Array_Get_Item_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "GetQuickAccessItem");

	Params::UInventoryManagerComponent_C_GetQuickAccessItem_Params Parms{};

	Parms.QuickAccessSlot = QuickAccessSlot;
	Parms.K2Node_MakeStruct_InventoryItem = K2Node_MakeStruct_InventoryItem;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;

	UObject::ProcessEvent(Func, &Parms);

	if (QuickAccessItem != nullptr)
		*QuickAccessItem = std::move(Parms.QuickAccessItem);

	if (bValidItem != nullptr)
		*bValidItem = Parms.bValidItem;

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.PlayerGainExperience
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InventorySlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              InventoryItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABarbarous_C*                CallFunc_GetCharacterAsBarbarous_AsBarbarous                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryManagerComponent_C::PlayerGainExperience(int32 Amount, int32 InventorySlot, const struct FInventoryItem& InventoryItem, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous, int32 CallFunc_Conv_ByteToInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "PlayerGainExperience");

	Params::UInventoryManagerComponent_C_PlayerGainExperience_Params Parms{};

	Parms.Amount = Amount;
	Parms.InventorySlot = InventorySlot;
	Parms.InventoryItem = InventoryItem;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_GetCharacterAsBarbarous_AsBarbarous = CallFunc_GetCharacterAsBarbarous_AsBarbarous;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.PlayerGainCurrency
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InventorySlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              InventoryItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABarbarous_C*                CallFunc_GetCharacterAsBarbarous_AsBarbarous                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryManagerComponent_C::PlayerGainCurrency(int32 Amount, int32 InventorySlot, const struct FInventoryItem& InventoryItem, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "PlayerGainCurrency");

	Params::UInventoryManagerComponent_C_PlayerGainCurrency_Params Parms{};

	Parms.Amount = Amount;
	Parms.InventorySlot = InventorySlot;
	Parms.InventoryItem = InventoryItem;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_GetCharacterAsBarbarous_AsBarbarous = CallFunc_GetCharacterAsBarbarous_AsBarbarous;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.DropMostPlayerItems
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SlotNotToDrop                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventoryManagerComponent_C::DropMostPlayerItems(int32 SlotNotToDrop, int32 Temp_int_Variable, int32 CallFunc_MakeLiteralInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "DropMostPlayerItems");

	Params::UInventoryManagerComponent_C_DropMostPlayerItems_Params Parms{};

	Parms.SlotNotToDrop = SlotNotToDrop;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.GetNextThrownItem
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InventorySlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EItemType               Type                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              InventoryItem                                                    (Parm, OutParm, HasGetValueTypeHash)
// struct FInventoryItem              CallFunc_GetInventoryItem_InventoryItem                          (HasGetValueTypeHash)

void UInventoryManagerComponent_C::GetNextThrownItem(int32 InventorySlot, enum class EItemType* Type, struct FInventoryItem* InventoryItem, const struct FInventoryItem& CallFunc_GetInventoryItem_InventoryItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "GetNextThrownItem");

	Params::UInventoryManagerComponent_C_GetNextThrownItem_Params Parms{};

	Parms.InventorySlot = InventorySlot;
	Parms.CallFunc_GetInventoryItem_InventoryItem = CallFunc_GetInventoryItem_InventoryItem;

	UObject::ProcessEvent(Func, &Parms);

	if (Type != nullptr)
		*Type = Parms.Type;

	if (InventoryItem != nullptr)
		*InventoryItem = std::move(Parms.InventoryItem);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.CheckPlayEquipAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EquipmentSlotType       EquipSlotType                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventoryManagerComponent_C::CheckPlayEquipAnim(enum class EquipmentSlotType EquipSlotType, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "CheckPlayEquipAnim");

	Params::UInventoryManagerComponent_C_CheckPlayEquipAnim_Params Parms{};

	Parms.EquipSlotType = EquipSlotType;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_DynamicCast_As0_Base = K2Node_DynamicCast_As0_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.AutoLootContainer
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UContainer_Slot_C*           CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UContainer_Slot_C*           CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   CallFunc_GetCachedGeometry_ReturnValue                           (ConstParm, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_LocalToViewport_PixelPosition                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_LocalToViewport_ViewportPosition                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryManagerComponent_C::AutoLootContainer(class UContainer_Slot_C* CallFunc_Create_ReturnValue, int32 Temp_int_Array_Index_Variable, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UContainer_Slot_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FGeometry& CallFunc_GetCachedGeometry_ReturnValue, const struct FVector2D& CallFunc_LocalToViewport_PixelPosition, const struct FVector2D& CallFunc_LocalToViewport_ViewportPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "AutoLootContainer");

	Params::UInventoryManagerComponent_C_AutoLootContainer_Params Parms{};

	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetCachedGeometry_ReturnValue = CallFunc_GetCachedGeometry_ReturnValue;
	Parms.CallFunc_LocalToViewport_PixelPosition = CallFunc_LocalToViewport_PixelPosition;
	Parms.CallFunc_LocalToViewport_ViewportPosition = CallFunc_LocalToViewport_ViewportPosition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.ReturnFirstEmptySlot
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              FirstEmptySlot                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventoryManagerComponent_C::ReturnFirstEmptySlot(int32* FirstEmptySlot, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FInventoryItem& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "ReturnFirstEmptySlot");

	Params::UInventoryManagerComponent_C_ReturnFirstEmptySlot_Params Parms{};

	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (FirstEmptySlot != nullptr)
		*FirstEmptySlot = Parms.FirstEmptySlot;

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.GetInventorySize
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              InvLength                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryManagerComponent_C::GetInventorySize(int32* InvLength, int32 CallFunc_Array_Length_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "GetInventorySize");

	Params::UInventoryManagerComponent_C_GetInventorySize_Params Parms{};

	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InvLength != nullptr)
		*InvLength = Parms.InvLength;

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.ThrowInventoryItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ItemToThrow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               K2Node_DynamicCast_AsGameplay_PC                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem              CallFunc_GetInventoryItem_InventoryItem                          (HasGetValueTypeHash)
// bool                               CallFunc_RemoveFromItemAmount_WasFullAmountRemoved               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem              CallFunc_RemoveFromItemAmount_OutnventoryItem                    (HasGetValueTypeHash)
// int32                              CallFunc_RemoveFromItemAmount_AmountRemoved                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryManagerComponent_C::ThrowInventoryItem(int32 ItemToThrow, class AActor* CallFunc_GetOwner_ReturnValue, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess_1, const struct FInventoryItem& CallFunc_GetInventoryItem_InventoryItem, bool CallFunc_RemoveFromItemAmount_WasFullAmountRemoved, const struct FInventoryItem& CallFunc_RemoveFromItemAmount_OutnventoryItem, int32 CallFunc_RemoveFromItemAmount_AmountRemoved)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "ThrowInventoryItem");

	Params::UInventoryManagerComponent_C_ThrowInventoryItem_Params Parms{};

	Parms.ItemToThrow = ItemToThrow;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsGameplay_PC = K2Node_DynamicCast_AsGameplay_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_As0_Base = K2Node_DynamicCast_As0_Base;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetInventoryItem_InventoryItem = CallFunc_GetInventoryItem_InventoryItem;
	Parms.CallFunc_RemoveFromItemAmount_WasFullAmountRemoved = CallFunc_RemoveFromItemAmount_WasFullAmountRemoved;
	Parms.CallFunc_RemoveFromItemAmount_OutnventoryItem = CallFunc_RemoveFromItemAmount_OutnventoryItem;
	Parms.CallFunc_RemoveFromItemAmount_AmountRemoved = CallFunc_RemoveFromItemAmount_AmountRemoved;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.IdentifyAllInvItems
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryComponent_C*       Inventory                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              CallFunc_GetInventoryItem_InventoryItem                          (HasGetValueTypeHash)
// struct FItemInformation            K2Node_MakeStruct_ItemInformation                                (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsKnownItem_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               K2Node_DynamicCast_AsGameplay_PC                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventoryManagerComponent_C::IdentifyAllInvItems(class UInventoryComponent_C* Inventory, int32 Temp_int_Variable, const struct FInventoryItem& CallFunc_GetInventoryItem_InventoryItem, const struct FItemInformation& K2Node_MakeStruct_ItemInformation, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsKnownItem_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC, bool K2Node_DynamicCast_bSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "IdentifyAllInvItems");

	Params::UInventoryManagerComponent_C_IdentifyAllInvItems_Params Parms{};

	Parms.Inventory = Inventory;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetInventoryItem_InventoryItem = CallFunc_GetInventoryItem_InventoryItem;
	Parms.K2Node_MakeStruct_ItemInformation = K2Node_MakeStruct_ItemInformation;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsKnownItem_ReturnValue = CallFunc_IsKnownItem_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsGameplay_PC = K2Node_DynamicCast_AsGameplay_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.IsKnownItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemInformation            ItemInformation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               K2Node_DynamicCast_AsGameplay_PC                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UInventoryManagerComponent_C::IsKnownItem(const struct FItemInformation& ItemInformation, class AActor* CallFunc_GetOwner_ReturnValue, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "IsKnownItem");

	Params::UInventoryManagerComponent_C_IsKnownItem_Params Parms{};

	Parms.ItemInformation = ItemInformation;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsGameplay_PC = K2Node_DynamicCast_AsGameplay_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.DropAllItems
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryComponent_C*       Inventory                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventoryManagerComponent_C::DropAllItems(class UInventoryComponent_C* Inventory, int32 Temp_int_Variable, int32 CallFunc_MakeLiteralInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "DropAllItems");

	Params::UInventoryManagerComponent_C_DropAllItems_Params Parms{};

	Parms.Inventory = Inventory;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.FillEmptySlots
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FInventoryItem>      NewInventoryArray                                                (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<struct FInventoryItem>      K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)

void UInventoryManagerComponent_C::FillEmptySlots(const TArray<struct FInventoryItem>& NewInventoryArray, TArray<struct FInventoryItem>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "FillEmptySlots");

	Params::UInventoryManagerComponent_C_FillEmptySlots_Params Parms{};

	Parms.NewInventoryArray = NewInventoryArray;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.ThrowNextInventoryItem
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               K2Node_DynamicCast_AsGameplay_PC                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem              CallFunc_GetInventoryItem_InventoryItem                          (HasGetValueTypeHash)
// bool                               CallFunc_RemoveFromItemAmount_WasFullAmountRemoved               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem              CallFunc_RemoveFromItemAmount_OutnventoryItem                    (HasGetValueTypeHash)
// int32                              CallFunc_RemoveFromItemAmount_AmountRemoved                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryManagerComponent_C::ThrowNextInventoryItem(class AActor* CallFunc_GetOwner_ReturnValue, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess_1, const struct FInventoryItem& CallFunc_GetInventoryItem_InventoryItem, bool CallFunc_RemoveFromItemAmount_WasFullAmountRemoved, const struct FInventoryItem& CallFunc_RemoveFromItemAmount_OutnventoryItem, int32 CallFunc_RemoveFromItemAmount_AmountRemoved)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "ThrowNextInventoryItem");

	Params::UInventoryManagerComponent_C_ThrowNextInventoryItem_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsGameplay_PC = K2Node_DynamicCast_AsGameplay_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_As0_Base = K2Node_DynamicCast_As0_Base;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetInventoryItem_InventoryItem = CallFunc_GetInventoryItem_InventoryItem;
	Parms.CallFunc_RemoveFromItemAmount_WasFullAmountRemoved = CallFunc_RemoveFromItemAmount_WasFullAmountRemoved;
	Parms.CallFunc_RemoveFromItemAmount_OutnventoryItem = CallFunc_RemoveFromItemAmount_OutnventoryItem;
	Parms.CallFunc_RemoveFromItemAmount_AmountRemoved = CallFunc_RemoveFromItemAmount_AmountRemoved;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.ClearInventorySlotItems
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UInventoryManagerComponent_C::ClearInventorySlotItems()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "ClearInventorySlotItems");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.Refresh Inventory Slots
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               K2Node_DynamicCast_AsGameplay_PC                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryItem>      CallFunc_GetInventoryItems_InventoryItems                        (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemInformation            K2Node_MakeStruct_ItemInformation                                (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemInformation            K2Node_MakeStruct_ItemInformation_1                              (HasGetValueTypeHash)

void UInventoryManagerComponent_C::Refresh_Inventory_Slots(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class AActor* CallFunc_GetOwner_ReturnValue, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FInventoryItem>& CallFunc_GetInventoryItems_InventoryItems, int32 CallFunc_Array_Length_ReturnValue, const struct FInventoryItem& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FItemInformation& K2Node_MakeStruct_ItemInformation, bool CallFunc_IsValid_ReturnValue, const struct FItemInformation& K2Node_MakeStruct_ItemInformation_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "Refresh Inventory Slots");

	Params::UInventoryManagerComponent_C_Refresh_Inventory_Slots_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsGameplay_PC = K2Node_DynamicCast_AsGameplay_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetInventoryItems_InventoryItems = CallFunc_GetInventoryItems_InventoryItems;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_ItemInformation = K2Node_MakeStruct_ItemInformation;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeStruct_ItemInformation_1 = K2Node_MakeStruct_ItemInformation_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.RandomizeDropLocation
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTransform                  Transform                                                        (Parm, OutParm, IsPlainOldData, NoDestructor)
// struct FVector                     LocalLocation                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AController*                 K2Node_DynamicCast_AsController                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GreaterGreater_VectorRotator_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)

void UInventoryManagerComponent_C::RandomizeDropLocation(struct FTransform* Transform, const struct FVector& LocalLocation, class AActor* CallFunc_GetOwner_ReturnValue, class AController* K2Node_DynamicCast_AsController, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue_2, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_2, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, const struct FVector& CallFunc_GreaterGreater_VectorRotator_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "RandomizeDropLocation");

	Params::UInventoryManagerComponent_C_RandomizeDropLocation_Params Parms{};

	Parms.LocalLocation = LocalLocation;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsController = K2Node_DynamicCast_AsController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue_1 = CallFunc_RandomIntegerInRange_ReturnValue_1;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue_2 = CallFunc_RandomIntegerInRange_ReturnValue_2;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_2 = CallFunc_Conv_IntToFloat_ReturnValue_2;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue_1 = CallFunc_MakeRotator_ReturnValue_1;
	Parms.CallFunc_GreaterGreater_VectorRotator_ReturnValue = CallFunc_GreaterGreater_VectorRotator_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue_1 = CallFunc_Add_VectorVector_ReturnValue_1;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Transform != nullptr)
		*Transform = std::move(Parms.Transform);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.CanContainerStoreItems
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryComponent_C*       Inventory                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IInventoryInterface_C>K2Node_DynamicCast_AsInventory_Interface                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetCanStoreItems_CanStoreItems                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IInventoryInterface_C>K2Node_DynamicCast_AsInventory_Interface_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventoryComponent_C*       CallFunc_GetContainerInventory_InventoryComponent                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventoryManagerComponent_C::CanContainerStoreItems(class UInventoryComponent_C* Inventory, bool* Result, TScriptInterface<class IInventoryInterface_C> K2Node_DynamicCast_AsInventory_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetCanStoreItems_CanStoreItems, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IInventoryInterface_C> K2Node_DynamicCast_AsInventory_Interface_1, bool K2Node_DynamicCast_bSuccess_1, class UInventoryComponent_C* CallFunc_GetContainerInventory_InventoryComponent, bool CallFunc_EqualEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "CanContainerStoreItems");

	Params::UInventoryManagerComponent_C_CanContainerStoreItems_Params Parms{};

	Parms.Inventory = Inventory;
	Parms.K2Node_DynamicCast_AsInventory_Interface = K2Node_DynamicCast_AsInventory_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCanStoreItems_CanStoreItems = CallFunc_GetCanStoreItems_CanStoreItems;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsInventory_Interface_1 = K2Node_DynamicCast_AsInventory_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetContainerInventory_InventoryComponent = CallFunc_GetContainerInventory_InventoryComponent;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.GetEmptyEquipmentSlotByType
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EquipmentSlotType       EquipmentSlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HasEmptySlot                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              InventorySlot                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               LocalHasEmptySlot                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              LocalInventorySlot                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EquipmentSlotType       LocalSlotType                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem              CallFunc_GetInventoryItem_InventoryItem                          (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EquipmentSlotType       CallFunc_GetEquipmentTypeBySlot_EquipmentType                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventoryManagerComponent_C::GetEmptyEquipmentSlotByType(enum class EquipmentSlotType EquipmentSlot, bool* HasEmptySlot, int32* InventorySlot, bool LocalHasEmptySlot, int32 LocalInventorySlot, enum class EquipmentSlotType LocalSlotType, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, const struct FInventoryItem& CallFunc_GetInventoryItem_InventoryItem, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, enum class EquipmentSlotType CallFunc_GetEquipmentTypeBySlot_EquipmentType, int32 CallFunc_MakeLiteralInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "GetEmptyEquipmentSlotByType");

	Params::UInventoryManagerComponent_C_GetEmptyEquipmentSlotByType_Params Parms{};

	Parms.EquipmentSlot = EquipmentSlot;
	Parms.LocalHasEmptySlot = LocalHasEmptySlot;
	Parms.LocalInventorySlot = LocalInventorySlot;
	Parms.LocalSlotType = LocalSlotType;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetInventoryItem_InventoryItem = CallFunc_GetInventoryItem_InventoryItem;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_GetEquipmentTypeBySlot_EquipmentType = CallFunc_GetEquipmentTypeBySlot_EquipmentType;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (HasEmptySlot != nullptr)
		*HasEmptySlot = Parms.HasEmptySlot;

	if (InventorySlot != nullptr)
		*InventorySlot = Parms.InventorySlot;

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.AddContainerSlot
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Row                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Column                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsStorage                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               LocalIsStorageContainer                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              LocalMaxRowSize                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LocalLoopCount                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LocalContainerSize                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UContainer_Slot_C*           CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGridSlot*                   K2Node_DynamicCast_AsGrid_Slot                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UContainer_Slot_C*           CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryManagerComponent_C::AddContainerSlot(int32 Row, int32 Column, int32 Slot, bool IsStorage, bool LocalIsStorageContainer, uint8 LocalMaxRowSize, int32 LocalLoopCount, int32 LocalContainerSize, class UContainer_Slot_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UGridSlot* K2Node_DynamicCast_AsGrid_Slot, bool K2Node_DynamicCast_bSuccess, class UContainer_Slot_C* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "AddContainerSlot");

	Params::UInventoryManagerComponent_C_AddContainerSlot_Params Parms{};

	Parms.Row = Row;
	Parms.Column = Column;
	Parms.Slot = Slot;
	Parms.IsStorage = IsStorage;
	Parms.LocalIsStorageContainer = LocalIsStorageContainer;
	Parms.LocalMaxRowSize = LocalMaxRowSize;
	Parms.LocalLoopCount = LocalLoopCount;
	Parms.LocalContainerSize = LocalContainerSize;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.K2Node_DynamicCast_AsGrid_Slot = K2Node_DynamicCast_AsGrid_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.CheckSlotsForItems
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryComponent_C*       Inventory                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HasItem                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               LocalHasItem                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventoryComponent_C*       LocalInventory                                                   (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              CallFunc_GetInventoryItem_InventoryItem                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventoryManagerComponent_C::CheckSlotsForItems(class UInventoryComponent_C* Inventory, int32 Amount, bool* HasItem, bool LocalHasItem, class UInventoryComponent_C* LocalInventory, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FInventoryItem& CallFunc_GetInventoryItem_InventoryItem, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "CheckSlotsForItems");

	Params::UInventoryManagerComponent_C_CheckSlotsForItems_Params Parms{};

	Parms.Inventory = Inventory;
	Parms.Amount = Amount;
	Parms.LocalHasItem = LocalHasItem;
	Parms.LocalInventory = LocalInventory;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetInventoryItem_InventoryItem = CallFunc_GetInventoryItem_InventoryItem;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (HasItem != nullptr)
		*HasItem = Parms.HasItem;

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.RemoveInventorySlot
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InventorySlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LocalInventorySlot                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveChildAt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventoryManagerComponent_C::RemoveInventorySlot(int32 InventorySlot, int32 LocalInventorySlot, int32 CallFunc_MakeLiteralInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_RemoveChildAt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "RemoveInventorySlot");

	Params::UInventoryManagerComponent_C_RemoveInventorySlot_Params Parms{};

	Parms.InventorySlot = InventorySlot;
	Parms.LocalInventorySlot = LocalInventorySlot;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_RemoveChildAt_ReturnValue = CallFunc_RemoveChildAt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.AddInventorySlot
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Row                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Column                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory_Slot_C*           LocalSlotReference                                               (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LocalColumn                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LocalRow                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryManagerComponent_C::AddInventorySlot(int32 Row, int32 Column, int32 Slot, class UInventory_Slot_C* LocalSlotReference, int32 LocalColumn, int32 LocalRow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "AddInventorySlot");

	Params::UInventoryManagerComponent_C_AddInventorySlot_Params Parms{};

	Parms.Row = Row;
	Parms.Column = Column;
	Parms.Slot = Slot;
	Parms.LocalSlotReference = LocalSlotReference;
	Parms.LocalColumn = LocalColumn;
	Parms.LocalRow = LocalRow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.DecreaseInventorySlots
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      LocalAmountIndexes                                               (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventoryManagerComponent_C::DecreaseInventorySlots(int32 Amount, const TArray<int32>& LocalAmountIndexes, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, int32 Temp_int_Variable_1, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Get_Item, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_2, bool CallFunc_LessEqual_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "DecreaseInventorySlots");

	Params::UInventoryManagerComponent_C_DecreaseInventorySlots_Params Parms{};

	Parms.Amount = Amount;
	Parms.LocalAmountIndexes = LocalAmountIndexes;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_2 = CallFunc_Subtract_IntInt_ReturnValue_2;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.IncreaseInventorySlots
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LocalAmount                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              LocalMaxRowSize                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LocalLoopCount                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LocalSlotNumber                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LocalColumn                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LocalRow                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LocalNewInventorySize                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_ByteToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_FCeil_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetChildrenCount_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUniformGridSlot*            CallFunc_SlotAsUniformGridSlot_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryManagerComponent_C::IncreaseInventorySlots(int32 Amount, int32 LocalAmount, uint8 LocalMaxRowSize, int32 LocalLoopCount, int32 LocalSlotNumber, int32 LocalColumn, int32 LocalRow, int32 LocalNewInventorySize, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Variable_1, bool CallFunc_Not_PreBool_ReturnValue_1, int32 Temp_int_Variable_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 CallFunc_Conv_ByteToInt_ReturnValue, float CallFunc_Conv_ByteToFloat_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_FCeil_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Max_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_2, class UWidget* CallFunc_GetChildAt_ReturnValue, class UUniformGridSlot* CallFunc_SlotAsUniformGridSlot_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "IncreaseInventorySlots");

	Params::UInventoryManagerComponent_C_IncreaseInventorySlots_Params Parms{};

	Parms.Amount = Amount;
	Parms.LocalAmount = LocalAmount;
	Parms.LocalMaxRowSize = LocalMaxRowSize;
	Parms.LocalLoopCount = LocalLoopCount;
	Parms.LocalSlotNumber = LocalSlotNumber;
	Parms.LocalColumn = LocalColumn;
	Parms.LocalRow = LocalRow;
	Parms.LocalNewInventorySize = LocalNewInventorySize;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_Conv_ByteToFloat_ReturnValue = CallFunc_Conv_ByteToFloat_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_FCeil_ReturnValue = CallFunc_FCeil_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_GetChildrenCount_ReturnValue = CallFunc_GetChildrenCount_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_2 = CallFunc_Subtract_IntInt_ReturnValue_2;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_SlotAsUniformGridSlot_ReturnValue = CallFunc_SlotAsUniformGridSlot_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.DecreaseInventorySize
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryComponent_C*       Inventory                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LocalAmount                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponent_C*       LocalInventory                                                   (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEquipmentInventoryComponent_C*K2Node_DynamicCast_AsEquipment_Inventory_Component               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DecreaseInventorySize_Success                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckSlotsForItems_HasItem                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DecreaseInventorySize_Success_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventoryManagerComponent_C::DecreaseInventorySize(class UInventoryComponent_C* Inventory, int32 Amount, int32 LocalAmount, class UInventoryComponent_C* LocalInventory, int32 CallFunc_MakeLiteralInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class UEquipmentInventoryComponent_C* K2Node_DynamicCast_AsEquipment_Inventory_Component, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_DecreaseInventorySize_Success, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_CheckSlotsForItems_HasItem, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_2, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_DecreaseInventorySize_Success_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "DecreaseInventorySize");

	Params::UInventoryManagerComponent_C_DecreaseInventorySize_Params Parms{};

	Parms.Inventory = Inventory;
	Parms.Amount = Amount;
	Parms.LocalAmount = LocalAmount;
	Parms.LocalInventory = LocalInventory;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsEquipment_Inventory_Component = K2Node_DynamicCast_AsEquipment_Inventory_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_DecreaseInventorySize_Success = CallFunc_DecreaseInventorySize_Success;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_CheckSlotsForItems_HasItem = CallFunc_CheckSlotsForItems_HasItem;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_2 = CallFunc_Subtract_IntInt_ReturnValue_2;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_DecreaseInventorySize_Success_1 = CallFunc_DecreaseInventorySize_Success_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.IncreaseInventorySize
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryComponent_C*       Inventory                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IncreaseInventorySize_Success                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryManagerComponent_C::IncreaseInventorySize(class UInventoryComponent_C* Inventory, int32 Amount, bool CallFunc_IncreaseInventorySize_Success, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "IncreaseInventorySize");

	Params::UInventoryManagerComponent_C_IncreaseInventorySize_Params Parms{};

	Parms.Inventory = Inventory;
	Parms.Amount = Amount;
	Parms.CallFunc_IncreaseInventorySize_Success = CallFunc_IncreaseInventorySize_Success;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.SplitItem
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryComponent_C*       FromInventory                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              FromInventorySlot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponent_C*       ToInventory                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ToInventorySlot                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LocalSplitAmount                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              LocalSwapInventoryItem                                           (Edit, BlueprintVisible, HasGetValueTypeHash)
// struct FInventoryItem              LocalInventoryItem                                               (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              LocalToInventorySlot                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LocalFromInventorySlot                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponent_C*       LocalToInventory                                                 (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponent_C*       LocalFromInventory                                               (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanContainerStoreItems_Result                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AddItemToStack_AmountRemaining                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveFromItemAmount_WasFullAmountRemoved               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem              CallFunc_RemoveFromItemAmount_OutnventoryItem                    (HasGetValueTypeHash)
// int32                              CallFunc_RemoveFromItemAmount_AmountRemoved                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_RemoveFromItemAmount_WasFullAmountRemoved_1             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem              CallFunc_RemoveFromItemAmount_OutnventoryItem_1                  (HasGetValueTypeHash)
// int32                              CallFunc_RemoveFromItemAmount_AmountRemoved_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              CallFunc_SetItemAmount_NewInventoryItem                          (HasGetValueTypeHash)
// struct FInventoryItem              CallFunc_GetInventoryItem_InventoryItem                          (HasGetValueTypeHash)
// struct FInventoryItem              CallFunc_GetInventoryItem_InventoryItem_1                        (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventoryManagerComponent_C::SplitItem(class UInventoryComponent_C* FromInventory, int32 FromInventorySlot, class UInventoryComponent_C* ToInventory, int32 ToInventorySlot, int32 Amount, int32 LocalSplitAmount, const struct FInventoryItem& LocalSwapInventoryItem, const struct FInventoryItem& LocalInventoryItem, int32 LocalToInventorySlot, int32 LocalFromInventorySlot, class UInventoryComponent_C* LocalToInventory, class UInventoryComponent_C* LocalFromInventory, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_CanContainerStoreItems_Result, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_AddItemToStack_AmountRemaining, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_RemoveFromItemAmount_WasFullAmountRemoved, const struct FInventoryItem& CallFunc_RemoveFromItemAmount_OutnventoryItem, int32 CallFunc_RemoveFromItemAmount_AmountRemoved, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_RemoveFromItemAmount_WasFullAmountRemoved_1, const struct FInventoryItem& CallFunc_RemoveFromItemAmount_OutnventoryItem_1, int32 CallFunc_RemoveFromItemAmount_AmountRemoved_1, const struct FInventoryItem& CallFunc_SetItemAmount_NewInventoryItem, const struct FInventoryItem& CallFunc_GetInventoryItem_InventoryItem, const struct FInventoryItem& CallFunc_GetInventoryItem_InventoryItem_1, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "SplitItem");

	Params::UInventoryManagerComponent_C_SplitItem_Params Parms{};

	Parms.FromInventory = FromInventory;
	Parms.FromInventorySlot = FromInventorySlot;
	Parms.ToInventory = ToInventory;
	Parms.ToInventorySlot = ToInventorySlot;
	Parms.Amount = Amount;
	Parms.LocalSplitAmount = LocalSplitAmount;
	Parms.LocalSwapInventoryItem = LocalSwapInventoryItem;
	Parms.LocalInventoryItem = LocalInventoryItem;
	Parms.LocalToInventorySlot = LocalToInventorySlot;
	Parms.LocalFromInventorySlot = LocalFromInventorySlot;
	Parms.LocalToInventory = LocalToInventory;
	Parms.LocalFromInventory = LocalFromInventory;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_CanContainerStoreItems_Result = CallFunc_CanContainerStoreItems_Result;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_AddItemToStack_AmountRemaining = CallFunc_AddItemToStack_AmountRemaining;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_RemoveFromItemAmount_WasFullAmountRemoved = CallFunc_RemoveFromItemAmount_WasFullAmountRemoved;
	Parms.CallFunc_RemoveFromItemAmount_OutnventoryItem = CallFunc_RemoveFromItemAmount_OutnventoryItem;
	Parms.CallFunc_RemoveFromItemAmount_AmountRemoved = CallFunc_RemoveFromItemAmount_AmountRemoved;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_1 = CallFunc_EqualEqual_ObjectObject_ReturnValue_1;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_RemoveFromItemAmount_WasFullAmountRemoved_1 = CallFunc_RemoveFromItemAmount_WasFullAmountRemoved_1;
	Parms.CallFunc_RemoveFromItemAmount_OutnventoryItem_1 = CallFunc_RemoveFromItemAmount_OutnventoryItem_1;
	Parms.CallFunc_RemoveFromItemAmount_AmountRemoved_1 = CallFunc_RemoveFromItemAmount_AmountRemoved_1;
	Parms.CallFunc_SetItemAmount_NewInventoryItem = CallFunc_SetItemAmount_NewInventoryItem;
	Parms.CallFunc_GetInventoryItem_InventoryItem = CallFunc_GetInventoryItem_InventoryItem;
	Parms.CallFunc_GetInventoryItem_InventoryItem_1 = CallFunc_GetInventoryItem_InventoryItem_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.RemoveFromItemAmount
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryItem              InventoryItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                              AmountToRemove                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               WasFullAmountRemoved                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem              OutnventoryItem                                                  (Parm, OutParm, HasGetValueTypeHash)
// int32                              AmountRemoved                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              Local_Item                                                       (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              Local_AmountToRemove                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_AmountRemoved                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              CallFunc_SetItemAmount_NewInventoryItem                          (HasGetValueTypeHash)

void UInventoryManagerComponent_C::RemoveFromItemAmount(const struct FInventoryItem& InventoryItem, int32 AmountToRemove, bool* WasFullAmountRemoved, struct FInventoryItem* OutnventoryItem, int32* AmountRemoved, const struct FInventoryItem& Local_Item, int32 Local_AmountToRemove, int32 Local_AmountRemoved, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchName_CmpSuccess, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, const struct FInventoryItem& CallFunc_SetItemAmount_NewInventoryItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "RemoveFromItemAmount");

	Params::UInventoryManagerComponent_C_RemoveFromItemAmount_Params Parms{};

	Parms.InventoryItem = InventoryItem;
	Parms.AmountToRemove = AmountToRemove;
	Parms.Local_Item = Local_Item;
	Parms.Local_AmountToRemove = Local_AmountToRemove;
	Parms.Local_AmountRemoved = Local_AmountRemoved;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_SetItemAmount_NewInventoryItem = CallFunc_SetItemAmount_NewInventoryItem;

	UObject::ProcessEvent(Func, &Parms);

	if (WasFullAmountRemoved != nullptr)
		*WasFullAmountRemoved = Parms.WasFullAmountRemoved;

	if (OutnventoryItem != nullptr)
		*OutnventoryItem = std::move(Parms.OutnventoryItem);

	if (AmountRemoved != nullptr)
		*AmountRemoved = Parms.AmountRemoved;

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.AddToItemAmount
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryItem              InventoryItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                              AmountToAdd                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              OutItem                                                          (Parm, OutParm, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              K2Node_SetFieldsInStruct_StructOut                               (HasGetValueTypeHash)

void UInventoryManagerComponent_C::AddToItemAmount(const struct FInventoryItem& InventoryItem, int32 AmountToAdd, struct FInventoryItem* OutItem, int32 CallFunc_Add_IntInt_ReturnValue, const struct FInventoryItem& K2Node_SetFieldsInStruct_StructOut)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "AddToItemAmount");

	Params::UInventoryManagerComponent_C_AddToItemAmount_Params Parms{};

	Parms.InventoryItem = InventoryItem;
	Parms.AmountToAdd = AmountToAdd;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_SetFieldsInStruct_StructOut = K2Node_SetFieldsInStruct_StructOut;

	UObject::ProcessEvent(Func, &Parms);

	if (OutItem != nullptr)
		*OutItem = std::move(Parms.OutItem);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.AddGold
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryManagerComponent_C::AddGold(int32 Amount, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "AddGold");

	Params::UInventoryManagerComponent_C_AddGold_Params Parms{};

	Parms.Amount = Amount;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.HasItem
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryComponent_C*       Inventory                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              InventorySlot                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Amount                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_Amount                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        LocalItemID                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LocalInventorySlot                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               LocalSuccess                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryManagerComponent_C::HasItem(class UInventoryComponent_C* Inventory, class FName ItemId, bool* Success, int32* InventorySlot, int32* Amount, int32 Local_Amount, class FName LocalItemID, int32 LocalInventorySlot, bool LocalSuccess, int32 Temp_int_Array_Index_Variable, const struct FInventoryItem& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "HasItem");

	Params::UInventoryManagerComponent_C_HasItem_Params Parms{};

	Parms.Inventory = Inventory;
	Parms.ItemId = ItemId;
	Parms.Local_Amount = Local_Amount;
	Parms.LocalItemID = LocalItemID;
	Parms.LocalInventorySlot = LocalInventorySlot;
	Parms.LocalSuccess = LocalSuccess;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (InventorySlot != nullptr)
		*InventorySlot = Parms.InventorySlot;

	if (Amount != nullptr)
		*Amount = Parms.Amount;

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.UseHotbarSlot
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              HotbarSlot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LocalInventorySlot                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               LocalSuccess                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemInformation            CallFunc_GetHotbarSlotItem_ItemInformation                       (HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory_Slot_C*           CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventoryManagerComponent_C::UseHotbarSlot(int32 HotbarSlot, int32 LocalInventorySlot, bool LocalSuccess, const struct FItemInformation& CallFunc_GetHotbarSlotItem_ItemInformation, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UInventory_Slot_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "UseHotbarSlot");

	Params::UInventoryManagerComponent_C_UseHotbarSlot_Params Parms{};

	Parms.HotbarSlot = HotbarSlot;
	Parms.LocalInventorySlot = LocalInventorySlot;
	Parms.LocalSuccess = LocalSuccess;
	Parms.CallFunc_GetHotbarSlotItem_ItemInformation = CallFunc_GetHotbarSlotItem_ItemInformation;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.GetInventorySlotItem
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InventorySlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemInformation            ItemInformation                                                  (Parm, OutParm, HasGetValueTypeHash)
// struct FItemInformation            K2Node_MakeStruct_ItemInformation                                (HasGetValueTypeHash)

void UInventoryManagerComponent_C::GetInventorySlotItem(int32 InventorySlot, struct FItemInformation* ItemInformation, const struct FItemInformation& K2Node_MakeStruct_ItemInformation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "GetInventorySlotItem");

	Params::UInventoryManagerComponent_C_GetInventorySlotItem_Params Parms{};

	Parms.InventorySlot = InventorySlot;
	Parms.K2Node_MakeStruct_ItemInformation = K2Node_MakeStruct_ItemInformation;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemInformation != nullptr)
		*ItemInformation = std::move(Parms.ItemInformation);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.MoveHotbarSlotItem
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              FromSlot                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ToHotBarSlot                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               FromInventory                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               FromHotbar                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemInformation            LocalSwapItemInfo                                                (Edit, BlueprintVisible, HasGetValueTypeHash)
// struct FItemInformation            LocalItemInfo                                                    (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              LocalFromSlot                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LocalToHotbarSlot                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemInformation            CallFunc_GetHotbarSlotItem_ItemInformation                       (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemInformation            CallFunc_GetHotbarSlotItem_ItemInformation_1                     (HasGetValueTypeHash)
// struct FItemInformation            CallFunc_GetInventorySlotItem_ItemInformation                    (HasGetValueTypeHash)

void UInventoryManagerComponent_C::MoveHotbarSlotItem(int32 FromSlot, int32 ToHotBarSlot, bool FromInventory, bool FromHotbar, const struct FItemInformation& LocalSwapItemInfo, const struct FItemInformation& LocalItemInfo, int32 LocalFromSlot, int32 LocalToHotbarSlot, const struct FItemInformation& CallFunc_GetHotbarSlotItem_ItemInformation, bool CallFunc_IsValid_ReturnValue, const struct FItemInformation& CallFunc_GetHotbarSlotItem_ItemInformation_1, const struct FItemInformation& CallFunc_GetInventorySlotItem_ItemInformation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "MoveHotbarSlotItem");

	Params::UInventoryManagerComponent_C_MoveHotbarSlotItem_Params Parms{};

	Parms.FromSlot = FromSlot;
	Parms.ToHotBarSlot = ToHotBarSlot;
	Parms.FromInventory = FromInventory;
	Parms.FromHotbar = FromHotbar;
	Parms.LocalSwapItemInfo = LocalSwapItemInfo;
	Parms.LocalItemInfo = LocalItemInfo;
	Parms.LocalFromSlot = LocalFromSlot;
	Parms.LocalToHotbarSlot = LocalToHotbarSlot;
	Parms.CallFunc_GetHotbarSlotItem_ItemInformation = CallFunc_GetHotbarSlotItem_ItemInformation;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetHotbarSlotItem_ItemInformation_1 = CallFunc_GetHotbarSlotItem_ItemInformation_1;
	Parms.CallFunc_GetInventorySlotItem_ItemInformation = CallFunc_GetInventorySlotItem_ItemInformation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.ClearHotbarSlotItem
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              HotbarSlot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHotbar_Slot_C*              CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryManagerComponent_C::ClearHotbarSlotItem(int32 HotbarSlot, class UHotbar_Slot_C* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "ClearHotbarSlotItem");

	Params::UInventoryManagerComponent_C_ClearHotbarSlotItem_Params Parms{};

	Parms.HotbarSlot = HotbarSlot;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.SetHotbarSlotItem
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              HotbarSlot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemInformation            ItemInformation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UHotbar_Slot_C*              CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryManagerComponent_C::SetHotbarSlotItem(int32 HotbarSlot, const struct FItemInformation& ItemInformation, class UHotbar_Slot_C* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "SetHotbarSlotItem");

	Params::UInventoryManagerComponent_C_SetHotbarSlotItem_Params Parms{};

	Parms.HotbarSlot = HotbarSlot;
	Parms.ItemInformation = ItemInformation;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.GetHotbarSlotItem
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              HotbarSlot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemInformation            ItemInformation                                                  (Parm, OutParm, HasGetValueTypeHash)
// class UHotbar_Slot_C*              CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryManagerComponent_C::GetHotbarSlotItem(int32 HotbarSlot, struct FItemInformation* ItemInformation, class UHotbar_Slot_C* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "GetHotbarSlotItem");

	Params::UInventoryManagerComponent_C_GetHotbarSlotItem_Params Parms{};

	Parms.HotbarSlot = HotbarSlot;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemInformation != nullptr)
		*ItemInformation = std::move(Parms.ItemInformation);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.CloseEquipmentWindow
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory_Slot_C*           CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryManagerComponent_C::CloseEquipmentWindow(int32 CallFunc_MakeLiteralInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 Temp_int_Variable, class UInventory_Slot_C* CallFunc_Array_Get_Item, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "CloseEquipmentWindow");

	Params::UInventoryManagerComponent_C_CloseEquipmentWindow_Params Parms{};

	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.OpenEquipmentWindow
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UInventoryManagerComponent_C::OpenEquipmentWindow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "OpenEquipmentWindow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.ClearToolTip
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ItemName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventoryManagerComponent_C::ClearToolTip(class FName ItemName, bool CallFunc_EqualEqual_NameName_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "ClearToolTip");

	Params::UInventoryManagerComponent_C_ClearToolTip_Params Parms{};

	Parms.ItemName = ItemName;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_1 = CallFunc_EqualEqual_NameName_ReturnValue_1;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue_2 = CallFunc_EqualEqual_NameName_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.SetToolTip
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FToolTipInfo                ToolTipInfo                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UInventoryManagerComponent_C::SetToolTip(const struct FToolTipInfo& ToolTipInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "SetToolTip");

	Params::UInventoryManagerComponent_C_SetToolTip_Params Parms{};

	Parms.ToolTipInfo = ToolTipInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.GetItemToolTip
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryComponent_C*       Inventory                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InventorySlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              CallFunc_GetInventoryItem_InventoryItem                          (HasGetValueTypeHash)
// class AGameplayPC_C*               K2Node_DynamicCast_AsGameplay_PC                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FToolTipInfo                K2Node_MakeStruct_ToolTipInfo                                    (HasGetValueTypeHash)
// int32                              CallFunc_GetItemFamiliarity_Value                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FToolTipInfo                K2Node_MakeStruct_ToolTipInfo_1                                  (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventoryManagerComponent_C::GetItemToolTip(class UInventoryComponent_C* Inventory, int32 InventorySlot, class AActor* CallFunc_GetOwner_ReturnValue, const struct FInventoryItem& CallFunc_GetInventoryItem_InventoryItem, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC, bool K2Node_DynamicCast_bSuccess, const struct FToolTipInfo& K2Node_MakeStruct_ToolTipInfo, int32 CallFunc_GetItemFamiliarity_Value, const struct FToolTipInfo& K2Node_MakeStruct_ToolTipInfo_1, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "GetItemToolTip");

	Params::UInventoryManagerComponent_C_GetItemToolTip_Params Parms{};

	Parms.Inventory = Inventory;
	Parms.InventorySlot = InventorySlot;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetInventoryItem_InventoryItem = CallFunc_GetInventoryItem_InventoryItem;
	Parms.K2Node_DynamicCast_AsGameplay_PC = K2Node_DynamicCast_AsGameplay_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeStruct_ToolTipInfo = K2Node_MakeStruct_ToolTipInfo;
	Parms.CallFunc_GetItemFamiliarity_Value = CallFunc_GetItemFamiliarity_Value;
	Parms.K2Node_MakeStruct_ToolTipInfo_1 = K2Node_MakeStruct_ToolTipInfo_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.TryToAddItemToInventory
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallUINotify                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventoryComponent_C*       Inventory                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              InventoryItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class AUsable_Actor_C*             ItemInstance                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem              OutItem                                                          (Parm, OutParm, HasGetValueTypeHash)
// int32                              AddedToSlot                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_IsStackable                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_IsKeyItem                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EItemType               Local_ItemType                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_CallUINotify                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Local_AcquiredAmount                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LocalItemAmount                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        LocalItemID                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              LocalInventoryItem                                               (Edit, BlueprintVisible, HasGetValueTypeHash)
// class UInventoryComponent_C*       LocalInventory                                                   (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              CallFunc_SetItemAmount_NewInventoryItem                          (HasGetValueTypeHash)
// int32                              CallFunc_FindAndAddAmountToStacks_AmountRemaining                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetEmptyInventorySpace_Success                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetEmptyInventorySpace_Index                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               K2Node_DynamicCast_AsGameplay_PC                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventoryManagerComponent_C::TryToAddItemToInventory(bool CallUINotify, class UInventoryComponent_C* Inventory, const struct FInventoryItem& InventoryItem, class AUsable_Actor_C* ItemInstance, bool* Success, struct FInventoryItem* OutItem, int32* AddedToSlot, bool Local_IsStackable, bool Local_IsKeyItem, enum class EItemType Local_ItemType, bool Local_CallUINotify, int32 Local_AcquiredAmount, int32 LocalItemAmount, class FName LocalItemID, const struct FInventoryItem& LocalInventoryItem, class UInventoryComponent_C* LocalInventory, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue, bool Temp_bool_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 K2Node_Select_Default, const struct FInventoryItem& CallFunc_SetItemAmount_NewInventoryItem, int32 CallFunc_FindAndAddAmountToStacks_AmountRemaining, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_GetEmptyInventorySpace_Success, int32 CallFunc_GetEmptyInventorySpace_Index, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "TryToAddItemToInventory");

	Params::UInventoryManagerComponent_C_TryToAddItemToInventory_Params Parms{};

	Parms.CallUINotify = CallUINotify;
	Parms.Inventory = Inventory;
	Parms.InventoryItem = InventoryItem;
	Parms.ItemInstance = ItemInstance;
	Parms.Local_IsStackable = Local_IsStackable;
	Parms.Local_IsKeyItem = Local_IsKeyItem;
	Parms.Local_ItemType = Local_ItemType;
	Parms.Local_CallUINotify = Local_CallUINotify;
	Parms.Local_AcquiredAmount = Local_AcquiredAmount;
	Parms.LocalItemAmount = LocalItemAmount;
	Parms.LocalItemID = LocalItemID;
	Parms.LocalInventoryItem = LocalInventoryItem;
	Parms.LocalInventory = LocalInventory;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SetItemAmount_NewInventoryItem = CallFunc_SetItemAmount_NewInventoryItem;
	Parms.CallFunc_FindAndAddAmountToStacks_AmountRemaining = CallFunc_FindAndAddAmountToStacks_AmountRemaining;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetEmptyInventorySpace_Success = CallFunc_GetEmptyInventorySpace_Success;
	Parms.CallFunc_GetEmptyInventorySpace_Index = CallFunc_GetEmptyInventorySpace_Index;
	Parms.K2Node_DynamicCast_AsGameplay_PC = K2Node_DynamicCast_AsGameplay_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (OutItem != nullptr)
		*OutItem = std::move(Parms.OutItem);

	if (AddedToSlot != nullptr)
		*AddedToSlot = Parms.AddedToSlot;

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.DropItem
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryComponent_C*       Inventory                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InventorySlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              LocalInventoryItem                                               (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              LocalInventorySlot                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponent_C*       LocalInventory                                                   (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               K2Node_DynamicCast_AsGameplay_PC                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGamePlayPlayerState_C*      K2Node_DynamicCast_AsGame_Play_Player_State                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_RandomizeDropLocation_Transform                         (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AArtifact_Skull_C*           CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AWorld_Actor_C*              CallFunc_FinishSpawningActor_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem              CallFunc_GetInventoryItem_InventoryItem                          (HasGetValueTypeHash)

void UInventoryManagerComponent_C::DropItem(class UInventoryComponent_C* Inventory, int32 InventorySlot, const struct FInventoryItem& LocalInventoryItem, int32 LocalInventorySlot, class UInventoryComponent_C* LocalInventory, class AActor* CallFunc_GetOwner_ReturnValue, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC, bool K2Node_DynamicCast_bSuccess, class AGamePlayPlayerState_C* K2Node_DynamicCast_AsGame_Play_Player_State, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_RandomIntegerInRange_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue_1, int32 CallFunc_RandomIntegerInRange_ReturnValue_2, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FTransform& CallFunc_RandomizeDropLocation_Transform, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class AArtifact_Skull_C* CallFunc_FinishSpawningActor_ReturnValue, class AWorld_Actor_C* CallFunc_FinishSpawningActor_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, const struct FInventoryItem& CallFunc_GetInventoryItem_InventoryItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "DropItem");

	Params::UInventoryManagerComponent_C_DropItem_Params Parms{};

	Parms.Inventory = Inventory;
	Parms.InventorySlot = InventorySlot;
	Parms.LocalInventoryItem = LocalInventoryItem;
	Parms.LocalInventorySlot = LocalInventorySlot;
	Parms.LocalInventory = LocalInventory;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsGameplay_PC = K2Node_DynamicCast_AsGameplay_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGame_Play_Player_State = K2Node_DynamicCast_AsGame_Play_Player_State;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue_1 = CallFunc_RandomIntegerInRange_ReturnValue_1;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue_2 = CallFunc_RandomIntegerInRange_ReturnValue_2;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_2 = CallFunc_Conv_IntToFloat_ReturnValue_2;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_RandomizeDropLocation_Transform = CallFunc_RandomizeDropLocation_Transform;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_1 = CallFunc_FinishSpawningActor_ReturnValue_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_GetInventoryItem_InventoryItem = CallFunc_GetInventoryItem_InventoryItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.UpdateEquippedStats
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              LocalIntelligence                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LocalDexterity                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LocalStrength                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LocalArmor                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LocalDamage                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              CallFunc_GetInventoryItem_InventoryItem                          (HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryManagerComponent_C::UpdateEquippedStats(int32 LocalIntelligence, int32 LocalDexterity, int32 LocalStrength, int32 LocalArmor, int32 LocalDamage, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FInventoryItem& CallFunc_GetInventoryItem_InventoryItem, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "UpdateEquippedStats");

	Params::UInventoryManagerComponent_C_UpdateEquippedStats_Params Parms{};

	Parms.LocalIntelligence = LocalIntelligence;
	Parms.LocalDexterity = LocalDexterity;
	Parms.LocalStrength = LocalStrength;
	Parms.LocalArmor = LocalArmor;
	Parms.LocalDamage = LocalDamage;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GetInventoryItem_InventoryItem = CallFunc_GetInventoryItem_InventoryItem;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.InitializeInventoryManagerUI
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGhettoLayout_C*             InventoryWidget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNewHUDLayout_C*             HUDReference                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryManagerComponent_C::InitializeInventoryManagerUI(class UGhettoLayout_C* InventoryWidget, class UNewHUDLayout_C* HUDReference)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "InitializeInventoryManagerUI");

	Params::UInventoryManagerComponent_C_InitializeInventoryManagerUI_Params Parms{};

	Parms.InventoryWidget = InventoryWidget;
	Parms.HUDReference = HUDReference;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.InitializeInventoryManager
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UEquipmentInventoryComponent_C*PlayerInventory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryManagerComponent_C::InitializeInventoryManager(class UEquipmentInventoryComponent_C* PlayerInventory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "InitializeInventoryManager");

	Params::UInventoryManagerComponent_C_InitializeInventoryManager_Params Parms{};

	Parms.PlayerInventory = PlayerInventory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.ClearViewersContainerSlot
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ContainerSlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LocalContainerSlot                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IInventoryInterface_C>K2Node_DynamicCast_AsInventory_Interface                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class APlayerState*>        CallFunc_GetPlayersViewing_PlayersViewing                        (ReferenceParm, HasGetValueTypeHash)
// class APlayerState*                CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               K2Node_DynamicCast_AsGameplay_PC                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IInventoryInterface_C>K2Node_DynamicCast_AsInventory_Interface_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IInventoryInterface_C>K2Node_DynamicCast_AsInventory_Interface_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventoryComponent_C*       CallFunc_GetContainerInventory_InventoryComponent                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ContainerLooted_Success                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetInventoryItemCount_ItemCount                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IInventoryInterface_C>K2Node_DynamicCast_AsInventory_Interface_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetCanStoreItems_CanStoreItems                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventoryManagerComponent_C::ClearViewersContainerSlot(int32 ContainerSlot, int32 LocalContainerSlot, int32 Temp_int_Array_Index_Variable, TScriptInterface<class IInventoryInterface_C> K2Node_DynamicCast_AsInventory_Interface, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, TArray<class APlayerState*>& CallFunc_GetPlayersViewing_PlayersViewing, class APlayerState* CallFunc_Array_Get_Item, class AActor* CallFunc_GetOwner_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TScriptInterface<class IInventoryInterface_C> K2Node_DynamicCast_AsInventory_Interface_1, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IInventoryInterface_C> K2Node_DynamicCast_AsInventory_Interface_2, bool K2Node_DynamicCast_bSuccess_3, class UInventoryComponent_C* CallFunc_GetContainerInventory_InventoryComponent, bool CallFunc_ContainerLooted_Success, int32 CallFunc_GetInventoryItemCount_ItemCount, bool CallFunc_Less_IntInt_ReturnValue_1, TScriptInterface<class IInventoryInterface_C> K2Node_DynamicCast_AsInventory_Interface_3, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_GetCanStoreItems_CanStoreItems)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "ClearViewersContainerSlot");

	Params::UInventoryManagerComponent_C_ClearViewersContainerSlot_Params Parms{};

	Parms.ContainerSlot = ContainerSlot;
	Parms.LocalContainerSlot = LocalContainerSlot;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_DynamicCast_AsInventory_Interface = K2Node_DynamicCast_AsInventory_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetPlayersViewing_PlayersViewing = CallFunc_GetPlayersViewing_PlayersViewing;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsGameplay_PC = K2Node_DynamicCast_AsGameplay_PC;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsInventory_Interface_1 = K2Node_DynamicCast_AsInventory_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsInventory_Interface_2 = K2Node_DynamicCast_AsInventory_Interface_2;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetContainerInventory_InventoryComponent = CallFunc_GetContainerInventory_InventoryComponent;
	Parms.CallFunc_ContainerLooted_Success = CallFunc_ContainerLooted_Success;
	Parms.CallFunc_GetInventoryItemCount_ItemCount = CallFunc_GetInventoryItemCount_ItemCount;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsInventory_Interface_3 = K2Node_DynamicCast_AsInventory_Interface_3;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_GetCanStoreItems_CanStoreItems = CallFunc_GetCanStoreItems_CanStoreItems;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.SetViewersContainerSlot
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ContainerSlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemInformation            ItemInformation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FItemInformation            LocalItemInformation                                             (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              LocalContainerSlot                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IInventoryInterface_C>K2Node_DynamicCast_AsInventory_Interface                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class APlayerState*>        CallFunc_GetPlayersViewing_PlayersViewing                        (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerState*                CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               K2Node_DynamicCast_AsGameplay_PC                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventoryManagerComponent_C::SetViewersContainerSlot(int32 ContainerSlot, const struct FItemInformation& ItemInformation, const struct FItemInformation& LocalItemInformation, int32 LocalContainerSlot, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, TScriptInterface<class IInventoryInterface_C> K2Node_DynamicCast_AsInventory_Interface, bool K2Node_DynamicCast_bSuccess, TArray<class APlayerState*>& CallFunc_GetPlayersViewing_PlayersViewing, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerState* CallFunc_Array_Get_Item, class AActor* CallFunc_GetOwner_ReturnValue, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "SetViewersContainerSlot");

	Params::UInventoryManagerComponent_C_SetViewersContainerSlot_Params Parms{};

	Parms.ContainerSlot = ContainerSlot;
	Parms.ItemInformation = ItemInformation;
	Parms.LocalItemInformation = LocalItemInformation;
	Parms.LocalContainerSlot = LocalContainerSlot;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_DynamicCast_AsInventory_Interface = K2Node_DynamicCast_AsInventory_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPlayersViewing_PlayersViewing = CallFunc_GetPlayersViewing_PlayersViewing;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsGameplay_PC = K2Node_DynamicCast_AsGameplay_PC;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.UnequipItem
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryComponent_C*       FromInventory                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              FromInventorySlot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponent_C*       ToInventory                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ToInventorySlot                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EquipmentSlotType       LocalEquipmentSlotType                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               LocalIsEquippingItem                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem              LocalSwapInventoryItem                                           (Edit, BlueprintVisible, HasGetValueTypeHash)
// struct FInventoryItem              LocalInventoryItem                                               (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              LocalToInventorySlot                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LocalFromInventorySlot                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponent_C*       LocalToInventory                                                 (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponent_C*       LocalFromInventory                                               (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EquipmentSlotType       CallFunc_GetEquipmentTypeBySlot_EquipmentType                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UEquipmentInventoryComponent_C*K2Node_DynamicCast_AsEquipment_Inventory_Component               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanContainerStoreItems_Result                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EquipmentSlotType       CallFunc_GetEquipmentTypeBySlot_EquipmentType_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem              CallFunc_GetInventoryItem_InventoryItem                          (HasGetValueTypeHash)
// struct FInventoryItem              CallFunc_GetInventoryItem_InventoryItem_1                        (HasGetValueTypeHash)

void UInventoryManagerComponent_C::UnequipItem(class UInventoryComponent_C* FromInventory, int32 FromInventorySlot, class UInventoryComponent_C* ToInventory, int32 ToInventorySlot, enum class EquipmentSlotType LocalEquipmentSlotType, bool LocalIsEquippingItem, const struct FInventoryItem& LocalSwapInventoryItem, const struct FInventoryItem& LocalInventoryItem, int32 LocalToInventorySlot, int32 LocalFromInventorySlot, class UInventoryComponent_C* LocalToInventory, class UInventoryComponent_C* LocalFromInventory, bool CallFunc_EqualEqual_IntInt_ReturnValue, enum class EquipmentSlotType CallFunc_GetEquipmentTypeBySlot_EquipmentType, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UEquipmentInventoryComponent_C* K2Node_DynamicCast_AsEquipment_Inventory_Component, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_CanContainerStoreItems_Result, int32 CallFunc_MakeLiteralInt_ReturnValue, enum class EquipmentSlotType CallFunc_GetEquipmentTypeBySlot_EquipmentType_1, bool CallFunc_Less_IntInt_ReturnValue, const struct FInventoryItem& CallFunc_GetInventoryItem_InventoryItem, const struct FInventoryItem& CallFunc_GetInventoryItem_InventoryItem_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "UnequipItem");

	Params::UInventoryManagerComponent_C_UnequipItem_Params Parms{};

	Parms.FromInventory = FromInventory;
	Parms.FromInventorySlot = FromInventorySlot;
	Parms.ToInventory = ToInventory;
	Parms.ToInventorySlot = ToInventorySlot;
	Parms.LocalEquipmentSlotType = LocalEquipmentSlotType;
	Parms.LocalIsEquippingItem = LocalIsEquippingItem;
	Parms.LocalSwapInventoryItem = LocalSwapInventoryItem;
	Parms.LocalInventoryItem = LocalInventoryItem;
	Parms.LocalToInventorySlot = LocalToInventorySlot;
	Parms.LocalFromInventorySlot = LocalFromInventorySlot;
	Parms.LocalToInventory = LocalToInventory;
	Parms.LocalFromInventory = LocalFromInventory;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetEquipmentTypeBySlot_EquipmentType = CallFunc_GetEquipmentTypeBySlot_EquipmentType;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_DynamicCast_AsEquipment_Inventory_Component = K2Node_DynamicCast_AsEquipment_Inventory_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_CanContainerStoreItems_Result = CallFunc_CanContainerStoreItems_Result;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_GetEquipmentTypeBySlot_EquipmentType_1 = CallFunc_GetEquipmentTypeBySlot_EquipmentType_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetInventoryItem_InventoryItem = CallFunc_GetInventoryItem_InventoryItem;
	Parms.CallFunc_GetInventoryItem_InventoryItem_1 = CallFunc_GetInventoryItem_InventoryItem_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.EquipItem
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryComponent_C*       FromInventory                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              FromInventorySlot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponent_C*       ToInventory                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ToInventorySlot                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AUsable_Actor_C*>     LocalToInstanceArray                                             (Edit, BlueprintVisible, DisableEditOnTemplate, HasGetValueTypeHash)
// TArray<class AUsable_Actor_C*>     LocalFromInstanceArray                                           (Edit, BlueprintVisible, DisableEditOnTemplate, HasGetValueTypeHash)
// class AUsable_Actor_C*             LocalToInstance                                                  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AUsable_Actor_C*             LocalFromInstance                                                (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EquipmentSlotType       LocalEquipmentSlotType                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               LocalIsEquippingItem                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem              LocalSwapInventoryItem                                           (Edit, BlueprintVisible, HasGetValueTypeHash)
// struct FInventoryItem              LocalInventoryItem                                               (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              LocalToInventorySlot                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LocalFromInventorySlot                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponent_C*       LocalToInventory                                                 (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponent_C*       LocalFromInventory                                               (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanContainerStoreItems_Result                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EquipmentSlotType       CallFunc_GetEquipmentTypeBySlot_EquipmentType                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem              CallFunc_GetInventoryItem_InventoryItem                          (HasGetValueTypeHash)
// struct FInventoryItem              CallFunc_GetInventoryItem_InventoryItem_1                        (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventoryManagerComponent_C::EquipItem(class UInventoryComponent_C* FromInventory, int32 FromInventorySlot, class UInventoryComponent_C* ToInventory, int32 ToInventorySlot, const TArray<class AUsable_Actor_C*>& LocalToInstanceArray, const TArray<class AUsable_Actor_C*>& LocalFromInstanceArray, class AUsable_Actor_C* LocalToInstance, class AUsable_Actor_C* LocalFromInstance, enum class EquipmentSlotType LocalEquipmentSlotType, bool LocalIsEquippingItem, const struct FInventoryItem& LocalSwapInventoryItem, const struct FInventoryItem& LocalInventoryItem, int32 LocalToInventorySlot, int32 LocalFromInventorySlot, class UInventoryComponent_C* LocalToInventory, class UInventoryComponent_C* LocalFromInventory, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_CanContainerStoreItems_Result, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class EquipmentSlotType CallFunc_GetEquipmentTypeBySlot_EquipmentType, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FInventoryItem& CallFunc_GetInventoryItem_InventoryItem, const struct FInventoryItem& CallFunc_GetInventoryItem_InventoryItem_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "EquipItem");

	Params::UInventoryManagerComponent_C_EquipItem_Params Parms{};

	Parms.FromInventory = FromInventory;
	Parms.FromInventorySlot = FromInventorySlot;
	Parms.ToInventory = ToInventory;
	Parms.ToInventorySlot = ToInventorySlot;
	Parms.LocalToInstanceArray = LocalToInstanceArray;
	Parms.LocalFromInstanceArray = LocalFromInstanceArray;
	Parms.LocalToInstance = LocalToInstance;
	Parms.LocalFromInstance = LocalFromInstance;
	Parms.LocalEquipmentSlotType = LocalEquipmentSlotType;
	Parms.LocalIsEquippingItem = LocalIsEquippingItem;
	Parms.LocalSwapInventoryItem = LocalSwapInventoryItem;
	Parms.LocalInventoryItem = LocalInventoryItem;
	Parms.LocalToInventorySlot = LocalToInventorySlot;
	Parms.LocalFromInventorySlot = LocalFromInventorySlot;
	Parms.LocalToInventory = LocalToInventory;
	Parms.LocalFromInventory = LocalFromInventory;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_CanContainerStoreItems_Result = CallFunc_CanContainerStoreItems_Result;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetEquipmentTypeBySlot_EquipmentType = CallFunc_GetEquipmentTypeBySlot_EquipmentType;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetInventoryItem_InventoryItem = CallFunc_GetInventoryItem_InventoryItem;
	Parms.CallFunc_GetInventoryItem_InventoryItem_1 = CallFunc_GetInventoryItem_InventoryItem_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.Use Consumable Item
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InventorySlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              InventoryItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                              LocalInventorySlot                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveFromItemAmount_WasFullAmountRemoved               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem              CallFunc_RemoveFromItemAmount_OutnventoryItem                    (HasGetValueTypeHash)
// int32                              CallFunc_RemoveFromItemAmount_AmountRemoved                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetInventoryItem_Success                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventoryManagerComponent_C::Use_Consumable_Item(int32 InventorySlot, const struct FInventoryItem& InventoryItem, int32 LocalInventorySlot, bool CallFunc_RemoveFromItemAmount_WasFullAmountRemoved, const struct FInventoryItem& CallFunc_RemoveFromItemAmount_OutnventoryItem, int32 CallFunc_RemoveFromItemAmount_AmountRemoved, bool CallFunc_SetInventoryItem_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "Use Consumable Item");

	Params::UInventoryManagerComponent_C_Use_Consumable_Item_Params Parms{};

	Parms.InventorySlot = InventorySlot;
	Parms.InventoryItem = InventoryItem;
	Parms.LocalInventorySlot = LocalInventorySlot;
	Parms.CallFunc_RemoveFromItemAmount_WasFullAmountRemoved = CallFunc_RemoveFromItemAmount_WasFullAmountRemoved;
	Parms.CallFunc_RemoveFromItemAmount_OutnventoryItem = CallFunc_RemoveFromItemAmount_OutnventoryItem;
	Parms.CallFunc_RemoveFromItemAmount_AmountRemoved = CallFunc_RemoveFromItemAmount_AmountRemoved;
	Parms.CallFunc_SetInventoryItem_Success = CallFunc_SetInventoryItem_Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.UseEquipmentItem
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InventorySlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              InventoryItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UInventoryComponent_C*       ToInventory                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponent_C*       LocalInventoryReference                                          (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              LocalInventoryItem                                               (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              LocalInventorySlot                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetEmptyInventorySpace_Success                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetEmptyInventorySpace_Index                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetEmptyEquipmentSlotByType_HasEmptySlot                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetEmptyEquipmentSlotByType_InventorySlot               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetEquipmentSlotByType_InventorySlot                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventoryManagerComponent_C::UseEquipmentItem(int32 InventorySlot, const struct FInventoryItem& InventoryItem, class UInventoryComponent_C* ToInventory, class UInventoryComponent_C* LocalInventoryReference, const struct FInventoryItem& LocalInventoryItem, int32 LocalInventorySlot, bool CallFunc_GetEmptyInventorySpace_Success, int32 CallFunc_GetEmptyInventorySpace_Index, bool CallFunc_GetEmptyEquipmentSlotByType_HasEmptySlot, int32 CallFunc_GetEmptyEquipmentSlotByType_InventorySlot, int32 CallFunc_GetEquipmentSlotByType_InventorySlot, int32 CallFunc_MakeLiteralInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "UseEquipmentItem");

	Params::UInventoryManagerComponent_C_UseEquipmentItem_Params Parms{};

	Parms.InventorySlot = InventorySlot;
	Parms.InventoryItem = InventoryItem;
	Parms.ToInventory = ToInventory;
	Parms.LocalInventoryReference = LocalInventoryReference;
	Parms.LocalInventoryItem = LocalInventoryItem;
	Parms.LocalInventorySlot = LocalInventorySlot;
	Parms.CallFunc_GetEmptyInventorySpace_Success = CallFunc_GetEmptyInventorySpace_Success;
	Parms.CallFunc_GetEmptyInventorySpace_Index = CallFunc_GetEmptyInventorySpace_Index;
	Parms.CallFunc_GetEmptyEquipmentSlotByType_HasEmptySlot = CallFunc_GetEmptyEquipmentSlotByType_HasEmptySlot;
	Parms.CallFunc_GetEmptyEquipmentSlotByType_InventorySlot = CallFunc_GetEmptyEquipmentSlotByType_InventorySlot;
	Parms.CallFunc_GetEquipmentSlotByType_InventorySlot = CallFunc_GetEquipmentSlotByType_InventorySlot;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.GetEquipmentSlotByType
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EquipmentSlotType       EquipmentSlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InventorySlot                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LocalInventorySlot                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EquipmentSlotType       LocalSlotType                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EquipmentSlotType       CallFunc_GetEquipmentTypeBySlot_EquipmentType                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventoryManagerComponent_C::GetEquipmentSlotByType(enum class EquipmentSlotType EquipmentSlot, int32* InventorySlot, int32 LocalInventorySlot, enum class EquipmentSlotType LocalSlotType, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, enum class EquipmentSlotType CallFunc_GetEquipmentTypeBySlot_EquipmentType, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "GetEquipmentSlotByType");

	Params::UInventoryManagerComponent_C_GetEquipmentSlotByType_Params Parms{};

	Parms.EquipmentSlot = EquipmentSlot;
	Parms.LocalInventorySlot = LocalInventorySlot;
	Parms.LocalSlotType = LocalSlotType;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetEquipmentTypeBySlot_EquipmentType = CallFunc_GetEquipmentTypeBySlot_EquipmentType;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InventorySlot != nullptr)
		*InventorySlot = Parms.InventorySlot;

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.GetEquipmentTypeBySlot
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              EquipmentSlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EquipmentSlotType       EquipmentType                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventoryManagerComponent_C::GetEquipmentTypeBySlot(int32 EquipmentSlot, enum class EquipmentSlotType* EquipmentType, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "GetEquipmentTypeBySlot");

	Params::UInventoryManagerComponent_C_GetEquipmentTypeBySlot_Params Parms{};

	Parms.EquipmentSlot = EquipmentSlot;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (EquipmentType != nullptr)
		*EquipmentType = Parms.EquipmentType;

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.UseContainerItem
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ContainerSlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               LocalIsContainerOpen                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              LocalInventorySlot                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               LocalIsPlayerInventory                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem              CallFunc_GetInventoryItem_InventoryItem                          (HasGetValueTypeHash)
// bool                               CallFunc_TryToAddItemToInventory_Success                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem              CallFunc_TryToAddItemToInventory_OutItem                         (HasGetValueTypeHash)
// int32                              CallFunc_TryToAddItemToInventory_AddedToSlot                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryManagerComponent_C::UseContainerItem(int32 ContainerSlot, bool LocalIsContainerOpen, int32 LocalInventorySlot, bool LocalIsPlayerInventory, const struct FInventoryItem& CallFunc_GetInventoryItem_InventoryItem, bool CallFunc_TryToAddItemToInventory_Success, const struct FInventoryItem& CallFunc_TryToAddItemToInventory_OutItem, int32 CallFunc_TryToAddItemToInventory_AddedToSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "UseContainerItem");

	Params::UInventoryManagerComponent_C_UseContainerItem_Params Parms{};

	Parms.ContainerSlot = ContainerSlot;
	Parms.LocalIsContainerOpen = LocalIsContainerOpen;
	Parms.LocalInventorySlot = LocalInventorySlot;
	Parms.LocalIsPlayerInventory = LocalIsPlayerInventory;
	Parms.CallFunc_GetInventoryItem_InventoryItem = CallFunc_GetInventoryItem_InventoryItem;
	Parms.CallFunc_TryToAddItemToInventory_Success = CallFunc_TryToAddItemToInventory_Success;
	Parms.CallFunc_TryToAddItemToInventory_OutItem = CallFunc_TryToAddItemToInventory_OutItem;
	Parms.CallFunc_TryToAddItemToInventory_AddedToSlot = CallFunc_TryToAddItemToInventory_AddedToSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.UseInventoryItem
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InventorySlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               UsedFromInventory                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               UseNotify                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ItemUsed                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_UseNotify                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               Local_GameplayPC                                                 (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_UsedFromInventory                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Local_ItemUsed                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem              LocalInventoryItem                                               (Edit, BlueprintVisible, HasGetValueTypeHash)
// bool                               LocalIsContainerOpen                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              LocalInventorySlot                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               LocalIsPlayerInventory                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IInventoryInterface_C>K2Node_DynamicCast_AsInventory_Interface                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetCanStoreItems_CanStoreItems                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               CallFunc_GetControllerAsGameplayPC_AsGameplay_PC                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               K2Node_DynamicCast_AsGameplay_PC                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AZero_Base_C*                K2Node_DynamicCast_As0_Base                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_InventoryItem_CanUseCallFunc_GetCanUseItem_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetItemFamiliarity_Value                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FToolTipInfo                K2Node_MakeStruct_ToolTipInfo                                    (HasGetValueTypeHash)
// bool                               CallFunc_ApplyItemEffect_bApplied                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem              CallFunc_GetInventoryItem_InventoryItem                          (HasGetValueTypeHash)
// bool                               CallFunc_TryToAddItemToInventory_Success                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem              CallFunc_TryToAddItemToInventory_OutItem                         (HasGetValueTypeHash)
// int32                              CallFunc_TryToAddItemToInventory_AddedToSlot                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryManagerComponent_C::UseInventoryItem(int32 InventorySlot, bool UsedFromInventory, bool UseNotify, bool* ItemUsed, bool Local_UseNotify, class AGameplayPC_C* Local_GameplayPC, bool Local_UsedFromInventory, bool Local_ItemUsed, const struct FInventoryItem& LocalInventoryItem, bool LocalIsContainerOpen, int32 LocalInventorySlot, bool LocalIsPlayerInventory, TScriptInterface<class IInventoryInterface_C> K2Node_DynamicCast_AsInventory_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetCanStoreItems_CanStoreItems, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class AActor* CallFunc_GetOwner_ReturnValue, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC, bool K2Node_DynamicCast_bSuccess_1, class APawn* CallFunc_K2_GetPawn_ReturnValue, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class Enum_InventoryItem_CanUse CallFunc_GetCanUseItem_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetItemFamiliarity_Value, bool K2Node_SwitchEnum_CmpSuccess_2, const struct FToolTipInfo& K2Node_MakeStruct_ToolTipInfo, bool CallFunc_ApplyItemEffect_bApplied, bool CallFunc_NotEqual_NameName_ReturnValue, const struct FInventoryItem& CallFunc_GetInventoryItem_InventoryItem, bool CallFunc_TryToAddItemToInventory_Success, const struct FInventoryItem& CallFunc_TryToAddItemToInventory_OutItem, int32 CallFunc_TryToAddItemToInventory_AddedToSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "UseInventoryItem");

	Params::UInventoryManagerComponent_C_UseInventoryItem_Params Parms{};

	Parms.InventorySlot = InventorySlot;
	Parms.UsedFromInventory = UsedFromInventory;
	Parms.UseNotify = UseNotify;
	Parms.Local_UseNotify = Local_UseNotify;
	Parms.Local_GameplayPC = Local_GameplayPC;
	Parms.Local_UsedFromInventory = Local_UsedFromInventory;
	Parms.Local_ItemUsed = Local_ItemUsed;
	Parms.LocalInventoryItem = LocalInventoryItem;
	Parms.LocalIsContainerOpen = LocalIsContainerOpen;
	Parms.LocalInventorySlot = LocalInventorySlot;
	Parms.LocalIsPlayerInventory = LocalIsPlayerInventory;
	Parms.K2Node_DynamicCast_AsInventory_Interface = K2Node_DynamicCast_AsInventory_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCanStoreItems_CanStoreItems = CallFunc_GetCanStoreItems_CanStoreItems;
	Parms.CallFunc_GetControllerAsGameplayPC_AsGameplay_PC = CallFunc_GetControllerAsGameplayPC_AsGameplay_PC;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsGameplay_PC = K2Node_DynamicCast_AsGameplay_PC;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.K2Node_DynamicCast_As0_Base = K2Node_DynamicCast_As0_Base;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetCanUseItem_ReturnValue = CallFunc_GetCanUseItem_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetItemFamiliarity_Value = CallFunc_GetItemFamiliarity_Value;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.K2Node_MakeStruct_ToolTipInfo = K2Node_MakeStruct_ToolTipInfo;
	Parms.CallFunc_ApplyItemEffect_bApplied = CallFunc_ApplyItemEffect_bApplied;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_GetInventoryItem_InventoryItem = CallFunc_GetInventoryItem_InventoryItem;
	Parms.CallFunc_TryToAddItemToInventory_Success = CallFunc_TryToAddItemToInventory_Success;
	Parms.CallFunc_TryToAddItemToInventory_OutItem = CallFunc_TryToAddItemToInventory_OutItem;
	Parms.CallFunc_TryToAddItemToInventory_AddedToSlot = CallFunc_TryToAddItemToInventory_AddedToSlot;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemUsed != nullptr)
		*ItemUsed = Parms.ItemUsed;

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.CloseContainer
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           K2Node_DynamicCast_AsPlayer_Controller                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IInventoryInterface_C>K2Node_DynamicCast_AsInventory_Interface                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class APlayerState*>        CallFunc_GetPlayersViewing_PlayersViewing                        (ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventoryManagerComponent_C::CloseContainer(class AActor* CallFunc_GetOwner_ReturnValue, class APlayerController* K2Node_DynamicCast_AsPlayer_Controller, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IInventoryInterface_C> K2Node_DynamicCast_AsInventory_Interface, bool K2Node_DynamicCast_bSuccess_1, TArray<class APlayerState*>& CallFunc_GetPlayersViewing_PlayersViewing, bool CallFunc_Array_RemoveItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "CloseContainer");

	Params::UInventoryManagerComponent_C_CloseContainer_Params Parms{};

	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Controller = K2Node_DynamicCast_AsPlayer_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsInventory_Interface = K2Node_DynamicCast_AsInventory_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetPlayersViewing_PlayersViewing = CallFunc_GetPlayersViewing_PlayersViewing;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.OpenContainer
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Container                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FItemInformation>    LocalItemInformation                                             (Edit, BlueprintVisible, HasGetValueTypeHash)
// TScriptInterface<class IInventoryInterface_C>K2Node_DynamicCast_AsInventory_Interface                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetContainerProperties_Name                             (None)
// uint8                              CallFunc_GetContainerProperties_SlotsPerRow                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetContainerProperties_IsStorageContainer               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetContainerProperties_InventorySize                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FContainerInfo              K2Node_MakeStruct_ContainerInfo                                  (HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IInventoryInterface_C>K2Node_DynamicCast_AsInventory_Interface_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UInventoryComponent_C*       CallFunc_GetContainerInventory_InventoryComponent                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// struct FItemInformation            K2Node_MakeStruct_ItemInformation                                (HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryManagerComponent_C::OpenContainer(class AActor* Container, const TArray<struct FItemInformation>& LocalItemInformation, TScriptInterface<class IInventoryInterface_C> K2Node_DynamicCast_AsInventory_Interface, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_GetContainerProperties_Name, uint8 CallFunc_GetContainerProperties_SlotsPerRow, bool CallFunc_GetContainerProperties_IsStorageContainer, int32 CallFunc_GetContainerProperties_InventorySize, int32 CallFunc_Array_Length_ReturnValue, const struct FContainerInfo& K2Node_MakeStruct_ContainerInfo, int32 Temp_int_Loop_Counter_Variable, TScriptInterface<class IInventoryInterface_C> K2Node_DynamicCast_AsInventory_Interface_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Less_IntInt_ReturnValue, class UInventoryComponent_C* CallFunc_GetContainerInventory_InventoryComponent, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FInventoryItem& CallFunc_Array_Get_Item, const struct FItemInformation& K2Node_MakeStruct_ItemInformation, const class FString& CallFunc_Conv_NameToString_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "OpenContainer");

	Params::UInventoryManagerComponent_C_OpenContainer_Params Parms{};

	Parms.Container = Container;
	Parms.LocalItemInformation = LocalItemInformation;
	Parms.K2Node_DynamicCast_AsInventory_Interface = K2Node_DynamicCast_AsInventory_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetContainerProperties_Name = CallFunc_GetContainerProperties_Name;
	Parms.CallFunc_GetContainerProperties_SlotsPerRow = CallFunc_GetContainerProperties_SlotsPerRow;
	Parms.CallFunc_GetContainerProperties_IsStorageContainer = CallFunc_GetContainerProperties_IsStorageContainer;
	Parms.CallFunc_GetContainerProperties_InventorySize = CallFunc_GetContainerProperties_InventorySize;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_MakeStruct_ContainerInfo = K2Node_MakeStruct_ContainerInfo;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_DynamicCast_AsInventory_Interface_1 = K2Node_DynamicCast_AsInventory_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetContainerInventory_InventoryComponent = CallFunc_GetContainerInventory_InventoryComponent;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_MakeStruct_ItemInformation = K2Node_MakeStruct_ItemInformation;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.ClearContainerSlotItem
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ContainerSlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LocalSlot                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UContainer_Slot_C*           CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryManagerComponent_C::ClearContainerSlotItem(int32 ContainerSlot, int32 LocalSlot, class UContainer_Slot_C* CallFunc_Array_Get_Item, class UWidget* CallFunc_GetChildAt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "ClearContainerSlotItem");

	Params::UInventoryManagerComponent_C_ClearContainerSlotItem_Params Parms{};

	Parms.ContainerSlot = ContainerSlot;
	Parms.LocalSlot = LocalSlot;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.SetContainerSlotItem
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ContainerSlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemInformation            ItemInformation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                              LocalSlot                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UContainer_Slot_C*           CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventoryManagerComponent_C::SetContainerSlotItem(int32 ContainerSlot, const struct FItemInformation& ItemInformation, int32 LocalSlot, class UContainer_Slot_C* CallFunc_Array_Get_Item, class UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "SetContainerSlotItem");

	Params::UInventoryManagerComponent_C_SetContainerSlotItem_Params Parms{};

	Parms.ContainerSlot = ContainerSlot;
	Parms.ItemInformation = ItemInformation;
	Parms.LocalSlot = LocalSlot;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.ClearContainerSlots
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UInventoryManagerComponent_C::ClearContainerSlots()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "ClearContainerSlots");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.CreateContainerSlots
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ContainerSize                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              SlotsPerRow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               LocalIsStorageContainer                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              LocalMaxRowSize                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LocalLoopCount                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LocalContainerSize                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_ByteToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FCeil_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventoryManagerComponent_C::CreateContainerSlots(int32 ContainerSize, uint8 SlotsPerRow, bool LocalIsStorageContainer, uint8 LocalMaxRowSize, int32 LocalLoopCount, int32 LocalContainerSize, bool CallFunc_Greater_IntInt_ReturnValue, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Variable_1, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Conv_ByteToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_FCeil_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_Max_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "CreateContainerSlots");

	Params::UInventoryManagerComponent_C_CreateContainerSlots_Params Parms{};

	Parms.ContainerSize = ContainerSize;
	Parms.SlotsPerRow = SlotsPerRow;
	Parms.LocalIsStorageContainer = LocalIsStorageContainer;
	Parms.LocalMaxRowSize = LocalMaxRowSize;
	Parms.LocalLoopCount = LocalLoopCount;
	Parms.LocalContainerSize = LocalContainerSize;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Conv_ByteToFloat_ReturnValue = CallFunc_Conv_ByteToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_FCeil_ReturnValue = CallFunc_FCeil_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.LoadContainerSlots
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FContainerInfo              ContainerProperties                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// TArray<struct FItemInformation>    ItemInformation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// TArray<struct FItemInformation>    LocalItemInformation                                             (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<struct FItemInformation>    K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)

void UInventoryManagerComponent_C::LoadContainerSlots(const struct FContainerInfo& ContainerProperties, TArray<struct FItemInformation>& ItemInformation, const TArray<struct FItemInformation>& LocalItemInformation, TArray<struct FItemInformation>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "LoadContainerSlots");

	Params::UInventoryManagerComponent_C_LoadContainerSlots_Params Parms{};

	Parms.ContainerProperties = ContainerProperties;
	Parms.ItemInformation = ItemInformation;
	Parms.LocalItemInformation = LocalItemInformation;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.CloseContainerWindow
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UContainer_Slot_C*           CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryManagerComponent_C::CloseContainerWindow(int32 Temp_int_Array_Index_Variable, class UContainer_Slot_C* CallFunc_Array_Get_Item, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "CloseContainerWindow");

	Params::UInventoryManagerComponent_C_CloseContainerWindow_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.OpenContainerWindow
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UInventoryManagerComponent_C::OpenContainerWindow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "OpenContainerWindow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.MoveItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryComponent_C*       FromInventory                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              FromInventorySlot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponent_C*       ToInventory                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ToInventorySlot                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               LocalIsEquippingItem                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem              LocalSwapInventoryItem                                           (Edit, BlueprintVisible, HasGetValueTypeHash)
// struct FInventoryItem              LocalInventoryItem                                               (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              LocalToInventorySlot                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LocalFromInventorySlot                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponent_C*       LocalToInventory                                                 (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponent_C*       LocalFromInventory                                               (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanContainerStoreItems_Result                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanContainerStoreItems_Result_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_AddItemToStack_AmountRemaining                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              CallFunc_SetItemAmount_NewInventoryItem                          (HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem              CallFunc_GetInventoryItem_InventoryItem                          (HasGetValueTypeHash)
// struct FInventoryItem              CallFunc_GetInventoryItem_InventoryItem_1                        (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventoryManagerComponent_C::MoveItem(class UInventoryComponent_C* FromInventory, int32 FromInventorySlot, class UInventoryComponent_C* ToInventory, int32 ToInventorySlot, bool LocalIsEquippingItem, const struct FInventoryItem& LocalSwapInventoryItem, const struct FInventoryItem& LocalInventoryItem, int32 LocalToInventorySlot, int32 LocalFromInventorySlot, class UInventoryComponent_C* LocalToInventory, class UInventoryComponent_C* LocalFromInventory, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_CanContainerStoreItems_Result, bool CallFunc_CanContainerStoreItems_Result_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_AddItemToStack_AmountRemaining, const struct FInventoryItem& CallFunc_SetItemAmount_NewInventoryItem, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, const struct FInventoryItem& CallFunc_GetInventoryItem_InventoryItem, const struct FInventoryItem& CallFunc_GetInventoryItem_InventoryItem_1, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "MoveItem");

	Params::UInventoryManagerComponent_C_MoveItem_Params Parms{};

	Parms.FromInventory = FromInventory;
	Parms.FromInventorySlot = FromInventorySlot;
	Parms.ToInventory = ToInventory;
	Parms.ToInventorySlot = ToInventorySlot;
	Parms.LocalIsEquippingItem = LocalIsEquippingItem;
	Parms.LocalSwapInventoryItem = LocalSwapInventoryItem;
	Parms.LocalInventoryItem = LocalInventoryItem;
	Parms.LocalToInventorySlot = LocalToInventorySlot;
	Parms.LocalFromInventorySlot = LocalFromInventorySlot;
	Parms.LocalToInventory = LocalToInventory;
	Parms.LocalFromInventory = LocalFromInventory;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_CanContainerStoreItems_Result = CallFunc_CanContainerStoreItems_Result;
	Parms.CallFunc_CanContainerStoreItems_Result_1 = CallFunc_CanContainerStoreItems_Result_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_AddItemToStack_AmountRemaining = CallFunc_AddItemToStack_AmountRemaining;
	Parms.CallFunc_SetItemAmount_NewInventoryItem = CallFunc_SetItemAmount_NewInventoryItem;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_1 = CallFunc_EqualEqual_ObjectObject_ReturnValue_1;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_GetInventoryItem_InventoryItem = CallFunc_GetInventoryItem_InventoryItem;
	Parms.CallFunc_GetInventoryItem_InventoryItem_1 = CallFunc_GetInventoryItem_InventoryItem_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.SetItemAmount
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryItem              InventoryItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              NewInventoryItem                                                 (Parm, OutParm, HasGetValueTypeHash)
// struct FInventoryItem              K2Node_SetFieldsInStruct_StructOut                               (HasGetValueTypeHash)

void UInventoryManagerComponent_C::SetItemAmount(const struct FInventoryItem& InventoryItem, int32 Amount, struct FInventoryItem* NewInventoryItem, const struct FInventoryItem& K2Node_SetFieldsInStruct_StructOut)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "SetItemAmount");

	Params::UInventoryManagerComponent_C_SetItemAmount_Params Parms{};

	Parms.InventoryItem = InventoryItem;
	Parms.Amount = Amount;
	Parms.K2Node_SetFieldsInStruct_StructOut = K2Node_SetFieldsInStruct_StructOut;

	UObject::ProcessEvent(Func, &Parms);

	if (NewInventoryItem != nullptr)
		*NewInventoryItem = std::move(Parms.NewInventoryItem);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.UseContainer
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Container                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesImplementInterface_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventoryManagerComponent_C::UseContainer(class AActor* Container, bool CallFunc_DoesImplementInterface_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "UseContainer");

	Params::UInventoryManagerComponent_C_UseContainer_Params Parms{};

	Parms.Container = Container;
	Parms.CallFunc_DoesImplementInterface_ReturnValue = CallFunc_DoesImplementInterface_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.RemoveItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryComponent_C*       Inventory                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InventorySlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LocalInventorySlot                                               (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ClearInventoryItem_Success                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventoryManagerComponent_C::RemoveItem(class UInventoryComponent_C* Inventory, int32 InventorySlot, int32 LocalInventorySlot, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_ClearInventoryItem_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "RemoveItem");

	Params::UInventoryManagerComponent_C_RemoveItem_Params Parms{};

	Parms.Inventory = Inventory;
	Parms.InventorySlot = InventorySlot;
	Parms.LocalInventorySlot = LocalInventorySlot;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_ClearInventoryItem_Success = CallFunc_ClearInventoryItem_Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.AddItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryComponent_C*       Inventory                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InventorySlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              InventoryItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// struct FItemInformation            LocalItemInformation                                             (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              LocalInventorySlot                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemInformation            K2Node_MakeStruct_ItemInformation                                (HasGetValueTypeHash)
// bool                               CallFunc_SetInventoryItem_Success                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventoryManagerComponent_C::AddItem(class UInventoryComponent_C* Inventory, int32 InventorySlot, const struct FInventoryItem& InventoryItem, const struct FItemInformation& LocalItemInformation, int32 LocalInventorySlot, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, const struct FItemInformation& K2Node_MakeStruct_ItemInformation, bool CallFunc_SetInventoryItem_Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "AddItem");

	Params::UInventoryManagerComponent_C_AddItem_Params Parms{};

	Parms.Inventory = Inventory;
	Parms.InventorySlot = InventorySlot;
	Parms.InventoryItem = InventoryItem;
	Parms.LocalItemInformation = LocalItemInformation;
	Parms.LocalInventorySlot = LocalInventorySlot;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.K2Node_MakeStruct_ItemInformation = K2Node_MakeStruct_ItemInformation;
	Parms.CallFunc_SetInventoryItem_Success = CallFunc_SetInventoryItem_Success;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.AddItemToStack
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryComponent_C*       Inventory                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InventorySlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AmountToAdd                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AmountRemaining                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LocalRemainingAmount                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               LocalAddedFullAmount                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem              LocalInventoryItem                                               (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              LocalAmountToAdd                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LocalInventorySlot                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponent_C*       LocalInventory                                                   (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem              CallFunc_AddToItemAmount_OutItem                                 (HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryItem              CallFunc_AddToItemAmount_OutItem_1                               (HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem              CallFunc_GetInventoryItem_InventoryItem                          (HasGetValueTypeHash)

void UInventoryManagerComponent_C::AddItemToStack(class UInventoryComponent_C* Inventory, int32 InventorySlot, int32 AmountToAdd, int32* AmountRemaining, int32 LocalRemainingAmount, bool LocalAddedFullAmount, const struct FInventoryItem& LocalInventoryItem, int32 LocalAmountToAdd, int32 LocalInventorySlot, class UInventoryComponent_C* LocalInventory, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FInventoryItem& CallFunc_AddToItemAmount_OutItem, int32 CallFunc_Subtract_IntInt_ReturnValue_1, const struct FInventoryItem& CallFunc_AddToItemAmount_OutItem_1, bool CallFunc_LessEqual_IntInt_ReturnValue, const struct FInventoryItem& CallFunc_GetInventoryItem_InventoryItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "AddItemToStack");

	Params::UInventoryManagerComponent_C_AddItemToStack_Params Parms{};

	Parms.Inventory = Inventory;
	Parms.InventorySlot = InventorySlot;
	Parms.AmountToAdd = AmountToAdd;
	Parms.LocalRemainingAmount = LocalRemainingAmount;
	Parms.LocalAddedFullAmount = LocalAddedFullAmount;
	Parms.LocalInventoryItem = LocalInventoryItem;
	Parms.LocalAmountToAdd = LocalAmountToAdd;
	Parms.LocalInventorySlot = LocalInventorySlot;
	Parms.LocalInventory = LocalInventory;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_AddToItemAmount_OutItem = CallFunc_AddToItemAmount_OutItem;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_AddToItemAmount_OutItem_1 = CallFunc_AddToItemAmount_OutItem_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetInventoryItem_InventoryItem = CallFunc_GetInventoryItem_InventoryItem;

	UObject::ProcessEvent(Func, &Parms);

	if (AmountRemaining != nullptr)
		*AmountRemaining = Parms.AmountRemaining;

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.FindAndAddAmountToStacks
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventoryComponent_C*       Inventory                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              AmountRemaining                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LocalInventorySlot                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LocalAmount                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        LocalItemID                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponent_C*       LocalInventory                                                   (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem              CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_AddItemToStack_AmountRemaining                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_NameName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventoryManagerComponent_C::FindAndAddAmountToStacks(class UInventoryComponent_C* Inventory, class FName ItemId, int32 Amount, int32* AmountRemaining, int32 LocalInventorySlot, int32 LocalAmount, class FName LocalItemID, class UInventoryComponent_C* LocalInventory, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FInventoryItem& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_AddItemToStack_AmountRemaining, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "FindAndAddAmountToStacks");

	Params::UInventoryManagerComponent_C_FindAndAddAmountToStacks_Params Parms{};

	Parms.Inventory = Inventory;
	Parms.ItemId = ItemId;
	Parms.Amount = Amount;
	Parms.LocalInventorySlot = LocalInventorySlot;
	Parms.LocalAmount = LocalAmount;
	Parms.LocalItemID = LocalItemID;
	Parms.LocalInventory = LocalInventory;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_AddItemToStack_AmountRemaining = CallFunc_AddItemToStack_AmountRemaining;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_EqualEqual_NameName_ReturnValue = CallFunc_EqualEqual_NameName_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (AmountRemaining != nullptr)
		*AmountRemaining = Parms.AmountRemaining;

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.ClearInventorySlotItem
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InventorySlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryManagerComponent_C::ClearInventorySlotItem(int32 InventorySlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "ClearInventorySlotItem");

	Params::UInventoryManagerComponent_C_ClearInventorySlotItem_Params Parms{};

	Parms.InventorySlot = InventorySlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.SetInventorySlotItem
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InventorySlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemInformation            ItemInformation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UInventoryManagerComponent_C::SetInventorySlotItem(int32 InventorySlot, const struct FItemInformation& ItemInformation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "SetInventorySlotItem");

	Params::UInventoryManagerComponent_C_SetInventorySlotItem_Params Parms{};

	Parms.InventorySlot = InventorySlot;
	Parms.ItemInformation = ItemInformation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.CreateInventorySlots
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InventorySize                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              SlotsPerRow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              LocalMaxRowSize                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LocalLoopCount                                                   (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LocalSlotNumber                                                  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LocalInventorySize                                               (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_ByteToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FCeil_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryManagerComponent_C::CreateInventorySlots(int32 InventorySize, uint8 SlotsPerRow, uint8 LocalMaxRowSize, int32 LocalLoopCount, int32 LocalSlotNumber, int32 LocalInventorySize, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_ByteToFloat_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_FCeil_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Max_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Variable_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_MakeLiteralInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "CreateInventorySlots");

	Params::UInventoryManagerComponent_C_CreateInventorySlots_Params Parms{};

	Parms.InventorySize = InventorySize;
	Parms.SlotsPerRow = SlotsPerRow;
	Parms.LocalMaxRowSize = LocalMaxRowSize;
	Parms.LocalLoopCount = LocalLoopCount;
	Parms.LocalSlotNumber = LocalSlotNumber;
	Parms.LocalInventorySize = LocalInventorySize;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_ByteToFloat_ReturnValue = CallFunc_Conv_ByteToFloat_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_FCeil_ReturnValue = CallFunc_FCeil_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue_1 = CallFunc_LessEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.LoadInventory
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UInventory_Slot_C*>   LocalInventorySlots                                              (Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)

void UInventoryManagerComponent_C::LoadInventory(const TArray<class UInventory_Slot_C*>& LocalInventorySlots)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "LoadInventory");

	Params::UInventoryManagerComponent_C_LoadInventory_Params Parms{};

	Parms.LocalInventorySlots = LocalInventorySlots;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.CloseInventoryWindow
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory_Slot_C*           CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryManagerComponent_C::CloseInventoryWindow(int32 CallFunc_MakeLiteralInt_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Array_Length_ReturnValue, class UInventory_Slot_C* CallFunc_Array_Get_Item, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "CloseInventoryWindow");

	Params::UInventoryManagerComponent_C_CloseInventoryWindow_Params Parms{};

	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.OpenInventoryWindow
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UInventoryManagerComponent_C::OpenInventoryWindow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "OpenInventoryWindow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.Client_OpenContainer
// (Net, NetReliable, HasOutParams, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FContainerInfo              ContainerProperties                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// TArray<struct FItemInformation>    ItemInformation                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UInventoryManagerComponent_C::Client_OpenContainer(const struct FContainerInfo& ContainerProperties, TArray<struct FItemInformation>& ItemInformation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "Client_OpenContainer");

	Params::UInventoryManagerComponent_C_Client_OpenContainer_Params Parms{};

	Parms.ContainerProperties = ContainerProperties;
	Parms.ItemInformation = ItemInformation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.Client_CloseContainer
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void UInventoryManagerComponent_C::Client_CloseContainer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "Client_CloseContainer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.Client_SetContainerSlotItem
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ContainerSlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemInformation            ItemInformation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UInventoryManagerComponent_C::Client_SetContainerSlotItem(int32 ContainerSlot, const struct FItemInformation& ItemInformation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "Client_SetContainerSlotItem");

	Params::UInventoryManagerComponent_C_Client_SetContainerSlotItem_Params Parms{};

	Parms.ContainerSlot = ContainerSlot;
	Parms.ItemInformation = ItemInformation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.Client_ClearContainerSlotItem
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ContainerSlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryManagerComponent_C::Client_ClearContainerSlotItem(int32 ContainerSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "Client_ClearContainerSlotItem");

	Params::UInventoryManagerComponent_C_Client_ClearContainerSlotItem_Params Parms{};

	Parms.ContainerSlot = ContainerSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.Server_UseContainer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Container                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryManagerComponent_C::Server_UseContainer(class AActor* Container)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "Server_UseContainer");

	Params::UInventoryManagerComponent_C_Server_UseContainer_Params Parms{};

	Parms.Container = Container;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.Server_CloseContainer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UInventoryManagerComponent_C::Server_CloseContainer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "Server_CloseContainer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.Server_MoveContainerItem
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              FromContainerSlot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ToContainerSlot                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryManagerComponent_C::Server_MoveContainerItem(int32 FromContainerSlot, int32 ToContainerSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "Server_MoveContainerItem");

	Params::UInventoryManagerComponent_C_Server_MoveContainerItem_Params Parms{};

	Parms.FromContainerSlot = FromContainerSlot;
	Parms.ToContainerSlot = ToContainerSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.Server_TakeContainerItem
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              FromContainerSlot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ToInventorySlot                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryManagerComponent_C::Server_TakeContainerItem(int32 FromContainerSlot, int32 ToInventorySlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "Server_TakeContainerItem");

	Params::UInventoryManagerComponent_C_Server_TakeContainerItem_Params Parms{};

	Parms.FromContainerSlot = FromContainerSlot;
	Parms.ToInventorySlot = ToInventorySlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.Server_DepositContainerItem
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              FromInventorySlot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ToContainerSlot                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryManagerComponent_C::Server_DepositContainerItem(int32 FromInventorySlot, int32 ToContainerSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "Server_DepositContainerItem");

	Params::UInventoryManagerComponent_C_Server_DepositContainerItem_Params Parms{};

	Parms.FromInventorySlot = FromInventorySlot;
	Parms.ToContainerSlot = ToContainerSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.Server_UseInventoryItem
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InventorySlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryManagerComponent_C::Server_UseInventoryItem(int32 InventorySlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "Server_UseInventoryItem");

	Params::UInventoryManagerComponent_C_Server_UseInventoryItem_Params Parms{};

	Parms.InventorySlot = InventorySlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.Server_UseContainerItem
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ContainerSlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryManagerComponent_C::Server_UseContainerItem(int32 ContainerSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "Server_UseContainerItem");

	Params::UInventoryManagerComponent_C_Server_UseContainerItem_Params Parms{};

	Parms.ContainerSlot = ContainerSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.Server_EquipFromInventory
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              FromInventorySlot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ToInventorySlot                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryManagerComponent_C::Server_EquipFromInventory(int32 FromInventorySlot, int32 ToInventorySlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "Server_EquipFromInventory");

	Params::UInventoryManagerComponent_C_Server_EquipFromInventory_Params Parms{};

	Parms.FromInventorySlot = FromInventorySlot;
	Parms.ToInventorySlot = ToInventorySlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.Server_UnequipToInventory
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              FromInventorySlot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ToInventorySlot                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryManagerComponent_C::Server_UnequipToInventory(int32 FromInventorySlot, int32 ToInventorySlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "Server_UnequipToInventory");

	Params::UInventoryManagerComponent_C_Server_UnequipToInventory_Params Parms{};

	Parms.FromInventorySlot = FromInventorySlot;
	Parms.ToInventorySlot = ToInventorySlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.Server_EquipFromContainer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              FromInventorySlot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ToInventorySlot                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryManagerComponent_C::Server_EquipFromContainer(int32 FromInventorySlot, int32 ToInventorySlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "Server_EquipFromContainer");

	Params::UInventoryManagerComponent_C_Server_EquipFromContainer_Params Parms{};

	Parms.FromInventorySlot = FromInventorySlot;
	Parms.ToInventorySlot = ToInventorySlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.Server_UnequipToContainer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              FromInventorySlot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ToInventorySlot                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryManagerComponent_C::Server_UnequipToContainer(int32 FromInventorySlot, int32 ToInventorySlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "Server_UnequipToContainer");

	Params::UInventoryManagerComponent_C_Server_UnequipToContainer_Params Parms{};

	Parms.FromInventorySlot = FromInventorySlot;
	Parms.ToInventorySlot = ToInventorySlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.Server_InitInventory
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UInventoryManagerComponent_C::Server_InitInventory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "Server_InitInventory");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.Server_DropItemFromInventory
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InventorySlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryManagerComponent_C::Server_DropItemFromInventory(int32 InventorySlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "Server_DropItemFromInventory");

	Params::UInventoryManagerComponent_C_Server_DropItemFromInventory_Params Parms{};

	Parms.InventorySlot = InventorySlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.Server_GetInventoryItemToolTip
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InventorySlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryManagerComponent_C::Server_GetInventoryItemToolTip(int32 InventorySlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "Server_GetInventoryItemToolTip");

	Params::UInventoryManagerComponent_C_Server_GetInventoryItemToolTip_Params Parms{};

	Parms.InventorySlot = InventorySlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.Client_SetToolTip
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FToolTipInfo                ToolTipInfo                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UInventoryManagerComponent_C::Client_SetToolTip(const struct FToolTipInfo& ToolTipInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "Client_SetToolTip");

	Params::UInventoryManagerComponent_C_Client_SetToolTip_Params Parms{};

	Parms.ToolTipInfo = ToolTipInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.Client_ClearToolTip
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ItemName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryManagerComponent_C::Client_ClearToolTip(class FName ItemName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "Client_ClearToolTip");

	Params::UInventoryManagerComponent_C_Client_ClearToolTip_Params Parms{};

	Parms.ItemName = ItemName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.Server_GetContainerItemToolTip
// (Net, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ContainerSlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryManagerComponent_C::Server_GetContainerItemToolTip(int32 ContainerSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "Server_GetContainerItemToolTip");

	Params::UInventoryManagerComponent_C_Server_GetContainerItemToolTip_Params Parms{};

	Parms.ContainerSlot = ContainerSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.Client_UseHotbarSlot
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              HotbarSlot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryManagerComponent_C::Client_UseHotbarSlot(int32 HotbarSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "Client_UseHotbarSlot");

	Params::UInventoryManagerComponent_C_Client_UseHotbarSlot_Params Parms{};

	Parms.HotbarSlot = HotbarSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.Client_ClearHotbarSlot
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              HotbarSlot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryManagerComponent_C::Client_ClearHotbarSlot(int32 HotbarSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "Client_ClearHotbarSlot");

	Params::UInventoryManagerComponent_C_Client_ClearHotbarSlot_Params Parms{};

	Parms.HotbarSlot = HotbarSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.Server_SplitInventoryItem
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              FromInventorySlot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ToInventorySlot                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryManagerComponent_C::Server_SplitInventoryItem(int32 FromInventorySlot, int32 ToInventorySlot, int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "Server_SplitInventoryItem");

	Params::UInventoryManagerComponent_C_Server_SplitInventoryItem_Params Parms{};

	Parms.FromInventorySlot = FromInventorySlot;
	Parms.ToInventorySlot = ToInventorySlot;
	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.Server_SplitContainerItem
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              FromContainerSlot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ToContainerSlot                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryManagerComponent_C::Server_SplitContainerItem(int32 FromContainerSlot, int32 ToContainerSlot, int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "Server_SplitContainerItem");

	Params::UInventoryManagerComponent_C_Server_SplitContainerItem_Params Parms{};

	Parms.FromContainerSlot = FromContainerSlot;
	Parms.ToContainerSlot = ToContainerSlot;
	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.Server_SplitItemFromInventory
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              FromInventorySlot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ToContainerSlot                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryManagerComponent_C::Server_SplitItemFromInventory(int32 FromInventorySlot, int32 ToContainerSlot, int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "Server_SplitItemFromInventory");

	Params::UInventoryManagerComponent_C_Server_SplitItemFromInventory_Params Parms{};

	Parms.FromInventorySlot = FromInventorySlot;
	Parms.ToContainerSlot = ToContainerSlot;
	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.Server_SplitItemFromContainer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              FromContainerSlot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              FromInventorySlot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryManagerComponent_C::Server_SplitItemFromContainer(int32 FromContainerSlot, int32 FromInventorySlot, int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "Server_SplitItemFromContainer");

	Params::UInventoryManagerComponent_C_Server_SplitItemFromContainer_Params Parms{};

	Parms.FromContainerSlot = FromContainerSlot;
	Parms.FromInventorySlot = FromInventorySlot;
	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.Client_MoveHotbarSlotItem
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              FromSlot                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ToHotBarSlot                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               FromInventory                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               FromHotbar                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventoryManagerComponent_C::Client_MoveHotbarSlotItem(int32 FromSlot, int32 ToHotBarSlot, bool FromInventory, bool FromHotbar)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "Client_MoveHotbarSlotItem");

	Params::UInventoryManagerComponent_C_Client_MoveHotbarSlotItem_Params Parms{};

	Parms.FromSlot = FromSlot;
	Parms.ToHotBarSlot = ToHotBarSlot;
	Parms.FromInventory = FromInventory;
	Parms.FromHotbar = FromHotbar;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.Server_MoveInventoryItem
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              FromInventorySlot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ToInventorySlot                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryManagerComponent_C::Server_MoveInventoryItem(int32 FromInventorySlot, int32 ToInventorySlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "Server_MoveInventoryItem");

	Params::UInventoryManagerComponent_C_Server_MoveInventoryItem_Params Parms{};

	Parms.FromInventorySlot = FromInventorySlot;
	Parms.ToInventorySlot = ToInventorySlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.Server_IncreaseInventorySize
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryManagerComponent_C::Server_IncreaseInventorySize(int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "Server_IncreaseInventorySize");

	Params::UInventoryManagerComponent_C_Server_IncreaseInventorySize_Params Parms{};

	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.Server_DecreaseInventorySize
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryManagerComponent_C::Server_DecreaseInventorySize(int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "Server_DecreaseInventorySize");

	Params::UInventoryManagerComponent_C_Server_DecreaseInventorySize_Params Parms{};

	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.Client_IncreaseInventorySlots
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryManagerComponent_C::Client_IncreaseInventorySlots(int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "Client_IncreaseInventorySlots");

	Params::UInventoryManagerComponent_C_Client_IncreaseInventorySlots_Params Parms{};

	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.Client_DecreaseInventorySlots
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryManagerComponent_C::Client_DecreaseInventorySlots(int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "Client_DecreaseInventorySlots");

	Params::UInventoryManagerComponent_C_Client_DecreaseInventorySlots_Params Parms{};

	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.Client_OpenInventory
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void UInventoryManagerComponent_C::Client_OpenInventory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "Client_OpenInventory");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.Client_CloseInventory
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void UInventoryManagerComponent_C::Client_CloseInventory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "Client_CloseInventory");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.Client_OpenEquipment
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void UInventoryManagerComponent_C::Client_OpenEquipment()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "Client_OpenEquipment");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.Client_CloseEquipment
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void UInventoryManagerComponent_C::Client_CloseEquipment()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "Client_CloseEquipment");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.Server_RefreshInventorySlots
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UInventoryManagerComponent_C::Server_RefreshInventorySlots()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "Server_RefreshInventorySlots");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.Client_ClearInventorySlotItems
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void UInventoryManagerComponent_C::Client_ClearInventorySlotItems()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "Client_ClearInventorySlotItems");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.Server_ThrowNextInventoryItem
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UInventoryManagerComponent_C::Server_ThrowNextInventoryItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "Server_ThrowNextInventoryItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.ServerFillEmptySlots
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UInventoryManagerComponent_C::ServerFillEmptySlots()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "ServerFillEmptySlots");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.Server_DropAllItems
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UInventoryManagerComponent_C::Server_DropAllItems()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "Server_DropAllItems");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.Server_IndentAllItems
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UInventoryManagerComponent_C::Server_IndentAllItems()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "Server_IndentAllItems");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.Client_GetContainerSlotItem
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ContainerSlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryManagerComponent_C::Client_GetContainerSlotItem(int32 ContainerSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "Client_GetContainerSlotItem");

	Params::UInventoryManagerComponent_C_Client_GetContainerSlotItem_Params Parms{};

	Parms.ContainerSlot = ContainerSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.Client_SetInventorySlotItem
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InventorySlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemInformation            Item_Information                                                 (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UInventoryManagerComponent_C::Client_SetInventorySlotItem(int32 InventorySlot, const struct FItemInformation& Item_Information)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "Client_SetInventorySlotItem");

	Params::UInventoryManagerComponent_C_Client_SetInventorySlotItem_Params Parms{};

	Parms.InventorySlot = InventorySlot;
	Parms.Item_Information = Item_Information;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.Client_ClearInventorySlotItem
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              InventorySlot                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryManagerComponent_C::Client_ClearInventorySlotItem(int32 InventorySlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "Client_ClearInventorySlotItem");

	Params::UInventoryManagerComponent_C_Client_ClearInventorySlotItem_Params Parms{};

	Parms.InventorySlot = InventorySlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.Client_LoadInventory
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:

void UInventoryManagerComponent_C::Client_LoadInventory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "Client_LoadInventory");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.ExecuteUbergraph_InventoryManagerComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UKeyboardModeNotifierComponent_C*CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FContainerInfo              K2Node_CustomEvent_ContainerProperties                           (HasGetValueTypeHash)
// TArray<struct FItemInformation>    K2Node_CustomEvent_ItemInformation_1                             (ConstParm, ReferenceParm, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_ContainerSlot_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemInformation            K2Node_CustomEvent_ItemInformation                               (HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_ContainerSlot_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_Container                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_FromContainerSlot_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_ToContainerSlot_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_FromContainerSlot_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_ToInventorySlot_6                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_FromInventorySlot_8                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_ToContainerSlot_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_InventorySlot_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UseInventoryItem_ItemUsed                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_ContainerSlot_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_FromInventorySlot_7                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_ToInventorySlot_5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_FromInventorySlot_6                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_ToInventorySlot_4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_FromInventorySlot_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_ToInventorySlot_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_FromInventorySlot_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_ToInventorySlot_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_InventorySlot_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_InventorySlot_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FToolTipInfo                K2Node_CustomEvent_ToolTipInfo                                   (HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_ItemName                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_ContainerSlot_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_HotbarSlot_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_HotbarSlot                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_FromInventorySlot_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_ToInventorySlot_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Amount_7                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_FromContainerSlot_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_ToContainerSlot_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Amount_6                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_FromInventorySlot_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_ToContainerSlot                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Amount_5                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_FromContainerSlot                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_FromInventorySlot_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Amount_4                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_FromSlot                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_ToHotbarSlot                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_FromInventory                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_FromHotbar                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_FromInventorySlot                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_ToInventorySlot                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Amount_3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Amount_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Amount_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Amount                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               K2Node_DynamicCast_AsGameplay_PC                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameplayPC_C*               K2Node_DynamicCast_AsGameplay_PC_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_ContainerSlot                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_InventorySlot_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemInformation            K2Node_CustomEvent_Item_Information                              (HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_InventorySlot                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryManagerComponent_C::ExecuteUbergraph_InventoryManagerComponent(int32 EntryPoint, class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier, const struct FContainerInfo& K2Node_CustomEvent_ContainerProperties, TArray<struct FItemInformation>& K2Node_CustomEvent_ItemInformation_1, int32 K2Node_CustomEvent_ContainerSlot_4, const struct FItemInformation& K2Node_CustomEvent_ItemInformation, int32 K2Node_CustomEvent_ContainerSlot_3, class AActor* K2Node_CustomEvent_Container, int32 K2Node_CustomEvent_FromContainerSlot_3, int32 K2Node_CustomEvent_ToContainerSlot_3, int32 K2Node_CustomEvent_FromContainerSlot_2, int32 K2Node_CustomEvent_ToInventorySlot_6, int32 K2Node_CustomEvent_FromInventorySlot_8, int32 K2Node_CustomEvent_ToContainerSlot_2, int32 K2Node_CustomEvent_InventorySlot_4, bool CallFunc_UseInventoryItem_ItemUsed, int32 K2Node_CustomEvent_ContainerSlot_2, int32 K2Node_CustomEvent_FromInventorySlot_7, int32 K2Node_CustomEvent_ToInventorySlot_5, int32 K2Node_CustomEvent_FromInventorySlot_6, int32 K2Node_CustomEvent_ToInventorySlot_4, int32 K2Node_CustomEvent_FromInventorySlot_5, int32 K2Node_CustomEvent_ToInventorySlot_3, int32 K2Node_CustomEvent_FromInventorySlot_4, int32 K2Node_CustomEvent_ToInventorySlot_2, int32 K2Node_CustomEvent_InventorySlot_3, int32 K2Node_CustomEvent_InventorySlot_2, const struct FToolTipInfo& K2Node_CustomEvent_ToolTipInfo, class FName K2Node_CustomEvent_ItemName, int32 K2Node_CustomEvent_ContainerSlot_1, int32 K2Node_CustomEvent_HotbarSlot_1, int32 K2Node_CustomEvent_HotbarSlot, int32 K2Node_CustomEvent_FromInventorySlot_3, int32 K2Node_CustomEvent_ToInventorySlot_1, int32 K2Node_CustomEvent_Amount_7, int32 K2Node_CustomEvent_FromContainerSlot_1, int32 K2Node_CustomEvent_ToContainerSlot_1, int32 K2Node_CustomEvent_Amount_6, int32 K2Node_CustomEvent_FromInventorySlot_2, int32 K2Node_CustomEvent_ToContainerSlot, int32 K2Node_CustomEvent_Amount_5, int32 K2Node_CustomEvent_FromContainerSlot, int32 K2Node_CustomEvent_FromInventorySlot_1, int32 K2Node_CustomEvent_Amount_4, int32 K2Node_CustomEvent_FromSlot, int32 K2Node_CustomEvent_ToHotbarSlot, bool K2Node_CustomEvent_FromInventory, bool K2Node_CustomEvent_FromHotbar, int32 K2Node_CustomEvent_FromInventorySlot, int32 K2Node_CustomEvent_ToInventorySlot, int32 K2Node_CustomEvent_Amount_3, int32 K2Node_CustomEvent_Amount_2, int32 K2Node_CustomEvent_Amount_1, int32 K2Node_CustomEvent_Amount, class AActor* CallFunc_GetOwner_ReturnValue, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC, bool K2Node_DynamicCast_bSuccess, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC_1, bool K2Node_DynamicCast_bSuccess_1, int32 K2Node_CustomEvent_ContainerSlot, int32 K2Node_CustomEvent_InventorySlot_1, const struct FItemInformation& K2Node_CustomEvent_Item_Information, int32 K2Node_CustomEvent_InventorySlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "ExecuteUbergraph_InventoryManagerComponent");

	Params::UInventoryManagerComponent_C_ExecuteUbergraph_InventoryManagerComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier = CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier;
	Parms.K2Node_CustomEvent_ContainerProperties = K2Node_CustomEvent_ContainerProperties;
	Parms.K2Node_CustomEvent_ItemInformation_1 = K2Node_CustomEvent_ItemInformation_1;
	Parms.K2Node_CustomEvent_ContainerSlot_4 = K2Node_CustomEvent_ContainerSlot_4;
	Parms.K2Node_CustomEvent_ItemInformation = K2Node_CustomEvent_ItemInformation;
	Parms.K2Node_CustomEvent_ContainerSlot_3 = K2Node_CustomEvent_ContainerSlot_3;
	Parms.K2Node_CustomEvent_Container = K2Node_CustomEvent_Container;
	Parms.K2Node_CustomEvent_FromContainerSlot_3 = K2Node_CustomEvent_FromContainerSlot_3;
	Parms.K2Node_CustomEvent_ToContainerSlot_3 = K2Node_CustomEvent_ToContainerSlot_3;
	Parms.K2Node_CustomEvent_FromContainerSlot_2 = K2Node_CustomEvent_FromContainerSlot_2;
	Parms.K2Node_CustomEvent_ToInventorySlot_6 = K2Node_CustomEvent_ToInventorySlot_6;
	Parms.K2Node_CustomEvent_FromInventorySlot_8 = K2Node_CustomEvent_FromInventorySlot_8;
	Parms.K2Node_CustomEvent_ToContainerSlot_2 = K2Node_CustomEvent_ToContainerSlot_2;
	Parms.K2Node_CustomEvent_InventorySlot_4 = K2Node_CustomEvent_InventorySlot_4;
	Parms.CallFunc_UseInventoryItem_ItemUsed = CallFunc_UseInventoryItem_ItemUsed;
	Parms.K2Node_CustomEvent_ContainerSlot_2 = K2Node_CustomEvent_ContainerSlot_2;
	Parms.K2Node_CustomEvent_FromInventorySlot_7 = K2Node_CustomEvent_FromInventorySlot_7;
	Parms.K2Node_CustomEvent_ToInventorySlot_5 = K2Node_CustomEvent_ToInventorySlot_5;
	Parms.K2Node_CustomEvent_FromInventorySlot_6 = K2Node_CustomEvent_FromInventorySlot_6;
	Parms.K2Node_CustomEvent_ToInventorySlot_4 = K2Node_CustomEvent_ToInventorySlot_4;
	Parms.K2Node_CustomEvent_FromInventorySlot_5 = K2Node_CustomEvent_FromInventorySlot_5;
	Parms.K2Node_CustomEvent_ToInventorySlot_3 = K2Node_CustomEvent_ToInventorySlot_3;
	Parms.K2Node_CustomEvent_FromInventorySlot_4 = K2Node_CustomEvent_FromInventorySlot_4;
	Parms.K2Node_CustomEvent_ToInventorySlot_2 = K2Node_CustomEvent_ToInventorySlot_2;
	Parms.K2Node_CustomEvent_InventorySlot_3 = K2Node_CustomEvent_InventorySlot_3;
	Parms.K2Node_CustomEvent_InventorySlot_2 = K2Node_CustomEvent_InventorySlot_2;
	Parms.K2Node_CustomEvent_ToolTipInfo = K2Node_CustomEvent_ToolTipInfo;
	Parms.K2Node_CustomEvent_ItemName = K2Node_CustomEvent_ItemName;
	Parms.K2Node_CustomEvent_ContainerSlot_1 = K2Node_CustomEvent_ContainerSlot_1;
	Parms.K2Node_CustomEvent_HotbarSlot_1 = K2Node_CustomEvent_HotbarSlot_1;
	Parms.K2Node_CustomEvent_HotbarSlot = K2Node_CustomEvent_HotbarSlot;
	Parms.K2Node_CustomEvent_FromInventorySlot_3 = K2Node_CustomEvent_FromInventorySlot_3;
	Parms.K2Node_CustomEvent_ToInventorySlot_1 = K2Node_CustomEvent_ToInventorySlot_1;
	Parms.K2Node_CustomEvent_Amount_7 = K2Node_CustomEvent_Amount_7;
	Parms.K2Node_CustomEvent_FromContainerSlot_1 = K2Node_CustomEvent_FromContainerSlot_1;
	Parms.K2Node_CustomEvent_ToContainerSlot_1 = K2Node_CustomEvent_ToContainerSlot_1;
	Parms.K2Node_CustomEvent_Amount_6 = K2Node_CustomEvent_Amount_6;
	Parms.K2Node_CustomEvent_FromInventorySlot_2 = K2Node_CustomEvent_FromInventorySlot_2;
	Parms.K2Node_CustomEvent_ToContainerSlot = K2Node_CustomEvent_ToContainerSlot;
	Parms.K2Node_CustomEvent_Amount_5 = K2Node_CustomEvent_Amount_5;
	Parms.K2Node_CustomEvent_FromContainerSlot = K2Node_CustomEvent_FromContainerSlot;
	Parms.K2Node_CustomEvent_FromInventorySlot_1 = K2Node_CustomEvent_FromInventorySlot_1;
	Parms.K2Node_CustomEvent_Amount_4 = K2Node_CustomEvent_Amount_4;
	Parms.K2Node_CustomEvent_FromSlot = K2Node_CustomEvent_FromSlot;
	Parms.K2Node_CustomEvent_ToHotbarSlot = K2Node_CustomEvent_ToHotbarSlot;
	Parms.K2Node_CustomEvent_FromInventory = K2Node_CustomEvent_FromInventory;
	Parms.K2Node_CustomEvent_FromHotbar = K2Node_CustomEvent_FromHotbar;
	Parms.K2Node_CustomEvent_FromInventorySlot = K2Node_CustomEvent_FromInventorySlot;
	Parms.K2Node_CustomEvent_ToInventorySlot = K2Node_CustomEvent_ToInventorySlot;
	Parms.K2Node_CustomEvent_Amount_3 = K2Node_CustomEvent_Amount_3;
	Parms.K2Node_CustomEvent_Amount_2 = K2Node_CustomEvent_Amount_2;
	Parms.K2Node_CustomEvent_Amount_1 = K2Node_CustomEvent_Amount_1;
	Parms.K2Node_CustomEvent_Amount = K2Node_CustomEvent_Amount;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsGameplay_PC = K2Node_DynamicCast_AsGameplay_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGameplay_PC_1 = K2Node_DynamicCast_AsGameplay_PC_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CustomEvent_ContainerSlot = K2Node_CustomEvent_ContainerSlot;
	Parms.K2Node_CustomEvent_InventorySlot_1 = K2Node_CustomEvent_InventorySlot_1;
	Parms.K2Node_CustomEvent_Item_Information = K2Node_CustomEvent_Item_Information;
	Parms.K2Node_CustomEvent_InventorySlot = K2Node_CustomEvent_InventorySlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryManagerComponent.InventoryManagerComponent_C.ItemAddedToInventory__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FToolTipInfo                InventoryItem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                              Familiarity                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MaxFamiliarity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryManagerComponent_C::ItemAddedToInventory__DelegateSignature(const struct FToolTipInfo& InventoryItem, int32 Familiarity, int32 MaxFamiliarity, class FName ID, int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryManagerComponent_C", "ItemAddedToInventory__DelegateSignature");

	Params::UInventoryManagerComponent_C_ItemAddedToInventory__DelegateSignature_Params Parms{};

	Parms.InventoryItem = InventoryItem;
	Parms.Familiarity = Familiarity;
	Parms.MaxFamiliarity = MaxFamiliarity;
	Parms.ID = ID;
	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);

}

}


