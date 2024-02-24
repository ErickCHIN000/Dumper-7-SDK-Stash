#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GuardianCompensator.BP_GuardianCompensator_C
// (Actor)

class UClass* ABP_GuardianCompensator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GuardianCompensator_C");

	return Clss;
}


// BP_GuardianCompensator_C BP_GuardianCompensator.Default__BP_GuardianCompensator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_GuardianCompensator_C* ABP_GuardianCompensator_C::GetDefaultObj()
{
	static class ABP_GuardianCompensator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_GuardianCompensator_C*>(ABP_GuardianCompensator_C::StaticClass()->DefaultObject);

	return Default;
}

}


