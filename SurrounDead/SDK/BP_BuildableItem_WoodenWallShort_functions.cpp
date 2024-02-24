#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BuildableItem_WoodenWallShort.BP_BuildableItem_WoodenWallShort_C
// (Actor)

class UClass* ABP_BuildableItem_WoodenWallShort_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BuildableItem_WoodenWallShort_C");

	return Clss;
}


// BP_BuildableItem_WoodenWallShort_C BP_BuildableItem_WoodenWallShort.Default__BP_BuildableItem_WoodenWallShort_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BuildableItem_WoodenWallShort_C* ABP_BuildableItem_WoodenWallShort_C::GetDefaultObj()
{
	static class ABP_BuildableItem_WoodenWallShort_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BuildableItem_WoodenWallShort_C*>(ABP_BuildableItem_WoodenWallShort_C::StaticClass()->DefaultObject);

	return Default;
}

}


