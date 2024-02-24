#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_FeedMessage.WBP_FeedMessage_C
// (None)

class UClass* UWBP_FeedMessage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_FeedMessage_C");

	return Clss;
}


// WBP_FeedMessage_C WBP_FeedMessage.Default__WBP_FeedMessage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_FeedMessage_C* UWBP_FeedMessage_C::GetDefaultObj()
{
	static class UWBP_FeedMessage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_FeedMessage_C*>(UWBP_FeedMessage_C::StaticClass()->DefaultObject);

	return Default;
}

}


