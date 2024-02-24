#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Onl_fight_load00.Onl_fight_load00_C
// (None)

class UClass* UOnl_fight_load00_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Onl_fight_load00_C");

	return Clss;
}


// Onl_fight_load00_C Onl_fight_load00.Default__Onl_fight_load00_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOnl_fight_load00_C* UOnl_fight_load00_C::GetDefaultObj()
{
	static class UOnl_fight_load00_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOnl_fight_load00_C*>(UOnl_fight_load00_C::StaticClass()->DefaultObject);

	return Default;
}

}


