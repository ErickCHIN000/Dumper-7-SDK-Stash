#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WoodPlanks.BP_WoodPlanks_C
// (Actor)

class UClass* ABP_WoodPlanks_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WoodPlanks_C");

	return Clss;
}


// BP_WoodPlanks_C BP_WoodPlanks.Default__BP_WoodPlanks_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_WoodPlanks_C* ABP_WoodPlanks_C::GetDefaultObj()
{
	static class ABP_WoodPlanks_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_WoodPlanks_C*>(ABP_WoodPlanks_C::StaticClass()->DefaultObject);

	return Default;
}

}


