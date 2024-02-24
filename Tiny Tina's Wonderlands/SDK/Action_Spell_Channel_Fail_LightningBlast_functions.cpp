#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_Spell_Channel_Fail_LightningBlast.Action_Spell_Channel_Fail_LightningBlast_C
// (None)

class UClass* UAction_Spell_Channel_Fail_LightningBlast_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_Spell_Channel_Fail_LightningBlast_C");

	return Clss;
}


// Action_Spell_Channel_Fail_LightningBlast_C Action_Spell_Channel_Fail_LightningBlast.Default__Action_Spell_Channel_Fail_LightningBlast_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_Spell_Channel_Fail_LightningBlast_C* UAction_Spell_Channel_Fail_LightningBlast_C::GetDefaultObj()
{
	static class UAction_Spell_Channel_Fail_LightningBlast_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_Spell_Channel_Fail_LightningBlast_C*>(UAction_Spell_Channel_Fail_LightningBlast_C::StaticClass()->DefaultObject);

	return Default;
}

}


