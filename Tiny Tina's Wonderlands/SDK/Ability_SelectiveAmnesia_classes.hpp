#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x170 - 0x110)
// BlueprintGeneratedClass Ability_SelectiveAmnesia.Ability_SelectiveAmnesia_C
class UAbility_SelectiveAmnesia_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x110(0x8)(Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_SelectiveAmnesia; // 0x118(0x28)(None)
	struct FStatusEffectInstanceReference        ArmorStatusHandle;                                 // 0x140(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, ContainsInstancedReference)
	float                                        StatusDuration;                                    // 0x158(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_13E8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UParticleSystemComponent*              FXLFoot;                                           // 0x160(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              FXRFoot;                                           // 0x168(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAbility_SelectiveAmnesia_C* GetDefaultObj();

	void OnAbilityTimerStarted(struct FOakAbilityTimerSpec& Spec);
	void OnAbilityTimerEnded(struct FOakAbilityTimerSpec& Spec, struct FOakAbilityTimerResult& Result);
	void TrySpawnSplat();
	void TakeAnyDamage_SelectiveAmnesia(class UDamageComponent* DamageReceiver, float Damage, class UGbxDamageType* DamageType, class UDamageSource* DamageSource, class AController* InstigatedBy, class UDamageCauserComponent* DamageCauser, const struct FReceivedDamageDetails& Details);
	void OnActivated();
	void ExecuteUbergraph_Ability_SelectiveAmnesia(int32 EntryPoint, float CallFunc_GetDataTableValue_OutValue, bool CallFunc_GetDataTableValue_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FOakAbilityTimerSpec& K2Node_Event_Spec1, const struct FOakAbilityTimerSpec& K2Node_Event_Spec, const struct FOakAbilityTimerResult& K2Node_Event_Result, class AActor* CallFunc_GetAbilityOwner_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetAbilityOwner_ReturnValue1, bool CallFunc_RemoveStatusEffectInstance_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue1, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class UDamageComponent* K2Node_CustomEvent_DamageReceiver, float K2Node_CustomEvent_Damage, class UGbxDamageType* K2Node_CustomEvent_DamageType, class UDamageSource* K2Node_CustomEvent_DamageSource, class AController* K2Node_CustomEvent_InstigatedBy, class UDamageCauserComponent* K2Node_CustomEvent_DamageCauser, const struct FReceivedDamageDetails& K2Node_CustomEvent_Details, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, bool CallFunc_Compare_Damage_Source_Equal, bool CallFunc_Compare_Damage_Source_Not_Equal, const struct FGbxSpawnActorAsyncRequest& K2Node_MakeStruct_GbxSpawnActorAsyncRequest, int32 CallFunc_SpawnActorAsync_ReturnValue, class AActor* CallFunc_GetAbilityOwner_ReturnValue2, class AActor* CallFunc_GetOwner_ReturnValue2, class UOakDamageComponent* CallFunc_GetComponentByClass_ReturnValue, class AActor* CallFunc_GetAbilityOwner_ReturnValue3, const struct FGbxAbilityResourceSpec_ScriptDelegate& K2Node_MakeStruct_GbxAbilityResourceSpec_ScriptDelegate, class AActor* CallFunc_GetOwner_ReturnValue3, float CallFunc_GetValueOfAttribute_ReturnValue, class AActor* CallFunc_GetAbilityOwner_ReturnValue4, class AActor* CallFunc_GetOwner_ReturnValue4, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec1, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue1, class AActor* CallFunc_GetAbilityOwner_ReturnValue5, float CallFunc_Multiply_FloatFloat_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue5, int32 CallFunc_FTrunc_ReturnValue, class UGbxSkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue1, const struct FOakAbilityTimerSpec& K2Node_MakeStruct_OakAbilityTimerSpec, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class AActor* CallFunc_GetAbilityOwner_ReturnValue6, class AActor* CallFunc_GetOwner_ReturnValue6, class UGbxSkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue2, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue1);
};

}


