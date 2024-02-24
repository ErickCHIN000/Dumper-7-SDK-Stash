#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass HUDPopUpTrigger.HUDPopUpTrigger_C
// (None)

class UClass* UHUDPopUpTrigger_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HUDPopUpTrigger_C");

	return Clss;
}


// HUDPopUpTrigger_C HUDPopUpTrigger.Default__HUDPopUpTrigger_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHUDPopUpTrigger_C* UHUDPopUpTrigger_C::GetDefaultObj()
{
	static class UHUDPopUpTrigger_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHUDPopUpTrigger_C*>(UHUDPopUpTrigger_C::StaticClass()->DefaultObject);

	return Default;
}

}


