#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SkillTreeAsset.BP_SkillTreeAsset_C
// (None)

class UClass* UBP_SkillTreeAsset_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SkillTreeAsset_C");

	return Clss;
}


// BP_SkillTreeAsset_C BP_SkillTreeAsset.Default__BP_SkillTreeAsset_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_SkillTreeAsset_C* UBP_SkillTreeAsset_C::GetDefaultObj()
{
	static class UBP_SkillTreeAsset_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_SkillTreeAsset_C*>(UBP_SkillTreeAsset_C::StaticClass()->DefaultObject);

	return Default;
}

}


