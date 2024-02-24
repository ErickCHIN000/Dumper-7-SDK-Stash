#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Hom_asb_mny00.Hom_asb_mny00_C
// (None)

class UClass* UHom_asb_mny00_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Hom_asb_mny00_C");

	return Clss;
}


// Hom_asb_mny00_C Hom_asb_mny00.Default__Hom_asb_mny00_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHom_asb_mny00_C* UHom_asb_mny00_C::GetDefaultObj()
{
	static class UHom_asb_mny00_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHom_asb_mny00_C*>(UHom_asb_mny00_C::StaticClass()->DefaultObject);

	return Default;
}

}


