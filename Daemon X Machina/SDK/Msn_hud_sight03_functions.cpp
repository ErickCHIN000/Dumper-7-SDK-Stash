#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Msn_hud_sight03.Msn_hud_sight03_C
// (None)

class UClass* UMsn_hud_sight03_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Msn_hud_sight03_C");

	return Clss;
}


// Msn_hud_sight03_C Msn_hud_sight03.Default__Msn_hud_sight03_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMsn_hud_sight03_C* UMsn_hud_sight03_C::GetDefaultObj()
{
	static class UMsn_hud_sight03_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMsn_hud_sight03_C*>(UMsn_hud_sight03_C::StaticClass()->DefaultObject);

	return Default;
}

}

