#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_EmptyWaterBottle.BP_EmptyWaterBottle_C
// (Actor)

class UClass* ABP_EmptyWaterBottle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_EmptyWaterBottle_C");

	return Clss;
}


// BP_EmptyWaterBottle_C BP_EmptyWaterBottle.Default__BP_EmptyWaterBottle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_EmptyWaterBottle_C* ABP_EmptyWaterBottle_C::GetDefaultObj()
{
	static class ABP_EmptyWaterBottle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_EmptyWaterBottle_C*>(ABP_EmptyWaterBottle_C::StaticClass()->DefaultObject);

	return Default;
}

}


