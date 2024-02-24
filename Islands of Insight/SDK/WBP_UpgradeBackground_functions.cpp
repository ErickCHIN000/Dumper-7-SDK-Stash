#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_UpgradeBackground.WBP_UpgradeBackground_C
// (None)

class UClass* UWBP_UpgradeBackground_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_UpgradeBackground_C");

	return Clss;
}


// WBP_UpgradeBackground_C WBP_UpgradeBackground.Default__WBP_UpgradeBackground_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_UpgradeBackground_C* UWBP_UpgradeBackground_C::GetDefaultObj()
{
	static class UWBP_UpgradeBackground_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_UpgradeBackground_C*>(UWBP_UpgradeBackground_C::StaticClass()->DefaultObject);

	return Default;
}

}


