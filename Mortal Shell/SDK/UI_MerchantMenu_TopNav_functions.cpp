#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_MerchantMenu_TopNav.UI_MerchantMenu_TopNav_C
// (None)

class UClass* UUI_MerchantMenu_TopNav_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_MerchantMenu_TopNav_C");

	return Clss;
}


// UI_MerchantMenu_TopNav_C UI_MerchantMenu_TopNav.Default__UI_MerchantMenu_TopNav_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_MerchantMenu_TopNav_C* UUI_MerchantMenu_TopNav_C::GetDefaultObj()
{
	static class UUI_MerchantMenu_TopNav_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_MerchantMenu_TopNav_C*>(UUI_MerchantMenu_TopNav_C::StaticClass()->DefaultObject);

	return Default;
}

}


