#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_FillGradient.WBP_FillGradient_C
// (None)

class UClass* UWBP_FillGradient_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_FillGradient_C");

	return Clss;
}


// WBP_FillGradient_C WBP_FillGradient.Default__WBP_FillGradient_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_FillGradient_C* UWBP_FillGradient_C::GetDefaultObj()
{
	static class UWBP_FillGradient_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_FillGradient_C*>(UWBP_FillGradient_C::StaticClass()->DefaultObject);

	return Default;
}

}


