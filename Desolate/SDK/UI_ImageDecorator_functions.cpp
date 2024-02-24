#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass UI_ImageDecorator.UI_ImageDecorator_C
// (None)

class UClass* UUI_ImageDecorator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_ImageDecorator_C");

	return Clss;
}


// UI_ImageDecorator_C UI_ImageDecorator.Default__UI_ImageDecorator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_ImageDecorator_C* UUI_ImageDecorator_C::GetDefaultObj()
{
	static class UUI_ImageDecorator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_ImageDecorator_C*>(UUI_ImageDecorator_C::StaticClass()->DefaultObject);

	return Default;
}

}


