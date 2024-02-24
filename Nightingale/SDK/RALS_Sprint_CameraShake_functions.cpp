#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RALS_Sprint_CameraShake.RALS_Sprint_CameraShake_C
// (None)

class UClass* URALS_Sprint_CameraShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RALS_Sprint_CameraShake_C");

	return Clss;
}


// RALS_Sprint_CameraShake_C RALS_Sprint_CameraShake.Default__RALS_Sprint_CameraShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URALS_Sprint_CameraShake_C* URALS_Sprint_CameraShake_C::GetDefaultObj()
{
	static class URALS_Sprint_CameraShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URALS_Sprint_CameraShake_C*>(URALS_Sprint_CameraShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


