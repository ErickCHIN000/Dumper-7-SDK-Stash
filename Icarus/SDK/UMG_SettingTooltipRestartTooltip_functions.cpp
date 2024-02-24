#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_SettingTooltipRestartTooltip.UMG_SettingTooltipRestartTooltip_C
// (None)

class UClass* UUMG_SettingTooltipRestartTooltip_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_SettingTooltipRestartTooltip_C");

	return Clss;
}


// UMG_SettingTooltipRestartTooltip_C UMG_SettingTooltipRestartTooltip.Default__UMG_SettingTooltipRestartTooltip_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_SettingTooltipRestartTooltip_C* UUMG_SettingTooltipRestartTooltip_C::GetDefaultObj()
{
	static class UUMG_SettingTooltipRestartTooltip_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_SettingTooltipRestartTooltip_C*>(UUMG_SettingTooltipRestartTooltip_C::StaticClass()->DefaultObject);

	return Default;
}

}


