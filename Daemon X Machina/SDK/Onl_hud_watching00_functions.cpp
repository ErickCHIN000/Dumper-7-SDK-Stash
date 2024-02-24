#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Onl_hud_watching00.Onl_hud_watching00_C
// (None)

class UClass* UOnl_hud_watching00_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Onl_hud_watching00_C");

	return Clss;
}


// Onl_hud_watching00_C Onl_hud_watching00.Default__Onl_hud_watching00_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOnl_hud_watching00_C* UOnl_hud_watching00_C::GetDefaultObj()
{
	static class UOnl_hud_watching00_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOnl_hud_watching00_C*>(UOnl_hud_watching00_C::StaticClass()->DefaultObject);

	return Default;
}

}


