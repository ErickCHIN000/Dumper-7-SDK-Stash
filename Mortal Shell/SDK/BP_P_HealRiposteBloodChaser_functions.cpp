#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_P_HealRiposteBloodChaser.BP_P_HealRiposteBloodChaser_C
// (Actor)

class UClass* ABP_P_HealRiposteBloodChaser_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_P_HealRiposteBloodChaser_C");

	return Clss;
}


// BP_P_HealRiposteBloodChaser_C BP_P_HealRiposteBloodChaser.Default__BP_P_HealRiposteBloodChaser_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_P_HealRiposteBloodChaser_C* ABP_P_HealRiposteBloodChaser_C::GetDefaultObj()
{
	static class ABP_P_HealRiposteBloodChaser_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_P_HealRiposteBloodChaser_C*>(ABP_P_HealRiposteBloodChaser_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_P_HealRiposteBloodChaser.BP_P_HealRiposteBloodChaser_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_P_HealRiposteBloodChaser_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_P_HealRiposteBloodChaser_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_P_HealRiposteBloodChaser.BP_P_HealRiposteBloodChaser_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_P_HealRiposteBloodChaser_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_P_HealRiposteBloodChaser_C", "ReceiveTick");

	Params::ABP_P_HealRiposteBloodChaser_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_P_HealRiposteBloodChaser.BP_P_HealRiposteBloodChaser_C.ExecuteUbergraph_BP_P_HealRiposteBloodChaser
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_P_HealRiposteBloodChaser_C::ExecuteUbergraph_BP_P_HealRiposteBloodChaser(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, float K2Node_Event_DeltaSeconds, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_P_HealRiposteBloodChaser_C", "ExecuteUbergraph_BP_P_HealRiposteBloodChaser");

	Params::ABP_P_HealRiposteBloodChaser_C_ExecuteUbergraph_BP_P_HealRiposteBloodChaser_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue = CallFunc_SpawnEmitterAttached_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


