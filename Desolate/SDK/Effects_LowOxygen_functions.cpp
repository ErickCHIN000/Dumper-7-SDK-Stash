#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Effects_LowOxygen.Effects_LowOxygen_C
// (Actor)

class UClass* AEffects_LowOxygen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Effects_LowOxygen_C");

	return Clss;
}


// Effects_LowOxygen_C Effects_LowOxygen.Default__Effects_LowOxygen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AEffects_LowOxygen_C* AEffects_LowOxygen_C::GetDefaultObj()
{
	static class AEffects_LowOxygen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AEffects_LowOxygen_C*>(AEffects_LowOxygen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Effects_LowOxygen.Effects_LowOxygen_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AEffects_LowOxygen_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Effects_LowOxygen_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Effects_LowOxygen.Effects_LowOxygen_C.ExecuteUbergraph_Effects_LowOxygen
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEffects_LowOxygen_C::ExecuteUbergraph_Effects_LowOxygen(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Effects_LowOxygen_C", "ExecuteUbergraph_Effects_LowOxygen");

	Params::AEffects_LowOxygen_C_ExecuteUbergraph_Effects_LowOxygen_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


