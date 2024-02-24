#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Dem_talk_top05.Dem_talk_top05_C
// (None)

class UClass* UDem_talk_top05_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Dem_talk_top05_C");

	return Clss;
}


// Dem_talk_top05_C Dem_talk_top05.Default__Dem_talk_top05_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDem_talk_top05_C* UDem_talk_top05_C::GetDefaultObj()
{
	static class UDem_talk_top05_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDem_talk_top05_C*>(UDem_talk_top05_C::StaticClass()->DefaultObject);

	return Default;
}

}


