#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Hom_top_list02.Hom_top_list02_C
// (None)

class UClass* UHom_top_list02_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Hom_top_list02_C");

	return Clss;
}


// Hom_top_list02_C Hom_top_list02.Default__Hom_top_list02_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHom_top_list02_C* UHom_top_list02_C::GetDefaultObj()
{
	static class UHom_top_list02_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHom_top_list02_C*>(UHom_top_list02_C::StaticClass()->DefaultObject);

	return Default;
}

}


