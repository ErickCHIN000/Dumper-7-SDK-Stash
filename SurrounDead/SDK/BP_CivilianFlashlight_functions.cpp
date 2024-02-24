#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CivilianFlashlight.BP_CivilianFlashlight_C
// (Actor)

class UClass* ABP_CivilianFlashlight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CivilianFlashlight_C");

	return Clss;
}


// BP_CivilianFlashlight_C BP_CivilianFlashlight.Default__BP_CivilianFlashlight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CivilianFlashlight_C* ABP_CivilianFlashlight_C::GetDefaultObj()
{
	static class ABP_CivilianFlashlight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CivilianFlashlight_C*>(ABP_CivilianFlashlight_C::StaticClass()->DefaultObject);

	return Default;
}

}


