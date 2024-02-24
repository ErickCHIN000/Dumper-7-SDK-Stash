#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ANS_SFX_Spell_Prepare.ANS_SFX_Spell_Prepare_C
// (None)

class UClass* UANS_SFX_Spell_Prepare_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ANS_SFX_Spell_Prepare_C");

	return Clss;
}


// ANS_SFX_Spell_Prepare_C ANS_SFX_Spell_Prepare.Default__ANS_SFX_Spell_Prepare_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UANS_SFX_Spell_Prepare_C* UANS_SFX_Spell_Prepare_C::GetDefaultObj()
{
	static class UANS_SFX_Spell_Prepare_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UANS_SFX_Spell_Prepare_C*>(UANS_SFX_Spell_Prepare_C::StaticClass()->DefaultObject);

	return Default;
}

}


