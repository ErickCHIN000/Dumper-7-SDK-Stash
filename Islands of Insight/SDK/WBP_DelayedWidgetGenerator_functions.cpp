#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_DelayedWidgetGenerator.WBP_DelayedWidgetGenerator_C
// (None)

class UClass* UWBP_DelayedWidgetGenerator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_DelayedWidgetGenerator_C");

	return Clss;
}


// WBP_DelayedWidgetGenerator_C WBP_DelayedWidgetGenerator.Default__WBP_DelayedWidgetGenerator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_DelayedWidgetGenerator_C* UWBP_DelayedWidgetGenerator_C::GetDefaultObj()
{
	static class UWBP_DelayedWidgetGenerator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_DelayedWidgetGenerator_C*>(UWBP_DelayedWidgetGenerator_C::StaticClass()->DefaultObject);

	return Default;
}

}


