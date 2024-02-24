#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Grutch_Weapon_Alpha.Grutch_Weapon_Alpha_C
// (Actor)

class UClass* AGrutch_Weapon_Alpha_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Grutch_Weapon_Alpha_C");

	return Clss;
}


// Grutch_Weapon_Alpha_C Grutch_Weapon_Alpha.Default__Grutch_Weapon_Alpha_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AGrutch_Weapon_Alpha_C* AGrutch_Weapon_Alpha_C::GetDefaultObj()
{
	static class AGrutch_Weapon_Alpha_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AGrutch_Weapon_Alpha_C*>(AGrutch_Weapon_Alpha_C::StaticClass()->DefaultObject);

	return Default;
}

}


