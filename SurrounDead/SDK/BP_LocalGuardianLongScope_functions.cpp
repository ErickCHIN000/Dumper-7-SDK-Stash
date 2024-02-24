#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LocalGuardianLongScope.BP_LocalGuardianLongScope_C
// (Actor)

class UClass* ABP_LocalGuardianLongScope_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LocalGuardianLongScope_C");

	return Clss;
}


// BP_LocalGuardianLongScope_C BP_LocalGuardianLongScope.Default__BP_LocalGuardianLongScope_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LocalGuardianLongScope_C* ABP_LocalGuardianLongScope_C::GetDefaultObj()
{
	static class ABP_LocalGuardianLongScope_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LocalGuardianLongScope_C*>(ABP_LocalGuardianLongScope_C::StaticClass()->DefaultObject);

	return Default;
}

}


