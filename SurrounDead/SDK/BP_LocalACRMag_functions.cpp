#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LocalACRMag.BP_LocalACRMag_C
// (Actor)

class UClass* ABP_LocalACRMag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LocalACRMag_C");

	return Clss;
}


// BP_LocalACRMag_C BP_LocalACRMag.Default__BP_LocalACRMag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LocalACRMag_C* ABP_LocalACRMag_C::GetDefaultObj()
{
	static class ABP_LocalACRMag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LocalACRMag_C*>(ABP_LocalACRMag_C::StaticClass()->DefaultObject);

	return Default;
}

}


