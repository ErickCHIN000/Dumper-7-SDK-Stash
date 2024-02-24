#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_RacingMetaPuzzle.WBP_RacingMetaPuzzle_C
// (None)

class UClass* UWBP_RacingMetaPuzzle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_RacingMetaPuzzle_C");

	return Clss;
}


// WBP_RacingMetaPuzzle_C WBP_RacingMetaPuzzle.Default__WBP_RacingMetaPuzzle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_RacingMetaPuzzle_C* UWBP_RacingMetaPuzzle_C::GetDefaultObj()
{
	static class UWBP_RacingMetaPuzzle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_RacingMetaPuzzle_C*>(UWBP_RacingMetaPuzzle_C::StaticClass()->DefaultObject);

	return Default;
}

}


