#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass HorizontalRadioSelect.HorizontalRadioSelect_C
// (None)

class UClass* UHorizontalRadioSelect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HorizontalRadioSelect_C");

	return Clss;
}


// HorizontalRadioSelect_C HorizontalRadioSelect.Default__HorizontalRadioSelect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHorizontalRadioSelect_C* UHorizontalRadioSelect_C::GetDefaultObj()
{
	static class UHorizontalRadioSelect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHorizontalRadioSelect_C*>(UHorizontalRadioSelect_C::StaticClass()->DefaultObject);

	return Default;
}

}


