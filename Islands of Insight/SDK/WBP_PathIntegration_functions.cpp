#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PathIntegration.WBP_PathIntegration_C
// (None)

class UClass* UWBP_PathIntegration_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PathIntegration_C");

	return Clss;
}


// WBP_PathIntegration_C WBP_PathIntegration.Default__WBP_PathIntegration_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PathIntegration_C* UWBP_PathIntegration_C::GetDefaultObj()
{
	static class UWBP_PathIntegration_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PathIntegration_C*>(UWBP_PathIntegration_C::StaticClass()->DefaultObject);

	return Default;
}

}


