#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTD_CheckSightlineToTarget.BTD_CheckSightlineToTarget_C
// (None)

class UClass* UBTD_CheckSightlineToTarget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTD_CheckSightlineToTarget_C");

	return Clss;
}


// BTD_CheckSightlineToTarget_C BTD_CheckSightlineToTarget.Default__BTD_CheckSightlineToTarget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTD_CheckSightlineToTarget_C* UBTD_CheckSightlineToTarget_C::GetDefaultObj()
{
	static class UBTD_CheckSightlineToTarget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTD_CheckSightlineToTarget_C*>(UBTD_CheckSightlineToTarget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTD_CheckSightlineToTarget.BTD_CheckSightlineToTarget_C.PerformConditionCheckAI
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetBlackboardValueAsActor_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckLineOfSightToTarget_ControllerHasLineOfSightToTarget(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckLineOfSightToTarget_IsTargetWithinControllerView   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckLineOfSightToTarget_IsControllerWithinTargetView   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBTD_CheckSightlineToTarget_C::PerformConditionCheckAI(class AAIController* OwnerController, class APawn* ControlledPawn, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, bool CallFunc_CheckLineOfSightToTarget_ControllerHasLineOfSightToTarget, bool CallFunc_CheckLineOfSightToTarget_IsTargetWithinControllerView, bool CallFunc_CheckLineOfSightToTarget_IsControllerWithinTargetView, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTD_CheckSightlineToTarget_C", "PerformConditionCheckAI");

	Params::UBTD_CheckSightlineToTarget_C_PerformConditionCheckAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;
	Parms.CallFunc_GetBlackboardValueAsActor_ReturnValue = CallFunc_GetBlackboardValueAsActor_ReturnValue;
	Parms.CallFunc_CheckLineOfSightToTarget_ControllerHasLineOfSightToTarget = CallFunc_CheckLineOfSightToTarget_ControllerHasLineOfSightToTarget;
	Parms.CallFunc_CheckLineOfSightToTarget_IsTargetWithinControllerView = CallFunc_CheckLineOfSightToTarget_IsTargetWithinControllerView;
	Parms.CallFunc_CheckLineOfSightToTarget_IsControllerWithinTargetView = CallFunc_CheckLineOfSightToTarget_IsControllerWithinTargetView;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


