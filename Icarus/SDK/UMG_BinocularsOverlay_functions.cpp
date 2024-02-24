#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_BinocularsOverlay.UMG_BinocularsOverlay_C
// (None)

class UClass* UUMG_BinocularsOverlay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_BinocularsOverlay_C");

	return Clss;
}


// UMG_BinocularsOverlay_C UMG_BinocularsOverlay.Default__UMG_BinocularsOverlay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_BinocularsOverlay_C* UUMG_BinocularsOverlay_C::GetDefaultObj()
{
	static class UUMG_BinocularsOverlay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_BinocularsOverlay_C*>(UUMG_BinocularsOverlay_C::StaticClass()->DefaultObject);

	return Default;
}

}


