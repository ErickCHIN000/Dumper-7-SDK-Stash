#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LocalGuardianExtendedMag.BP_LocalGuardianExtendedMag_C
// (Actor)

class UClass* ABP_LocalGuardianExtendedMag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LocalGuardianExtendedMag_C");

	return Clss;
}


// BP_LocalGuardianExtendedMag_C BP_LocalGuardianExtendedMag.Default__BP_LocalGuardianExtendedMag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LocalGuardianExtendedMag_C* ABP_LocalGuardianExtendedMag_C::GetDefaultObj()
{
	static class ABP_LocalGuardianExtendedMag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LocalGuardianExtendedMag_C*>(ABP_LocalGuardianExtendedMag_C::StaticClass()->DefaultObject);

	return Default;
}

}


