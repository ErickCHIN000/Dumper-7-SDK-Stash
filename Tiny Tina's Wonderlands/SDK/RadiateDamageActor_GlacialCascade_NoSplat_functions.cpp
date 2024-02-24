#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RadiateDamageActor_GlacialCascade_NoSplat.RadiateDamageActor_GlacialCascade_NoSplat_C
// (Actor)

class UClass* ARadiateDamageActor_GlacialCascade_NoSplat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RadiateDamageActor_GlacialCascade_NoSplat_C");

	return Clss;
}


// RadiateDamageActor_GlacialCascade_NoSplat_C RadiateDamageActor_GlacialCascade_NoSplat.Default__RadiateDamageActor_GlacialCascade_NoSplat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARadiateDamageActor_GlacialCascade_NoSplat_C* ARadiateDamageActor_GlacialCascade_NoSplat_C::GetDefaultObj()
{
	static class ARadiateDamageActor_GlacialCascade_NoSplat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARadiateDamageActor_GlacialCascade_NoSplat_C*>(ARadiateDamageActor_GlacialCascade_NoSplat_C::StaticClass()->DefaultObject);

	return Default;
}

}


