#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x398 - 0x378)
// BlueprintGeneratedClass LightProjData_IceSpike_Mod_03.LightProjData_IceSpike_Mod_03_C
class ULightProjData_IceSpike_Mod_03_C : public UOakLightProjectileData
{
public:
	uint8                                        Pad_20C5[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableValueHandle                 PincushionDuration;                                // 0x380(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class ULightProjData_IceSpike_Mod_03_C* GetDefaultObj();

	void OnAttached(class ULightProjectile* Projectile, class AActor* AttachedActor, bool CallFunc_K2_EvaluateConditionType_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue, class USpellLightProjectile* K2Node_DynamicCast_AsSpell_Light_Projectile, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetSource_ReturnValue, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, class UGbxAbilityManagerComponent* CallFunc_GetComponentByClass_ReturnValue, class UGbxAbility* CallFunc_FindAbility_ReturnValue, class UGameplayTagContainerComponent* CallFunc_GetComponentByClass_ReturnValue1, class UAbility_IceSpike_Mod_03_C* K2Node_DynamicCast_AsAbility_Ice_Spike_Mod_03, bool K2Node_DynamicCast_bSuccess1, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue);
	void OnLifetimeExpired(class ULightProjectile* Projectile, class AActor* CallFunc_GetAttachedActor_ReturnValue, class UGameplayTagContainerComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FLightProjectileQueryData& K2Node_MakeStruct_LightProjectileQueryData, bool CallFunc_RemoveGameplayTag_ReturnValue);
};

}


