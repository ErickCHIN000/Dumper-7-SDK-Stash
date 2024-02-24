#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LargeScaleExplosion.LargeScaleExplosion_C
// (Actor)

class UClass* ALargeScaleExplosion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LargeScaleExplosion_C");

	return Clss;
}


// LargeScaleExplosion_C LargeScaleExplosion.Default__LargeScaleExplosion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALargeScaleExplosion_C* ALargeScaleExplosion_C::GetDefaultObj()
{
	static class ALargeScaleExplosion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALargeScaleExplosion_C*>(ALargeScaleExplosion_C::StaticClass()->DefaultObject);

	return Default;
}

}


