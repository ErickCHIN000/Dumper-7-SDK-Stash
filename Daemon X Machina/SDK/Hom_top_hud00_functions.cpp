#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Hom_top_hud00.Hom_top_hud00_C
// (None)

class UClass* UHom_top_hud00_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Hom_top_hud00_C");

	return Clss;
}


// Hom_top_hud00_C Hom_top_hud00.Default__Hom_top_hud00_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHom_top_hud00_C* UHom_top_hud00_C::GetDefaultObj()
{
	static class UHom_top_hud00_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHom_top_hud00_C*>(UHom_top_hud00_C::StaticClass()->DefaultObject);

	return Default;
}

}


