#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_Button_EscapeMenu.CS_Button_EscapeMenu_C
// (None)

class UClass* UCS_Button_EscapeMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_Button_EscapeMenu_C");

	return Clss;
}


// CS_Button_EscapeMenu_C CS_Button_EscapeMenu.Default__CS_Button_EscapeMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_Button_EscapeMenu_C* UCS_Button_EscapeMenu_C::GetDefaultObj()
{
	static class UCS_Button_EscapeMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_Button_EscapeMenu_C*>(UCS_Button_EscapeMenu_C::StaticClass()->DefaultObject);

	return Default;
}

}


