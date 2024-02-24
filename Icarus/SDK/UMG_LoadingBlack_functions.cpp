#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_LoadingBlack.UMG_LoadingBlack_C
// (None)

class UClass* UUMG_LoadingBlack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_LoadingBlack_C");

	return Clss;
}


// UMG_LoadingBlack_C UMG_LoadingBlack.Default__UMG_LoadingBlack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_LoadingBlack_C* UUMG_LoadingBlack_C::GetDefaultObj()
{
	static class UUMG_LoadingBlack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_LoadingBlack_C*>(UUMG_LoadingBlack_C::StaticClass()->DefaultObject);

	return Default;
}

}


