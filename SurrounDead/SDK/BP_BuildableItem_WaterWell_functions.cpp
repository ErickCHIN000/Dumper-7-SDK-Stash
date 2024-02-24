#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BuildableItem_WaterWell.BP_BuildableItem_WaterWell_C
// (Actor)

class UClass* ABP_BuildableItem_WaterWell_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BuildableItem_WaterWell_C");

	return Clss;
}


// BP_BuildableItem_WaterWell_C BP_BuildableItem_WaterWell.Default__BP_BuildableItem_WaterWell_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BuildableItem_WaterWell_C* ABP_BuildableItem_WaterWell_C::GetDefaultObj()
{
	static class ABP_BuildableItem_WaterWell_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BuildableItem_WaterWell_C*>(ABP_BuildableItem_WaterWell_C::StaticClass()->DefaultObject);

	return Default;
}

}


