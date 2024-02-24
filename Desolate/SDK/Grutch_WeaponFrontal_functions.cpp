#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Grutch_WeaponFrontal.Grutch_WeaponFrontal_C
// (Actor)

class UClass* AGrutch_WeaponFrontal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Grutch_WeaponFrontal_C");

	return Clss;
}


// Grutch_WeaponFrontal_C Grutch_WeaponFrontal.Default__Grutch_WeaponFrontal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGrutch_WeaponFrontal_C* AGrutch_WeaponFrontal_C::GetDefaultObj()
{
	static class AGrutch_WeaponFrontal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGrutch_WeaponFrontal_C*>(AGrutch_WeaponFrontal_C::StaticClass()->DefaultObject);

	return Default;
}

}


