#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Cmn_option_btn01.Cmn_option_btn01_C
// (None)

class UClass* UCmn_option_btn01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Cmn_option_btn01_C");

	return Clss;
}


// Cmn_option_btn01_C Cmn_option_btn01.Default__Cmn_option_btn01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCmn_option_btn01_C* UCmn_option_btn01_C::GetDefaultObj()
{
	static class UCmn_option_btn01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCmn_option_btn01_C*>(UCmn_option_btn01_C::StaticClass()->DefaultObject);

	return Default;
}

}


