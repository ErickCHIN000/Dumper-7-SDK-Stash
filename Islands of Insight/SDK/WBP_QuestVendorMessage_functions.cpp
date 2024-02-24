#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_QuestVendorMessage.WBP_QuestVendorMessage_C
// (None)

class UClass* UWBP_QuestVendorMessage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_QuestVendorMessage_C");

	return Clss;
}


// WBP_QuestVendorMessage_C WBP_QuestVendorMessage.Default__WBP_QuestVendorMessage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_QuestVendorMessage_C* UWBP_QuestVendorMessage_C::GetDefaultObj()
{
	static class UWBP_QuestVendorMessage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_QuestVendorMessage_C*>(UWBP_QuestVendorMessage_C::StaticClass()->DefaultObject);

	return Default;
}

}


