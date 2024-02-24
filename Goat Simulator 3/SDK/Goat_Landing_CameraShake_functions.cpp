#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Goat_Landing_CameraShake.Goat_Landing_CameraShake_C
// (None)

class UClass* UGoat_Landing_CameraShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Goat_Landing_CameraShake_C");

	return Clss;
}


// Goat_Landing_CameraShake_C Goat_Landing_CameraShake.Default__Goat_Landing_CameraShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGoat_Landing_CameraShake_C* UGoat_Landing_CameraShake_C::GetDefaultObj()
{
	static class UGoat_Landing_CameraShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGoat_Landing_CameraShake_C*>(UGoat_Landing_CameraShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


