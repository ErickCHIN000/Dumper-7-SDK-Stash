#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PartyMessage.WBP_PartyMessage_C
// (None)

class UClass* UWBP_PartyMessage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PartyMessage_C");

	return Clss;
}


// WBP_PartyMessage_C WBP_PartyMessage.Default__WBP_PartyMessage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PartyMessage_C* UWBP_PartyMessage_C::GetDefaultObj()
{
	static class UWBP_PartyMessage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PartyMessage_C*>(UWBP_PartyMessage_C::StaticClass()->DefaultObject);

	return Default;
}

}


