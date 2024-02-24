#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ActionNotify_ShowMag.ActionNotify_ShowMag_C
// (None)

class UClass* UActionNotify_ShowMag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ActionNotify_ShowMag_C");

	return Clss;
}


// ActionNotify_ShowMag_C ActionNotify_ShowMag.Default__ActionNotify_ShowMag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UActionNotify_ShowMag_C* UActionNotify_ShowMag_C::GetDefaultObj()
{
	static class UActionNotify_ShowMag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UActionNotify_ShowMag_C*>(UActionNotify_ShowMag_C::StaticClass()->DefaultObject);

	return Default;
}

}


