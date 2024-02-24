#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_InventoryPaperDoll.UMG_InventoryPaperDoll_C
// (None)

class UClass* UUMG_InventoryPaperDoll_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_InventoryPaperDoll_C");

	return Clss;
}


// UMG_InventoryPaperDoll_C UMG_InventoryPaperDoll.Default__UMG_InventoryPaperDoll_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_InventoryPaperDoll_C* UUMG_InventoryPaperDoll_C::GetDefaultObj()
{
	static class UUMG_InventoryPaperDoll_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_InventoryPaperDoll_C*>(UUMG_InventoryPaperDoll_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_InventoryPaperDoll.UMG_InventoryPaperDoll_C.UMG_InventoryPaperDoll_AutoGenFunc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CurrentLocation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  Inventory                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_InventoryPaperDoll_C::UMG_InventoryPaperDoll_AutoGenFunc(int32 CurrentLocation, class UInventory* Inventory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_InventoryPaperDoll_C", "UMG_InventoryPaperDoll_AutoGenFunc");

	Params::UUMG_InventoryPaperDoll_C_UMG_InventoryPaperDoll_AutoGenFunc_Params Parms{};

	Parms.CurrentLocation = CurrentLocation;
	Parms.Inventory = Inventory;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_InventoryPaperDoll.UMG_InventoryPaperDoll_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UInventory*                  BoundInventory                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_3                                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_4                                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_5                                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHUD*                        CallFunc_GetHUD_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusHUD*                  K2Node_DynamicCast_AsIcarus_HUD                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UUMG_InventoryPaperDoll_C::Initialize(class UInventory* BoundInventory, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, int32 Temp_int_Variable_4, int32 Temp_int_Variable_5, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AHUD* CallFunc_GetHUD_ReturnValue, class AIcarusHUD* K2Node_DynamicCast_AsIcarus_HUD, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_InventoryPaperDoll_C", "Initialize");

	Params::UUMG_InventoryPaperDoll_C_Initialize_Params Parms{};

	Parms.BoundInventory = BoundInventory;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.Temp_int_Variable_4 = Temp_int_Variable_4;
	Parms.Temp_int_Variable_5 = Temp_int_Variable_5;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_GetHUD_ReturnValue = CallFunc_GetHUD_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_HUD = K2Node_DynamicCast_AsIcarus_HUD;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_InventoryPaperDoll.UMG_InventoryPaperDoll_C.HandleChangedSlots
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class UInventory*                  Inventory                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSet<int32>                        ChangedSlotIndices                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUMG_InventoryPaperDoll_C::HandleChangedSlots(class UInventory* Inventory, TSet<int32>& ChangedSlotIndices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_InventoryPaperDoll_C", "HandleChangedSlots");

	Params::UUMG_InventoryPaperDoll_C_HandleChangedSlots_Params Parms{};

	Parms.Inventory = Inventory;
	Parms.ChangedSlotIndices = ChangedSlotIndices;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_InventoryPaperDoll.UMG_InventoryPaperDoll_C.ExecuteUbergraph_UMG_InventoryPaperDoll
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  K2Node_Event_Inventory                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSet<int32>                        K2Node_Event_ChangedSlotIndices                                  (ConstParm)
// TArray<int32>                      CallFunc_Set_ToArray_Result                                      (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_EquipmentSlots_C*       CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_InventoryPaperDoll_C::ExecuteUbergraph_UMG_InventoryPaperDoll(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UInventory* K2Node_Event_Inventory, TSet<int32> K2Node_Event_ChangedSlotIndices, TArray<int32>& CallFunc_Set_ToArray_Result, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UUMG_EquipmentSlots_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_InventoryPaperDoll_C", "ExecuteUbergraph_UMG_InventoryPaperDoll");

	Params::UUMG_InventoryPaperDoll_C_ExecuteUbergraph_UMG_InventoryPaperDoll_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_Event_Inventory = K2Node_Event_Inventory;
	Parms.K2Node_Event_ChangedSlotIndices = K2Node_Event_ChangedSlotIndices;
	Parms.CallFunc_Set_ToArray_Result = CallFunc_Set_ToArray_Result;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_InventoryPaperDoll.UMG_InventoryPaperDoll_C.QuickShiftHandler__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CurrentLocation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventory*                  Inventory                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_InventoryPaperDoll_C::QuickShiftHandler__DelegateSignature(int32 CurrentLocation, class UInventory* Inventory)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_InventoryPaperDoll_C", "QuickShiftHandler__DelegateSignature");

	Params::UUMG_InventoryPaperDoll_C_QuickShiftHandler__DelegateSignature_Params Parms{};

	Parms.CurrentLocation = CurrentLocation;
	Parms.Inventory = Inventory;

	UObject::ProcessEvent(Func, &Parms);

}

}


