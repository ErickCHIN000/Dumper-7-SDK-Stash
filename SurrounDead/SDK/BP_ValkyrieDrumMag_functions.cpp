#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ValkyrieDrumMag.BP_ValkyrieDrumMag_C
// (Actor)

class UClass* ABP_ValkyrieDrumMag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ValkyrieDrumMag_C");

	return Clss;
}


// BP_ValkyrieDrumMag_C BP_ValkyrieDrumMag.Default__BP_ValkyrieDrumMag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ValkyrieDrumMag_C* ABP_ValkyrieDrumMag_C::GetDefaultObj()
{
	static class ABP_ValkyrieDrumMag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ValkyrieDrumMag_C*>(ABP_ValkyrieDrumMag_C::StaticClass()->DefaultObject);

	return Default;
}

}


