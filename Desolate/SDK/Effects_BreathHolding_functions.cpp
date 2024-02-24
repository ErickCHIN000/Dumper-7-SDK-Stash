#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Effects_BreathHolding.Effects_BreathHolding_C
// (Actor)

class UClass* AEffects_BreathHolding_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Effects_BreathHolding_C");

	return Clss;
}


// Effects_BreathHolding_C Effects_BreathHolding.Default__Effects_BreathHolding_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AEffects_BreathHolding_C* AEffects_BreathHolding_C::GetDefaultObj()
{
	static class AEffects_BreathHolding_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AEffects_BreathHolding_C*>(AEffects_BreathHolding_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Effects_BreathHolding.Effects_BreathHolding_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AEffects_BreathHolding_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Effects_BreathHolding_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Effects_BreathHolding.Effects_BreathHolding_C.ExecuteUbergraph_Effects_BreathHolding
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEffects_BreathHolding_C::ExecuteUbergraph_Effects_BreathHolding(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Effects_BreathHolding_C", "ExecuteUbergraph_Effects_BreathHolding");

	Params::AEffects_BreathHolding_C_ExecuteUbergraph_Effects_BreathHolding_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


