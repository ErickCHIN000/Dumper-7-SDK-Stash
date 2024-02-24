#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Goat_Hyperspeed_CameraShake.Goat_Hyperspeed_CameraShake_C
// (None)

class UClass* UGoat_Hyperspeed_CameraShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Goat_Hyperspeed_CameraShake_C");

	return Clss;
}


// Goat_Hyperspeed_CameraShake_C Goat_Hyperspeed_CameraShake.Default__Goat_Hyperspeed_CameraShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGoat_Hyperspeed_CameraShake_C* UGoat_Hyperspeed_CameraShake_C::GetDefaultObj()
{
	static class UGoat_Hyperspeed_CameraShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGoat_Hyperspeed_CameraShake_C*>(UGoat_Hyperspeed_CameraShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


