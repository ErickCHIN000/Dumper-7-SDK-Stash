#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_IndicatorWidget.WB_IndicatorWidget_C
// (None)

class UClass* UWB_IndicatorWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_IndicatorWidget_C");

	return Clss;
}


// WB_IndicatorWidget_C WB_IndicatorWidget.Default__WB_IndicatorWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_IndicatorWidget_C* UWB_IndicatorWidget_C::GetDefaultObj()
{
	static class UWB_IndicatorWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_IndicatorWidget_C*>(UWB_IndicatorWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


