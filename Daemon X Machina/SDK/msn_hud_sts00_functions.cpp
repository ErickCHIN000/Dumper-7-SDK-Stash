#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass msn_hud_sts00.Msn_hud_sts00_C
// (None)

class UClass* UMsn_hud_sts00_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Msn_hud_sts00_C");

	return Clss;
}


// Msn_hud_sts00_C msn_hud_sts00.Default__Msn_hud_sts00_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMsn_hud_sts00_C* UMsn_hud_sts00_C::GetDefaultObj()
{
	static class UMsn_hud_sts00_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMsn_hud_sts00_C*>(UMsn_hud_sts00_C::StaticClass()->DefaultObject);

	return Default;
}

}


