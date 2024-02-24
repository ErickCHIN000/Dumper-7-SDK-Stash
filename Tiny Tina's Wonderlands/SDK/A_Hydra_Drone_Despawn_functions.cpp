#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass A_Hydra_Drone_Despawn.A_Hydra_Drone_Despawn_C
// (None)

class UClass* UA_Hydra_Drone_Despawn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("A_Hydra_Drone_Despawn_C");

	return Clss;
}


// A_Hydra_Drone_Despawn_C A_Hydra_Drone_Despawn.Default__A_Hydra_Drone_Despawn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UA_Hydra_Drone_Despawn_C* UA_Hydra_Drone_Despawn_C::GetDefaultObj()
{
	static class UA_Hydra_Drone_Despawn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UA_Hydra_Drone_Despawn_C*>(UA_Hydra_Drone_Despawn_C::StaticClass()->DefaultObject);

	return Default;
}

}


