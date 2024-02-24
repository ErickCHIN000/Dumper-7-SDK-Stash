#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Component_Small_Flourish_Center.WBP_Component_Small_Flourish_Center_C
// (None)

class UClass* UWBP_Component_Small_Flourish_Center_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Component_Small_Flourish_Center_C");

	return Clss;
}


// WBP_Component_Small_Flourish_Center_C WBP_Component_Small_Flourish_Center.Default__WBP_Component_Small_Flourish_Center_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Component_Small_Flourish_Center_C* UWBP_Component_Small_Flourish_Center_C::GetDefaultObj()
{
	static class UWBP_Component_Small_Flourish_Center_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Component_Small_Flourish_Center_C*>(UWBP_Component_Small_Flourish_Center_C::StaticClass()->DefaultObject);

	return Default;
}

}


