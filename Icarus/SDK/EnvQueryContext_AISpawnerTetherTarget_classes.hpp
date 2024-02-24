#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x30 - 0x30)
// BlueprintGeneratedClass EnvQueryContext_AISpawnerTetherTarget.EnvQueryContext_AISpawnerTetherTarget_C
class UEnvQueryContext_AISpawnerTetherTarget_C : public UEnvQueryContext_BlueprintBase
{
public:

	static class UClass* StaticClass();
	static class UEnvQueryContext_AISpawnerTetherTarget_C* GetDefaultObj();

	void ProvideSingleActor(class UObject* QuerierObject, class AActor* QuerierActor, class AActor** ResultingActor, const TArray<class AIcarusPlayerCharacter*>& Players, TArray<class ABP_AISpawner_C*>& CallFunc_GetAllActorsOfClass_OutActors, bool CallFunc_Array_IsValidIndex_ReturnValue, class ABP_AISpawner_C* CallFunc_Array_Get_Item, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


