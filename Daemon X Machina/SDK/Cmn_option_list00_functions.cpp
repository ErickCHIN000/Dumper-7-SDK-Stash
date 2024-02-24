#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Cmn_option_list00.Cmn_option_list00_C
// (None)

class UClass* UCmn_option_list00_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Cmn_option_list00_C");

	return Clss;
}


// Cmn_option_list00_C Cmn_option_list00.Default__Cmn_option_list00_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCmn_option_list00_C* UCmn_option_list00_C::GetDefaultObj()
{
	static class UCmn_option_list00_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCmn_option_list00_C*>(UCmn_option_list00_C::StaticClass()->DefaultObject);

	return Default;
}

}


