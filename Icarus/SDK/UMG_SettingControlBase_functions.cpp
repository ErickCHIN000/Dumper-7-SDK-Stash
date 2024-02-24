#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_SettingControlBase.UMG_SettingControlBase_C
// (None)

class UClass* UUMG_SettingControlBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_SettingControlBase_C");

	return Clss;
}


// UMG_SettingControlBase_C UMG_SettingControlBase.Default__UMG_SettingControlBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_SettingControlBase_C* UUMG_SettingControlBase_C::GetDefaultObj()
{
	static class UUMG_SettingControlBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_SettingControlBase_C*>(UUMG_SettingControlBase_C::StaticClass()->DefaultObject);

	return Default;
}

}


