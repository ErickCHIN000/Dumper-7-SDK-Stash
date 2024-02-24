#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Msn_hud_gauge12.Msn_hud_gauge12_C
// (None)

class UClass* UMsn_hud_gauge12_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Msn_hud_gauge12_C");

	return Clss;
}


// Msn_hud_gauge12_C Msn_hud_gauge12.Default__Msn_hud_gauge12_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMsn_hud_gauge12_C* UMsn_hud_gauge12_C::GetDefaultObj()
{
	static class UMsn_hud_gauge12_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMsn_hud_gauge12_C*>(UMsn_hud_gauge12_C::StaticClass()->DefaultObject);

	return Default;
}

}


