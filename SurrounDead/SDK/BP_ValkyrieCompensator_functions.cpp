#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ValkyrieCompensator.BP_ValkyrieCompensator_C
// (Actor)

class UClass* ABP_ValkyrieCompensator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ValkyrieCompensator_C");

	return Clss;
}


// BP_ValkyrieCompensator_C BP_ValkyrieCompensator.Default__BP_ValkyrieCompensator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ValkyrieCompensator_C* ABP_ValkyrieCompensator_C::GetDefaultObj()
{
	static class ABP_ValkyrieCompensator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ValkyrieCompensator_C*>(ABP_ValkyrieCompensator_C::StaticClass()->DefaultObject);

	return Default;
}

}


