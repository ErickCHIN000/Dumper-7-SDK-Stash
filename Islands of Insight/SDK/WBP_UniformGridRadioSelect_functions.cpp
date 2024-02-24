#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_UniformGridRadioSelect.WBP_UniformGridRadioSelect_C
// (None)

class UClass* UWBP_UniformGridRadioSelect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_UniformGridRadioSelect_C");

	return Clss;
}


// WBP_UniformGridRadioSelect_C WBP_UniformGridRadioSelect.Default__WBP_UniformGridRadioSelect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_UniformGridRadioSelect_C* UWBP_UniformGridRadioSelect_C::GetDefaultObj()
{
	static class UWBP_UniformGridRadioSelect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_UniformGridRadioSelect_C*>(UWBP_UniformGridRadioSelect_C::StaticClass()->DefaultObject);

	return Default;
}

}


