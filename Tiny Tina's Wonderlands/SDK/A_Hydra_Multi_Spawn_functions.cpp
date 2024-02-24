#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass A_Hydra_Multi_Spawn.A_Hydra_Multi_Spawn_C
// (None)

class UClass* UA_Hydra_Multi_Spawn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("A_Hydra_Multi_Spawn_C");

	return Clss;
}


// A_Hydra_Multi_Spawn_C A_Hydra_Multi_Spawn.Default__A_Hydra_Multi_Spawn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UA_Hydra_Multi_Spawn_C* UA_Hydra_Multi_Spawn_C::GetDefaultObj()
{
	static class UA_Hydra_Multi_Spawn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UA_Hydra_Multi_Spawn_C*>(UA_Hydra_Multi_Spawn_C::StaticClass()->DefaultObject);

	return Default;
}

}


