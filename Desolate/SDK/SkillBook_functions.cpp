#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SkillBook.SkillBook_C
// (Actor)

class UClass* ASkillBook_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SkillBook_C");

	return Clss;
}


// SkillBook_C SkillBook.Default__SkillBook_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ASkillBook_C* ASkillBook_C::GetDefaultObj()
{
	static class ASkillBook_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ASkillBook_C*>(ASkillBook_C::StaticClass()->DefaultObject);

	return Default;
}

}


