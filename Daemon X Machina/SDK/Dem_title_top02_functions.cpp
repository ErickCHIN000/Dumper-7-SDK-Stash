#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Dem_title_top02.Dem_title_top02_C
// (None)

class UClass* UDem_title_top02_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Dem_title_top02_C");

	return Clss;
}


// Dem_title_top02_C Dem_title_top02.Default__Dem_title_top02_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDem_title_top02_C* UDem_title_top02_C::GetDefaultObj()
{
	static class UDem_title_top02_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDem_title_top02_C*>(UDem_title_top02_C::StaticClass()->DefaultObject);

	return Default;
}

}


