#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BuildableItem_CraftingBench.BP_BuildableItem_CraftingBench_C
// (Actor)

class UClass* ABP_BuildableItem_CraftingBench_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BuildableItem_CraftingBench_C");

	return Clss;
}


// BP_BuildableItem_CraftingBench_C BP_BuildableItem_CraftingBench.Default__BP_BuildableItem_CraftingBench_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BuildableItem_CraftingBench_C* ABP_BuildableItem_CraftingBench_C::GetDefaultObj()
{
	static class ABP_BuildableItem_CraftingBench_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BuildableItem_CraftingBench_C*>(ABP_BuildableItem_CraftingBench_C::StaticClass()->DefaultObject);

	return Default;
}

}


