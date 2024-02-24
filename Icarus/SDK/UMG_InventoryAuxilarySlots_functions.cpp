#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_InventoryAuxilarySlots.UMG_InventoryAuxilarySlots_C
// (None)

class UClass* UUMG_InventoryAuxilarySlots_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_InventoryAuxilarySlots_C");

	return Clss;
}


// UMG_InventoryAuxilarySlots_C UMG_InventoryAuxilarySlots.Default__UMG_InventoryAuxilarySlots_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_InventoryAuxilarySlots_C* UUMG_InventoryAuxilarySlots_C::GetDefaultObj()
{
	static class UUMG_InventoryAuxilarySlots_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_InventoryAuxilarySlots_C*>(UUMG_InventoryAuxilarySlots_C::StaticClass()->DefaultObject);

	return Default;
}

}


