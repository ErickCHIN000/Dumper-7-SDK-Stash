#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ChatText.ChatText_C
// (None)

class UClass* UChatText_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChatText_C");

	return Clss;
}


// ChatText_C ChatText.Default__ChatText_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChatText_C* UChatText_C::GetDefaultObj()
{
	static class UChatText_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChatText_C*>(UChatText_C::StaticClass()->DefaultObject);

	return Default;
}

}


