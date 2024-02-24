#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_debug_simple_textblock_entry.wid_debug_simple_textblock_entry_C
// (None)

class UClass* UWid_debug_simple_textblock_entry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_debug_simple_textblock_entry_C");

	return Clss;
}


// wid_debug_simple_textblock_entry_C wid_debug_simple_textblock_entry.Default__wid_debug_simple_textblock_entry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_debug_simple_textblock_entry_C* UWid_debug_simple_textblock_entry_C::GetDefaultObj()
{
	static class UWid_debug_simple_textblock_entry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_debug_simple_textblock_entry_C*>(UWid_debug_simple_textblock_entry_C::StaticClass()->DefaultObject);

	return Default;
}

}


