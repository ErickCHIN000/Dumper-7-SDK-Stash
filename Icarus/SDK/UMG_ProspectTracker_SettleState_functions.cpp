#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_ProspectTracker_SettleState.UMG_ProspectTracker_SettleState_C
// (None)

class UClass* UUMG_ProspectTracker_SettleState_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_ProspectTracker_SettleState_C");

	return Clss;
}


// UMG_ProspectTracker_SettleState_C UMG_ProspectTracker_SettleState.Default__UMG_ProspectTracker_SettleState_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_ProspectTracker_SettleState_C* UUMG_ProspectTracker_SettleState_C::GetDefaultObj()
{
	static class UUMG_ProspectTracker_SettleState_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_ProspectTracker_SettleState_C*>(UUMG_ProspectTracker_SettleState_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_ProspectTracker_SettleState.UMG_ProspectTracker_SettleState_C.SettleStateChange
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush                 ReturnValue                                                      (Parm, OutParm, ReturnParm)

struct FSlateBrush UUMG_ProspectTracker_SettleState_C::SettleStateChange()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ProspectTracker_SettleState_C", "SettleStateChange");

	Params::UUMG_ProspectTracker_SettleState_C_SettleStateChange_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


