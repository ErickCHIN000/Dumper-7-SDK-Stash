#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CameraShake_SniperScopeSway_5.CameraShake_SniperScopeSway_5_C
// (None)

class UClass* UCameraShake_SniperScopeSway_5_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraShake_SniperScopeSway_5_C");

	return Clss;
}


// CameraShake_SniperScopeSway_5_C CameraShake_SniperScopeSway_5.Default__CameraShake_SniperScopeSway_5_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCameraShake_SniperScopeSway_5_C* UCameraShake_SniperScopeSway_5_C::GetDefaultObj()
{
	static class UCameraShake_SniperScopeSway_5_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraShake_SniperScopeSway_5_C*>(UCameraShake_SniperScopeSway_5_C::StaticClass()->DefaultObject);

	return Default;
}

}

