#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LocalCrusherDrumMag.BP_LocalCrusherDrumMag_C
// (Actor)

class UClass* ABP_LocalCrusherDrumMag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LocalCrusherDrumMag_C");

	return Clss;
}


// BP_LocalCrusherDrumMag_C BP_LocalCrusherDrumMag.Default__BP_LocalCrusherDrumMag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LocalCrusherDrumMag_C* ABP_LocalCrusherDrumMag_C::GetDefaultObj()
{
	static class ABP_LocalCrusherDrumMag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LocalCrusherDrumMag_C*>(ABP_LocalCrusherDrumMag_C::StaticClass()->DefaultObject);

	return Default;
}

}


