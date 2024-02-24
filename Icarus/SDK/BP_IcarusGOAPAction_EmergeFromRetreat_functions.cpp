#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_IcarusGOAPAction_EmergeFromRetreat.BP_IcarusGOAPAction_EmergeFromRetreat_C
// (None)

class UClass* UBP_IcarusGOAPAction_EmergeFromRetreat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_IcarusGOAPAction_EmergeFromRetreat_C");

	return Clss;
}


// BP_IcarusGOAPAction_EmergeFromRetreat_C BP_IcarusGOAPAction_EmergeFromRetreat.Default__BP_IcarusGOAPAction_EmergeFromRetreat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_IcarusGOAPAction_EmergeFromRetreat_C* UBP_IcarusGOAPAction_EmergeFromRetreat_C::GetDefaultObj()
{
	static class UBP_IcarusGOAPAction_EmergeFromRetreat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_IcarusGOAPAction_EmergeFromRetreat_C*>(UBP_IcarusGOAPAction_EmergeFromRetreat_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_IcarusGOAPAction_EmergeFromRetreat.BP_IcarusGOAPAction_EmergeFromRetreat_C.PlanAction
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AIcarusNPCGOAPController*    Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_GetValueAsObject_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IBP_RetreatTargetInterface_C>K2Node_DynamicCast_AsBP_Retreat_Target_Interface                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetRetreatExitLocation_WorldLocation                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_GetRetreatExitLocation_WorldRotation                    (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_IcarusGOAPAction_EmergeFromRetreat_C::PlanAction(class AIcarusNPCGOAPController* Controller, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, class UObject* CallFunc_GetValueAsObject_ReturnValue, TScriptInterface<class IBP_RetreatTargetInterface_C> K2Node_DynamicCast_AsBP_Retreat_Target_Interface, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetRetreatExitLocation_WorldLocation, const struct FRotator& CallFunc_GetRetreatExitLocation_WorldRotation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusGOAPAction_EmergeFromRetreat_C", "PlanAction");

	Params::UBP_IcarusGOAPAction_EmergeFromRetreat_C_PlanAction_Params Parms{};

	Parms.Controller = Controller;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;
	Parms.CallFunc_GetValueAsObject_ReturnValue = CallFunc_GetValueAsObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Retreat_Target_Interface = K2Node_DynamicCast_AsBP_Retreat_Target_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetRetreatExitLocation_WorldLocation = CallFunc_GetRetreatExitLocation_WorldLocation;
	Parms.CallFunc_GetRetreatExitLocation_WorldRotation = CallFunc_GetRetreatExitLocation_WorldRotation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_IcarusGOAPAction_EmergeFromRetreat.BP_IcarusGOAPAction_EmergeFromRetreat_C.CheckContextualPreconditions
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AIcarusNPCGOAPController*    Controller                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckContextualPreconditions_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBP_IcarusGOAPAction_EmergeFromRetreat_C::CheckContextualPreconditions(class AIcarusNPCGOAPController* Controller, bool CallFunc_CheckContextualPreconditions_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_IcarusGOAPAction_EmergeFromRetreat_C", "CheckContextualPreconditions");

	Params::UBP_IcarusGOAPAction_EmergeFromRetreat_C_CheckContextualPreconditions_Params Parms{};

	Parms.Controller = Controller;
	Parms.CallFunc_CheckContextualPreconditions_ReturnValue = CallFunc_CheckContextualPreconditions_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


