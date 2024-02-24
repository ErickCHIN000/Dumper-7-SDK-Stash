#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Effects_OnHit_SlowDown.Effects_OnHit_SlowDown_C
// (Actor)

class UClass* AEffects_OnHit_SlowDown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Effects_OnHit_SlowDown_C");

	return Clss;
}


// Effects_OnHit_SlowDown_C Effects_OnHit_SlowDown.Default__Effects_OnHit_SlowDown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AEffects_OnHit_SlowDown_C* AEffects_OnHit_SlowDown_C::GetDefaultObj()
{
	static class AEffects_OnHit_SlowDown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AEffects_OnHit_SlowDown_C*>(AEffects_OnHit_SlowDown_C::StaticClass()->DefaultObject);

	return Default;
}

}


