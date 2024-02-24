#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_MessageQueue.WBP_MessageQueue_C
// (None)

class UClass* UWBP_MessageQueue_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_MessageQueue_C");

	return Clss;
}


// WBP_MessageQueue_C WBP_MessageQueue.Default__WBP_MessageQueue_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_MessageQueue_C* UWBP_MessageQueue_C::GetDefaultObj()
{
	static class UWBP_MessageQueue_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_MessageQueue_C*>(UWBP_MessageQueue_C::StaticClass()->DefaultObject);

	return Default;
}

}


