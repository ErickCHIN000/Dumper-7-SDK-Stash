#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LocalPistolCompensator.BP_LocalPistolCompensator_C
// (Actor)

class UClass* ABP_LocalPistolCompensator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LocalPistolCompensator_C");

	return Clss;
}


// BP_LocalPistolCompensator_C BP_LocalPistolCompensator.Default__BP_LocalPistolCompensator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LocalPistolCompensator_C* ABP_LocalPistolCompensator_C::GetDefaultObj()
{
	static class ABP_LocalPistolCompensator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LocalPistolCompensator_C*>(ABP_LocalPistolCompensator_C::StaticClass()->DefaultObject);

	return Default;
}

}


