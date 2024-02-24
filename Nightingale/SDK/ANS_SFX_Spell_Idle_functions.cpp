#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ANS_SFX_Spell_Idle.ANS_SFX_Spell_Idle_C
// (None)

class UClass* UANS_SFX_Spell_Idle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANS_SFX_Spell_Idle_C");

	return Clss;
}


// ANS_SFX_Spell_Idle_C ANS_SFX_Spell_Idle.Default__ANS_SFX_Spell_Idle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANS_SFX_Spell_Idle_C* UANS_SFX_Spell_Idle_C::GetDefaultObj()
{
	static class UANS_SFX_Spell_Idle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANS_SFX_Spell_Idle_C*>(UANS_SFX_Spell_Idle_C::StaticClass()->DefaultObject);

	return Default;
}

}


