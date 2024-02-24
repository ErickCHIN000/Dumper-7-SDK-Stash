#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_OutpostListEntry.UMG_OutpostListEntry_C
// (None)

class UClass* UUMG_OutpostListEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_OutpostListEntry_C");

	return Clss;
}


// UMG_OutpostListEntry_C UMG_OutpostListEntry.Default__UMG_OutpostListEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_OutpostListEntry_C* UUMG_OutpostListEntry_C::GetDefaultObj()
{
	static class UUMG_OutpostListEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_OutpostListEntry_C*>(UUMG_OutpostListEntry_C::StaticClass()->DefaultObject);

	return Default;
}

}


