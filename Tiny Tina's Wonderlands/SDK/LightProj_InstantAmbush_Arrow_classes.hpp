#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x380 - 0x378)
// BlueprintGeneratedClass LightProj_InstantAmbush_Arrow.LightProj_InstantAmbush_Arrow_C
class ULightProj_InstantAmbush_Arrow_C : public UOakLightProjectileData
{
public:
	uint8                                        Pad_30CF[0x8];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULightProj_InstantAmbush_Arrow_C* GetDefaultObj();

	void OnAttached(class ULightProjectile* Projectile, class AActor* AttachedActor, class AActor* CallFunc_GetSource_ReturnValue, class UGameplayTagContainerComponent* CallFunc_GetComponentByClass_ReturnValue, class ADroneProj_Spell_InstantAmbush_C* K2Node_DynamicCast_AsDrone_Proj_Spell_Instant_Ambush, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetDataTableValueFromHandle_ReturnValue, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue);
};

}


