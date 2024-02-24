#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightBrigandSpawner.LightBrigandSpawner_C
// (Actor)

class UClass* ALightBrigandSpawner_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightBrigandSpawner_C");

	return Clss;
}


// LightBrigandSpawner_C LightBrigandSpawner.Default__LightBrigandSpawner_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALightBrigandSpawner_C* ALightBrigandSpawner_C::GetDefaultObj()
{
	static class ALightBrigandSpawner_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALightBrigandSpawner_C*>(ALightBrigandSpawner_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LightBrigandSpawner.LightBrigandSpawner_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ALightBrigandSpawner_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandSpawner_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LightBrigandSpawner.LightBrigandSpawner_C.ExecuteUbergraph_LightBrigandSpawner
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALightBrigandSpawner_C::ExecuteUbergraph_LightBrigandSpawner(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LightBrigandSpawner_C", "ExecuteUbergraph_LightBrigandSpawner");

	Params::ALightBrigandSpawner_C_ExecuteUbergraph_LightBrigandSpawner_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


