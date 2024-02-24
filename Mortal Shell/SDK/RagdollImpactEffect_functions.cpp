#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RagdollImpactEffect.RagdollImpactEffect_C
// (Actor)

class UClass* ARagdollImpactEffect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RagdollImpactEffect_C");

	return Clss;
}


// RagdollImpactEffect_C RagdollImpactEffect.Default__RagdollImpactEffect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARagdollImpactEffect_C* ARagdollImpactEffect_C::GetDefaultObj()
{
	static class ARagdollImpactEffect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARagdollImpactEffect_C*>(ARagdollImpactEffect_C::StaticClass()->DefaultObject);

	return Default;
}


// Function RagdollImpactEffect.RagdollImpactEffect_C.Flash__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ARagdollImpactEffect_C::Flash__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RagdollImpactEffect_C", "Flash__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RagdollImpactEffect.RagdollImpactEffect_C.Flash__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ARagdollImpactEffect_C::Flash__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RagdollImpactEffect_C", "Flash__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RagdollImpactEffect.RagdollImpactEffect_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ARagdollImpactEffect_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RagdollImpactEffect_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RagdollImpactEffect.RagdollImpactEffect_C.ExecuteUbergraph_RagdollImpactEffect
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ARagdollImpactEffect_C::ExecuteUbergraph_RagdollImpactEffect(int32 EntryPoint, float CallFunc_Lerp_ReturnValue, float CallFunc_Lerp_ReturnValue_1, float CallFunc_Lerp_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RagdollImpactEffect_C", "ExecuteUbergraph_RagdollImpactEffect");

	Params::ARagdollImpactEffect_C_ExecuteUbergraph_RagdollImpactEffect_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue_2 = CallFunc_Lerp_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


