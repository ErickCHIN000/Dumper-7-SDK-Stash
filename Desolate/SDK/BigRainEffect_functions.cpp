#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BigRainEffect.BigRainEffect_C
// (Actor)

class UClass* ABigRainEffect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BigRainEffect_C");

	return Clss;
}


// BigRainEffect_C BigRainEffect.Default__BigRainEffect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABigRainEffect_C* ABigRainEffect_C::GetDefaultObj()
{
	static class ABigRainEffect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABigRainEffect_C*>(ABigRainEffect_C::StaticClass()->DefaultObject);

	return Default;
}

}


