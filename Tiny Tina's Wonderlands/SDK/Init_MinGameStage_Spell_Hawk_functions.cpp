#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Init_MinGameStage_Spell_Hawk.Init_MinGameStage_Spell_Hawk_C
// (None)

class UClass* UInit_MinGameStage_Spell_Hawk_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Init_MinGameStage_Spell_Hawk_C");

	return Clss;
}


// Init_MinGameStage_Spell_Hawk_C Init_MinGameStage_Spell_Hawk.Default__Init_MinGameStage_Spell_Hawk_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInit_MinGameStage_Spell_Hawk_C* UInit_MinGameStage_Spell_Hawk_C::GetDefaultObj()
{
	static class UInit_MinGameStage_Spell_Hawk_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInit_MinGameStage_Spell_Hawk_C*>(UInit_MinGameStage_Spell_Hawk_C::StaticClass()->DefaultObject);

	return Default;
}

}


