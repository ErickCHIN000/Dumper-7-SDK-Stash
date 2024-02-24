#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Challenge_GunMage_SpellCombo.Challenge_GunMage_SpellCombo_C
// (None)

class UClass* UChallenge_GunMage_SpellCombo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Challenge_GunMage_SpellCombo_C");

	return Clss;
}


// Challenge_GunMage_SpellCombo_C Challenge_GunMage_SpellCombo.Default__Challenge_GunMage_SpellCombo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallenge_GunMage_SpellCombo_C* UChallenge_GunMage_SpellCombo_C::GetDefaultObj()
{
	static class UChallenge_GunMage_SpellCombo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallenge_GunMage_SpellCombo_C*>(UChallenge_GunMage_SpellCombo_C::StaticClass()->DefaultObject);

	return Default;
}

}


