#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_OakInventoryItemPickup_Spells.BP_OakInventoryItemPickup_Spells_C
// (Actor)

class UClass* ABP_OakInventoryItemPickup_Spells_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_OakInventoryItemPickup_Spells_C");

	return Clss;
}


// BP_OakInventoryItemPickup_Spells_C BP_OakInventoryItemPickup_Spells.Default__BP_OakInventoryItemPickup_Spells_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_OakInventoryItemPickup_Spells_C* ABP_OakInventoryItemPickup_Spells_C::GetDefaultObj()
{
	static class ABP_OakInventoryItemPickup_Spells_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_OakInventoryItemPickup_Spells_C*>(ABP_OakInventoryItemPickup_Spells_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_OakInventoryItemPickup_Spells.BP_OakInventoryItemPickup_Spells_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_OakInventoryItemPickup_Spells_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_OakInventoryItemPickup_Spells_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}


