#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_fade.wid_fade_C
// (None)

class UClass* UWid_fade_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_fade_C");

	return Clss;
}


// wid_fade_C wid_fade.Default__wid_fade_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_fade_C* UWid_fade_C::GetDefaultObj()
{
	static class UWid_fade_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_fade_C*>(UWid_fade_C::StaticClass()->DefaultObject);

	return Default;
}

}


