#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIC_Spawner_NPC.AIC_Spawner_NPC_C
// (Actor)

class UClass* AAIC_Spawner_NPC_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIC_Spawner_NPC_C");

	return Clss;
}


// AIC_Spawner_NPC_C AIC_Spawner_NPC.Default__AIC_Spawner_NPC_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAIC_Spawner_NPC_C* AAIC_Spawner_NPC_C::GetDefaultObj()
{
	static class AAIC_Spawner_NPC_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAIC_Spawner_NPC_C*>(AAIC_Spawner_NPC_C::StaticClass()->DefaultObject);

	return Default;
}

}


