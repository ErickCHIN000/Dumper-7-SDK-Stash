#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_TooltipProjectionActor.BP_TooltipProjectionActor_C
// (Actor)

class UClass* ABP_TooltipProjectionActor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_TooltipProjectionActor_C");

	return Clss;
}


// BP_TooltipProjectionActor_C BP_TooltipProjectionActor.Default__BP_TooltipProjectionActor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_TooltipProjectionActor_C* ABP_TooltipProjectionActor_C::GetDefaultObj()
{
	static class ABP_TooltipProjectionActor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_TooltipProjectionActor_C*>(ABP_TooltipProjectionActor_C::StaticClass()->DefaultObject);

	return Default;
}

}


