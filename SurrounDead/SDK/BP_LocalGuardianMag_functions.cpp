#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LocalGuardianMag.BP_LocalGuardianMag_C
// (Actor)

class UClass* ABP_LocalGuardianMag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LocalGuardianMag_C");

	return Clss;
}


// BP_LocalGuardianMag_C BP_LocalGuardianMag.Default__BP_LocalGuardianMag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LocalGuardianMag_C* ABP_LocalGuardianMag_C::GetDefaultObj()
{
	static class ABP_LocalGuardianMag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LocalGuardianMag_C*>(ABP_LocalGuardianMag_C::StaticClass()->DefaultObject);

	return Default;
}

}


