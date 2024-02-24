#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ToxicRainEffect.ToxicRainEffect_C
// (Actor)

class UClass* AToxicRainEffect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ToxicRainEffect_C");

	return Clss;
}


// ToxicRainEffect_C ToxicRainEffect.Default__ToxicRainEffect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AToxicRainEffect_C* AToxicRainEffect_C::GetDefaultObj()
{
	static class AToxicRainEffect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AToxicRainEffect_C*>(AToxicRainEffect_C::StaticClass()->DefaultObject);

	return Default;
}

}


