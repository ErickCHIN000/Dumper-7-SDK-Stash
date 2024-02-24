#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_EffigyDarkForm.BP_EffigyDarkForm_C
// (Actor)

class UClass* ABP_EffigyDarkForm_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_EffigyDarkForm_C");

	return Clss;
}


// BP_EffigyDarkForm_C BP_EffigyDarkForm.Default__BP_EffigyDarkForm_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_EffigyDarkForm_C* ABP_EffigyDarkForm_C::GetDefaultObj()
{
	static class ABP_EffigyDarkForm_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_EffigyDarkForm_C*>(ABP_EffigyDarkForm_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_EffigyDarkForm.BP_EffigyDarkForm_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_EffigyDarkForm_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EffigyDarkForm_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_EffigyDarkForm.BP_EffigyDarkForm_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_EffigyDarkForm_C::ReceiveDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EffigyDarkForm_C", "ReceiveDestroyed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_EffigyDarkForm.BP_EffigyDarkForm_C.ExecuteUbergraph_BP_EffigyDarkForm
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_RadialBlur_C*            CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_EffigyDarkForm_C::ExecuteUbergraph_BP_EffigyDarkForm(int32 EntryPoint, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_RadialBlur_C* CallFunc_FinishSpawningActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EffigyDarkForm_C", "ExecuteUbergraph_BP_EffigyDarkForm");

	Params::ABP_EffigyDarkForm_C_ExecuteUbergraph_BP_EffigyDarkForm_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EffigyDarkForm.BP_EffigyDarkForm_C.ShiftEnd__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_EffigyDarkForm_C::ShiftEnd__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EffigyDarkForm_C", "ShiftEnd__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_EffigyDarkForm.BP_EffigyDarkForm_C.ApplyNewShell__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_EffigyDarkForm_C::ApplyNewShell__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EffigyDarkForm_C", "ApplyNewShell__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


