#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SpellActor_Eruption_Self_Mod_01.SpellActor_Eruption_Self_Mod_01_C
// (Actor)

class UClass* ASpellActor_Eruption_Self_Mod_01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpellActor_Eruption_Self_Mod_01_C");

	return Clss;
}


// SpellActor_Eruption_Self_Mod_01_C SpellActor_Eruption_Self_Mod_01.Default__SpellActor_Eruption_Self_Mod_01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASpellActor_Eruption_Self_Mod_01_C* ASpellActor_Eruption_Self_Mod_01_C::GetDefaultObj()
{
	static class ASpellActor_Eruption_Self_Mod_01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASpellActor_Eruption_Self_Mod_01_C*>(ASpellActor_Eruption_Self_Mod_01_C::StaticClass()->DefaultObject);

	return Default;
}

}


