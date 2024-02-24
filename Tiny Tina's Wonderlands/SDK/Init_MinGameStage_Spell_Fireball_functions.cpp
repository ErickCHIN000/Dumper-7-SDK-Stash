#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Init_MinGameStage_Spell_Fireball.Init_MinGameStage_Spell_Fireball_C
// (None)

class UClass* UInit_MinGameStage_Spell_Fireball_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Init_MinGameStage_Spell_Fireball_C");

	return Clss;
}


// Init_MinGameStage_Spell_Fireball_C Init_MinGameStage_Spell_Fireball.Default__Init_MinGameStage_Spell_Fireball_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInit_MinGameStage_Spell_Fireball_C* UInit_MinGameStage_Spell_Fireball_C::GetDefaultObj()
{
	static class UInit_MinGameStage_Spell_Fireball_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInit_MinGameStage_Spell_Fireball_C*>(UInit_MinGameStage_Spell_Fireball_C::StaticClass()->DefaultObject);

	return Default;
}

}


