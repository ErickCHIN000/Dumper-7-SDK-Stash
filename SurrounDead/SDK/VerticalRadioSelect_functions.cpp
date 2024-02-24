#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass VerticalRadioSelect.VerticalRadioSelect_C
// (None)

class UClass* UVerticalRadioSelect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerticalRadioSelect_C");

	return Clss;
}


// VerticalRadioSelect_C VerticalRadioSelect.Default__VerticalRadioSelect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVerticalRadioSelect_C* UVerticalRadioSelect_C::GetDefaultObj()
{
	static class UVerticalRadioSelect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerticalRadioSelect_C*>(UVerticalRadioSelect_C::StaticClass()->DefaultObject);

	return Default;
}

}


