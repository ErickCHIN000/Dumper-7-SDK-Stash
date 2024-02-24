#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass VampireSpawner_Cave.VampireSpawner_Cave_C
// (Actor)

class UClass* AVampireSpawner_Cave_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VampireSpawner_Cave_C");

	return Clss;
}


// VampireSpawner_Cave_C VampireSpawner_Cave.Default__VampireSpawner_Cave_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AVampireSpawner_Cave_C* AVampireSpawner_Cave_C::GetDefaultObj()
{
	static class AVampireSpawner_Cave_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AVampireSpawner_Cave_C*>(AVampireSpawner_Cave_C::StaticClass()->DefaultObject);

	return Default;
}

}


