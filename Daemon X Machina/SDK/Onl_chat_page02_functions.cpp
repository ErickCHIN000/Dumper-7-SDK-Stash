#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Onl_chat_page02.Onl_chat_page02_C
// (None)

class UClass* UOnl_chat_page02_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Onl_chat_page02_C");

	return Clss;
}


// Onl_chat_page02_C Onl_chat_page02.Default__Onl_chat_page02_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOnl_chat_page02_C* UOnl_chat_page02_C::GetDefaultObj()
{
	static class UOnl_chat_page02_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOnl_chat_page02_C*>(UOnl_chat_page02_C::StaticClass()->DefaultObject);

	return Default;
}

}


