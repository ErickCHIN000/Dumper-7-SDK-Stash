#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_UniformGridRadioSelect1.WBP_UniformGridRadioSelect1_C
// (None)

class UClass* UWBP_UniformGridRadioSelect1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_UniformGridRadioSelect1_C");

	return Clss;
}


// WBP_UniformGridRadioSelect1_C WBP_UniformGridRadioSelect1.Default__WBP_UniformGridRadioSelect1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_UniformGridRadioSelect1_C* UWBP_UniformGridRadioSelect1_C::GetDefaultObj()
{
	static class UWBP_UniformGridRadioSelect1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_UniformGridRadioSelect1_C*>(UWBP_UniformGridRadioSelect1_C::StaticClass()->DefaultObject);

	return Default;
}

}


