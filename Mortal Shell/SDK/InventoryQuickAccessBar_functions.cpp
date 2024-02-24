#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass InventoryQuickAccessBar.InventoryQuickAccessBar_C
// (None)

class UClass* UInventoryQuickAccessBar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InventoryQuickAccessBar_C");

	return Clss;
}


// InventoryQuickAccessBar_C InventoryQuickAccessBar.Default__InventoryQuickAccessBar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInventoryQuickAccessBar_C* UInventoryQuickAccessBar_C::GetDefaultObj()
{
	static class UInventoryQuickAccessBar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInventoryQuickAccessBar_C*>(UInventoryQuickAccessBar_C::StaticClass()->DefaultObject);

	return Default;
}


// Function InventoryQuickAccessBar.InventoryQuickAccessBar_C.BuildQuickSlots
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Local_Index                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Local_ArrayElem                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               K2Node_DynamicCast_AsGameplay_PC                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQuickAccessSlot_C*          CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// struct FInventoryItem              CallFunc_GetQuickAccessItem_QuickAccessItem                      (HasGetValueTypeHash)
// bool                               CallFunc_GetQuickAccessItem_bValidItem                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventoryQuickAccessBar_C::BuildQuickSlots(int32 Local_Index, int32 Local_ArrayElem, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC, bool K2Node_DynamicCast_bSuccess, class UQuickAccessSlot_C* CallFunc_Array_Get_Item, TArray<int32>& K2Node_MakeArray_Array, const struct FInventoryItem& CallFunc_GetQuickAccessItem_QuickAccessItem, bool CallFunc_GetQuickAccessItem_bValidItem, int32 CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryQuickAccessBar_C", "BuildQuickSlots");

	Params::UInventoryQuickAccessBar_C_BuildQuickSlots_Params Parms{};

	Parms.Local_Index = Local_Index;
	Parms.Local_ArrayElem = Local_ArrayElem;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsGameplay_PC = K2Node_DynamicCast_AsGameplay_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetQuickAccessItem_QuickAccessItem = CallFunc_GetQuickAccessItem_QuickAccessItem;
	Parms.CallFunc_GetQuickAccessItem_bValidItem = CallFunc_GetQuickAccessItem_bValidItem;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryQuickAccessBar.InventoryQuickAccessBar_C.GetSlots
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UQuickAccessSlot_C*>  Array                                                            (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UQuickAccessSlot_C*>  K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)

void UInventoryQuickAccessBar_C::GetSlots(TArray<class UQuickAccessSlot_C*>* Array, TArray<class UQuickAccessSlot_C*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryQuickAccessBar_C", "GetSlots");

	Params::UInventoryQuickAccessBar_C_GetSlots_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (Array != nullptr)
		*Array = std::move(Parms.Array);

}


// Function InventoryQuickAccessBar.InventoryQuickAccessBar_C.SetInventoryWidgetRef
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UQuickAccessSlot_C*>  CallFunc_GetSlots_Array                                          (ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// class UQuickAccessSlot_C*          CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventoryQuickAccessBar_C::SetInventoryWidgetRef(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UQuickAccessSlot_C*>& CallFunc_GetSlots_Array, class UQuickAccessSlot_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryQuickAccessBar_C", "SetInventoryWidgetRef");

	Params::UInventoryQuickAccessBar_C_SetInventoryWidgetRef_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetSlots_Array = CallFunc_GetSlots_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryQuickAccessBar.InventoryQuickAccessBar_C.GetNextNavGridItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CurrentIndex                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ENavDirection           Direction                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NewIndex                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsValidNextItem                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bHitLimit                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CalcedIndex                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              DirectionInt                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventoryQuickAccessBar_C::GetNextNavGridItem(int32 CurrentIndex, enum class ENavDirection Direction, int32* NewIndex, bool* bIsValidNextItem, bool* bHitLimit, int32 CalcedIndex, int32 DirectionInt, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryQuickAccessBar_C", "GetNextNavGridItem");

	Params::UInventoryQuickAccessBar_C_GetNextNavGridItem_Params Parms{};

	Parms.CurrentIndex = CurrentIndex;
	Parms.Direction = Direction;
	Parms.CalcedIndex = CalcedIndex;
	Parms.DirectionInt = DirectionInt;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (NewIndex != nullptr)
		*NewIndex = Parms.NewIndex;

	if (bIsValidNextItem != nullptr)
		*bIsValidNextItem = Parms.bIsValidNextItem;

	if (bHitLimit != nullptr)
		*bHitLimit = Parms.bHitLimit;

}


// Function InventoryQuickAccessBar.InventoryQuickAccessBar_C.AssignItemToSlot
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ItemInventorySlot                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              QuickAccessSlot                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryQuickAccessBar_C::AssignItemToSlot(int32 ItemInventorySlot, int32 QuickAccessSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryQuickAccessBar_C", "AssignItemToSlot");

	Params::UInventoryQuickAccessBar_C_AssignItemToSlot_Params Parms{};

	Parms.ItemInventorySlot = ItemInventorySlot;
	Parms.QuickAccessSlot = QuickAccessSlot;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryQuickAccessBar.InventoryQuickAccessBar_C.RebuildQuickAccessSlotWidgets
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UInventoryQuickAccessBar_C::RebuildQuickAccessSlotWidgets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryQuickAccessBar_C", "RebuildQuickAccessSlotWidgets");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InventoryQuickAccessBar.InventoryQuickAccessBar_C.EnableQuickAssignMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UInventoryQuickAccessBar_C::EnableQuickAssignMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryQuickAccessBar_C", "EnableQuickAssignMode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InventoryQuickAccessBar.InventoryQuickAccessBar_C.DisabledQuickAssignMode
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UInventoryQuickAccessBar_C::DisabledQuickAssignMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryQuickAccessBar_C", "DisabledQuickAssignMode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InventoryQuickAccessBar.InventoryQuickAccessBar_C.RemoveItemToSlot
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              QuickSlotIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryQuickAccessBar_C::RemoveItemToSlot(int32 QuickSlotIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryQuickAccessBar_C", "RemoveItemToSlot");

	Params::UInventoryQuickAccessBar_C_RemoveItemToSlot_Params Parms{};

	Parms.QuickSlotIndex = QuickSlotIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryQuickAccessBar.InventoryQuickAccessBar_C.ExecuteUbergraph_InventoryQuickAccessBar
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_ItemInventorySlot                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_QuickAccessSlot                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               K2Node_DynamicCast_AsGameplay_PC                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQuickAccessSlot_C*          CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQuickAccessSlot_C*          CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQuickAccessSlot_C*          CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_QuickSlotIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameplayPC_C*               K2Node_DynamicCast_AsGameplay_PC_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQuickAccessSlot_C*          CallFunc_Array_Get_Item_3                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInventoryQuickAccessBar_C::ExecuteUbergraph_InventoryQuickAccessBar(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 K2Node_CustomEvent_ItemInventorySlot, int32 K2Node_CustomEvent_QuickAccessSlot, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, class UQuickAccessSlot_C* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class UQuickAccessSlot_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UQuickAccessSlot_C* CallFunc_Array_Get_Item_2, int32 K2Node_CustomEvent_QuickSlotIndex, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC_1, bool K2Node_DynamicCast_bSuccess_1, class UQuickAccessSlot_C* CallFunc_Array_Get_Item_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryQuickAccessBar_C", "ExecuteUbergraph_InventoryQuickAccessBar");

	Params::UInventoryQuickAccessBar_C_ExecuteUbergraph_InventoryQuickAccessBar_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.K2Node_CustomEvent_ItemInventorySlot = K2Node_CustomEvent_ItemInventorySlot;
	Parms.K2Node_CustomEvent_QuickAccessSlot = K2Node_CustomEvent_QuickAccessSlot;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsGameplay_PC = K2Node_DynamicCast_AsGameplay_PC;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.K2Node_CustomEvent_QuickSlotIndex = K2Node_CustomEvent_QuickSlotIndex;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsGameplay_PC_1 = K2Node_DynamicCast_AsGameplay_PC_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InventoryQuickAccessBar.InventoryQuickAccessBar_C.OnQuickAccessSlotsChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               QuickIndicatorAnim                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UInventoryQuickAccessBar_C::OnQuickAccessSlotsChanged__DelegateSignature(bool QuickIndicatorAnim)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InventoryQuickAccessBar_C", "OnQuickAccessSlotsChanged__DelegateSignature");

	Params::UInventoryQuickAccessBar_C_OnQuickAccessSlotsChanged__DelegateSignature_Params Parms{};

	Parms.QuickIndicatorAnim = QuickIndicatorAnim;

	UObject::ProcessEvent(Func, &Parms);

}

}


