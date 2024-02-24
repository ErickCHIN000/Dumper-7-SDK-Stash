#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RangerHat.BP_RangerHat_C
// (Actor)

class UClass* ABP_RangerHat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RangerHat_C");

	return Clss;
}


// BP_RangerHat_C BP_RangerHat.Default__BP_RangerHat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_RangerHat_C* ABP_RangerHat_C::GetDefaultObj()
{
	static class ABP_RangerHat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_RangerHat_C*>(ABP_RangerHat_C::StaticClass()->DefaultObject);

	return Default;
}

}


