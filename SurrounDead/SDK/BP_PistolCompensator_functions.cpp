#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PistolCompensator.BP_PistolCompensator_C
// (Actor)

class UClass* ABP_PistolCompensator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PistolCompensator_C");

	return Clss;
}


// BP_PistolCompensator_C BP_PistolCompensator.Default__BP_PistolCompensator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_PistolCompensator_C* ABP_PistolCompensator_C::GetDefaultObj()
{
	static class ABP_PistolCompensator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_PistolCompensator_C*>(ABP_PistolCompensator_C::StaticClass()->DefaultObject);

	return Default;
}

}


