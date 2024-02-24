#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_RemoveOnlyContainer.UMG_RemoveOnlyContainer_C
// (None)

class UClass* UUMG_RemoveOnlyContainer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_RemoveOnlyContainer_C");

	return Clss;
}


// UMG_RemoveOnlyContainer_C UMG_RemoveOnlyContainer.Default__UMG_RemoveOnlyContainer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_RemoveOnlyContainer_C* UUMG_RemoveOnlyContainer_C::GetDefaultObj()
{
	static class UUMG_RemoveOnlyContainer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_RemoveOnlyContainer_C*>(UUMG_RemoveOnlyContainer_C::StaticClass()->DefaultObject);

	return Default;
}

}


