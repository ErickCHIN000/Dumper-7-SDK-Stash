#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Dem_title_btn00.Dem_title_btn00_C
// (None)

class UClass* UDem_title_btn00_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Dem_title_btn00_C");

	return Clss;
}


// Dem_title_btn00_C Dem_title_btn00.Default__Dem_title_btn00_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDem_title_btn00_C* UDem_title_btn00_C::GetDefaultObj()
{
	static class UDem_title_btn00_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDem_title_btn00_C*>(UDem_title_btn00_C::StaticClass()->DefaultObject);

	return Default;
}

}


