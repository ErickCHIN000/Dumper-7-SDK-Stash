#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SpellActor_CircleOfProtection_Frostburn.SpellActor_CircleOfProtection_Frostburn_C
// (Actor)

class UClass* ASpellActor_CircleOfProtection_Frostburn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpellActor_CircleOfProtection_Frostburn_C");

	return Clss;
}


// SpellActor_CircleOfProtection_Frostburn_C SpellActor_CircleOfProtection_Frostburn.Default__SpellActor_CircleOfProtection_Frostburn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASpellActor_CircleOfProtection_Frostburn_C* ASpellActor_CircleOfProtection_Frostburn_C::GetDefaultObj()
{
	static class ASpellActor_CircleOfProtection_Frostburn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASpellActor_CircleOfProtection_Frostburn_C*>(ASpellActor_CircleOfProtection_Frostburn_C::StaticClass()->DefaultObject);

	return Default;
}

}


