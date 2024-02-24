#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0x4B8 - 0x440)
// BlueprintGeneratedClass Feat_Barbarian.Feat_Barbarian_C
class UFeat_Barbarian_C : public U_Feat_Parent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x440(0x8)(Transient, DuplicateTransient)
	struct FGameResourcePoolReference            RageResource;                                      // 0x448(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, ContainsInstancedReference)
	struct FGbxAbilityResourceController_ConditionalDamageModifier RsrcCntrlr_GbxAbilityResourceController_ConditionalDamageModifier_Feat_Barbarian; // 0x460(0x28)(None)
	struct FGbxAttributeFloat                    Att_Barbarian_Rage_CryoMultiplier;                 // 0x488(0xC)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	float                                        ActionSkillRageExtensionMultiplier;                // 0x494(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableValueHandle                 ActionSkillRageExtensionMultiplierHandle;          // 0x498(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UParticleSystemComponent*              Rage_FX_Body;                                      // 0x4B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UFeat_Barbarian_C* GetDefaultObj();

	void IsEnraged(bool* Res, bool CallFunc_BreakResourcePoolReference_bValid, float CallFunc_BreakResourcePoolReference_CurrentValue, float CallFunc_BreakResourcePoolReference_MinValue, float CallFunc_BreakResourcePoolReference_MaxValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
	void StartRage(bool* Res, class AActor* CallFunc_GetAbilityOwner_ReturnValue, class UGbxSkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_GetAbilityOwner_ReturnValue1, class AActor* CallFunc_GetAbilityOwner_ReturnValue2, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess, const struct FGbxAbilityResourceSpec_ConditionalDamageModifier& K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier, float CallFunc_GetMaxRageTime_Res);
	void AddRageTime(float Time, float* Res, bool CallFunc_BreakResourcePoolReference_bValid, float CallFunc_BreakResourcePoolReference_CurrentValue, float CallFunc_BreakResourcePoolReference_MinValue, float CallFunc_BreakResourcePoolReference_MaxValue, float CallFunc_Add_FloatFloat_ReturnValue);
	void RemoveRageTime(float Time, float* Res, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_BreakResourcePoolReference_bValid, float CallFunc_BreakResourcePoolReference_CurrentValue, float CallFunc_BreakResourcePoolReference_MinValue, float CallFunc_BreakResourcePoolReference_MaxValue, float CallFunc_Add_FloatFloat_ReturnValue);
	void EndRage(bool* Res, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_GetAbilityOwner_ReturnValue, class AActor* CallFunc_GetAbilityOwner_ReturnValue1, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess, const struct FGbxAbilityResourceSpec_ConditionalDamageModifier& K2Node_MakeStruct_GbxAbilityResourceSpec_ConditionalDamageModifier);
	void GetRageTime(float* Res, bool CallFunc_BreakResourcePoolReference_bValid, float CallFunc_BreakResourcePoolReference_CurrentValue, float CallFunc_BreakResourcePoolReference_MinValue, float CallFunc_BreakResourcePoolReference_MaxValue);
	void GetMaxRageTime(float* Res, bool CallFunc_BreakResourcePoolReference_bValid, float CallFunc_BreakResourcePoolReference_CurrentValue, float CallFunc_BreakResourcePoolReference_MinValue, float CallFunc_BreakResourcePoolReference_MaxValue);
	void HandleChallenge_LongRage(const struct FOakAbilityTimerSpec& K2Node_MakeStruct_OakAbilityTimerSpec, class UChallengesComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsChallengeComplete_ReturnValue);
	void HandleChallenge_MadShatter(const struct FCausedDeathDetails& Details, class AActor* KilledActor, class AActor* CallFunc_GetAbilityOwner_ReturnValue, bool CallFunc_K2_EvaluateConditionType_ReturnValue, bool CallFunc_Compare_Damage_Source_Equal, bool CallFunc_Compare_Damage_Source_Not_Equal);
	void GetManualHUDIconValues(int32* OutStackCount, float* OutDuration, float* OutTimeRemaining, bool CallFunc_BreakResourcePoolReference_bValid, float CallFunc_BreakResourcePoolReference_CurrentValue, float CallFunc_BreakResourcePoolReference_MinValue, float CallFunc_BreakResourcePoolReference_MaxValue, bool CallFunc_BreakResourcePoolReference_bValid1, float CallFunc_BreakResourcePoolReference_CurrentValue1, float CallFunc_BreakResourcePoolReference_MinValue1, float CallFunc_BreakResourcePoolReference_MaxValue1, bool CallFunc_Greater_FloatFloat_ReturnValue, int32 CallFunc_GetManualHUDIconValues_outStackCount, float CallFunc_GetManualHUDIconValues_outDuration, float CallFunc_GetManualHUDIconValues_outTimeRemaining);
	void OnActivated();
	void OnDeactivated();
	void OakPassiveOnActionSkillActivated(class UOakActionAbility* ActionAbility);
	void Rage_ResourceDepleted(const struct FGameResourcePoolReference& ResourcePool);
	void OakPassiveOnDownStateStart();
	void OakPassiveOnCausedDeath(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
	void OnAbilityTimerEnded(struct FOakAbilityTimerSpec& Spec, struct FOakAbilityTimerResult& Result);
	void OnPaused();
	void OnResumed();
	void ExecuteUbergraph_Feat_Barbarian(int32 EntryPoint, class UOakActionAbility* K2Node_Event_ActionAbility, const struct FGameResourcePoolReference& K2Node_CustomEvent_ResourcePool, bool CallFunc_StartRage_Res, bool CallFunc_EndRage_Res, bool CallFunc_EndRage_Res1, class UDamageComponent* K2Node_Event_Damaged, const struct FCausedDeathDetails& K2Node_Event_Details, class AActor* CallFunc_GetOwner_ReturnValue, const struct FGameResourcePoolReference& CallFunc_GetResourcePoolByResource_ReturnValue, const struct FOakAbilityTimerSpec& K2Node_Event_Spec, const struct FOakAbilityTimerResult& K2Node_Event_Result, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsEnraged_Res, float CallFunc_GetMaxRageTime_Res, float CallFunc_GetDataTableValueFromHandle_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_AddRageTime_Res, bool CallFunc_EndRage_Res2, class AActor* CallFunc_GetAbilityOwner_ReturnValue, class AActor* CallFunc_GetAbilityOwner_ReturnValue1, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue, const struct FStatusEffectRemoveSpec& K2Node_MakeStruct_StatusEffectRemoveSpec, bool CallFunc_RemoveStatusEffect_ReturnValue);
};

}


