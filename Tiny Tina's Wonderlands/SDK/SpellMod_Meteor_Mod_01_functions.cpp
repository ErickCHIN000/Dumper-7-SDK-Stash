#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SpellMod_Meteor_Mod_01.SpellMod_Meteor_Mod_01_C
// (None)

class UClass* USpellMod_Meteor_Mod_01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpellMod_Meteor_Mod_01_C");

	return Clss;
}


// SpellMod_Meteor_Mod_01_C SpellMod_Meteor_Mod_01.Default__SpellMod_Meteor_Mod_01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USpellMod_Meteor_Mod_01_C* USpellMod_Meteor_Mod_01_C::GetDefaultObj()
{
	static class USpellMod_Meteor_Mod_01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USpellMod_Meteor_Mod_01_C*>(USpellMod_Meteor_Mod_01_C::StaticClass()->DefaultObject);

	return Default;
}

}

