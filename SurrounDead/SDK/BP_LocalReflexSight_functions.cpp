#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LocalReflexSight.BP_LocalReflexSight_C
// (Actor)

class UClass* ABP_LocalReflexSight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LocalReflexSight_C");

	return Clss;
}


// BP_LocalReflexSight_C BP_LocalReflexSight.Default__BP_LocalReflexSight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LocalReflexSight_C* ABP_LocalReflexSight_C::GetDefaultObj()
{
	static class ABP_LocalReflexSight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LocalReflexSight_C*>(ABP_LocalReflexSight_C::StaticClass()->DefaultObject);

	return Default;
}

}


