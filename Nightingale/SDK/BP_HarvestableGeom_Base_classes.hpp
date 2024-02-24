#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x850 - 0x820)
// BlueprintGeneratedClass BP_HarvestableGeom_Base.BP_HarvestableGeom_Base_C
class ABP_HarvestableGeom_Base_C : public ANWXHarvestableGeometryCollection
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x820(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAIPerceptionStimuliSourceComponent*   AIPerceptionStimuliSource;                         // 0x828(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_InteractableComponent_C*           BP_InteractableComponent;                          // 0x830(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_HarvestableGeomAudioComponent_C*   BP_HarvestableGeomAudioComponent;                  // 0x838(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     NS_ChaosDestruction_Ore;                           // 0x840(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_FloatyTextComponent_C*             BP_FloatyTextComponent;                            // 0x848(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_HarvestableGeom_Base_C* GetDefaultObj();

	void CanQueryInteractable(bool* Can_Query);
	void HoldInteractionAvailable(bool* bAvailable);
	void IsInteractionDisabled(class AController* Controller, const struct FInteractionData& InteractionData, bool* bIsDisabled, class FString* DisabledText);
	void DoesHaveResourceType(int32 HitId, enum class EResourceType DesiredResourceType, bool* bHasResourceType, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void IsHarvestable(const struct FInteractionData& Interaction, bool* IsHarvestable, bool CallFunc_Not_PreBool_ReturnValue);
	void GetInteractIcon(const struct FInteractionData& InteractionData, TSoftObjectPtr<class UTexture2D>* Icon, TSoftObjectPtr<class UTexture2D> SoftIcon, TSoftObjectPtr<class UTexture2D> CallFunc_GetResourceVulnerabilityIcon_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue);
	void CanInteractWithActor(class AController* Controller, const struct FInteractionData& InteractionData, bool* InteractAvailable);
	void ReturnMeshToHighlight(const struct FInteractionData& InteractionData, TArray<class UStaticMeshComponent*>* StaticMesh_to_Highlight, TArray<class USkeletalMeshComponent*>* SkeletalMesh_to_Highlight, bool* Hostile_, enum class EItemQuality* Quality);
	void InteractPressed(bool* Success);
	void InteractReleased(bool* Success);
	void InteractionRequiresClientOnly(class AController* Controller, bool* RequiresClientAction);
	void GetInteractText(const struct FInteractionData& InteractionData, class FString* InteractText);
	void CallResourceHarvested(class AActor* DamageSource, int32 Quantity, class ANWXPlayerCharacter* K2Node_DynamicCast_AsNWXPlayer_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IBPI_TaskTracking_C> K2Node_DynamicCast_AsBPI_Task_Tracking, bool K2Node_DynamicCast_bSuccess_1);
	void ShowDamage(struct FVector& DamageLocation, float DamageAmount, class AActor* DamageSource, bool Temp_bool_Variable, bool CallFunc_Greater_DoubleDouble_ReturnValue, enum class E_UI_FloatyType Temp_byte_Variable, enum class E_UI_FloatyType Temp_byte_Variable_1, enum class E_UI_FloatyType K2Node_Select_Default, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_Create_Damage_Text_InValue_ImplicitCast);
	bool SpawnResource(class AActor* DamageSource, struct FTransform& SpawnTransform, struct FVector& Impulse, int32 Count, int32 CurrentPL, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UNWXItemProxySpawnerSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, class UNWXItemProxySpawnerSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_1, const struct FVector& Temp_struct_Variable, int32 Temp_int_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<struct FInventoryEntry>& CallFunc_GenerateEssencesForResource_ReturnValue, const struct FInventoryEntry& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void OnDamageActor(class AActor* Source, struct FGameplayTagContainer& EffectTags, float BaseDamage, struct FHitResult& HitResult, struct FTagValueContainer& TagValueContainer, TArray<struct FGameplayEffectCue>& GameplayCues, struct FTagValueContainer* AggregatedDamageTags, bool CallFunc_Not_PreBool_ReturnValue, const struct FTagValueContainer& CallFunc_Damage_Actor_Internal_OutTagValueContainer, double CallFunc_Damage_Actor_Internal_BaseDamage_ImplicitCast);
	void PerformClientSideInteraction(class AController* Controller);
	void ExecuteUbergraph_BP_HarvestableGeom_Base(int32 EntryPoint, class AController* K2Node_Event_Controller);
};

}


