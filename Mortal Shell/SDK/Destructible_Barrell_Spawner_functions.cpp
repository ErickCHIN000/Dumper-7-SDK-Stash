#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Destructible_Barrell_Spawner.Destructible_Barrell_Spawner_C
// (Actor)

class UClass* ADestructible_Barrell_Spawner_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Destructible_Barrell_Spawner_C");

	return Clss;
}


// Destructible_Barrell_Spawner_C Destructible_Barrell_Spawner.Default__Destructible_Barrell_Spawner_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ADestructible_Barrell_Spawner_C* ADestructible_Barrell_Spawner_C::GetDefaultObj()
{
	static class ADestructible_Barrell_Spawner_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ADestructible_Barrell_Spawner_C*>(ADestructible_Barrell_Spawner_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Destructible_Barrell_Spawner.Destructible_Barrell_Spawner_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ADestructible_Barrell_Spawner_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Destructible_Barrell_Spawner_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Destructible_Barrell_Spawner.Destructible_Barrell_Spawner_C.ExecuteUbergraph_Destructible_Barrell_Spawner
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ADestructible_Barrell_Spawner_C::ExecuteUbergraph_Destructible_Barrell_Spawner(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Destructible_Barrell_Spawner_C", "ExecuteUbergraph_Destructible_Barrell_Spawner");

	Params::ADestructible_Barrell_Spawner_C_ExecuteUbergraph_Destructible_Barrell_Spawner_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


