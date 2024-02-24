#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Cmn_load_icon00.Cmn_load_icon00_C
// (None)

class UClass* UCmn_load_icon00_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Cmn_load_icon00_C");

	return Clss;
}


// Cmn_load_icon00_C Cmn_load_icon00.Default__Cmn_load_icon00_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCmn_load_icon00_C* UCmn_load_icon00_C::GetDefaultObj()
{
	static class UCmn_load_icon00_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCmn_load_icon00_C*>(UCmn_load_icon00_C::StaticClass()->DefaultObject);

	return Default;
}

}


