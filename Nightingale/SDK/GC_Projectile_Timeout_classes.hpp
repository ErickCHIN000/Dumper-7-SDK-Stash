#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x40 - 0x40)
// BlueprintGeneratedClass GC_Projectile_Timeout.GC_Projectile_Timeout_C
class UGC_Projectile_Timeout_C : public UGameplayCueNotify_Static
{
public:

	static class UClass* StaticClass();
	static class UGC_Projectile_Timeout_C* GetDefaultObj();

	bool OnExecute(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, class UNiagaraSystem* FizzleNiagaraSystem, class ABP_ProjectileBase_C* Projectile, const struct FVector& ImpactNormal, const struct FVector& ImpactLocation, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetPMVelocity_PMVelocity, const struct FRotator& CallFunc_MakeRotFromZ_ReturnValue, class ABP_ProjectileBase_C* K2Node_DynamicCast_AsBP_Projectile_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_OnExecute_ReturnValue);
};

}


