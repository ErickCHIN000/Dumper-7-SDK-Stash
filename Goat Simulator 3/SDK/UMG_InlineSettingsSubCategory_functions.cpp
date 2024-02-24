#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_InlineSettingsSubCategory.UMG_InlineSettingsSubCategory_C
// (None)

class UClass* UUMG_InlineSettingsSubCategory_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_InlineSettingsSubCategory_C");

	return Clss;
}


// UMG_InlineSettingsSubCategory_C UMG_InlineSettingsSubCategory.Default__UMG_InlineSettingsSubCategory_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_InlineSettingsSubCategory_C* UUMG_InlineSettingsSubCategory_C::GetDefaultObj()
{
	static class UUMG_InlineSettingsSubCategory_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_InlineSettingsSubCategory_C*>(UUMG_InlineSettingsSubCategory_C::StaticClass()->DefaultObject);

	return Default;
}

}


