#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MilitaryFlashlight.BP_MilitaryFlashlight_C
// (Actor)

class UClass* ABP_MilitaryFlashlight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MilitaryFlashlight_C");

	return Clss;
}


// BP_MilitaryFlashlight_C BP_MilitaryFlashlight.Default__BP_MilitaryFlashlight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MilitaryFlashlight_C* ABP_MilitaryFlashlight_C::GetDefaultObj()
{
	static class ABP_MilitaryFlashlight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MilitaryFlashlight_C*>(ABP_MilitaryFlashlight_C::StaticClass()->DefaultObject);

	return Default;
}

}


