#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_MasteryDiamondPip.WBP_MasteryDiamondPip_C
// (None)

class UClass* UWBP_MasteryDiamondPip_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_MasteryDiamondPip_C");

	return Clss;
}


// WBP_MasteryDiamondPip_C WBP_MasteryDiamondPip.Default__WBP_MasteryDiamondPip_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_MasteryDiamondPip_C* UWBP_MasteryDiamondPip_C::GetDefaultObj()
{
	static class UWBP_MasteryDiamondPip_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_MasteryDiamondPip_C*>(UWBP_MasteryDiamondPip_C::StaticClass()->DefaultObject);

	return Default;
}

}


