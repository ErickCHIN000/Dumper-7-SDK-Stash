#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x5E8 - 0x5A8)
// BlueprintGeneratedClass BP_StructureComposite_Base.BP_StructureComposite_Base_C
class ABP_StructureComposite_Base_C : public AStructureComposite
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_Acoustic_Volume_Manager_C*         BP_Acoustic_Volume_Manager;                        // 0x5B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStructureReverbComponent*             StructureReverb;                                   // 0x5B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_StructureVolumeComponent_C*        StructureVolumeComponent;                          // 0x5C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_StructureCompositeComponent_C*     StructureCompositeComponent;                       // 0x5C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_StructureMeshesContainer_C*        StructureMeshesContainer;                          // 0x5D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x5D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_PlayerVisibilityComponent_C*       BP_PlayerVisibilityComponent1;                     // 0x5E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_StructureComposite_Base_C* GetDefaultObj();

	void GetDamageEffect(class UClass** DamageEffect);
	void GetRedirectedTarget(bool* ShouldRedirect, class AActor** RedirectedTarget);
	void AddPiecesToConstructionBuckets();
	void OnDamageActor(class AActor* Source, struct FGameplayTagContainer& EffectTags, float BaseDamage, struct FHitResult& HitResult, struct FTagValueContainer& TagValueContainer, TArray<struct FGameplayEffectCue>& GameplayCues, struct FTagValueContainer* AggregatedDamageTags, const struct FTagValueContainer& CallFunc_Damage_Actor_Internal_OutTagValueContainer, double CallFunc_Damage_Actor_Internal_BaseDamage_ImplicitCast);
	void DamageActor(class AActor* Source, struct FGameplayTagContainer& EffectTags, float BaseDamage, struct FHitResult& HitResult, struct FTagValueContainer& TagValueContainer, TArray<struct FGameplayEffectCue>& GameplayCues, struct FTagValueContainer* AggregatedDamageTags, const struct FTagValueContainer& CallFunc_DamageActor_AggregatedDamageTags, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_IsValid_ReturnValue);
	class UStructureReverbComponent* GetReverbComponent();
	class UStructureVolumeComponent* GetVolumeComponent();
	class UStructureMeshesContainer* GetMeshesContainer();
	class UStructureCompositeComponent* GetCompositeComponent();
	void OnDamageReceived(float Damage, class AActor* Target, class AActor* Source, struct FGameplayTagContainer& EffectTags, struct FHitResult& HitResult, struct FTagValueContainer& TagValueContainer);
	void PlayerEntered(class AActor* Actor, struct FStructureReverbVolume& ReverbVolume);
	void PlayerExited(class AActor* Actor, struct FStructureReverbVolume& ReverbVolume);
	void Completed();
	void ExecuteUbergraph_BP_StructureComposite_Base(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, float K2Node_Event_Damage, class AActor* K2Node_Event_Target, class AActor* K2Node_Event_Source, const struct FGameplayTagContainer& K2Node_Event_EffectTags, const struct FHitResult& K2Node_Event_HitResult, const struct FTagValueContainer& K2Node_Event_TagValueContainer, class AActor* K2Node_CustomEvent_Actor_1, const struct FStructureReverbVolume& K2Node_CustomEvent_ReverbVolume_1, class AActor* K2Node_CustomEvent_Actor, const struct FStructureReverbVolume& K2Node_CustomEvent_ReverbVolume, bool CallFunc_PlayerEntered_EnteredFromExterior, bool CallFunc_PlayerEntered_IsLocalPlayer, bool CallFunc_PlayerExited_ExitedToExterior, bool CallFunc_PlayerExited_IsLocalPlayer, bool CallFunc_Not_PreBool_ReturnValue, double CallFunc_OnDamageReceived_StructureBase_Damage_ImplicitCast);
};

}


