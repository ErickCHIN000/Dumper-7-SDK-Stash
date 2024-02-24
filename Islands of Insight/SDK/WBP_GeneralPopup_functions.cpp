#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_GeneralPopup.WBP_GeneralPopup_C
// (None)

class UClass* UWBP_GeneralPopup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_GeneralPopup_C");

	return Clss;
}


// WBP_GeneralPopup_C WBP_GeneralPopup.Default__WBP_GeneralPopup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_GeneralPopup_C* UWBP_GeneralPopup_C::GetDefaultObj()
{
	static class UWBP_GeneralPopup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_GeneralPopup_C*>(UWBP_GeneralPopup_C::StaticClass()->DefaultObject);

	return Default;
}

}


