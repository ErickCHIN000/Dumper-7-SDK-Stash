#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_RosaryPartyCombo.WBP_RosaryPartyCombo_C
// (None)

class UClass* UWBP_RosaryPartyCombo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_RosaryPartyCombo_C");

	return Clss;
}


// WBP_RosaryPartyCombo_C WBP_RosaryPartyCombo.Default__WBP_RosaryPartyCombo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_RosaryPartyCombo_C* UWBP_RosaryPartyCombo_C::GetDefaultObj()
{
	static class UWBP_RosaryPartyCombo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_RosaryPartyCombo_C*>(UWBP_RosaryPartyCombo_C::StaticClass()->DefaultObject);

	return Default;
}

}


