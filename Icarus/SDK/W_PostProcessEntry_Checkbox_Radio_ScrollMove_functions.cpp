#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass W_PostProcessEntry_Checkbox_Radio_ScrollMove.W_PostProcessEntry_Checkbox_Radio_ScrollMove_C
// (None)

class UClass* UW_PostProcessEntry_Checkbox_Radio_ScrollMove_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("W_PostProcessEntry_Checkbox_Radio_ScrollMove_C");

	return Clss;
}


// W_PostProcessEntry_Checkbox_Radio_ScrollMove_C W_PostProcessEntry_Checkbox_Radio_ScrollMove.Default__W_PostProcessEntry_Checkbox_Radio_ScrollMove_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_PostProcessEntry_Checkbox_Radio_ScrollMove_C* UW_PostProcessEntry_Checkbox_Radio_ScrollMove_C::GetDefaultObj()
{
	static class UW_PostProcessEntry_Checkbox_Radio_ScrollMove_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_PostProcessEntry_Checkbox_Radio_ScrollMove_C*>(UW_PostProcessEntry_Checkbox_Radio_ScrollMove_C::StaticClass()->DefaultObject);

	return Default;
}

}


