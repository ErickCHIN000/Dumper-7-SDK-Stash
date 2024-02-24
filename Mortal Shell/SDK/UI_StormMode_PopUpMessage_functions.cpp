#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_StormMode_PopUpMessage.UI_StormMode_PopUpMessage_C
// (None)

class UClass* UUI_StormMode_PopUpMessage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_StormMode_PopUpMessage_C");

	return Clss;
}


// UI_StormMode_PopUpMessage_C UI_StormMode_PopUpMessage.Default__UI_StormMode_PopUpMessage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_StormMode_PopUpMessage_C* UUI_StormMode_PopUpMessage_C::GetDefaultObj()
{
	static class UUI_StormMode_PopUpMessage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_StormMode_PopUpMessage_C*>(UUI_StormMode_PopUpMessage_C::StaticClass()->DefaultObject);

	return Default;
}

}


