#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Cmn_parts_bar00.Cmn_parts_bar00_C
// (None)

class UClass* UCmn_parts_bar00_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Cmn_parts_bar00_C");

	return Clss;
}


// Cmn_parts_bar00_C Cmn_parts_bar00.Default__Cmn_parts_bar00_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCmn_parts_bar00_C* UCmn_parts_bar00_C::GetDefaultObj()
{
	static class UCmn_parts_bar00_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCmn_parts_bar00_C*>(UCmn_parts_bar00_C::StaticClass()->DefaultObject);

	return Default;
}

}


