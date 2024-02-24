#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_WidgetHighlightBase.UMG_WidgetHighlightBase_C
// (None)

class UClass* UUMG_WidgetHighlightBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_WidgetHighlightBase_C");

	return Clss;
}


// UMG_WidgetHighlightBase_C UMG_WidgetHighlightBase.Default__UMG_WidgetHighlightBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_WidgetHighlightBase_C* UUMG_WidgetHighlightBase_C::GetDefaultObj()
{
	static class UUMG_WidgetHighlightBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_WidgetHighlightBase_C*>(UUMG_WidgetHighlightBase_C::StaticClass()->DefaultObject);

	return Default;
}

}


