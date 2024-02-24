#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WraithSpawner_Cathedral_ButtonTrap.WraithSpawner_Cathedral_ButtonTrap_C
// (Actor)

class UClass* AWraithSpawner_Cathedral_ButtonTrap_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WraithSpawner_Cathedral_ButtonTrap_C");

	return Clss;
}


// WraithSpawner_Cathedral_ButtonTrap_C WraithSpawner_Cathedral_ButtonTrap.Default__WraithSpawner_Cathedral_ButtonTrap_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWraithSpawner_Cathedral_ButtonTrap_C* AWraithSpawner_Cathedral_ButtonTrap_C::GetDefaultObj()
{
	static class AWraithSpawner_Cathedral_ButtonTrap_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWraithSpawner_Cathedral_ButtonTrap_C*>(AWraithSpawner_Cathedral_ButtonTrap_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WraithSpawner_Cathedral_ButtonTrap.WraithSpawner_Cathedral_ButtonTrap_C.TrySpawnEnemy
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AWraithSpawner_Cathedral_ButtonTrap_C::TrySpawnEnemy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WraithSpawner_Cathedral_ButtonTrap_C", "TrySpawnEnemy");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WraithSpawner_Cathedral_ButtonTrap.WraithSpawner_Cathedral_ButtonTrap_C.ExecuteUbergraph_WraithSpawner_Cathedral_ButtonTrap
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AWraithSpawner_Cathedral_ButtonTrap_C::ExecuteUbergraph_WraithSpawner_Cathedral_ButtonTrap(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WraithSpawner_Cathedral_ButtonTrap_C", "ExecuteUbergraph_WraithSpawner_Cathedral_ButtonTrap");

	Params::AWraithSpawner_Cathedral_ButtonTrap_C_ExecuteUbergraph_WraithSpawner_Cathedral_ButtonTrap_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


