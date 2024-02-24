#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Grutch_Weapon.Grutch_Weapon_C
// (Actor)

class UClass* AGrutch_Weapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Grutch_Weapon_C");

	return Clss;
}


// Grutch_Weapon_C Grutch_Weapon.Default__Grutch_Weapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGrutch_Weapon_C* AGrutch_Weapon_C::GetDefaultObj()
{
	static class AGrutch_Weapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGrutch_Weapon_C*>(AGrutch_Weapon_C::StaticClass()->DefaultObject);

	return Default;
}

}


