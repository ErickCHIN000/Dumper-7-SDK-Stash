#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_TotemArrowUP.WBP_TotemArrowUP_C
// (None)

class UClass* UWBP_TotemArrowUP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_TotemArrowUP_C");

	return Clss;
}


// WBP_TotemArrowUP_C WBP_TotemArrowUP.Default__WBP_TotemArrowUP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_TotemArrowUP_C* UWBP_TotemArrowUP_C::GetDefaultObj()
{
	static class UWBP_TotemArrowUP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_TotemArrowUP_C*>(UWBP_TotemArrowUP_C::StaticClass()->DefaultObject);

	return Default;
}

}


