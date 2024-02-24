#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LocalLechieCompensator.BP_LocalLechieCompensator_C
// (Actor)

class UClass* ABP_LocalLechieCompensator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LocalLechieCompensator_C");

	return Clss;
}


// BP_LocalLechieCompensator_C BP_LocalLechieCompensator.Default__BP_LocalLechieCompensator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LocalLechieCompensator_C* ABP_LocalLechieCompensator_C::GetDefaultObj()
{
	static class ABP_LocalLechieCompensator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LocalLechieCompensator_C*>(ABP_LocalLechieCompensator_C::StaticClass()->DefaultObject);

	return Default;
}

}


