#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RangedLightStaggerFire.RangedLightStaggerFire_C
// (None)

class UClass* URangedLightStaggerFire_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RangedLightStaggerFire_C");

	return Clss;
}


// RangedLightStaggerFire_C RangedLightStaggerFire.Default__RangedLightStaggerFire_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URangedLightStaggerFire_C* URangedLightStaggerFire_C::GetDefaultObj()
{
	static class URangedLightStaggerFire_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URangedLightStaggerFire_C*>(URangedLightStaggerFire_C::StaticClass()->DefaultObject);

	return Default;
}

}


