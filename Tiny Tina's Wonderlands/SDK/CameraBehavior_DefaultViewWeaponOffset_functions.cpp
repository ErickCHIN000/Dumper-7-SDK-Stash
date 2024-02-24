#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CameraBehavior_DefaultViewWeaponOffset.CameraBehavior_DefaultViewWeaponOffset_C
// (None)

class UClass* UCameraBehavior_DefaultViewWeaponOffset_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CameraBehavior_DefaultViewWeaponOffset_C");

	return Clss;
}


// CameraBehavior_DefaultViewWeaponOffset_C CameraBehavior_DefaultViewWeaponOffset.Default__CameraBehavior_DefaultViewWeaponOffset_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCameraBehavior_DefaultViewWeaponOffset_C* UCameraBehavior_DefaultViewWeaponOffset_C::GetDefaultObj()
{
	static class UCameraBehavior_DefaultViewWeaponOffset_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCameraBehavior_DefaultViewWeaponOffset_C*>(UCameraBehavior_DefaultViewWeaponOffset_C::StaticClass()->DefaultObject);

	return Default;
}

}


