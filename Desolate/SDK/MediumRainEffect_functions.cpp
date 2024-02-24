#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MediumRainEffect.MediumRainEffect_C
// (Actor)

class UClass* AMediumRainEffect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MediumRainEffect_C");

	return Clss;
}


// MediumRainEffect_C MediumRainEffect.Default__MediumRainEffect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMediumRainEffect_C* AMediumRainEffect_C::GetDefaultObj()
{
	static class AMediumRainEffect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMediumRainEffect_C*>(AMediumRainEffect_C::StaticClass()->DefaultObject);

	return Default;
}

}


