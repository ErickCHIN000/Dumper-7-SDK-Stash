#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x30 - 0x30)
// BlueprintGeneratedClass EnvQueryContext_MountOwner.EnvQueryContext_MountOwner_C
class UEnvQueryContext_MountOwner_C : public UEnvQueryContext_BlueprintBase
{
public:

	static class UClass* StaticClass();
	static class UEnvQueryContext_MountOwner_C* GetDefaultObj();

	void ProvideSingleActor(class UObject* QuerierObject, class AActor* QuerierActor, class AActor** ResultingActor, class AIcarusCharacter* K2Node_DynamicCast_AsIcarus_Character, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetMountParent_ParentActor, bool CallFunc_GetMountParent_Success);
};

}


