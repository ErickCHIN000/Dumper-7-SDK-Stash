#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PlayerStatsBar.WBP_PlayerStatsBar_C
// (None)

class UClass* UWBP_PlayerStatsBar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PlayerStatsBar_C");

	return Clss;
}


// WBP_PlayerStatsBar_C WBP_PlayerStatsBar.Default__WBP_PlayerStatsBar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PlayerStatsBar_C* UWBP_PlayerStatsBar_C::GetDefaultObj()
{
	static class UWBP_PlayerStatsBar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PlayerStatsBar_C*>(UWBP_PlayerStatsBar_C::StaticClass()->DefaultObject);

	return Default;
}

}


