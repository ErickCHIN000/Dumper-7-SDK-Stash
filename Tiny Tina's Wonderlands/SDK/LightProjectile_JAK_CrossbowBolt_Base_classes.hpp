#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x4D0 - 0x4D0)
// BlueprintGeneratedClass LightProjectile_JAK_CrossbowBolt_Base.LightProjectile_JAK_CrossbowBolt_Base_C
class ULightProjectile_JAK_CrossbowBolt_Base_C : public ULightProjectile_JAK_C
{
public:

	static class UClass* StaticClass();
	static class ULightProjectile_JAK_CrossbowBolt_Base_C* GetDefaultObj();

	void OnLifetimeExpired(class ULightProjectile* Projectile, class AActor* CallFunc_GetAttachedActor_ReturnValue, class UGameplayTagContainerComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_RemoveGameplayTag_ReturnValue);
	void OnAttached(class ULightProjectile* Projectile, class AActor* AttachedActor, class UStatusEffectData* Temp_object_Variable, class UGameplayTagContainerComponent* CallFunc_GetComponentByClass_ReturnValue, class AActor* CallFunc_GetSource_ReturnValue, class UStatusEffectData* Temp_object_Variable1, float CallFunc_GetValueOfAttribute_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue1, class UStatusEffectData* Temp_object_Variable2, int32 CallFunc_Round_ReturnValue, class UStatusEffectData* Temp_object_Variable3, class UStatusEffectData* Temp_object_Variable4, int32 Temp_int_Variable, class UStatusEffectData* K2Node_Select_Default, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue);
};

}


