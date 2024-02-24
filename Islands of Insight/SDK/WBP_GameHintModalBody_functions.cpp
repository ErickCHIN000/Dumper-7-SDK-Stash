#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_GameHintModalBody.WBP_GameHintModalBody_C
// (None)

class UClass* UWBP_GameHintModalBody_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_GameHintModalBody_C");

	return Clss;
}


// WBP_GameHintModalBody_C WBP_GameHintModalBody.Default__WBP_GameHintModalBody_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_GameHintModalBody_C* UWBP_GameHintModalBody_C::GetDefaultObj()
{
	static class UWBP_GameHintModalBody_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_GameHintModalBody_C*>(UWBP_GameHintModalBody_C::StaticClass()->DefaultObject);

	return Default;
}

}


