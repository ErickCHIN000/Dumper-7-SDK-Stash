#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ColonelsRevengeHoloSight.BP_ColonelsRevengeHoloSight_C
// (Actor)

class UClass* ABP_ColonelsRevengeHoloSight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ColonelsRevengeHoloSight_C");

	return Clss;
}


// BP_ColonelsRevengeHoloSight_C BP_ColonelsRevengeHoloSight.Default__BP_ColonelsRevengeHoloSight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ColonelsRevengeHoloSight_C* ABP_ColonelsRevengeHoloSight_C::GetDefaultObj()
{
	static class ABP_ColonelsRevengeHoloSight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ColonelsRevengeHoloSight_C*>(ABP_ColonelsRevengeHoloSight_C::StaticClass()->DefaultObject);

	return Default;
}

}


