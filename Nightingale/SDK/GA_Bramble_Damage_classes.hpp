#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x428 - 0x420)
// BlueprintGeneratedClass GA_Bramble_Damage.GA_Bramble_Damage_C
class UGA_Bramble_Damage_C : public UBP_NWXGameplayAbility_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x420(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGA_Bramble_Damage_C* GetDefaultObj();

	void K2_ActivateAbility();
	void On_Actor_hit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void ExecuteUbergraph_GA_Bramble_Damage(int32 EntryPoint, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, TArray<struct FGameplayEffectCue>& Temp_struct_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTagValueContainer& Temp_struct_Variable_1, const struct FHitResult& Temp_struct_Variable_2, const struct FGameplayTagContainer& Temp_struct_Variable_3, class AActor* K2Node_CustomEvent_SelfActor, class AActor* K2Node_CustomEvent_OtherActor, const struct FVector& K2Node_CustomEvent_NormalImpulse, const struct FHitResult& K2Node_CustomEvent_Hit, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue_1, TScriptInterface<class IDamageEventInterface> K2Node_DynamicCast_AsDamage_Event_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, double CallFunc_SelectFloat_ReturnValue, const struct FTagValueContainer& CallFunc_DamageActor_AggregatedDamageTags, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast, double CallFunc_SelectFloat_B_ImplicitCast, float CallFunc_DamageActor_BaseDamage_ImplicitCast);
};

}


