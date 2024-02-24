#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MagnifierContainer_UI.MagnifierContainer_UI_C
// (None)

class UClass* UMagnifierContainer_UI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MagnifierContainer_UI_C");

	return Clss;
}


// MagnifierContainer_UI_C MagnifierContainer_UI.Default__MagnifierContainer_UI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMagnifierContainer_UI_C* UMagnifierContainer_UI_C::GetDefaultObj()
{
	static class UMagnifierContainer_UI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMagnifierContainer_UI_C*>(UMagnifierContainer_UI_C::StaticClass()->DefaultObject);

	return Default;
}

}


