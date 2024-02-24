#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PerkSkillBook.PerkSkillBook_C
// (Actor)

class UClass* APerkSkillBook_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PerkSkillBook_C");

	return Clss;
}


// PerkSkillBook_C PerkSkillBook.Default__PerkSkillBook_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APerkSkillBook_C* APerkSkillBook_C::GetDefaultObj()
{
	static class APerkSkillBook_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APerkSkillBook_C*>(APerkSkillBook_C::StaticClass()->DefaultObject);

	return Default;
}

}


