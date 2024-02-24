#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RangedLightStagger.RangedLightStagger_C
// (None)

class UClass* URangedLightStagger_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RangedLightStagger_C");

	return Clss;
}


// RangedLightStagger_C RangedLightStagger.Default__RangedLightStagger_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URangedLightStagger_C* URangedLightStagger_C::GetDefaultObj()
{
	static class URangedLightStagger_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URangedLightStagger_C*>(URangedLightStagger_C::StaticClass()->DefaultObject);

	return Default;
}

}


