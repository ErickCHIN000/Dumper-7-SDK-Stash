#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x38 - 0x30)
// BlueprintGeneratedClass EnvQueryContext_BB_TargetActor.EnvQueryContext_BB_TargetActor_C
class UEnvQueryContext_BB_TargetActor_C : public UEnvQueryContext_BlueprintBase
{
public:
	class FName                                  BlackboardKeyName;                                 // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UEnvQueryContext_BB_TargetActor_C* GetDefaultObj();

	void ProvideSingleActor(class UObject* QuerierObject, class AActor* QuerierActor, class AActor** ResultingActor, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, class UObject* CallFunc_GetValueAsObject_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess);
};

}


