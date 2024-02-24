#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_TotemArrowDown.WBP_TotemArrowDown_C
// (None)

class UClass* UWBP_TotemArrowDown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_TotemArrowDown_C");

	return Clss;
}


// WBP_TotemArrowDown_C WBP_TotemArrowDown.Default__WBP_TotemArrowDown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_TotemArrowDown_C* UWBP_TotemArrowDown_C::GetDefaultObj()
{
	static class UWBP_TotemArrowDown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_TotemArrowDown_C*>(UWBP_TotemArrowDown_C::StaticClass()->DefaultObject);

	return Default;
}

}


