#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass TitleBar.TitleBar_C
// (None)

class UClass* UTitleBar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TitleBar_C");

	return Clss;
}


// TitleBar_C TitleBar.Default__TitleBar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTitleBar_C* UTitleBar_C::GetDefaultObj()
{
	static class UTitleBar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTitleBar_C*>(UTitleBar_C::StaticClass()->DefaultObject);

	return Default;
}

}


