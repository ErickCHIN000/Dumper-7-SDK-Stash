#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_StyledAxisMapping.WBP_StyledAxisMapping_C
// (None)

class UClass* UWBP_StyledAxisMapping_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_StyledAxisMapping_C");

	return Clss;
}


// WBP_StyledAxisMapping_C WBP_StyledAxisMapping.Default__WBP_StyledAxisMapping_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_StyledAxisMapping_C* UWBP_StyledAxisMapping_C::GetDefaultObj()
{
	static class UWBP_StyledAxisMapping_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_StyledAxisMapping_C*>(UWBP_StyledAxisMapping_C::StaticClass()->DefaultObject);

	return Default;
}

}


