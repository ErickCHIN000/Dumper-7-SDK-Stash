#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass StyledComboBoxSetting.StyledComboBoxSetting_C
// (None)

class UClass* UStyledComboBoxSetting_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StyledComboBoxSetting_C");

	return Clss;
}


// StyledComboBoxSetting_C StyledComboBoxSetting.Default__StyledComboBoxSetting_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStyledComboBoxSetting_C* UStyledComboBoxSetting_C::GetDefaultObj()
{
	static class UStyledComboBoxSetting_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStyledComboBoxSetting_C*>(UStyledComboBoxSetting_C::StaticClass()->DefaultObject);

	return Default;
}

}


