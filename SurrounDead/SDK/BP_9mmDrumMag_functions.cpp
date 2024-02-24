#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_9mmDrumMag.BP_9mmDrumMag_C
// (Actor)

class UClass* ABP_9mmDrumMag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_9mmDrumMag_C");

	return Clss;
}


// BP_9mmDrumMag_C BP_9mmDrumMag.Default__BP_9mmDrumMag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_9mmDrumMag_C* ABP_9mmDrumMag_C::GetDefaultObj()
{
	static class ABP_9mmDrumMag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_9mmDrumMag_C*>(ABP_9mmDrumMag_C::StaticClass()->DefaultObject);

	return Default;
}

}


