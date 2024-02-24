#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SVDMag.BP_SVDMag_C
// (Actor)

class UClass* ABP_SVDMag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SVDMag_C");

	return Clss;
}


// BP_SVDMag_C BP_SVDMag.Default__BP_SVDMag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SVDMag_C* ABP_SVDMag_C::GetDefaultObj()
{
	static class ABP_SVDMag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SVDMag_C*>(ABP_SVDMag_C::StaticClass()->DefaultObject);

	return Default;
}

}


