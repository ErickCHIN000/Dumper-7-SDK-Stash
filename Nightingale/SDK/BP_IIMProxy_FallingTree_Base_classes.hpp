#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1E8 (0x6B0 - 0x4C8)
// BlueprintGeneratedClass BP_IIMProxy_FallingTree_Base.BP_IIMProxy_FallingTree_Base_C
class ABP_IIMProxy_FallingTree_Base_C : public AIIMFallingTreeProxy
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4C8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       StructureDamagePower;                              // 0x4D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       StructureDamageConservation;                       // 0x4D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       StructureDamageThreshold;                          // 0x4E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 StructureDamageTags;                               // 0x4E8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	TSet<class AActor*>                          DamagedActors;                                     // 0x508(0x50)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	double                                       ActorDamagePower;                                  // 0x558(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       ActorKnockbackSpeed;                               // 0x560(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         TreeCanInflictDamage;                              // 0x568(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7D24[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       DamageCooldownDuration;                            // 0x570(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MinLinearVelocitySqForPlayerDamage;                // 0x578(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAmbienceData                         TreeAmbianceDataRow;                               // 0x580(0x110)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         HasTreeVanished;                                   // 0x690(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HaveTreeVanishingEffectsSpawned;                   // 0x691(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7D30[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           LDamageCurve;                                      // 0x698(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       CanopyMinimumExtentMultiplier;                     // 0x6A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CanopyMaximumExtentMultiplier;                     // 0x6A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_IIMProxy_FallingTree_Base_C* GetDefaultObj();

	void CanQueryInteractable(bool* Can_Query);
	void CanInteractWithActor(class AController* Controller, const struct FInteractionData& InteractionData, bool* InteractAvailable);
	void ReturnMeshToHighlight(const struct FInteractionData& InteractionData, TArray<class UStaticMeshComponent*>* StaticMesh_to_Highlight, TArray<class USkeletalMeshComponent*>* SkeletalMesh_to_Highlight, bool* Hostile_, enum class EItemQuality* Quality);
	void InteractPressed(bool* Success);
	void InteractReleased(bool* Success);
	void InteractionRequiresClientOnly(class AController* Controller, bool* RequiresClientAction);
	void GetInteractText(const struct FInteractionData& InteractionData, class FString* InteractText);
	void GetInteractIcon(const struct FInteractionData& InteractionData, TSoftObjectPtr<class UTexture2D>* Icon);
	void IsHarvestable(const struct FInteractionData& Interaction, bool* IsHarvestable);
	void DoesHaveResourceType(int32 HitId, enum class EResourceType DesiredResourceType, bool* bHasResourceType, enum class EResourceType ResourceType, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void IsInteractionDisabled(class AController* Controller, const struct FInteractionData& InteractionData, bool* bIsDisabled, class FString* DisabledText);
	void HoldInteractionAvailable(bool* bAvailable);
	void SetTreeAmbienceDataRow(const struct FAmbienceData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
	void VanishTree(const struct FTimerHandle& CompletionTimer, bool CallFunc_IsServer_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue);
	void ScheduleCallToOnVanish(double TimeToDelayVanish, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, float CallFunc_K2_SetTimer_Time_ImplicitCast);
	void TrySpawnTreeVanishingEffects(const TArray<struct FVector>& SpherePoints, bool DrawDebug);
	void SpawnTreeCanopyLeaves(double TreeCanopyLeavesSpawnRateScale, double TimeToDelayDeactivatingLeaves, const struct FVector& CallFunc_GetCanopyBoundsScaled_OutFullExtent, const struct FVector& CallFunc_GetCanopyBoundsScaled_OutCenter, double CallFunc_GetWorldDeltaSeconds_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, bool CallFunc_NVFX_SpawnSystem_ReturnValue, class UNiagaraComponent* CallFunc_NVFX_SpawnSystem_NiagaraSystemSpawned, float CallFunc_SetFloatParameter_Param_ImplicitCast, float CallFunc_GetCanopyBoundsScaled_MaximumExtentMultiplier_ImplicitCast, float CallFunc_GetCanopyBoundsScaled_MinimumExtentMultiplier_ImplicitCast, float CallFunc_AdvanceSimulation_TickDeltaSeconds_ImplicitCast, float CallFunc_SetFloatParameter_Param_ImplicitCast_1);
	void SpawnTrunkDestructionPoof(const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue, const struct FVector& CallFunc_GetTrunkCollisionData_OutExtent, const struct FTransform& CallFunc_GetTrunkCollisionData_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_NVFX_SpawnSystem_ReturnValue, class UNiagaraComponent* CallFunc_NVFX_SpawnSystem_NiagaraSystemSpawned);
	void ProcessBaseTreeDamage(class AActor*& DamageCauser, class AActor* Other, struct FHitResult& Hit, class ANWXCharacter* K2Node_DynamicCast_AsNWXCharacter, bool K2Node_DynamicCast_bSuccess);
	void ResetCanInflictDamage();
	void ThrottledDamageGate(bool* DamageAllowed, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, float CallFunc_K2_SetTimer_Time_ImplicitCast);
	void DamagePlayer(class AActor*& Source, class AActor*& Other, struct FHitResult& Hit, const struct FTagValueContainer& DamageTagValueContainer, const struct FGameplayTagContainer& ActorDamageTags, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, TArray<class AActor*>& K2Node_MakeArray_Array, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, TScriptInterface<class IDamageEventInterface> K2Node_DynamicCast_AsDamage_Event_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetLinearVelocitySquared_ReturnValue, const struct FGameplayTag& CallFunc_MeleeTag_MeleeTag, const struct FS_CreatureKnockbackData& K2Node_MakeStruct_S_CreatureKnockbackData, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Set_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, TArray<struct FGameplayEffectCue>& Temp_struct_Variable, const struct FTagValueContainer& CallFunc_DamageActor_AggregatedDamageTags, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, float CallFunc_DamageActor_BaseDamage_ImplicitCast, float K2Node_MakeStruct_LaunchSpeedOverride_41_7727544F4971B507765877BA738938E5_ImplicitCast);
	void DamageStructure(class AActor*& Source, class AActor*& Other, struct FHitResult& Hit, const struct FGameplayTag& Temp_struct_Variable, TScriptInterface<class IDamageEventInterface> K2Node_DynamicCast_AsDamage_Event_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_ThrottledDamageGate_DamageAllowed, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FTagValueContainer& Temp_struct_Variable_1, TArray<struct FGameplayEffectCue>& Temp_struct_Variable_2, const struct FTagValueContainer& CallFunc_DamageActor_AggregatedDamageTags, bool CallFunc_Greater_DoubleDouble_ReturnValue, float CallFunc_DamageActor_BaseDamage_ImplicitCast);
	void UserConstructionScript(int32 CallFunc_GetCurrentRealmPower_RealmPower, double CallFunc_Conv_IntToDouble_ReturnValue, int32 CallFunc_GetCurrentRealmPower_RealmPower_1, float CallFunc_GetFloatValue_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, float CallFunc_GetFloatValue_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, float CallFunc_GetFloatValue_InTime_ImplicitCast, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, float CallFunc_GetFloatValue_InTime_ImplicitCast_1, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast_1);
	void PerformClientSideInteraction(class AController* Controller);
	void ExecuteUbergraph_BP_IIMProxy_FallingTree_Base(int32 EntryPoint, class AController* K2Node_Event_Controller);
};

}


