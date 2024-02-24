#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CS_Button_Empty.CS_Button_Empty_C
// (None)

class UClass* UCS_Button_Empty_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CS_Button_Empty_C");

	return Clss;
}


// CS_Button_Empty_C CS_Button_Empty.Default__CS_Button_Empty_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCS_Button_Empty_C* UCS_Button_Empty_C::GetDefaultObj()
{
	static class UCS_Button_Empty_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCS_Button_Empty_C*>(UCS_Button_Empty_C::StaticClass()->DefaultObject);

	return Default;
}

}


