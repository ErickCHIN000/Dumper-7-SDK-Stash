#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LocalGuardianCompensator.BP_LocalGuardianCompensator_C
// (Actor)

class UClass* ABP_LocalGuardianCompensator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LocalGuardianCompensator_C");

	return Clss;
}


// BP_LocalGuardianCompensator_C BP_LocalGuardianCompensator.Default__BP_LocalGuardianCompensator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LocalGuardianCompensator_C* ABP_LocalGuardianCompensator_C::GetDefaultObj()
{
	static class ABP_LocalGuardianCompensator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LocalGuardianCompensator_C*>(ABP_LocalGuardianCompensator_C::StaticClass()->DefaultObject);

	return Default;
}

}


