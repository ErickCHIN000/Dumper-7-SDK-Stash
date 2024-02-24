#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Effects_OxygenRegeneration.Effects_OxygenRegeneration_C
// (Actor)

class UClass* AEffects_OxygenRegeneration_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Effects_OxygenRegeneration_C");

	return Clss;
}


// Effects_OxygenRegeneration_C Effects_OxygenRegeneration.Default__Effects_OxygenRegeneration_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AEffects_OxygenRegeneration_C* AEffects_OxygenRegeneration_C::GetDefaultObj()
{
	static class AEffects_OxygenRegeneration_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AEffects_OxygenRegeneration_C*>(AEffects_OxygenRegeneration_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Effects_OxygenRegeneration.Effects_OxygenRegeneration_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AEffects_OxygenRegeneration_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Effects_OxygenRegeneration_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Effects_OxygenRegeneration.Effects_OxygenRegeneration_C.ExecuteUbergraph_Effects_OxygenRegeneration
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEffects_OxygenRegeneration_C::ExecuteUbergraph_Effects_OxygenRegeneration(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Effects_OxygenRegeneration_C", "ExecuteUbergraph_Effects_OxygenRegeneration");

	Params::AEffects_OxygenRegeneration_C_ExecuteUbergraph_Effects_OxygenRegeneration_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


