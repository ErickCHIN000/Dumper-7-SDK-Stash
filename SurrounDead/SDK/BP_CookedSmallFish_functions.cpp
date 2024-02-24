#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CookedSmallFish.BP_CookedSmallFish_C
// (Actor)

class UClass* ABP_CookedSmallFish_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CookedSmallFish_C");

	return Clss;
}


// BP_CookedSmallFish_C BP_CookedSmallFish.Default__BP_CookedSmallFish_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CookedSmallFish_C* ABP_CookedSmallFish_C::GetDefaultObj()
{
	static class ABP_CookedSmallFish_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CookedSmallFish_C*>(ABP_CookedSmallFish_C::StaticClass()->DefaultObject);

	return Default;
}

}


