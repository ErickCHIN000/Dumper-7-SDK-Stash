#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GuardianLongScope.BP_GuardianLongScope_C
// (Actor)

class UClass* ABP_GuardianLongScope_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GuardianLongScope_C");

	return Clss;
}


// BP_GuardianLongScope_C BP_GuardianLongScope.Default__BP_GuardianLongScope_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_GuardianLongScope_C* ABP_GuardianLongScope_C::GetDefaultObj()
{
	static class ABP_GuardianLongScope_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_GuardianLongScope_C*>(ABP_GuardianLongScope_C::StaticClass()->DefaultObject);

	return Default;
}

}


