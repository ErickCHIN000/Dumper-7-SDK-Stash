#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Msn_hud_gauge01.Msn_hud_gauge01_C
// (None)

class UClass* UMsn_hud_gauge01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Msn_hud_gauge01_C");

	return Clss;
}


// Msn_hud_gauge01_C Msn_hud_gauge01.Default__Msn_hud_gauge01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMsn_hud_gauge01_C* UMsn_hud_gauge01_C::GetDefaultObj()
{
	static class UMsn_hud_gauge01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMsn_hud_gauge01_C*>(UMsn_hud_gauge01_C::StaticClass()->DefaultObject);

	return Default;
}

}

