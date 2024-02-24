#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SmallRedDotSight.BP_SmallRedDotSight_C
// (Actor)

class UClass* ABP_SmallRedDotSight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SmallRedDotSight_C");

	return Clss;
}


// BP_SmallRedDotSight_C BP_SmallRedDotSight.Default__BP_SmallRedDotSight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SmallRedDotSight_C* ABP_SmallRedDotSight_C::GetDefaultObj()
{
	static class ABP_SmallRedDotSight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SmallRedDotSight_C*>(ABP_SmallRedDotSight_C::StaticClass()->DefaultObject);

	return Default;
}

}


