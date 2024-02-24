#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_OakInventoryItemPickup_Melee.BP_OakInventoryItemPickup_Melee_C
// (Actor)

class UClass* ABP_OakInventoryItemPickup_Melee_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_OakInventoryItemPickup_Melee_C");

	return Clss;
}


// BP_OakInventoryItemPickup_Melee_C BP_OakInventoryItemPickup_Melee.Default__BP_OakInventoryItemPickup_Melee_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_OakInventoryItemPickup_Melee_C* ABP_OakInventoryItemPickup_Melee_C::GetDefaultObj()
{
	static class ABP_OakInventoryItemPickup_Melee_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_OakInventoryItemPickup_Melee_C*>(ABP_OakInventoryItemPickup_Melee_C::StaticClass()->DefaultObject);

	return Default;
}

}


