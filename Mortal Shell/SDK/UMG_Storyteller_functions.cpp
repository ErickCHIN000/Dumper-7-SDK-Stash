#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_Storyteller.UMG_Storyteller_C
// (None)

class UClass* UUMG_Storyteller_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_Storyteller_C");

	return Clss;
}


// UMG_Storyteller_C UMG_Storyteller.Default__UMG_Storyteller_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_Storyteller_C* UUMG_Storyteller_C::GetDefaultObj()
{
	static class UUMG_Storyteller_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_Storyteller_C*>(UUMG_Storyteller_C::StaticClass()->DefaultObject);

	return Default;
}

}


