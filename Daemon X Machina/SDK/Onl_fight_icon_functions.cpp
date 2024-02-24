#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Onl_fight_icon.Onl_fight_icon_C
// (None)

class UClass* UOnl_fight_icon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Onl_fight_icon_C");

	return Clss;
}


// Onl_fight_icon_C Onl_fight_icon.Default__Onl_fight_icon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOnl_fight_icon_C* UOnl_fight_icon_C::GetDefaultObj()
{
	static class UOnl_fight_icon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOnl_fight_icon_C*>(UOnl_fight_icon_C::StaticClass()->DefaultObject);

	return Default;
}

}


