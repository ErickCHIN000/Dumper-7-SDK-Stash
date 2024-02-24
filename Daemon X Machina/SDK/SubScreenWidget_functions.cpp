#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SubScreenWidget.SubScreenWidget_C
// (None)

class UClass* USubScreenWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SubScreenWidget_C");

	return Clss;
}


// SubScreenWidget_C SubScreenWidget.Default__SubScreenWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USubScreenWidget_C* USubScreenWidget_C::GetDefaultObj()
{
	static class USubScreenWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USubScreenWidget_C*>(USubScreenWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


