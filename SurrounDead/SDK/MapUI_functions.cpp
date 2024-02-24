#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MapUI.MapUI_C
// (None)

class UClass* UMapUI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MapUI_C");

	return Clss;
}


// MapUI_C MapUI.Default__MapUI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMapUI_C* UMapUI_C::GetDefaultObj()
{
	static class UMapUI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMapUI_C*>(UMapUI_C::StaticClass()->DefaultObject);

	return Default;
}

}


