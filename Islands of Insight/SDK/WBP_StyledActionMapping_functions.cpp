#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_StyledActionMapping.WBP_StyledActionMapping_C
// (None)

class UClass* UWBP_StyledActionMapping_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_StyledActionMapping_C");

	return Clss;
}


// WBP_StyledActionMapping_C WBP_StyledActionMapping.Default__WBP_StyledActionMapping_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_StyledActionMapping_C* UWBP_StyledActionMapping_C::GetDefaultObj()
{
	static class UWBP_StyledActionMapping_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_StyledActionMapping_C*>(UWBP_StyledActionMapping_C::StaticClass()->DefaultObject);

	return Default;
}

}


