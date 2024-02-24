#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_DebugThirdPersonCameraWidget.WBP_DebugThirdPersonCameraWidget_C
// (None)

class UClass* UWBP_DebugThirdPersonCameraWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_DebugThirdPersonCameraWidget_C");

	return Clss;
}


// WBP_DebugThirdPersonCameraWidget_C WBP_DebugThirdPersonCameraWidget.Default__WBP_DebugThirdPersonCameraWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_DebugThirdPersonCameraWidget_C* UWBP_DebugThirdPersonCameraWidget_C::GetDefaultObj()
{
	static class UWBP_DebugThirdPersonCameraWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_DebugThirdPersonCameraWidget_C*>(UWBP_DebugThirdPersonCameraWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


