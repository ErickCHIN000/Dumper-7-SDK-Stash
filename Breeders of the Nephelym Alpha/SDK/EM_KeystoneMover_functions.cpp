#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EM_KeystoneMover.EM_KeystoneMover_C
// (Actor)

class UClass* AEM_KeystoneMover_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EM_KeystoneMover_C");

	return Clss;
}


// EM_KeystoneMover_C EM_KeystoneMover.Default__EM_KeystoneMover_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AEM_KeystoneMover_C* AEM_KeystoneMover_C::GetDefaultObj()
{
	static class AEM_KeystoneMover_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AEM_KeystoneMover_C*>(AEM_KeystoneMover_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EM_KeystoneMover.EM_KeystoneMover_C.OnTrigger
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bFromActivation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEM_KeystoneMover_C::OnTrigger(bool bFromActivation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EM_KeystoneMover_C", "OnTrigger");

	Params::AEM_KeystoneMover_C_OnTrigger_Params Parms{};

	Parms.bFromActivation = bFromActivation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EM_KeystoneMover.EM_KeystoneMover_C.Reset
// (Event, Public, BlueprintEvent)
// Parameters:

void AEM_KeystoneMover_C::Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EM_KeystoneMover_C", "Reset");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EM_KeystoneMover.EM_KeystoneMover_C.OnBlock
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bFromActivation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AEM_KeystoneMover_C::OnBlock(bool bFromActivation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EM_KeystoneMover_C", "OnBlock");

	Params::AEM_KeystoneMover_C_OnBlock_Params Parms{};

	Parms.bFromActivation = bFromActivation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EM_KeystoneMover.EM_KeystoneMover_C.ExecuteUbergraph_EM_KeystoneMover
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bFromActivation_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bFromActivation                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetActorLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetActorLocation_SweepHitResult_1                    (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void AEM_KeystoneMover_C::ExecuteUbergraph_EM_KeystoneMover(int32 EntryPoint, bool K2Node_Event_bFromActivation_1, bool K2Node_Event_bFromActivation, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult_1, bool CallFunc_K2_SetActorLocation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EM_KeystoneMover_C", "ExecuteUbergraph_EM_KeystoneMover");

	Params::AEM_KeystoneMover_C_ExecuteUbergraph_EM_KeystoneMover_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bFromActivation_1 = K2Node_Event_bFromActivation_1;
	Parms.K2Node_Event_bFromActivation = K2Node_Event_bFromActivation;
	Parms.CallFunc_K2_SetActorLocation_SweepHitResult = CallFunc_K2_SetActorLocation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocation_ReturnValue = CallFunc_K2_SetActorLocation_ReturnValue;
	Parms.CallFunc_K2_SetActorLocation_SweepHitResult_1 = CallFunc_K2_SetActorLocation_SweepHitResult_1;
	Parms.CallFunc_K2_SetActorLocation_ReturnValue_1 = CallFunc_K2_SetActorLocation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


