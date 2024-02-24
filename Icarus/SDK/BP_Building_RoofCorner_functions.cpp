#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Building_RoofCorner.BP_Building_RoofCorner_C
// (Actor)

class UClass* ABP_Building_RoofCorner_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Building_RoofCorner_C");

	return Clss;
}


// BP_Building_RoofCorner_C BP_Building_RoofCorner.Default__BP_Building_RoofCorner_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Building_RoofCorner_C* ABP_Building_RoofCorner_C::GetDefaultObj()
{
	static class ABP_Building_RoofCorner_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Building_RoofCorner_C*>(ABP_Building_RoofCorner_C::StaticClass()->DefaultObject);

	return Default;
}

}


