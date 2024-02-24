#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Save_SkillTree.Save_SkillTree_C
// (None)

class UClass* USave_SkillTree_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Save_SkillTree_C");

	return Clss;
}


// Save_SkillTree_C Save_SkillTree.Default__Save_SkillTree_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USave_SkillTree_C* USave_SkillTree_C::GetDefaultObj()
{
	static class USave_SkillTree_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USave_SkillTree_C*>(USave_SkillTree_C::StaticClass()->DefaultObject);

	return Default;
}

}


