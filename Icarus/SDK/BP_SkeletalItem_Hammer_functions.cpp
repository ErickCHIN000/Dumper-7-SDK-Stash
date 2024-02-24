#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SkeletalItem_Hammer.BP_SkeletalItem_Hammer_C
// (Actor)

class UClass* ABP_SkeletalItem_Hammer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SkeletalItem_Hammer_C");

	return Clss;
}


// BP_SkeletalItem_Hammer_C BP_SkeletalItem_Hammer.Default__BP_SkeletalItem_Hammer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SkeletalItem_Hammer_C* ABP_SkeletalItem_Hammer_C::GetDefaultObj()
{
	static class ABP_SkeletalItem_Hammer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SkeletalItem_Hammer_C*>(ABP_SkeletalItem_Hammer_C::StaticClass()->DefaultObject);

	return Default;
}

}


