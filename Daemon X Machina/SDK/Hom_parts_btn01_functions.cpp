#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Hom_parts_btn01.Hom_parts_btn01_C
// (None)

class UClass* UHom_parts_btn01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Hom_parts_btn01_C");

	return Clss;
}


// Hom_parts_btn01_C Hom_parts_btn01.Default__Hom_parts_btn01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHom_parts_btn01_C* UHom_parts_btn01_C::GetDefaultObj()
{
	static class UHom_parts_btn01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHom_parts_btn01_C*>(UHom_parts_btn01_C::StaticClass()->DefaultObject);

	return Default;
}

}


