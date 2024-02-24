#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Goat_Initial_Hyperspeed_CameraShake.Goat_Initial_Hyperspeed_CameraShake_C
// (None)

class UClass* UGoat_Initial_Hyperspeed_CameraShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Goat_Initial_Hyperspeed_CameraShake_C");

	return Clss;
}


// Goat_Initial_Hyperspeed_CameraShake_C Goat_Initial_Hyperspeed_CameraShake.Default__Goat_Initial_Hyperspeed_CameraShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGoat_Initial_Hyperspeed_CameraShake_C* UGoat_Initial_Hyperspeed_CameraShake_C::GetDefaultObj()
{
	static class UGoat_Initial_Hyperspeed_CameraShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGoat_Initial_Hyperspeed_CameraShake_C*>(UGoat_Initial_Hyperspeed_CameraShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


