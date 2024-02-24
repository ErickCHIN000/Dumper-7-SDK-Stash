#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GrenadeExplosion.GrenadeExplosion_C
// (Actor)

class UClass* AGrenadeExplosion_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GrenadeExplosion_C");

	return Clss;
}


// GrenadeExplosion_C GrenadeExplosion.Default__GrenadeExplosion_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGrenadeExplosion_C* AGrenadeExplosion_C::GetDefaultObj()
{
	static class AGrenadeExplosion_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGrenadeExplosion_C*>(AGrenadeExplosion_C::StaticClass()->DefaultObject);

	return Default;
}

}


