#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LocalSmallRedDotSight.BP_LocalSmallRedDotSight_C
// (Actor)

class UClass* ABP_LocalSmallRedDotSight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LocalSmallRedDotSight_C");

	return Clss;
}


// BP_LocalSmallRedDotSight_C BP_LocalSmallRedDotSight.Default__BP_LocalSmallRedDotSight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LocalSmallRedDotSight_C* ABP_LocalSmallRedDotSight_C::GetDefaultObj()
{
	static class ABP_LocalSmallRedDotSight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LocalSmallRedDotSight_C*>(ABP_LocalSmallRedDotSight_C::StaticClass()->DefaultObject);

	return Default;
}

}


