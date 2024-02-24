#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LechieCompensator.BP_LechieCompensator_C
// (Actor)

class UClass* ABP_LechieCompensator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LechieCompensator_C");

	return Clss;
}


// BP_LechieCompensator_C BP_LechieCompensator.Default__BP_LechieCompensator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LechieCompensator_C* ABP_LechieCompensator_C::GetDefaultObj()
{
	static class ABP_LechieCompensator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LechieCompensator_C*>(ABP_LechieCompensator_C::StaticClass()->DefaultObject);

	return Default;
}

}


