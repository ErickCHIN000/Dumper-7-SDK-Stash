#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Init_MinGameStage_Spell_CircleOfProt.Init_MinGameStage_Spell_CircleOfProt_C
// (None)

class UClass* UInit_MinGameStage_Spell_CircleOfProt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Init_MinGameStage_Spell_CircleOfProt_C");

	return Clss;
}


// Init_MinGameStage_Spell_CircleOfProt_C Init_MinGameStage_Spell_CircleOfProt.Default__Init_MinGameStage_Spell_CircleOfProt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInit_MinGameStage_Spell_CircleOfProt_C* UInit_MinGameStage_Spell_CircleOfProt_C::GetDefaultObj()
{
	static class UInit_MinGameStage_Spell_CircleOfProt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInit_MinGameStage_Spell_CircleOfProt_C*>(UInit_MinGameStage_Spell_CircleOfProt_C::StaticClass()->DefaultObject);

	return Default;
}

}


