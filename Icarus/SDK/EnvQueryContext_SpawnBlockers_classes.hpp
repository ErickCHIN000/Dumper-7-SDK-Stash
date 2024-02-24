#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x30 - 0x30)
// BlueprintGeneratedClass EnvQueryContext_SpawnBlockers.EnvQueryContext_SpawnBlockers_C
class UEnvQueryContext_SpawnBlockers_C : public UEnvQueryContext_BlueprintBase
{
public:

	static class UClass* StaticClass();
	static class UEnvQueryContext_SpawnBlockers_C* GetDefaultObj();

	void ProvideActorsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<class AActor*>* ResultingActorsSet, TArray<class AActor*>& CallFunc_GetAllActorsWithInterface_OutActors);
};

}


