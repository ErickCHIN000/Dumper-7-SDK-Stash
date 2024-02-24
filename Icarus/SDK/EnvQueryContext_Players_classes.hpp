#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x30 - 0x30)
// BlueprintGeneratedClass EnvQueryContext_Players.EnvQueryContext_Players_C
class UEnvQueryContext_Players_C : public UEnvQueryContext_BlueprintBase
{
public:

	static class UClass* StaticClass();
	static class UEnvQueryContext_Players_C* GetDefaultObj();

	void ProvideActorsSet(class UObject* QuerierObject, class AActor* QuerierActor, TArray<class AActor*>* ResultingActorsSet, TArray<class AIcarusPlayerCharacter*>& CallFunc_GetAllActorsOfClass_OutActors);
};

}


