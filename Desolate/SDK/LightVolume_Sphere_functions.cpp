#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LightVolume_Sphere.LightVolume_Sphere_C
// (Actor)

class UClass* ALightVolume_Sphere_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LightVolume_Sphere_C");

	return Clss;
}


// LightVolume_Sphere_C LightVolume_Sphere.Default__LightVolume_Sphere_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALightVolume_Sphere_C* ALightVolume_Sphere_C::GetDefaultObj()
{
	static class ALightVolume_Sphere_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALightVolume_Sphere_C*>(ALightVolume_Sphere_C::StaticClass()->DefaultObject);

	return Default;
}

}


