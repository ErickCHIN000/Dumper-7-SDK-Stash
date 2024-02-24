#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EnvQueryContext_LastAbortedMoveLocation.EnvQueryContext_LastAbortedMoveLocation_C
// (None)

class UClass* UEnvQueryContext_LastAbortedMoveLocation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryContext_LastAbortedMoveLocation_C");

	return Clss;
}


// EnvQueryContext_LastAbortedMoveLocation_C EnvQueryContext_LastAbortedMoveLocation.Default__EnvQueryContext_LastAbortedMoveLocation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEnvQueryContext_LastAbortedMoveLocation_C* UEnvQueryContext_LastAbortedMoveLocation_C::GetDefaultObj()
{
	static class UEnvQueryContext_LastAbortedMoveLocation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryContext_LastAbortedMoveLocation_C*>(UEnvQueryContext_LastAbortedMoveLocation_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EnvQueryContext_LastAbortedMoveLocation.EnvQueryContext_LastAbortedMoveLocation_C.ProvideSingleLocation
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     QuerierObject                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      QuerierActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ResultingLocation                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        LastFailedMoveTargetLocationKey                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Temp_wildcard_Variable                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               CallFunc_GetAIController_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               K2Node_DynamicCast_AsAIController                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsVectorValueSet_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetValueAsVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEnvQueryContext_LastAbortedMoveLocation_C::ProvideSingleLocation(class UObject* QuerierObject, class AActor* QuerierActor, struct FVector* ResultingLocation, class FName LastFailedMoveTargetLocationKey, class AActor* Temp_wildcard_Variable, class AAIController* CallFunc_GetAIController_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AAIController* K2Node_DynamicCast_AsAIController, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsVectorValueSet_ReturnValue, const struct FVector& CallFunc_GetValueAsVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnvQueryContext_LastAbortedMoveLocation_C", "ProvideSingleLocation");

	Params::UEnvQueryContext_LastAbortedMoveLocation_C_ProvideSingleLocation_Params Parms{};

	Parms.QuerierObject = QuerierObject;
	Parms.QuerierActor = QuerierActor;
	Parms.LastFailedMoveTargetLocationKey = LastFailedMoveTargetLocationKey;
	Parms.Temp_wildcard_Variable = Temp_wildcard_Variable;
	Parms.CallFunc_GetAIController_ReturnValue = CallFunc_GetAIController_ReturnValue;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_DynamicCast_AsAIController = K2Node_DynamicCast_AsAIController;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsVectorValueSet_ReturnValue = CallFunc_IsVectorValueSet_ReturnValue;
	Parms.CallFunc_GetValueAsVector_ReturnValue = CallFunc_GetValueAsVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ResultingLocation != nullptr)
		*ResultingLocation = std::move(Parms.ResultingLocation);

}

}


