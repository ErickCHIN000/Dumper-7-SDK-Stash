#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_CC_ButtonWings.WBP_CC_ButtonWings_C
// (None)

class UClass* UWBP_CC_ButtonWings_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_CC_ButtonWings_C");

	return Clss;
}


// WBP_CC_ButtonWings_C WBP_CC_ButtonWings.Default__WBP_CC_ButtonWings_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_CC_ButtonWings_C* UWBP_CC_ButtonWings_C::GetDefaultObj()
{
	static class UWBP_CC_ButtonWings_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_CC_ButtonWings_C*>(UWBP_CC_ButtonWings_C::StaticClass()->DefaultObject);

	return Default;
}

}


