#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_DirtyWaterBottle.BP_DirtyWaterBottle_C
// (Actor)

class UClass* ABP_DirtyWaterBottle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_DirtyWaterBottle_C");

	return Clss;
}


// BP_DirtyWaterBottle_C BP_DirtyWaterBottle.Default__BP_DirtyWaterBottle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_DirtyWaterBottle_C* ABP_DirtyWaterBottle_C::GetDefaultObj()
{
	static class ABP_DirtyWaterBottle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_DirtyWaterBottle_C*>(ABP_DirtyWaterBottle_C::StaticClass()->DefaultObject);

	return Default;
}

}


