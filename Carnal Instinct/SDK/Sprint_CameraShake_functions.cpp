#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Sprint_CameraShake.Sprint_CameraShake_C
// (None)

class UClass* USprint_CameraShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Sprint_CameraShake_C");

	return Clss;
}


// Sprint_CameraShake_C Sprint_CameraShake.Default__Sprint_CameraShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USprint_CameraShake_C* USprint_CameraShake_C::GetDefaultObj()
{
	static class USprint_CameraShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USprint_CameraShake_C*>(USprint_CameraShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


