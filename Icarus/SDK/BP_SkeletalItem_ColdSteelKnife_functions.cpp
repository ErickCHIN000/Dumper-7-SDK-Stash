#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SkeletalItem_ColdSteelKnife.BP_SkeletalItem_ColdSteelKnife_C
// (Actor)

class UClass* ABP_SkeletalItem_ColdSteelKnife_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SkeletalItem_ColdSteelKnife_C");

	return Clss;
}


// BP_SkeletalItem_ColdSteelKnife_C BP_SkeletalItem_ColdSteelKnife.Default__BP_SkeletalItem_ColdSteelKnife_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SkeletalItem_ColdSteelKnife_C* ABP_SkeletalItem_ColdSteelKnife_C::GetDefaultObj()
{
	static class ABP_SkeletalItem_ColdSteelKnife_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SkeletalItem_ColdSteelKnife_C*>(ABP_SkeletalItem_ColdSteelKnife_C::StaticClass()->DefaultObject);

	return Default;
}

}


