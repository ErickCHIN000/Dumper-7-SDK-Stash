#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Effects_CarryingCapacity_LowWeight.Effects_CarryingCapacity_LowWeight_C
// (Actor)

class UClass* AEffects_CarryingCapacity_LowWeight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Effects_CarryingCapacity_LowWeight_C");

	return Clss;
}


// Effects_CarryingCapacity_LowWeight_C Effects_CarryingCapacity_LowWeight.Default__Effects_CarryingCapacity_LowWeight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AEffects_CarryingCapacity_LowWeight_C* AEffects_CarryingCapacity_LowWeight_C::GetDefaultObj()
{
	static class AEffects_CarryingCapacity_LowWeight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AEffects_CarryingCapacity_LowWeight_C*>(AEffects_CarryingCapacity_LowWeight_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Effects_CarryingCapacity_LowWeight.Effects_CarryingCapacity_LowWeight_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AEffects_CarryingCapacity_LowWeight_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Effects_CarryingCapacity_LowWeight_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Effects_CarryingCapacity_LowWeight.Effects_CarryingCapacity_LowWeight_C.ExecuteUbergraph_Effects_CarryingCapacity_LowWeight
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AEffects_CarryingCapacity_LowWeight_C::ExecuteUbergraph_Effects_CarryingCapacity_LowWeight(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Effects_CarryingCapacity_LowWeight_C", "ExecuteUbergraph_Effects_CarryingCapacity_LowWeight");

	Params::AEffects_CarryingCapacity_LowWeight_C_ExecuteUbergraph_Effects_CarryingCapacity_LowWeight_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


