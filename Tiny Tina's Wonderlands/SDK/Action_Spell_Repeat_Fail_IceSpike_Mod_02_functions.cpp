#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_Spell_Repeat_Fail_IceSpike_Mod_02.Action_Spell_Repeat_Fail_IceSpike_Mod_02_C
// (None)

class UClass* UAction_Spell_Repeat_Fail_IceSpike_Mod_02_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_Spell_Repeat_Fail_IceSpike_Mod_02_C");

	return Clss;
}


// Action_Spell_Repeat_Fail_IceSpike_Mod_02_C Action_Spell_Repeat_Fail_IceSpike_Mod_02.Default__Action_Spell_Repeat_Fail_IceSpike_Mod_02_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_Spell_Repeat_Fail_IceSpike_Mod_02_C* UAction_Spell_Repeat_Fail_IceSpike_Mod_02_C::GetDefaultObj()
{
	static class UAction_Spell_Repeat_Fail_IceSpike_Mod_02_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_Spell_Repeat_Fail_IceSpike_Mod_02_C*>(UAction_Spell_Repeat_Fail_IceSpike_Mod_02_C::StaticClass()->DefaultObject);

	return Default;
}

}


