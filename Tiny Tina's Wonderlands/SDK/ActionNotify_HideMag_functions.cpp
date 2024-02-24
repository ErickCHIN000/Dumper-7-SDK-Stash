#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ActionNotify_HideMag.ActionNotify_HideMag_C
// (None)

class UClass* UActionNotify_HideMag_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ActionNotify_HideMag_C");

	return Clss;
}


// ActionNotify_HideMag_C ActionNotify_HideMag.Default__ActionNotify_HideMag_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UActionNotify_HideMag_C* UActionNotify_HideMag_C::GetDefaultObj()
{
	static class UActionNotify_HideMag_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UActionNotify_HideMag_C*>(UActionNotify_HideMag_C::StaticClass()->DefaultObject);

	return Default;
}

}


