#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_ForeSightBar.WBP_ForeSightBar_C
// (None)

class UClass* UWBP_ForeSightBar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_ForeSightBar_C");

	return Clss;
}


// WBP_ForeSightBar_C WBP_ForeSightBar.Default__WBP_ForeSightBar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_ForeSightBar_C* UWBP_ForeSightBar_C::GetDefaultObj()
{
	static class UWBP_ForeSightBar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_ForeSightBar_C*>(UWBP_ForeSightBar_C::StaticClass()->DefaultObject);

	return Default;
}

}


