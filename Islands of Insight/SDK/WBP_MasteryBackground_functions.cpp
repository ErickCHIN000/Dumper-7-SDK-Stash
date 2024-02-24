#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_MasteryBackground.WBP_MasteryBackground_C
// (None)

class UClass* UWBP_MasteryBackground_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_MasteryBackground_C");

	return Clss;
}


// WBP_MasteryBackground_C WBP_MasteryBackground.Default__WBP_MasteryBackground_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_MasteryBackground_C* UWBP_MasteryBackground_C::GetDefaultObj()
{
	static class UWBP_MasteryBackground_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_MasteryBackground_C*>(UWBP_MasteryBackground_C::StaticClass()->DefaultObject);

	return Default;
}

}


