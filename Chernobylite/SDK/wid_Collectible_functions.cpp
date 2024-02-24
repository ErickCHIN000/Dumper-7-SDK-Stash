#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_Collectible.wid_Collectible_C
// (None)

class UClass* UWid_Collectible_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_Collectible_C");

	return Clss;
}


// wid_Collectible_C wid_Collectible.Default__wid_Collectible_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_Collectible_C* UWid_Collectible_C::GetDefaultObj()
{
	static class UWid_Collectible_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_Collectible_C*>(UWid_Collectible_C::StaticClass()->DefaultObject);

	return Default;
}

}


