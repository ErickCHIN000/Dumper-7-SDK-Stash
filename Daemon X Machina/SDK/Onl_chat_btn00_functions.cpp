#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Onl_chat_btn00.Onl_chat_btn00_C
// (None)

class UClass* UOnl_chat_btn00_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Onl_chat_btn00_C");

	return Clss;
}


// Onl_chat_btn00_C Onl_chat_btn00.Default__Onl_chat_btn00_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOnl_chat_btn00_C* UOnl_chat_btn00_C::GetDefaultObj()
{
	static class UOnl_chat_btn00_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOnl_chat_btn00_C*>(UOnl_chat_btn00_C::StaticClass()->DefaultObject);

	return Default;
}

}


