#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_Spell_Channel_Laserhand_Start_R.Action_Spell_Channel_Laserhand_Start_R_C
// (None)

class UClass* UAction_Spell_Channel_Laserhand_Start_R_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_Spell_Channel_Laserhand_Start_R_C");

	return Clss;
}


// Action_Spell_Channel_Laserhand_Start_R_C Action_Spell_Channel_Laserhand_Start_R.Default__Action_Spell_Channel_Laserhand_Start_R_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_Spell_Channel_Laserhand_Start_R_C* UAction_Spell_Channel_Laserhand_Start_R_C::GetDefaultObj()
{
	static class UAction_Spell_Channel_Laserhand_Start_R_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_Spell_Channel_Laserhand_Start_R_C*>(UAction_Spell_Channel_Laserhand_Start_R_C::StaticClass()->DefaultObject);

	return Default;
}

}


