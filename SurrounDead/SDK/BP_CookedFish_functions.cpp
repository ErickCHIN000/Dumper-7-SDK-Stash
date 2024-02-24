#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CookedFish.BP_CookedFish_C
// (Actor)

class UClass* ABP_CookedFish_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CookedFish_C");

	return Clss;
}


// BP_CookedFish_C BP_CookedFish.Default__BP_CookedFish_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CookedFish_C* ABP_CookedFish_C::GetDefaultObj()
{
	static class ABP_CookedFish_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CookedFish_C*>(ABP_CookedFish_C::StaticClass()->DefaultObject);

	return Default;
}

}


