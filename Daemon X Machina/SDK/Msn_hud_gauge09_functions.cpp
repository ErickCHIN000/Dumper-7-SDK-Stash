#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Msn_hud_gauge09.Msn_hud_gauge09_C
// (None)

class UClass* UMsn_hud_gauge09_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Msn_hud_gauge09_C");

	return Clss;
}


// Msn_hud_gauge09_C Msn_hud_gauge09.Default__Msn_hud_gauge09_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMsn_hud_gauge09_C* UMsn_hud_gauge09_C::GetDefaultObj()
{
	static class UMsn_hud_gauge09_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMsn_hud_gauge09_C*>(UMsn_hud_gauge09_C::StaticClass()->DefaultObject);

	return Default;
}

}


