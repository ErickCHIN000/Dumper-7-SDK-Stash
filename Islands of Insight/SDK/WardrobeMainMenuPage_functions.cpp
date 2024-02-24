#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WardrobeMainMenuPage.WardrobeMainMenuPage_C
// (None)

class UClass* UWardrobeMainMenuPage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WardrobeMainMenuPage_C");

	return Clss;
}


// WardrobeMainMenuPage_C WardrobeMainMenuPage.Default__WardrobeMainMenuPage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWardrobeMainMenuPage_C* UWardrobeMainMenuPage_C::GetDefaultObj()
{
	static class UWardrobeMainMenuPage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWardrobeMainMenuPage_C*>(UWardrobeMainMenuPage_C::StaticClass()->DefaultObject);

	return Default;
}

}


