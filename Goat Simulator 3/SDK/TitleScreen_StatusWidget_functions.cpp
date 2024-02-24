#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass TitleScreen_StatusWidget.TitleScreen_StatusWidget_C
// (None)

class UClass* UTitleScreen_StatusWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TitleScreen_StatusWidget_C");

	return Clss;
}


// TitleScreen_StatusWidget_C TitleScreen_StatusWidget.Default__TitleScreen_StatusWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTitleScreen_StatusWidget_C* UTitleScreen_StatusWidget_C::GetDefaultObj()
{
	static class UTitleScreen_StatusWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTitleScreen_StatusWidget_C*>(UTitleScreen_StatusWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


