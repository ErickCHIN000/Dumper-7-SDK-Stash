#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Grutch_WeaponCircular.Grutch_WeaponCircular_C
// (Actor)

class UClass* AGrutch_WeaponCircular_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Grutch_WeaponCircular_C");

	return Clss;
}


// Grutch_WeaponCircular_C Grutch_WeaponCircular.Default__Grutch_WeaponCircular_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGrutch_WeaponCircular_C* AGrutch_WeaponCircular_C::GetDefaultObj()
{
	static class AGrutch_WeaponCircular_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGrutch_WeaponCircular_C*>(AGrutch_WeaponCircular_C::StaticClass()->DefaultObject);

	return Default;
}

}


