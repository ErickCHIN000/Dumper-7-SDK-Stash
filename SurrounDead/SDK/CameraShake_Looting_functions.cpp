#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CameraShake_Looting.CameraShake_Looting_C
// (None)

class UClass* UCameraShake_Looting_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraShake_Looting_C");

	return Clss;
}


// CameraShake_Looting_C CameraShake_Looting.Default__CameraShake_Looting_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCameraShake_Looting_C* UCameraShake_Looting_C::GetDefaultObj()
{
	static class UCameraShake_Looting_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraShake_Looting_C*>(UCameraShake_Looting_C::StaticClass()->DefaultObject);

	return Default;
}

}


