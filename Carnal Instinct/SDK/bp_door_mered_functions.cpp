#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass bp_door_mered.bp_door_mered_C
// (Actor)

class UClass* Abp_door_mered_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("bp_door_mered_C");

	return Clss;
}


// bp_door_mered_C bp_door_mered.Default__bp_door_mered_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Abp_door_mered_C* Abp_door_mered_C::GetDefaultObj()
{
	static class Abp_door_mered_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Abp_door_mered_C*>(Abp_door_mered_C::StaticClass()->DefaultObject);

	return Default;
}


// Function bp_door_mered.bp_door_mered_C.Check for specific Item in Inventory
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWB_InventoryNotify_C*       CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (ConstParm)
// class UAC_Inventory_C*             CallFunc_Get_AC_Inventory_AC_Inventory                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ItemData                 CallFunc_Get_Inventory_Item_by_ID_item                           (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_Get_Inventory_Item_by_ID_Found                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void Abp_door_mered_C::Check_for_specific_Item_in_Inventory(class UWB_InventoryNotify_C* CallFunc_Create_ReturnValue, class FText Temp_text_Variable, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, const struct FS_ItemData& CallFunc_Get_Inventory_Item_by_ID_item, bool CallFunc_Get_Inventory_Item_by_ID_Found)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_door_mered_C", "Check for specific Item in Inventory");

	Params::Abp_door_mered_C_Check_for_specific_Item_in_Inventory_Params Parms{};

	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.CallFunc_Get_AC_Inventory_AC_Inventory = CallFunc_Get_AC_Inventory_AC_Inventory;
	Parms.CallFunc_Get_Inventory_Item_by_ID_item = CallFunc_Get_Inventory_Item_by_ID_item;
	Parms.CallFunc_Get_Inventory_Item_by_ID_Found = CallFunc_Get_Inventory_Item_by_ID_Found;

	UObject::ProcessEvent(Func, &Parms);

}


// Function bp_door_mered.bp_door_mered_C.OpenDoor__FinishedFunc
// (BlueprintEvent)
// Parameters:

void Abp_door_mered_C::OpenDoor__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_door_mered_C", "OpenDoor__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_door_mered.bp_door_mered_C.OpenDoor__UpdateFunc
// (BlueprintEvent)
// Parameters:

void Abp_door_mered_C::OpenDoor__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_door_mered_C", "OpenDoor__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_door_mered.bp_door_mered_C.Interaction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_door_mered_C::Interaction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_door_mered_C", "Interaction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_door_mered.bp_door_mered_C.End Interaction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_door_mered_C::End_Interaction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_door_mered_C", "End Interaction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_door_mered.bp_door_mered_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_door_mered_C::Initialize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_door_mered_C", "Initialize");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_door_mered.bp_door_mered_C.Remove Interaction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_door_mered_C::Remove_Interaction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_door_mered_C", "Remove Interaction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_door_mered.bp_door_mered_C.Game Load
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_door_mered_C::Game_Load()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_door_mered_C", "Game Load");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_door_mered.bp_door_mered_C.Event Unlock
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_door_mered_C::Event_Unlock()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_door_mered_C", "Event Unlock");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_door_mered.bp_door_mered_C.ExecuteUbergraph_bp_door_mered
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANpc_merednew_C*             CallFunc_GetActorOfClass_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSet<class UPrimitiveComponent*>   K2Node_MakeSet_Set                                               (ContainsInstancedReference)
// struct FRotator                    K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult_1                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_door_mered_C::ExecuteUbergraph_bp_door_mered(int32 EntryPoint, class ANpc_merednew_C* CallFunc_GetActorOfClass_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, int32 Temp_int_Variable, const struct FRotator& Temp_struct_Variable, const struct FRotator& Temp_struct_Variable_1, TSet<class UPrimitiveComponent*> K2Node_MakeSet_Set, const struct FRotator& K2Node_Select_Default, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_door_mered_C", "ExecuteUbergraph_bp_door_mered");

	Params::Abp_door_mered_C_ExecuteUbergraph_bp_door_mered_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetActorOfClass_ReturnValue = CallFunc_GetActorOfClass_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.K2Node_MakeSet_Set = K2Node_MakeSet_Set;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult_1 = CallFunc_K2_SetRelativeRotation_SweepHitResult_1;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


