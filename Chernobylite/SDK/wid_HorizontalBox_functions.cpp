#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_HorizontalBox.wid_HorizontalBox_C
// (None)

class UClass* UWid_HorizontalBox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_HorizontalBox_C");

	return Clss;
}


// wid_HorizontalBox_C wid_HorizontalBox.Default__wid_HorizontalBox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_HorizontalBox_C* UWid_HorizontalBox_C::GetDefaultObj()
{
	static class UWid_HorizontalBox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_HorizontalBox_C*>(UWid_HorizontalBox_C::StaticClass()->DefaultObject);

	return Default;
}

}


