#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Effects_Trauma_HeadHeavyTrauma.Effects_Trauma_HeadHeavyTrauma_C
// (Actor)

class UClass* AEffects_Trauma_HeadHeavyTrauma_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Effects_Trauma_HeadHeavyTrauma_C");

	return Clss;
}


// Effects_Trauma_HeadHeavyTrauma_C Effects_Trauma_HeadHeavyTrauma.Default__Effects_Trauma_HeadHeavyTrauma_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AEffects_Trauma_HeadHeavyTrauma_C* AEffects_Trauma_HeadHeavyTrauma_C::GetDefaultObj()
{
	static class AEffects_Trauma_HeadHeavyTrauma_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AEffects_Trauma_HeadHeavyTrauma_C*>(AEffects_Trauma_HeadHeavyTrauma_C::StaticClass()->DefaultObject);

	return Default;
}

}


