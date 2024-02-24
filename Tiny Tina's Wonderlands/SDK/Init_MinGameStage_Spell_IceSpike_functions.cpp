#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Init_MinGameStage_Spell_IceSpike.Init_MinGameStage_Spell_IceSpike_C
// (None)

class UClass* UInit_MinGameStage_Spell_IceSpike_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Init_MinGameStage_Spell_IceSpike_C");

	return Clss;
}


// Init_MinGameStage_Spell_IceSpike_C Init_MinGameStage_Spell_IceSpike.Default__Init_MinGameStage_Spell_IceSpike_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInit_MinGameStage_Spell_IceSpike_C* UInit_MinGameStage_Spell_IceSpike_C::GetDefaultObj()
{
	static class UInit_MinGameStage_Spell_IceSpike_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInit_MinGameStage_Spell_IceSpike_C*>(UInit_MinGameStage_Spell_IceSpike_C::StaticClass()->DefaultObject);

	return Default;
}

}


