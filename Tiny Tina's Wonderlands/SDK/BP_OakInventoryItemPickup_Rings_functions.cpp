#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_OakInventoryItemPickup_Rings.BP_OakInventoryItemPickup_Rings_C
// (Actor)

class UClass* ABP_OakInventoryItemPickup_Rings_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_OakInventoryItemPickup_Rings_C");

	return Clss;
}


// BP_OakInventoryItemPickup_Rings_C BP_OakInventoryItemPickup_Rings.Default__BP_OakInventoryItemPickup_Rings_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_OakInventoryItemPickup_Rings_C* ABP_OakInventoryItemPickup_Rings_C::GetDefaultObj()
{
	static class ABP_OakInventoryItemPickup_Rings_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_OakInventoryItemPickup_Rings_C*>(ABP_OakInventoryItemPickup_Rings_C::StaticClass()->DefaultObject);

	return Default;
}

}


