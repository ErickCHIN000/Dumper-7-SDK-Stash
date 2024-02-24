#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightBrigandSpawner_Guitar.LightBrigandSpawner_Guitar_C
// (Actor)

class UClass* ALightBrigandSpawner_Guitar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightBrigandSpawner_Guitar_C");

	return Clss;
}


// LightBrigandSpawner_Guitar_C LightBrigandSpawner_Guitar.Default__LightBrigandSpawner_Guitar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALightBrigandSpawner_Guitar_C* ALightBrigandSpawner_Guitar_C::GetDefaultObj()
{
	static class ALightBrigandSpawner_Guitar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALightBrigandSpawner_Guitar_C*>(ALightBrigandSpawner_Guitar_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LightBrigandSpawner_Guitar.LightBrigandSpawner_Guitar_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ALightBrigandSpawner_Guitar_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandSpawner_Guitar_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LightBrigandSpawner_Guitar.LightBrigandSpawner_Guitar_C.ExecuteUbergraph_LightBrigandSpawner_Guitar
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALightBrigandSpawner_Guitar_C::ExecuteUbergraph_LightBrigandSpawner_Guitar(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandSpawner_Guitar_C", "ExecuteUbergraph_LightBrigandSpawner_Guitar");

	Params::ALightBrigandSpawner_Guitar_C_ExecuteUbergraph_LightBrigandSpawner_Guitar_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


