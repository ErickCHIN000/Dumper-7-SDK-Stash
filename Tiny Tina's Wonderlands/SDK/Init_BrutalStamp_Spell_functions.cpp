#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Init_BrutalStamp_Spell.Init_BrutalStamp_Spell_C
// (None)

class UClass* UInit_BrutalStamp_Spell_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Init_BrutalStamp_Spell_C");

	return Clss;
}


// Init_BrutalStamp_Spell_C Init_BrutalStamp_Spell.Default__Init_BrutalStamp_Spell_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInit_BrutalStamp_Spell_C* UInit_BrutalStamp_Spell_C::GetDefaultObj()
{
	static class UInit_BrutalStamp_Spell_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInit_BrutalStamp_Spell_C*>(UInit_BrutalStamp_Spell_C::StaticClass()->DefaultObject);

	return Default;
}

}


