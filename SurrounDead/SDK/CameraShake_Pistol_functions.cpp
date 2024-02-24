#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CameraShake_Pistol.CameraShake_Pistol_C
// (None)

class UClass* UCameraShake_Pistol_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraShake_Pistol_C");

	return Clss;
}


// CameraShake_Pistol_C CameraShake_Pistol.Default__CameraShake_Pistol_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCameraShake_Pistol_C* UCameraShake_Pistol_C::GetDefaultObj()
{
	static class UCameraShake_Pistol_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraShake_Pistol_C*>(UCameraShake_Pistol_C::StaticClass()->DefaultObject);

	return Default;
}

}


