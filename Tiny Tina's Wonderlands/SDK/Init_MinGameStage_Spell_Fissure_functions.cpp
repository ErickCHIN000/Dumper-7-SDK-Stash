#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Init_MinGameStage_Spell_Fissure.Init_MinGameStage_Spell_Fissure_C
// (None)

class UClass* UInit_MinGameStage_Spell_Fissure_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Init_MinGameStage_Spell_Fissure_C");

	return Clss;
}


// Init_MinGameStage_Spell_Fissure_C Init_MinGameStage_Spell_Fissure.Default__Init_MinGameStage_Spell_Fissure_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInit_MinGameStage_Spell_Fissure_C* UInit_MinGameStage_Spell_Fissure_C::GetDefaultObj()
{
	static class UInit_MinGameStage_Spell_Fissure_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInit_MinGameStage_Spell_Fissure_C*>(UInit_MinGameStage_Spell_Fissure_C::StaticClass()->DefaultObject);

	return Default;
}

}


