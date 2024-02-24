#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_EncyclopediaBackground.WBP_EncyclopediaBackground_C
// (None)

class UClass* UWBP_EncyclopediaBackground_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_EncyclopediaBackground_C");

	return Clss;
}


// WBP_EncyclopediaBackground_C WBP_EncyclopediaBackground.Default__WBP_EncyclopediaBackground_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_EncyclopediaBackground_C* UWBP_EncyclopediaBackground_C::GetDefaultObj()
{
	static class UWBP_EncyclopediaBackground_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_EncyclopediaBackground_C*>(UWBP_EncyclopediaBackground_C::StaticClass()->DefaultObject);

	return Default;
}

}


