#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_VectorDrumMag.BP_VectorDrumMag_C
// (Actor)

class UClass* ABP_VectorDrumMag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_VectorDrumMag_C");

	return Clss;
}


// BP_VectorDrumMag_C BP_VectorDrumMag.Default__BP_VectorDrumMag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_VectorDrumMag_C* ABP_VectorDrumMag_C::GetDefaultObj()
{
	static class ABP_VectorDrumMag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_VectorDrumMag_C*>(ABP_VectorDrumMag_C::StaticClass()->DefaultObject);

	return Default;
}

}


