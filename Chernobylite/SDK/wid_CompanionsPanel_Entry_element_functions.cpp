#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_CompanionsPanel_Entry_element.wid_CompanionsPanel_Entry_element_C
// (None)

class UClass* UWid_CompanionsPanel_Entry_element_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_CompanionsPanel_Entry_element_C");

	return Clss;
}


// wid_CompanionsPanel_Entry_element_C wid_CompanionsPanel_Entry_element.Default__wid_CompanionsPanel_Entry_element_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_CompanionsPanel_Entry_element_C* UWid_CompanionsPanel_Entry_element_C::GetDefaultObj()
{
	static class UWid_CompanionsPanel_Entry_element_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_CompanionsPanel_Entry_element_C*>(UWid_CompanionsPanel_Entry_element_C::StaticClass()->DefaultObject);

	return Default;
}

}


