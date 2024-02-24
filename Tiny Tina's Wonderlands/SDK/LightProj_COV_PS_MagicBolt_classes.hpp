#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC0 (0x438 - 0x378)
// BlueprintGeneratedClass LightProj_COV_PS_MagicBolt.LightProj_COV_PS_MagicBolt_C
class ULightProj_COV_PS_MagicBolt_C : public UOakLightProjectileData
{
public:
	uint8                                        Pad_3C92[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEnvQueryParams                       QueryHomingTarget;                                 // 0x380(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class ULightProj_COV_PS_MagicBolt_C* GetDefaultObj();

	void OnBegin(class ULightProjectile* Projectile, class AActor* CallFunc_GetSource_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_RunEnvQueryForBestActor_ResultActor, bool CallFunc_RunEnvQueryForBestActor_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void OnLifetimeExpired(class ULightProjectile* Projectile);
	void EnableHoming(class ULightProjectile* Projectile);
};

}


