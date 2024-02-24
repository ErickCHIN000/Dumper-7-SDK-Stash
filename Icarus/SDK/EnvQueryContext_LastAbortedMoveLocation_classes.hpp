#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x30 - 0x30)
// BlueprintGeneratedClass EnvQueryContext_LastAbortedMoveLocation.EnvQueryContext_LastAbortedMoveLocation_C
class UEnvQueryContext_LastAbortedMoveLocation_C : public UEnvQueryContext_BlueprintBase
{
public:

	static class UClass* StaticClass();
	static class UEnvQueryContext_LastAbortedMoveLocation_C* GetDefaultObj();

	void ProvideSingleLocation(class UObject* QuerierObject, class AActor* QuerierActor, struct FVector* ResultingLocation, class FName LastFailedMoveTargetLocationKey, class AActor* Temp_wildcard_Variable, class AAIController* CallFunc_GetAIController_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AAIController* K2Node_DynamicCast_AsAIController, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsVectorValueSet_ReturnValue, const struct FVector& CallFunc_GetValueAsVector_ReturnValue);
};

}


