#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GuardianMag.BP_GuardianMag_C
// (Actor)

class UClass* ABP_GuardianMag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GuardianMag_C");

	return Clss;
}


// BP_GuardianMag_C BP_GuardianMag.Default__BP_GuardianMag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_GuardianMag_C* ABP_GuardianMag_C::GetDefaultObj()
{
	static class ABP_GuardianMag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_GuardianMag_C*>(ABP_GuardianMag_C::StaticClass()->DefaultObject);

	return Default;
}

}


