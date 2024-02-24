#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AIC_Spawner_Wildlife.AIC_Spawner_Wildlife_C
// (Actor)

class UClass* AAIC_Spawner_Wildlife_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIC_Spawner_Wildlife_C");

	return Clss;
}


// AIC_Spawner_Wildlife_C AIC_Spawner_Wildlife.Default__AIC_Spawner_Wildlife_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAIC_Spawner_Wildlife_C* AAIC_Spawner_Wildlife_C::GetDefaultObj()
{
	static class AAIC_Spawner_Wildlife_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAIC_Spawner_Wildlife_C*>(AAIC_Spawner_Wildlife_C::StaticClass()->DefaultObject);

	return Default;
}

}


