#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_NotificationHeader_box.WBP_NotificationHeader_box_C
// (None)

class UClass* UWBP_NotificationHeader_box_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_NotificationHeader_box_C");

	return Clss;
}


// WBP_NotificationHeader_box_C WBP_NotificationHeader_box.Default__WBP_NotificationHeader_box_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_NotificationHeader_box_C* UWBP_NotificationHeader_box_C::GetDefaultObj()
{
	static class UWBP_NotificationHeader_box_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_NotificationHeader_box_C*>(UWBP_NotificationHeader_box_C::StaticClass()->DefaultObject);

	return Default;
}

}


