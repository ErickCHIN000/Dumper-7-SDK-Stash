#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Butcher_TotemSpawnPoint.Butcher_TotemSpawnPoint_C
// (Actor)

class UClass* AButcher_TotemSpawnPoint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Butcher_TotemSpawnPoint_C");

	return Clss;
}


// Butcher_TotemSpawnPoint_C Butcher_TotemSpawnPoint.Default__Butcher_TotemSpawnPoint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AButcher_TotemSpawnPoint_C* AButcher_TotemSpawnPoint_C::GetDefaultObj()
{
	static class AButcher_TotemSpawnPoint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AButcher_TotemSpawnPoint_C*>(AButcher_TotemSpawnPoint_C::StaticClass()->DefaultObject);

	return Default;
}

}


