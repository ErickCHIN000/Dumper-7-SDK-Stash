#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_BuildableItem_ToyBear.BP_BuildableItem_ToyBear_C
// (Actor)

class UClass* ABP_BuildableItem_ToyBear_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_BuildableItem_ToyBear_C");

	return Clss;
}


// BP_BuildableItem_ToyBear_C BP_BuildableItem_ToyBear.Default__BP_BuildableItem_ToyBear_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_BuildableItem_ToyBear_C* ABP_BuildableItem_ToyBear_C::GetDefaultObj()
{
	static class ABP_BuildableItem_ToyBear_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_BuildableItem_ToyBear_C*>(ABP_BuildableItem_ToyBear_C::StaticClass()->DefaultObject);

	return Default;
}

}


