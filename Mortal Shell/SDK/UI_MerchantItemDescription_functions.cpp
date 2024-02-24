#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UI_MerchantItemDescription.UI_MerchantItemDescription_C
// (None)

class UClass* UUI_MerchantItemDescription_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_MerchantItemDescription_C");

	return Clss;
}


// UI_MerchantItemDescription_C UI_MerchantItemDescription.Default__UI_MerchantItemDescription_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_MerchantItemDescription_C* UUI_MerchantItemDescription_C::GetDefaultObj()
{
	static class UUI_MerchantItemDescription_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_MerchantItemDescription_C*>(UUI_MerchantItemDescription_C::StaticClass()->DefaultObject);

	return Default;
}

}


