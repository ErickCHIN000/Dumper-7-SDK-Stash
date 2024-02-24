#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AIDebugTextWidget.AIDebugTextWidget_C
// (None)

class UClass* UAIDebugTextWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIDebugTextWidget_C");

	return Clss;
}


// AIDebugTextWidget_C AIDebugTextWidget.Default__AIDebugTextWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIDebugTextWidget_C* UAIDebugTextWidget_C::GetDefaultObj()
{
	static class UAIDebugTextWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIDebugTextWidget_C*>(UAIDebugTextWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


