#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_ScaleableFrame.UMG_ScaleableFrame_C
// (None)

class UClass* UUMG_ScaleableFrame_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_ScaleableFrame_C");

	return Clss;
}


// UMG_ScaleableFrame_C UMG_ScaleableFrame.Default__UMG_ScaleableFrame_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_ScaleableFrame_C* UUMG_ScaleableFrame_C::GetDefaultObj()
{
	static class UUMG_ScaleableFrame_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_ScaleableFrame_C*>(UUMG_ScaleableFrame_C::StaticClass()->DefaultObject);

	return Default;
}

}


