#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Gore_BabyPoopGreenBlood.BP_Gore_BabyPoopGreenBlood_C
// (Actor)

class UClass* ABP_Gore_BabyPoopGreenBlood_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Gore_BabyPoopGreenBlood_C");

	return Clss;
}


// BP_Gore_BabyPoopGreenBlood_C BP_Gore_BabyPoopGreenBlood.Default__BP_Gore_BabyPoopGreenBlood_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Gore_BabyPoopGreenBlood_C* ABP_Gore_BabyPoopGreenBlood_C::GetDefaultObj()
{
	static class ABP_Gore_BabyPoopGreenBlood_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Gore_BabyPoopGreenBlood_C*>(ABP_Gore_BabyPoopGreenBlood_C::StaticClass()->DefaultObject);

	return Default;
}

}


