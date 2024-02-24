#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass msn_hud_popup07.msn_hud_popup07_C
// (None)

class UClass* UMsn_hud_popup07_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("msn_hud_popup07_C");

	return Clss;
}


// msn_hud_popup07_C msn_hud_popup07.Default__msn_hud_popup07_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMsn_hud_popup07_C* UMsn_hud_popup07_C::GetDefaultObj()
{
	static class UMsn_hud_popup07_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMsn_hud_popup07_C*>(UMsn_hud_popup07_C::StaticClass()->DefaultObject);

	return Default;
}

}


