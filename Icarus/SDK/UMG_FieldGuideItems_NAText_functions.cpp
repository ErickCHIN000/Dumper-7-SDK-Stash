#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_FieldGuideItems_NAText.UMG_FieldGuideItems_NAText_C
// (None)

class UClass* UUMG_FieldGuideItems_NAText_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_FieldGuideItems_NAText_C");

	return Clss;
}


// UMG_FieldGuideItems_NAText_C UMG_FieldGuideItems_NAText.Default__UMG_FieldGuideItems_NAText_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_FieldGuideItems_NAText_C* UUMG_FieldGuideItems_NAText_C::GetDefaultObj()
{
	static class UUMG_FieldGuideItems_NAText_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_FieldGuideItems_NAText_C*>(UUMG_FieldGuideItems_NAText_C::StaticClass()->DefaultObject);

	return Default;
}

}


