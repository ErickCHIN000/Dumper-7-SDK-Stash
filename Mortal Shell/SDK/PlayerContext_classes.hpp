#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x30 - 0x30)
// BlueprintGeneratedClass PlayerContext.PlayerContext_C
class UPlayerContext_C : public UEnvQueryContext_BlueprintBase
{
public:

	static class UClass* StaticClass();
	static class UPlayerContext_C* GetDefaultObj();

	void ProvideSingleActor(class UObject* QuerierObject, class AActor* QuerierActor, class AActor** ResultingActor, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue);
};

}


