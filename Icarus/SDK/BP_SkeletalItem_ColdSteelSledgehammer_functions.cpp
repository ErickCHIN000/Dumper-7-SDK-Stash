#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SkeletalItem_ColdSteelSledgehammer.BP_SkeletalItem_ColdSteelSledgehammer_C
// (Actor)

class UClass* ABP_SkeletalItem_ColdSteelSledgehammer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SkeletalItem_ColdSteelSledgehammer_C");

	return Clss;
}


// BP_SkeletalItem_ColdSteelSledgehammer_C BP_SkeletalItem_ColdSteelSledgehammer.Default__BP_SkeletalItem_ColdSteelSledgehammer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SkeletalItem_ColdSteelSledgehammer_C* ABP_SkeletalItem_ColdSteelSledgehammer_C::GetDefaultObj()
{
	static class ABP_SkeletalItem_ColdSteelSledgehammer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SkeletalItem_ColdSteelSledgehammer_C*>(ABP_SkeletalItem_ColdSteelSledgehammer_C::StaticClass()->DefaultObject);

	return Default;
}

}


