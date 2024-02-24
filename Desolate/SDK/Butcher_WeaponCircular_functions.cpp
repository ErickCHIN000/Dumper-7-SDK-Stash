#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Butcher_WeaponCircular.Butcher_WeaponCircular_C
// (Actor)

class UClass* AButcher_WeaponCircular_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Butcher_WeaponCircular_C");

	return Clss;
}


// Butcher_WeaponCircular_C Butcher_WeaponCircular.Default__Butcher_WeaponCircular_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AButcher_WeaponCircular_C* AButcher_WeaponCircular_C::GetDefaultObj()
{
	static class AButcher_WeaponCircular_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AButcher_WeaponCircular_C*>(AButcher_WeaponCircular_C::StaticClass()->DefaultObject);

	return Default;
}

}


