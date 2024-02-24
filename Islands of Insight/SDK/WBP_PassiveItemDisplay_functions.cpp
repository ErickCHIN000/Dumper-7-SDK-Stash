#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PassiveItemDisplay.WBP_PassiveItemDisplay_C
// (None)

class UClass* UWBP_PassiveItemDisplay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PassiveItemDisplay_C");

	return Clss;
}


// WBP_PassiveItemDisplay_C WBP_PassiveItemDisplay.Default__WBP_PassiveItemDisplay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PassiveItemDisplay_C* UWBP_PassiveItemDisplay_C::GetDefaultObj()
{
	static class UWBP_PassiveItemDisplay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PassiveItemDisplay_C*>(UWBP_PassiveItemDisplay_C::StaticClass()->DefaultObject);

	return Default;
}

}


