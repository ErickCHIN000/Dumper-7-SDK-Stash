#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_InventorySeperator.UMG_InventorySeperator_C
// (None)

class UClass* UUMG_InventorySeperator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_InventorySeperator_C");

	return Clss;
}


// UMG_InventorySeperator_C UMG_InventorySeperator.Default__UMG_InventorySeperator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_InventorySeperator_C* UUMG_InventorySeperator_C::GetDefaultObj()
{
	static class UUMG_InventorySeperator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_InventorySeperator_C*>(UUMG_InventorySeperator_C::StaticClass()->DefaultObject);

	return Default;
}

}


