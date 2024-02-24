#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_EquipmentRequestInventoryContainer.BP_EquipmentRequestInventoryContainer_C
// (Actor)

class UClass* ABP_EquipmentRequestInventoryContainer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_EquipmentRequestInventoryContainer_C");

	return Clss;
}


// BP_EquipmentRequestInventoryContainer_C BP_EquipmentRequestInventoryContainer.Default__BP_EquipmentRequestInventoryContainer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_EquipmentRequestInventoryContainer_C* ABP_EquipmentRequestInventoryContainer_C::GetDefaultObj()
{
	static class ABP_EquipmentRequestInventoryContainer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_EquipmentRequestInventoryContainer_C*>(ABP_EquipmentRequestInventoryContainer_C::StaticClass()->DefaultObject);

	return Default;
}

}


