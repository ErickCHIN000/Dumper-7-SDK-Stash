#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0xA38 - 0x9E0)
// BlueprintGeneratedClass BP_StarterProjectCharacter.BP_StarterProjectCharacter_C
class ABP_StarterProjectCharacter_C : public ANWXCharacter
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_PlayerVisibilityComponent_C*       BP_PlayerVisibilityComponent;                      // 0x9E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        BlendedPhysicsTimeline_PhysicsBlendFactor_CF69658947049FBD08F7BE8E284D14AD; // 0x9F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                BlendedPhysicsTimeline__Direction_CF69658947049FBD08F7BE8E284D14AD; // 0x9F4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7424[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    BlendedPhysicsTimeline;                            // 0x9F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         IsHit;                                             // 0xA00(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7439[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  CriticalBoneName;                                  // 0xA04(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7443[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMeshComponent*                PhysicsComponent;                                  // 0xA10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       PhysicsBlend;                                      // 0xA18(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          CriticalBoneNames;                                 // 0xA20(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UParticleSystemComponent*              Emitter;                                           // 0xA30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_StarterProjectCharacter_C* GetDefaultObj();

	void OnDamageActor(class AActor* Source, struct FGameplayTagContainer& EffectTags, float BaseDamage, struct FHitResult& HitResult, struct FTagValueContainer& TagValueContainer, TArray<struct FGameplayEffectCue>& GameplayCues, struct FTagValueContainer* AggregatedDamageTags, const struct FTagValueContainer& CallFunc_Damage_Actor_Internal_OutTagValueContainer, double CallFunc_Damage_Actor_Internal_BaseDamage_ImplicitCast);
	void FindCriticalBone(class USkeletalMeshComponent* Component, class FName BoneName, class FName* CriticalBoneName, bool* Success, class FName ParentBone, bool CallFunc_EqualEqual_NameName_ReturnValue, class FName CallFunc_FindCriticalBone_CriticalBoneName, bool CallFunc_FindCriticalBone_Success, class FName CallFunc_GetParentBone_ReturnValue, bool CallFunc_Array_Contains_ReturnValue);
	void BlendedPhysicsTimeline__FinishedFunc();
	void BlendedPhysicsTimeline__UpdateFunc();
	void BlendedPhysicsHit(class USkeletalMeshComponent* Component, class FName BoneName, const struct FS_HitData& HitData);
	void MULTIApplyEffect(double Duration, int32 EffectType);
	void ApplyEffect(double Duration, int32 EffectType);
	void K2_OnMovementModeChanged(enum class EMovementMode PrevMovementMode, enum class EMovementMode NewMovementMode, uint8 PrevCustomMode, uint8 NewCustomMode);
	void OnDamageReceived(float Damage, class AActor* Target, class AActor* Source, struct FGameplayTagContainer& EffectTags, struct FHitResult& HitResult, struct FTagValueContainer& TagValueContainer);
	void ExecuteUbergraph_BP_StarterProjectCharacter(int32 EntryPoint, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute_1, float CallFunc_GetFloatAttribute_ReturnValue_1, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute_2, float CallFunc_GetFloatAttribute_ReturnValue_2, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute_3, float CallFunc_GetFloatAttribute_ReturnValue_3, class USkeletalMeshComponent* K2Node_CustomEvent_Component, class FName K2Node_CustomEvent_BoneName, const struct FS_HitData& K2Node_CustomEvent_HitData, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, class FName CallFunc_FindCriticalBone_CriticalBoneName, bool CallFunc_FindCriticalBone_Success, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, double K2Node_Event_Duration_1, int32 K2Node_Event_EffectType_1, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, double K2Node_Event_Duration, int32 K2Node_Event_EffectType, enum class EMovementMode K2Node_Event_PrevMovementMode, enum class EMovementMode K2Node_Event_NewMovementMode, uint8 K2Node_Event_PrevCustomMode, uint8 K2Node_Event_NewCustomMode, float K2Node_Event_Damage, class AActor* K2Node_Event_Target, class AActor* K2Node_Event_Source, const struct FGameplayTagContainer& K2Node_Event_EffectTags, const struct FHitResult& K2Node_Event_HitResult, const struct FTagValueContainer& K2Node_Event_TagValueContainer, bool CallFunc_IsValid_ReturnValue_2, double CallFunc_NearlyEqual_FloatFloat_B_ImplicitCast, double CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast, float CallFunc_SetAllBodiesBelowPhysicsBlendWeight_PhysicsBlendWeight_ImplicitCast, double CallFunc_NearlyEqual_FloatFloat_B_ImplicitCast_1, double CallFunc_NearlyEqual_FloatFloat_A_ImplicitCast_1, double CallFunc_Multiply_VectorFloat_B_ImplicitCast, double K2Node_VariableSet_PhysicsBlend_ImplicitCast, float CallFunc_Delay_Duration_ImplicitCast, double CallFunc_OnDamageReceived_Base_Damage_ImplicitCast);
};

}


