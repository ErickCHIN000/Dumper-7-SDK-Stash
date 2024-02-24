#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Hom_asb_title01.Hom_asb_title01_C
// (None)

class UClass* UHom_asb_title01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Hom_asb_title01_C");

	return Clss;
}


// Hom_asb_title01_C Hom_asb_title01.Default__Hom_asb_title01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHom_asb_title01_C* UHom_asb_title01_C::GetDefaultObj()
{
	static class UHom_asb_title01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHom_asb_title01_C*>(UHom_asb_title01_C::StaticClass()->DefaultObject);

	return Default;
}

}


