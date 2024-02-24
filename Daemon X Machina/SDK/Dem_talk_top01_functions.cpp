#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Dem_talk_top01.Dem_talk_top01_C
// (None)

class UClass* UDem_talk_top01_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Dem_talk_top01_C");

	return Clss;
}


// Dem_talk_top01_C Dem_talk_top01.Default__Dem_talk_top01_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDem_talk_top01_C* UDem_talk_top01_C::GetDefaultObj()
{
	static class UDem_talk_top01_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDem_talk_top01_C*>(UDem_talk_top01_C::StaticClass()->DefaultObject);

	return Default;
}

}


