#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DebugPlayerFlagWidget.DebugPlayerFlagWidget_C
// (None)

class UClass* UDebugPlayerFlagWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DebugPlayerFlagWidget_C");

	return Clss;
}


// DebugPlayerFlagWidget_C DebugPlayerFlagWidget.Default__DebugPlayerFlagWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDebugPlayerFlagWidget_C* UDebugPlayerFlagWidget_C::GetDefaultObj()
{
	static class UDebugPlayerFlagWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDebugPlayerFlagWidget_C*>(UDebugPlayerFlagWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


