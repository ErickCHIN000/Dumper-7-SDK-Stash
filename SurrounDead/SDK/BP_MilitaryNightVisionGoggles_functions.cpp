#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_MilitaryNightVisionGoggles.BP_MilitaryNightVisionGoggles_C
// (Actor)

class UClass* ABP_MilitaryNightVisionGoggles_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_MilitaryNightVisionGoggles_C");

	return Clss;
}


// BP_MilitaryNightVisionGoggles_C BP_MilitaryNightVisionGoggles.Default__BP_MilitaryNightVisionGoggles_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_MilitaryNightVisionGoggles_C* ABP_MilitaryNightVisionGoggles_C::GetDefaultObj()
{
	static class ABP_MilitaryNightVisionGoggles_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_MilitaryNightVisionGoggles_C*>(ABP_MilitaryNightVisionGoggles_C::StaticClass()->DefaultObject);

	return Default;
}

}


