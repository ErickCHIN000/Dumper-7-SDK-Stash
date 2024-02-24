#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LocalValkyrieCompensator.BP_LocalValkyrieCompensator_C
// (Actor)

class UClass* ABP_LocalValkyrieCompensator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LocalValkyrieCompensator_C");

	return Clss;
}


// BP_LocalValkyrieCompensator_C BP_LocalValkyrieCompensator.Default__BP_LocalValkyrieCompensator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LocalValkyrieCompensator_C* ABP_LocalValkyrieCompensator_C::GetDefaultObj()
{
	static class ABP_LocalValkyrieCompensator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LocalValkyrieCompensator_C*>(ABP_LocalValkyrieCompensator_C::StaticClass()->DefaultObject);

	return Default;
}

}


