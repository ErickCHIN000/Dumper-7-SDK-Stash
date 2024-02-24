#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ScopesUI.ScopesUI_C
// (None)

class UClass* UScopesUI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ScopesUI_C");

	return Clss;
}


// ScopesUI_C ScopesUI.Default__ScopesUI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UScopesUI_C* UScopesUI_C::GetDefaultObj()
{
	static class UScopesUI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UScopesUI_C*>(UScopesUI_C::StaticClass()->DefaultObject);

	return Default;
}

}


