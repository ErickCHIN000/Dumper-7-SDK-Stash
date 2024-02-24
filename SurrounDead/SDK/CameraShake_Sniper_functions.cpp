#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CameraShake_Sniper.CameraShake_Sniper_C
// (None)

class UClass* UCameraShake_Sniper_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraShake_Sniper_C");

	return Clss;
}


// CameraShake_Sniper_C CameraShake_Sniper.Default__CameraShake_Sniper_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCameraShake_Sniper_C* UCameraShake_Sniper_C::GetDefaultObj()
{
	static class UCameraShake_Sniper_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraShake_Sniper_C*>(UCameraShake_Sniper_C::StaticClass()->DefaultObject);

	return Default;
}

}


