#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Airdrops.WBP_Airdrops_C
// (None)

class UClass* UWBP_Airdrops_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Airdrops_C");

	return Clss;
}


// WBP_Airdrops_C WBP_Airdrops.Default__WBP_Airdrops_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Airdrops_C* UWBP_Airdrops_C::GetDefaultObj()
{
	static class UWBP_Airdrops_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Airdrops_C*>(UWBP_Airdrops_C::StaticClass()->DefaultObject);

	return Default;
}

}


