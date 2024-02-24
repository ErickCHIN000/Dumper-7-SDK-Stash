#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Grutch_Jump_Weapon.Grutch_Jump_Weapon_C
// (Actor)

class UClass* AGrutch_Jump_Weapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Grutch_Jump_Weapon_C");

	return Clss;
}


// Grutch_Jump_Weapon_C Grutch_Jump_Weapon.Default__Grutch_Jump_Weapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGrutch_Jump_Weapon_C* AGrutch_Jump_Weapon_C::GetDefaultObj()
{
	static class AGrutch_Jump_Weapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGrutch_Jump_Weapon_C*>(AGrutch_Jump_Weapon_C::StaticClass()->DefaultObject);

	return Default;
}

}


