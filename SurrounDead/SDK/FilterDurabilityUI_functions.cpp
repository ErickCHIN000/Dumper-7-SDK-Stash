#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass FilterDurabilityUI.FilterDurabilityUI_C
// (None)

class UClass* UFilterDurabilityUI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FilterDurabilityUI_C");

	return Clss;
}


// FilterDurabilityUI_C FilterDurabilityUI.Default__FilterDurabilityUI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFilterDurabilityUI_C* UFilterDurabilityUI_C::GetDefaultObj()
{
	static class UFilterDurabilityUI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFilterDurabilityUI_C*>(UFilterDurabilityUI_C::StaticClass()->DefaultObject);

	return Default;
}

}


