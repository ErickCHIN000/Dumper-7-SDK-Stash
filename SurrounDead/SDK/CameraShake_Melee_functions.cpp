#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CameraShake_Melee.CameraShake_Melee_C
// (None)

class UClass* UCameraShake_Melee_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraShake_Melee_C");

	return Clss;
}


// CameraShake_Melee_C CameraShake_Melee.Default__CameraShake_Melee_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCameraShake_Melee_C* UCameraShake_Melee_C::GetDefaultObj()
{
	static class UCameraShake_Melee_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraShake_Melee_C*>(UCameraShake_Melee_C::StaticClass()->DefaultObject);

	return Default;
}

}


