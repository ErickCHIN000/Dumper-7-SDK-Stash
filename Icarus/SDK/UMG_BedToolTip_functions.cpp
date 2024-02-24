#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_BedToolTip.UMG_BedToolTip_C
// (None)

class UClass* UUMG_BedToolTip_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_BedToolTip_C");

	return Clss;
}


// UMG_BedToolTip_C UMG_BedToolTip.Default__UMG_BedToolTip_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_BedToolTip_C* UUMG_BedToolTip_C::GetDefaultObj()
{
	static class UUMG_BedToolTip_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_BedToolTip_C*>(UUMG_BedToolTip_C::StaticClass()->DefaultObject);

	return Default;
}

}


