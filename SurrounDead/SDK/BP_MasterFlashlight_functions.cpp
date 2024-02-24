#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MasterFlashlight.BP_MasterFlashlight_C
// (Actor)

class UClass* ABP_MasterFlashlight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MasterFlashlight_C");

	return Clss;
}


// BP_MasterFlashlight_C BP_MasterFlashlight.Default__BP_MasterFlashlight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MasterFlashlight_C* ABP_MasterFlashlight_C::GetDefaultObj()
{
	static class ABP_MasterFlashlight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MasterFlashlight_C*>(ABP_MasterFlashlight_C::StaticClass()->DefaultObject);

	return Default;
}

}


