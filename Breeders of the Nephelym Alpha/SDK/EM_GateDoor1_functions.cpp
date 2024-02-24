#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EM_GateDoor1.EM_GateDoor1_C
// (Actor)

class UClass* AEM_GateDoor1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EM_GateDoor1_C");

	return Clss;
}


// EM_GateDoor1_C EM_GateDoor1.Default__EM_GateDoor1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AEM_GateDoor1_C* AEM_GateDoor1_C::GetDefaultObj()
{
	static class AEM_GateDoor1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AEM_GateDoor1_C*>(AEM_GateDoor1_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EM_GateDoor1.EM_GateDoor1_C.OnTrigger
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bFromActivation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEM_GateDoor1_C::OnTrigger(bool bFromActivation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EM_GateDoor1_C", "OnTrigger");

	Params::AEM_GateDoor1_C_OnTrigger_Params Parms{};

	Parms.bFromActivation = bFromActivation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EM_GateDoor1.EM_GateDoor1_C.OnBlock
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bFromActivation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEM_GateDoor1_C::OnBlock(bool bFromActivation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EM_GateDoor1_C", "OnBlock");

	Params::AEM_GateDoor1_C_OnBlock_Params Parms{};

	Parms.bFromActivation = bFromActivation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EM_GateDoor1.EM_GateDoor1_C.Reset
// (Event, Public, BlueprintEvent)
// Parameters:

void AEM_GateDoor1_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EM_GateDoor1_C", "Reset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EM_GateDoor1.EM_GateDoor1_C.ExecuteUbergraph_EM_GateDoor1
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bFromActivation_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bFromActivation                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult_1                 (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AEM_GateDoor1_C::ExecuteUbergraph_EM_GateDoor1(int32 EntryPoint, bool K2Node_Event_bFromActivation_1, bool K2Node_Event_bFromActivation, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EM_GateDoor1_C", "ExecuteUbergraph_EM_GateDoor1");

	Params::AEM_GateDoor1_C_ExecuteUbergraph_EM_GateDoor1_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bFromActivation_1 = K2Node_Event_bFromActivation_1;
	Parms.K2Node_Event_bFromActivation = K2Node_Event_bFromActivation;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult_1 = CallFunc_K2_SetRelativeRotation_SweepHitResult_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


