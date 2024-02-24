#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1A0 (0x5C0 - 0x420)
// BlueprintGeneratedClass GA_CreatureAttackBase.GA_CreatureAttackBase_C
class UGA_CreatureAttackBase_C : public UNWXGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x420(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                PhysicalImpactEffect;                              // 0x428(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_CreatureBase_C*                    CreatureDamageCauser;                              // 0x430(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FName                                  HitSocket;                                         // 0x438(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 ImpactTags;                                        // 0x440(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FHitResult                            HitResult;                                         // 0x460(0xE8)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UBP_CreatureSocketTraceComponent_C*    SocketTraceComponent;                              // 0x548(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         UseKnockback;                                      // 0x550(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_AE6[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_CreatureKnockbackData              KnockbackData;                                     // 0x558(0x2E)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_AEB[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                HitActor;                                          // 0x588(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 CueTag;                                            // 0x590(0x20)(Edit, BlueprintVisible)
	struct FTagValueContainer                    DamageTagValueContainer;                           // 0x5B0(0x10)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UGA_CreatureAttackBase_C* GetDefaultObj();

	void SetSquadFocus(class ABP_CreatureSpawnerBase_C* LSpawner, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBPI_Targeter_C> CallFunc_IsFriend_self_CastInput, bool CallFunc_IsFriend_bIsFriend, class ANWXAISpawner* CallFunc_GetSpawner_Spawner, bool CallFunc_IsValid_ReturnValue_1, class ABP_CreatureSpawnerBase_C* K2Node_DynamicCast_AsBP_Creature_Spawner_Base, bool K2Node_DynamicCast_bSuccess);
	void CreatureAbilityError(const class FString& Error_Text, bool EndAbility, enum class ENWXLogLevel NWXLogLevel, class UClass* CallFunc_GetObjectClass_ReturnValue, const class FString& CallFunc_GetClassDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1);
	void ApplyKnockback(TArray<class AActor*>& K2Node_MakeArray_Array, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_GetDirectionUnitVector_ReturnValue);
	void ApplyDamageToTarget(double LAbilityDamage, const struct FGameplayTagContainer& LEffectTags, TArray<struct FGameplayEffectCue>& Temp_struct_Variable, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_GetOwnedGameplayTags_self_CastInput, const struct FGameplayTagContainer& CallFunc_GetOwnedGameplayTags_TagContainer, TScriptInterface<class IBPI_Targeter_C> CallFunc_IsFriend_self_CastInput, bool CallFunc_IsFriend_bIsFriend, TScriptInterface<class IBPI_Targeter_C> CallFunc_IsFriend_self_CastInput_1, bool CallFunc_IsFriend_bIsFriend_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_GetAbilityDamage_Damage, const struct FGameplayTag& CallFunc_MeleeTag_MeleeTag, TScriptInterface<class IDamageEventInterface> K2Node_DynamicCast_AsDamage_Event_Interface, bool K2Node_DynamicCast_bSuccess, const struct FTagValueContainer& CallFunc_DamageActor_AggregatedDamageTags, float CallFunc_DamageActor_BaseDamage_ImplicitCast);
	void PlayPhysicalResponse(class AActor* Striker, const struct FHitResult& Hit, const struct FGameplayEffectContextHandle& LContext, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct FGameplayEffectContextHandle& CallFunc_MakeEffectContext_ReturnValue, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue, bool CallFunc_IsValidClass_ReturnValue);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_CreatureAttackBase(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData, const struct FGameplayTagContainer& CallFunc_GetGameplayTagContainerFromAbilityPayload_ReturnValue, const struct FHitResult& CallFunc_GetHitResultFromTargetData_ReturnValue, class UBP_CreatureSocketTraceComponent_C* K2Node_DynamicCast_AsBP_Creature_Socket_Trace_Component, bool K2Node_DynamicCast_bSuccess, class ABP_CreatureBase_C* K2Node_DynamicCast_AsBP_Creature_Base, bool K2Node_DynamicCast_bSuccess_1, const struct FS_CreatureKnockbackData& CallFunc_Get_Knockback_Data_KnockbackData, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_IsValid_ReturnValue);
};

}


