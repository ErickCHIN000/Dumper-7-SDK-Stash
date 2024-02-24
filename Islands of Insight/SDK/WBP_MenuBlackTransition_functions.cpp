#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_MenuBlackTransition.WBP_MenuBlackTransition_C
// (None)

class UClass* UWBP_MenuBlackTransition_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_MenuBlackTransition_C");

	return Clss;
}


// WBP_MenuBlackTransition_C WBP_MenuBlackTransition.Default__WBP_MenuBlackTransition_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_MenuBlackTransition_C* UWBP_MenuBlackTransition_C::GetDefaultObj()
{
	static class UWBP_MenuBlackTransition_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_MenuBlackTransition_C*>(UWBP_MenuBlackTransition_C::StaticClass()->DefaultObject);

	return Default;
}

}


