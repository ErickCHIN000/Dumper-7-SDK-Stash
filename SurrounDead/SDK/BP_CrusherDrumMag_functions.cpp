#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CrusherDrumMag.BP_CrusherDrumMag_C
// (Actor)

class UClass* ABP_CrusherDrumMag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CrusherDrumMag_C");

	return Clss;
}


// BP_CrusherDrumMag_C BP_CrusherDrumMag.Default__BP_CrusherDrumMag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CrusherDrumMag_C* ABP_CrusherDrumMag_C::GetDefaultObj()
{
	static class ABP_CrusherDrumMag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CrusherDrumMag_C*>(ABP_CrusherDrumMag_C::StaticClass()->DefaultObject);

	return Default;
}

}


