#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ReflexSight.BP_ReflexSight_C
// (Actor)

class UClass* ABP_ReflexSight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ReflexSight_C");

	return Clss;
}


// BP_ReflexSight_C BP_ReflexSight.Default__BP_ReflexSight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ReflexSight_C* ABP_ReflexSight_C::GetDefaultObj()
{
	static class ABP_ReflexSight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ReflexSight_C*>(ABP_ReflexSight_C::StaticClass()->DefaultObject);

	return Default;
}

}


