#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Effects_ZeroOxygen.Effects_ZeroOxygen_C
// (Actor)

class UClass* AEffects_ZeroOxygen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Effects_ZeroOxygen_C");

	return Clss;
}


// Effects_ZeroOxygen_C Effects_ZeroOxygen.Default__Effects_ZeroOxygen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AEffects_ZeroOxygen_C* AEffects_ZeroOxygen_C::GetDefaultObj()
{
	static class AEffects_ZeroOxygen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AEffects_ZeroOxygen_C*>(AEffects_ZeroOxygen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Effects_ZeroOxygen.Effects_ZeroOxygen_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AEffects_ZeroOxygen_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Effects_ZeroOxygen_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Effects_ZeroOxygen.Effects_ZeroOxygen_C.ExecuteUbergraph_Effects_ZeroOxygen
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEffects_ZeroOxygen_C::ExecuteUbergraph_Effects_ZeroOxygen(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Effects_ZeroOxygen_C", "ExecuteUbergraph_Effects_ZeroOxygen");

	Params::AEffects_ZeroOxygen_C_ExecuteUbergraph_Effects_ZeroOxygen_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


