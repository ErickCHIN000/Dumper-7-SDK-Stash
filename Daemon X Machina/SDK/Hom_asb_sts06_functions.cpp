#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Hom_asb_sts06.Hom_asb_sts06_C
// (None)

class UClass* UHom_asb_sts06_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Hom_asb_sts06_C");

	return Clss;
}


// Hom_asb_sts06_C Hom_asb_sts06.Default__Hom_asb_sts06_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHom_asb_sts06_C* UHom_asb_sts06_C::GetDefaultObj()
{
	static class UHom_asb_sts06_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHom_asb_sts06_C*>(UHom_asb_sts06_C::StaticClass()->DefaultObject);

	return Default;
}

}


