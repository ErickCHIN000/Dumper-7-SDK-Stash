#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_RepairBench_ConfirmRepair.UMG_RepairBench_ConfirmRepair_C
// (None)

class UClass* UUMG_RepairBench_ConfirmRepair_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_RepairBench_ConfirmRepair_C");

	return Clss;
}


// UMG_RepairBench_ConfirmRepair_C UMG_RepairBench_ConfirmRepair.Default__UMG_RepairBench_ConfirmRepair_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_RepairBench_ConfirmRepair_C* UUMG_RepairBench_ConfirmRepair_C::GetDefaultObj()
{
	static class UUMG_RepairBench_ConfirmRepair_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_RepairBench_ConfirmRepair_C*>(UUMG_RepairBench_ConfirmRepair_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_RepairBench_ConfirmRepair.UMG_RepairBench_ConfirmRepair_C.Initialise
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      LinkedActor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FRepairableItem>     ItemsToRepair                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<struct FRepairableItem>     ItemsNotRepairable                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// TArray<struct FQueueItem>          RequiredResources                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FQueueItem>          MissingResources                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUMG_RepairBench_ConfirmRepair_C::Initialise(class AActor* LinkedActor, TArray<struct FRepairableItem>& ItemsToRepair, TArray<struct FRepairableItem>& ItemsNotRepairable, TArray<struct FQueueItem>& RequiredResources, TArray<struct FQueueItem>& MissingResources)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RepairBench_ConfirmRepair_C", "Initialise");

	Params::UUMG_RepairBench_ConfirmRepair_C_Initialise_Params Parms{};

	Parms.LinkedActor = LinkedActor;
	Parms.ItemsToRepair = ItemsToRepair;
	Parms.ItemsNotRepairable = ItemsNotRepairable;
	Parms.RequiredResources = RequiredResources;
	Parms.MissingResources = MissingResources;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_RepairBench_ConfirmRepair.UMG_RepairBench_ConfirmRepair_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_RepairBench_ConfirmRepair_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RepairBench_ConfirmRepair_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_RepairBench_ConfirmRepair.UMG_RepairBench_ConfirmRepair_C.ExecuteUbergraph_UMG_RepairBench_ConfirmRepair
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_RepairItemResource_C*   CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_LinkedActor                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FRepairableItem>     K2Node_CustomEvent_ItemsToRepair                                 (ConstParm, ReferenceParm, ContainsInstancedReference)
// TArray<struct FRepairableItem>     K2Node_CustomEvent_ItemsNotRepairable                            (ConstParm, ReferenceParm, ContainsInstancedReference)
// TArray<struct FQueueItem>          K2Node_CustomEvent_RequiredResources                             (ConstParm, ReferenceParm)
// TArray<struct FQueueItem>          K2Node_CustomEvent_MissingResources                              (ConstParm, ReferenceParm)
// struct FQueueItem                  CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemsStaticRowHandle       CallFunc_GetQueueItemDetails_Item                                (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetQueueItemDetails_Count                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUniformGridSlot*            CallFunc_AddChildToUniformGrid_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_RepairBench_ConfirmRepair_C::ExecuteUbergraph_UMG_RepairBench_ConfirmRepair(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, class UUMG_RepairItemResource_C* CallFunc_Create_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, class AActor* K2Node_CustomEvent_LinkedActor, TArray<struct FRepairableItem>& K2Node_CustomEvent_ItemsToRepair, TArray<struct FRepairableItem>& K2Node_CustomEvent_ItemsNotRepairable, TArray<struct FQueueItem>& K2Node_CustomEvent_RequiredResources, TArray<struct FQueueItem>& K2Node_CustomEvent_MissingResources, const struct FQueueItem& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FItemsStaticRowHandle& CallFunc_GetQueueItemDetails_Item, int32 CallFunc_GetQueueItemDetails_Count, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RepairBench_ConfirmRepair_C", "ExecuteUbergraph_UMG_RepairBench_ConfirmRepair");

	Params::UUMG_RepairBench_ConfirmRepair_C_ExecuteUbergraph_UMG_RepairBench_ConfirmRepair_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_LinkedActor = K2Node_CustomEvent_LinkedActor;
	Parms.K2Node_CustomEvent_ItemsToRepair = K2Node_CustomEvent_ItemsToRepair;
	Parms.K2Node_CustomEvent_ItemsNotRepairable = K2Node_CustomEvent_ItemsNotRepairable;
	Parms.K2Node_CustomEvent_RequiredResources = K2Node_CustomEvent_RequiredResources;
	Parms.K2Node_CustomEvent_MissingResources = K2Node_CustomEvent_MissingResources;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetQueueItemDetails_Item = CallFunc_GetQueueItemDetails_Item;
	Parms.CallFunc_GetQueueItemDetails_Count = CallFunc_GetQueueItemDetails_Count;
	Parms.CallFunc_AddChildToUniformGrid_ReturnValue = CallFunc_AddChildToUniformGrid_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


