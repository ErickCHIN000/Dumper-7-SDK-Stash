#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PerkAbilityBook.PerkAbilityBook_C
// (Actor)

class UClass* APerkAbilityBook_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PerkAbilityBook_C");

	return Clss;
}


// PerkAbilityBook_C PerkAbilityBook.Default__PerkAbilityBook_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APerkAbilityBook_C* APerkAbilityBook_C::GetDefaultObj()
{
	static class APerkAbilityBook_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APerkAbilityBook_C*>(APerkAbilityBook_C::StaticClass()->DefaultObject);

	return Default;
}

}


