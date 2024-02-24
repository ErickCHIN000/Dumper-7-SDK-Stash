#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_Button_Default_Small.CS_Button_Default_Small_C
// (None)

class UClass* UCS_Button_Default_Small_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_Button_Default_Small_C");

	return Clss;
}


// CS_Button_Default_Small_C CS_Button_Default_Small.Default__CS_Button_Default_Small_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_Button_Default_Small_C* UCS_Button_Default_Small_C::GetDefaultObj()
{
	static class UCS_Button_Default_Small_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_Button_Default_Small_C*>(UCS_Button_Default_Small_C::StaticClass()->DefaultObject);

	return Default;
}

}


