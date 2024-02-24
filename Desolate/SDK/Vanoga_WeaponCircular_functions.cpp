#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Vanoga_WeaponCircular.Vanoga_WeaponCircular_C
// (Actor)

class UClass* AVanoga_WeaponCircular_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Vanoga_WeaponCircular_C");

	return Clss;
}


// Vanoga_WeaponCircular_C Vanoga_WeaponCircular.Default__Vanoga_WeaponCircular_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AVanoga_WeaponCircular_C* AVanoga_WeaponCircular_C::GetDefaultObj()
{
	static class AVanoga_WeaponCircular_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AVanoga_WeaponCircular_C*>(AVanoga_WeaponCircular_C::StaticClass()->DefaultObject);

	return Default;
}

}


