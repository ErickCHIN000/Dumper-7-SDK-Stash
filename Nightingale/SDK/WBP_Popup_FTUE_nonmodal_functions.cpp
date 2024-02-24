#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Popup_FTUE_nonmodal.WBP_Popup_FTUE_nonmodal_C
// (None)

class UClass* UWBP_Popup_FTUE_nonmodal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Popup_FTUE_nonmodal_C");

	return Clss;
}


// WBP_Popup_FTUE_nonmodal_C WBP_Popup_FTUE_nonmodal.Default__WBP_Popup_FTUE_nonmodal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Popup_FTUE_nonmodal_C* UWBP_Popup_FTUE_nonmodal_C::GetDefaultObj()
{
	static class UWBP_Popup_FTUE_nonmodal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Popup_FTUE_nonmodal_C*>(UWBP_Popup_FTUE_nonmodal_C::StaticClass()->DefaultObject);

	return Default;
}

}


