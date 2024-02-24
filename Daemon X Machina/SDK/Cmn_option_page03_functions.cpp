#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Cmn_option_page03.Cmn_option_page03_C
// (None)

class UClass* UCmn_option_page03_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Cmn_option_page03_C");

	return Clss;
}


// Cmn_option_page03_C Cmn_option_page03.Default__Cmn_option_page03_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCmn_option_page03_C* UCmn_option_page03_C::GetDefaultObj()
{
	static class UCmn_option_page03_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCmn_option_page03_C*>(UCmn_option_page03_C::StaticClass()->DefaultObject);

	return Default;
}

}


