#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Onl_coop_room00.Onl_coop_room00_C
// (None)

class UClass* UOnl_coop_room00_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Onl_coop_room00_C");

	return Clss;
}


// Onl_coop_room00_C Onl_coop_room00.Default__Onl_coop_room00_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOnl_coop_room00_C* UOnl_coop_room00_C::GetDefaultObj()
{
	static class UOnl_coop_room00_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOnl_coop_room00_C*>(UOnl_coop_room00_C::StaticClass()->DefaultObject);

	return Default;
}

}


