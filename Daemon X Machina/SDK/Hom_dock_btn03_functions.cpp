#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Hom_dock_btn03.Hom_dock_btn03_C
// (None)

class UClass* UHom_dock_btn03_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Hom_dock_btn03_C");

	return Clss;
}


// Hom_dock_btn03_C Hom_dock_btn03.Default__Hom_dock_btn03_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHom_dock_btn03_C* UHom_dock_btn03_C::GetDefaultObj()
{
	static class UHom_dock_btn03_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHom_dock_btn03_C*>(UHom_dock_btn03_C::StaticClass()->DefaultObject);

	return Default;
}

}


