#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_ClaimLaunchSettings.UMG_ClaimLaunchSettings_C
// (None)

class UClass* UUMG_ClaimLaunchSettings_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_ClaimLaunchSettings_C");

	return Clss;
}


// UMG_ClaimLaunchSettings_C UMG_ClaimLaunchSettings.Default__UMG_ClaimLaunchSettings_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_ClaimLaunchSettings_C* UUMG_ClaimLaunchSettings_C::GetDefaultObj()
{
	static class UUMG_ClaimLaunchSettings_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_ClaimLaunchSettings_C*>(UUMG_ClaimLaunchSettings_C::StaticClass()->DefaultObject);

	return Default;
}

}


