#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_MatchboxSymbolWidget.WBP_MatchboxSymbolWidget_C
// (None)

class UClass* UWBP_MatchboxSymbolWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_MatchboxSymbolWidget_C");

	return Clss;
}


// WBP_MatchboxSymbolWidget_C WBP_MatchboxSymbolWidget.Default__WBP_MatchboxSymbolWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_MatchboxSymbolWidget_C* UWBP_MatchboxSymbolWidget_C::GetDefaultObj()
{
	static class UWBP_MatchboxSymbolWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_MatchboxSymbolWidget_C*>(UWBP_MatchboxSymbolWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


