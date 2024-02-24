#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass VampireSpawner.VampireSpawner_C
// (Actor)

class UClass* AVampireSpawner_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VampireSpawner_C");

	return Clss;
}


// VampireSpawner_C VampireSpawner.Default__VampireSpawner_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AVampireSpawner_C* AVampireSpawner_C::GetDefaultObj()
{
	static class AVampireSpawner_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AVampireSpawner_C*>(AVampireSpawner_C::StaticClass()->DefaultObject);

	return Default;
}

}


