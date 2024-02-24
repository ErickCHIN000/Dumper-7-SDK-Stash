#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass StyledSpinnerSetting.StyledSpinnerSetting_C
// (None)

class UClass* UStyledSpinnerSetting_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StyledSpinnerSetting_C");

	return Clss;
}


// StyledSpinnerSetting_C StyledSpinnerSetting.Default__StyledSpinnerSetting_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStyledSpinnerSetting_C* UStyledSpinnerSetting_C::GetDefaultObj()
{
	static class UStyledSpinnerSetting_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStyledSpinnerSetting_C*>(UStyledSpinnerSetting_C::StaticClass()->DefaultObject);

	return Default;
}

}


