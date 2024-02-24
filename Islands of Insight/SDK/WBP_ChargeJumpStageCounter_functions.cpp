#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_ChargeJumpStageCounter.WBP_ChargeJumpStageCounter_C
// (None)

class UClass* UWBP_ChargeJumpStageCounter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_ChargeJumpStageCounter_C");

	return Clss;
}


// WBP_ChargeJumpStageCounter_C WBP_ChargeJumpStageCounter.Default__WBP_ChargeJumpStageCounter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_ChargeJumpStageCounter_C* UWBP_ChargeJumpStageCounter_C::GetDefaultObj()
{
	static class UWBP_ChargeJumpStageCounter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_ChargeJumpStageCounter_C*>(UWBP_ChargeJumpStageCounter_C::StaticClass()->DefaultObject);

	return Default;
}

}


