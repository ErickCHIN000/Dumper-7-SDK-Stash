#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CraftingCreationComponent.BP_CraftingCreationComponent_C
// (None)

class UClass* UBP_CraftingCreationComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CraftingCreationComponent_C");

	return Clss;
}


// BP_CraftingCreationComponent_C BP_CraftingCreationComponent.Default__BP_CraftingCreationComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_CraftingCreationComponent_C* UBP_CraftingCreationComponent_C::GetDefaultObj()
{
	static class UBP_CraftingCreationComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_CraftingCreationComponent_C*>(UBP_CraftingCreationComponent_C::StaticClass()->DefaultObject);

	return Default;
}

}


