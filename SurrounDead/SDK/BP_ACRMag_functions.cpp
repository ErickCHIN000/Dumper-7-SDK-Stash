#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ACRMag.BP_ACRMag_C
// (Actor)

class UClass* ABP_ACRMag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ACRMag_C");

	return Clss;
}


// BP_ACRMag_C BP_ACRMag.Default__BP_ACRMag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ACRMag_C* ABP_ACRMag_C::GetDefaultObj()
{
	static class ABP_ACRMag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ACRMag_C*>(ABP_ACRMag_C::StaticClass()->DefaultObject);

	return Default;
}

}


