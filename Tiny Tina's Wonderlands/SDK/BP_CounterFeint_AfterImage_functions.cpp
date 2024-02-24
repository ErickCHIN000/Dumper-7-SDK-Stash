#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CounterFeint_AfterImage.BP_CounterFeint_AfterImage_C
// (Actor)

class UClass* ABP_CounterFeint_AfterImage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CounterFeint_AfterImage_C");

	return Clss;
}


// BP_CounterFeint_AfterImage_C BP_CounterFeint_AfterImage.Default__BP_CounterFeint_AfterImage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CounterFeint_AfterImage_C* ABP_CounterFeint_AfterImage_C::GetDefaultObj()
{
	static class ABP_CounterFeint_AfterImage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CounterFeint_AfterImage_C*>(ABP_CounterFeint_AfterImage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CounterFeint_AfterImage.BP_CounterFeint_AfterImage_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CounterFeint_AfterImage_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CounterFeint_AfterImage_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CounterFeint_AfterImage.BP_CounterFeint_AfterImage_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_CounterFeint_AfterImage_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CounterFeint_AfterImage_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CounterFeint_AfterImage.BP_CounterFeint_AfterImage_C.AfterImage_CleanUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_CounterFeint_AfterImage_C::AfterImage_CleanUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CounterFeint_AfterImage_C", "AfterImage_CleanUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_CounterFeint_AfterImage.BP_CounterFeint_AfterImage_C.ExecuteUbergraph_BP_CounterFeint_AfterImage
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueOfAttribute_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CounterFeint_AfterImage_C::ExecuteUbergraph_BP_CounterFeint_AfterImage(int32 EntryPoint, const struct FHitResult& Temp_struct_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CounterFeint_AfterImage_C", "ExecuteUbergraph_BP_CounterFeint_AfterImage");

	Params::ABP_CounterFeint_AfterImage_C_ExecuteUbergraph_BP_CounterFeint_AfterImage_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.CallFunc_GetValueOfAttribute_ReturnValue = CallFunc_GetValueOfAttribute_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


