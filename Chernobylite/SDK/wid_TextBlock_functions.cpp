#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_TextBlock.wid_TextBlock_C
// (None)

class UClass* UWid_TextBlock_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_TextBlock_C");

	return Clss;
}


// wid_TextBlock_C wid_TextBlock.Default__wid_TextBlock_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_TextBlock_C* UWid_TextBlock_C::GetDefaultObj()
{
	static class UWid_TextBlock_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_TextBlock_C*>(UWid_TextBlock_C::StaticClass()->DefaultObject);

	return Default;
}

}


