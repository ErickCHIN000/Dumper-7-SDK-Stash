#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass WraithSpawner_Cathedral.WraithSpawner_Cathedral_C
// (Actor)

class UClass* AWraithSpawner_Cathedral_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WraithSpawner_Cathedral_C");

	return Clss;
}


// WraithSpawner_Cathedral_C WraithSpawner_Cathedral.Default__WraithSpawner_Cathedral_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AWraithSpawner_Cathedral_C* AWraithSpawner_Cathedral_C::GetDefaultObj()
{
	static class AWraithSpawner_Cathedral_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AWraithSpawner_Cathedral_C*>(AWraithSpawner_Cathedral_C::StaticClass()->DefaultObject);

	return Default;
}

}


