#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BuildableItem_WoodenFloor.BP_BuildableItem_WoodenFloor_C
// (Actor)

class UClass* ABP_BuildableItem_WoodenFloor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BuildableItem_WoodenFloor_C");

	return Clss;
}


// BP_BuildableItem_WoodenFloor_C BP_BuildableItem_WoodenFloor.Default__BP_BuildableItem_WoodenFloor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BuildableItem_WoodenFloor_C* ABP_BuildableItem_WoodenFloor_C::GetDefaultObj()
{
	static class ABP_BuildableItem_WoodenFloor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BuildableItem_WoodenFloor_C*>(ABP_BuildableItem_WoodenFloor_C::StaticClass()->DefaultObject);

	return Default;
}

}


