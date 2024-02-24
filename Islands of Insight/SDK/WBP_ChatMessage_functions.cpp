#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_ChatMessage.WBP_ChatMessage_C
// (None)

class UClass* UWBP_ChatMessage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_ChatMessage_C");

	return Clss;
}


// WBP_ChatMessage_C WBP_ChatMessage.Default__WBP_ChatMessage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_ChatMessage_C* UWBP_ChatMessage_C::GetDefaultObj()
{
	static class UWBP_ChatMessage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_ChatMessage_C*>(UWBP_ChatMessage_C::StaticClass()->DefaultObject);

	return Default;
}

}


