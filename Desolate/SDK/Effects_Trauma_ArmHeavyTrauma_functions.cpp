#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Effects_Trauma_ArmHeavyTrauma.Effects_Trauma_ArmHeavyTrauma_C
// (Actor)

class UClass* AEffects_Trauma_ArmHeavyTrauma_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Effects_Trauma_ArmHeavyTrauma_C");

	return Clss;
}


// Effects_Trauma_ArmHeavyTrauma_C Effects_Trauma_ArmHeavyTrauma.Default__Effects_Trauma_ArmHeavyTrauma_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AEffects_Trauma_ArmHeavyTrauma_C* AEffects_Trauma_ArmHeavyTrauma_C::GetDefaultObj()
{
	static class AEffects_Trauma_ArmHeavyTrauma_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AEffects_Trauma_ArmHeavyTrauma_C*>(AEffects_Trauma_ArmHeavyTrauma_C::StaticClass()->DefaultObject);

	return Default;
}

}


