#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_LocalMilitaryNightVisionGoggles.BP_LocalMilitaryNightVisionGoggles_C
// (Actor)

class UClass* ABP_LocalMilitaryNightVisionGoggles_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_LocalMilitaryNightVisionGoggles_C");

	return Clss;
}


// BP_LocalMilitaryNightVisionGoggles_C BP_LocalMilitaryNightVisionGoggles.Default__BP_LocalMilitaryNightVisionGoggles_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_LocalMilitaryNightVisionGoggles_C* ABP_LocalMilitaryNightVisionGoggles_C::GetDefaultObj()
{
	static class ABP_LocalMilitaryNightVisionGoggles_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_LocalMilitaryNightVisionGoggles_C*>(ABP_LocalMilitaryNightVisionGoggles_C::StaticClass()->DefaultObject);

	return Default;
}

}


