#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LocalColonelsRevengeHoloSight.BP_LocalColonelsRevengeHoloSight_C
// (Actor)

class UClass* ABP_LocalColonelsRevengeHoloSight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LocalColonelsRevengeHoloSight_C");

	return Clss;
}


// BP_LocalColonelsRevengeHoloSight_C BP_LocalColonelsRevengeHoloSight.Default__BP_LocalColonelsRevengeHoloSight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LocalColonelsRevengeHoloSight_C* ABP_LocalColonelsRevengeHoloSight_C::GetDefaultObj()
{
	static class ABP_LocalColonelsRevengeHoloSight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LocalColonelsRevengeHoloSight_C*>(ABP_LocalColonelsRevengeHoloSight_C::StaticClass()->DefaultObject);

	return Default;
}

}


