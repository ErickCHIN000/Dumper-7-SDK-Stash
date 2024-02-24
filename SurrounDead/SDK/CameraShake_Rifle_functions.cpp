#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CameraShake_Rifle.CameraShake_Rifle_C
// (None)

class UClass* UCameraShake_Rifle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraShake_Rifle_C");

	return Clss;
}


// CameraShake_Rifle_C CameraShake_Rifle.Default__CameraShake_Rifle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCameraShake_Rifle_C* UCameraShake_Rifle_C::GetDefaultObj()
{
	static class UCameraShake_Rifle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraShake_Rifle_C*>(UCameraShake_Rifle_C::StaticClass()->DefaultObject);

	return Default;
}

}


