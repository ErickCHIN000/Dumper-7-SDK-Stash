#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Cmn_keyboard_top00.Cmn_keyboard_top00_C
// (None)

class UClass* UCmn_keyboard_top00_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Cmn_keyboard_top00_C");

	return Clss;
}


// Cmn_keyboard_top00_C Cmn_keyboard_top00.Default__Cmn_keyboard_top00_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCmn_keyboard_top00_C* UCmn_keyboard_top00_C::GetDefaultObj()
{
	static class UCmn_keyboard_top00_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCmn_keyboard_top00_C*>(UCmn_keyboard_top00_C::StaticClass()->DefaultObject);

	return Default;
}

}


