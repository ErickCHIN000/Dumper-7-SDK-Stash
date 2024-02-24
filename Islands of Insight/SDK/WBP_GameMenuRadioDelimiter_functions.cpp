#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_GameMenuRadioDelimiter.WBP_GameMenuRadioDelimiter_C
// (None)

class UClass* UWBP_GameMenuRadioDelimiter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_GameMenuRadioDelimiter_C");

	return Clss;
}


// WBP_GameMenuRadioDelimiter_C WBP_GameMenuRadioDelimiter.Default__WBP_GameMenuRadioDelimiter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_GameMenuRadioDelimiter_C* UWBP_GameMenuRadioDelimiter_C::GetDefaultObj()
{
	static class UWBP_GameMenuRadioDelimiter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_GameMenuRadioDelimiter_C*>(UWBP_GameMenuRadioDelimiter_C::StaticClass()->DefaultObject);

	return Default;
}

}


