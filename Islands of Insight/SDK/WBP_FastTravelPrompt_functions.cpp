#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_FastTravelPrompt.WBP_FastTravelPrompt_C
// (None)

class UClass* UWBP_FastTravelPrompt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_FastTravelPrompt_C");

	return Clss;
}


// WBP_FastTravelPrompt_C WBP_FastTravelPrompt.Default__WBP_FastTravelPrompt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_FastTravelPrompt_C* UWBP_FastTravelPrompt_C::GetDefaultObj()
{
	static class UWBP_FastTravelPrompt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_FastTravelPrompt_C*>(UWBP_FastTravelPrompt_C::StaticClass()->DefaultObject);

	return Default;
}

}


