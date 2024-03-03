#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CraftingIngredient.BP_CraftingIngredient_C
// (Actor)

class UClass* ABP_CraftingIngredient_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CraftingIngredient_C");

	return Clss;
}


// BP_CraftingIngredient_C BP_CraftingIngredient.Default__BP_CraftingIngredient_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_CraftingIngredient_C* ABP_CraftingIngredient_C::GetDefaultObj()
{
	static class ABP_CraftingIngredient_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_CraftingIngredient_C*>(ABP_CraftingIngredient_C::StaticClass()->DefaultObject);

	return Default;
}

}


