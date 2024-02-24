#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Effects_Trauma_TorsoHeavyTrauma.Effects_Trauma_TorsoHeavyTrauma_C
// (Actor)

class UClass* AEffects_Trauma_TorsoHeavyTrauma_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Effects_Trauma_TorsoHeavyTrauma_C");

	return Clss;
}


// Effects_Trauma_TorsoHeavyTrauma_C Effects_Trauma_TorsoHeavyTrauma.Default__Effects_Trauma_TorsoHeavyTrauma_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AEffects_Trauma_TorsoHeavyTrauma_C* AEffects_Trauma_TorsoHeavyTrauma_C::GetDefaultObj()
{
	static class AEffects_Trauma_TorsoHeavyTrauma_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AEffects_Trauma_TorsoHeavyTrauma_C*>(AEffects_Trauma_TorsoHeavyTrauma_C::StaticClass()->DefaultObject);

	return Default;
}

}


