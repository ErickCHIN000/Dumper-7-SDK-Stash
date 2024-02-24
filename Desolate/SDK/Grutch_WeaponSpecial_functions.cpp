#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Grutch_WeaponSpecial.Grutch_WeaponSpecial_C
// (Actor)

class UClass* AGrutch_WeaponSpecial_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Grutch_WeaponSpecial_C");

	return Clss;
}


// Grutch_WeaponSpecial_C Grutch_WeaponSpecial.Default__Grutch_WeaponSpecial_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGrutch_WeaponSpecial_C* AGrutch_WeaponSpecial_C::GetDefaultObj()
{
	static class AGrutch_WeaponSpecial_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGrutch_WeaponSpecial_C*>(AGrutch_WeaponSpecial_C::StaticClass()->DefaultObject);

	return Default;
}

}


