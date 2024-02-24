#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_ChargeJumpCounter.WBP_ChargeJumpCounter_C
// (None)

class UClass* UWBP_ChargeJumpCounter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_ChargeJumpCounter_C");

	return Clss;
}


// WBP_ChargeJumpCounter_C WBP_ChargeJumpCounter.Default__WBP_ChargeJumpCounter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_ChargeJumpCounter_C* UWBP_ChargeJumpCounter_C::GetDefaultObj()
{
	static class UWBP_ChargeJumpCounter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_ChargeJumpCounter_C*>(UWBP_ChargeJumpCounter_C::StaticClass()->DefaultObject);

	return Default;
}

}


