#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_HUD_DamagedEquipmentIndicator.WBP_HUD_DamagedEquipmentIndicator_C
// (None)

class UClass* UWBP_HUD_DamagedEquipmentIndicator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_HUD_DamagedEquipmentIndicator_C");

	return Clss;
}


// WBP_HUD_DamagedEquipmentIndicator_C WBP_HUD_DamagedEquipmentIndicator.Default__WBP_HUD_DamagedEquipmentIndicator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_HUD_DamagedEquipmentIndicator_C* UWBP_HUD_DamagedEquipmentIndicator_C::GetDefaultObj()
{
	static class UWBP_HUD_DamagedEquipmentIndicator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_HUD_DamagedEquipmentIndicator_C*>(UWBP_HUD_DamagedEquipmentIndicator_C::StaticClass()->DefaultObject);

	return Default;
}

}


