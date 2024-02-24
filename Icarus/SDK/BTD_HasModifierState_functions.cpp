#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTD_HasModifierState.BTD_HasModifierState_C
// (None)

class UClass* UBTD_HasModifierState_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTD_HasModifierState_C");

	return Clss;
}


// BTD_HasModifierState_C BTD_HasModifierState.Default__BTD_HasModifierState_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTD_HasModifierState_C* UBTD_HasModifierState_C::GetDefaultObj()
{
	static class UBTD_HasModifierState_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTD_HasModifierState_C*>(UBTD_HasModifierState_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTD_HasModifierState.BTD_HasModifierState_C.PerformConditionCheckAI
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasModifierState_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBTD_HasModifierState_C::PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn, bool CallFunc_HasModifierState_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTD_HasModifierState_C", "PerformConditionCheckAI");

	Params::UBTD_HasModifierState_C_PerformConditionCheckAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;
	Parms.CallFunc_HasModifierState_ReturnValue = CallFunc_HasModifierState_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


