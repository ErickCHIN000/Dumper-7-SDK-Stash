#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LocalCivilianNightVisionGoggles.BP_LocalCivilianNightVisionGoggles_C
// (Actor)

class UClass* ABP_LocalCivilianNightVisionGoggles_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LocalCivilianNightVisionGoggles_C");

	return Clss;
}


// BP_LocalCivilianNightVisionGoggles_C BP_LocalCivilianNightVisionGoggles.Default__BP_LocalCivilianNightVisionGoggles_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LocalCivilianNightVisionGoggles_C* ABP_LocalCivilianNightVisionGoggles_C::GetDefaultObj()
{
	static class ABP_LocalCivilianNightVisionGoggles_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LocalCivilianNightVisionGoggles_C*>(ABP_LocalCivilianNightVisionGoggles_C::StaticClass()->DefaultObject);

	return Default;
}

}


