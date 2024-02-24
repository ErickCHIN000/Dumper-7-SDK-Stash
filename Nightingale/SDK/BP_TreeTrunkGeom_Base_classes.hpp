#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x518 - 0x4F0)
// BlueprintGeneratedClass BP_TreeTrunkGeom_Base.BP_TreeTrunkGeom_Base_C
class ABP_TreeTrunkGeom_Base_C : public ANWXTreeTrunkGeometryCollection
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_InteractableComponent_C*           BP_InteractableComponent;                          // 0x4F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_HarvestableGeomAudioComponent_C*   BP_HarvestableGeomAudioComponent;                  // 0x500(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     NS_ChaosDestruction_Ore;                           // 0x508(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_FloatyTextComponent_C*             BP_FloatyTextComponent;                            // 0x510(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_TreeTrunkGeom_Base_C* GetDefaultObj();

	void CanQueryInteractable(bool* Can_Query);
	void HoldInteractionAvailable(bool* bAvailable);
	void IsInteractionDisabled(class AController* Controller, const struct FInteractionData& InteractionData, bool* bIsDisabled, class FString* DisabledText);
	void DoesHaveResourceType(int32 HitId, enum class EResourceType DesiredResourceType, bool* bHasResourceType, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void IsHarvestable(const struct FInteractionData& Interaction, bool* IsHarvestable);
	void GetInteractIcon(const struct FInteractionData& InteractionData, TSoftObjectPtr<class UTexture2D>* Icon, TSoftObjectPtr<class UTexture2D> SoftIcon, TSoftObjectPtr<class UTexture2D> CallFunc_GetResourceVulnerabilityIcon_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue);
	void CanInteractWithActor(class AController* Controller, const struct FInteractionData& InteractionData, bool* InteractAvailable);
	void ReturnMeshToHighlight(const struct FInteractionData& InteractionData, TArray<class UStaticMeshComponent*>* StaticMesh_to_Highlight, TArray<class USkeletalMeshComponent*>* SkeletalMesh_to_Highlight, bool* Hostile_, enum class EItemQuality* Quality);
	void InteractPressed(bool* Success);
	void InteractReleased(bool* Success);
	void InteractionRequiresClientOnly(class AController* Controller, bool* RequiresClientAction);
	void GetInteractText(const struct FInteractionData& InteractionData, class FString* InteractText);
	void ShowDamage(struct FVector& DamageLocation, float DamageAmount, class AActor* DamageSource, enum class E_UI_FloatyType Temp_byte_Variable, bool CallFunc_Greater_DoubleDouble_ReturnValue, enum class E_UI_FloatyType Temp_byte_Variable_1, bool Temp_bool_Variable, bool CallFunc_GetIsFalling_ReturnValue, enum class E_UI_FloatyType K2Node_Select_Default, bool CallFunc_Not_PreBool_ReturnValue, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_Create_Damage_Text_InValue_ImplicitCast);
	void OnDamageActor(class AActor* Source, struct FGameplayTagContainer& EffectTags, float BaseDamage, struct FHitResult& HitResult, struct FTagValueContainer& TagValueContainer, TArray<struct FGameplayEffectCue>& GameplayCues, struct FTagValueContainer* AggregatedDamageTags, const struct FTagValueContainer& CallFunc_Damage_Actor_Internal_OutTagValueContainer, double CallFunc_Damage_Actor_Internal_BaseDamage_ImplicitCast);
	void PerformClientSideInteraction(class AController* Controller);
	void ExecuteUbergraph_BP_TreeTrunkGeom_Base(int32 EntryPoint, class AController* K2Node_Event_Controller);
};

}


