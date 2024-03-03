#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass bp_interactable_milkingmachine.bp_interactable_milkingmachine_C
// (Actor)

class UClass* Abp_interactable_milkingmachine_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("bp_interactable_milkingmachine_C");

	return Clss;
}


// bp_interactable_milkingmachine_C bp_interactable_milkingmachine.Default__bp_interactable_milkingmachine_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Abp_interactable_milkingmachine_C* Abp_interactable_milkingmachine_C::GetDefaultObj()
{
	static class Abp_interactable_milkingmachine_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Abp_interactable_milkingmachine_C*>(Abp_interactable_milkingmachine_C::StaticClass()->DefaultObject);

	return Default;
}


// Function bp_interactable_milkingmachine.bp_interactable_milkingmachine_C.Game Load
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_interactable_milkingmachine_C::Game_Load()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_interactable_milkingmachine_C", "Game Load");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_interactable_milkingmachine.bp_interactable_milkingmachine_C.Disable Milking
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_interactable_milkingmachine_C::Disable_Milking()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_interactable_milkingmachine_C", "Disable Milking");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_interactable_milkingmachine.bp_interactable_milkingmachine_C.Spawn Amycus
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_interactable_milkingmachine_C::Spawn_Amycus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_interactable_milkingmachine_C", "Spawn Amycus");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_interactable_milkingmachine.bp_interactable_milkingmachine_C.Interaction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void Abp_interactable_milkingmachine_C::Interaction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_interactable_milkingmachine_C", "Interaction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function bp_interactable_milkingmachine.bp_interactable_milkingmachine_C.ExecuteUbergraph_bp_interactable_milkingmachine
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetStaticMesh_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ALiquid_amycus_placeholder_C*CallFunc_GetActorOfClass_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FRotator                    CallFunc_K2_GetComponentRotation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANpc_amycus_C*               CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void Abp_interactable_milkingmachine_C::ExecuteUbergraph_bp_interactable_milkingmachine(int32 EntryPoint, class FName Temp_name_Variable, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue_1, class ALiquid_amycus_placeholder_C* CallFunc_GetActorOfClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ANpc_amycus_C* CallFunc_FinishSpawningActor_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("bp_interactable_milkingmachine_C", "ExecuteUbergraph_bp_interactable_milkingmachine");

	Params::Abp_interactable_milkingmachine_C_ExecuteUbergraph_bp_interactable_milkingmachine_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;
	Parms.CallFunc_SetStaticMesh_ReturnValue_1 = CallFunc_SetStaticMesh_ReturnValue_1;
	Parms.CallFunc_GetActorOfClass_ReturnValue = CallFunc_GetActorOfClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetComponentRotation_ReturnValue = CallFunc_K2_GetComponentRotation_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


