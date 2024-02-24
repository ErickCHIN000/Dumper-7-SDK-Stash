#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_Menu_Loading.wid_Menu_Loading_C
// (None)

class UClass* UWid_Menu_Loading_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_Menu_Loading_C");

	return Clss;
}


// wid_Menu_Loading_C wid_Menu_Loading.Default__wid_Menu_Loading_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_Menu_Loading_C* UWid_Menu_Loading_C::GetDefaultObj()
{
	static class UWid_Menu_Loading_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_Menu_Loading_C*>(UWid_Menu_Loading_C::StaticClass()->DefaultObject);

	return Default;
}

}


