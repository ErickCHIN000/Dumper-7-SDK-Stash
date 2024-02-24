#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_IcarusWidget.UMG_IcarusWidget_C
// (None)

class UClass* UUMG_IcarusWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_IcarusWidget_C");

	return Clss;
}


// UMG_IcarusWidget_C UMG_IcarusWidget.Default__UMG_IcarusWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_IcarusWidget_C* UUMG_IcarusWidget_C::GetDefaultObj()
{
	static class UUMG_IcarusWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_IcarusWidget_C*>(UUMG_IcarusWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


