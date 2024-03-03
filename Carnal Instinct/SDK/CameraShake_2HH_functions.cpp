#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CameraShake_2HH.CameraShake_2HH_C
// (None)

class UClass* UCameraShake_2HH_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraShake_2HH_C");

	return Clss;
}


// CameraShake_2HH_C CameraShake_2HH.Default__CameraShake_2HH_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCameraShake_2HH_C* UCameraShake_2HH_C::GetDefaultObj()
{
	static class UCameraShake_2HH_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraShake_2HH_C*>(UCameraShake_2HH_C::StaticClass()->DefaultObject);

	return Default;
}

}


