#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Hom_asb_sts03.Hom_asb_sts03_C
// (None)

class UClass* UHom_asb_sts03_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Hom_asb_sts03_C");

	return Clss;
}


// Hom_asb_sts03_C Hom_asb_sts03.Default__Hom_asb_sts03_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHom_asb_sts03_C* UHom_asb_sts03_C::GetDefaultObj()
{
	static class UHom_asb_sts03_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHom_asb_sts03_C*>(UHom_asb_sts03_C::StaticClass()->DefaultObject);

	return Default;
}

}


