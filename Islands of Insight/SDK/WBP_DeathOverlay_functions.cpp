#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_DeathOverlay.WBP_DeathOverlay_C
// (None)

class UClass* UWBP_DeathOverlay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_DeathOverlay_C");

	return Clss;
}


// WBP_DeathOverlay_C WBP_DeathOverlay.Default__WBP_DeathOverlay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_DeathOverlay_C* UWBP_DeathOverlay_C::GetDefaultObj()
{
	static class UWBP_DeathOverlay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_DeathOverlay_C*>(UWBP_DeathOverlay_C::StaticClass()->DefaultObject);

	return Default;
}

}


