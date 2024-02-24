#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CivilianNightVisionGoggles.BP_CivilianNightVisionGoggles_C
// (Actor)

class UClass* ABP_CivilianNightVisionGoggles_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CivilianNightVisionGoggles_C");

	return Clss;
}


// BP_CivilianNightVisionGoggles_C BP_CivilianNightVisionGoggles.Default__BP_CivilianNightVisionGoggles_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CivilianNightVisionGoggles_C* ABP_CivilianNightVisionGoggles_C::GetDefaultObj()
{
	static class ABP_CivilianNightVisionGoggles_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CivilianNightVisionGoggles_C*>(ABP_CivilianNightVisionGoggles_C::StaticClass()->DefaultObject);

	return Default;
}

}


