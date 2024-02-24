#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x41 (0x971 - 0x930)
// BlueprintGeneratedClass BP_StructureBase.BP_StructureBase_C
class ABP_StructureBase_C : public AStructureConstructedBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x930(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_StructureConstructedComponent_C*   BP_StructureConstructedComponent;                  // 0x938(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTicketGiverComponent_Simple*          TicketGiverComponent_Simple;                       // 0x940(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_FloatyTextComponent_C*             BP_FloatyTextComponent;                            // 0x948(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_InteractableComponent_C*           InteractableComponent;                             // 0x950(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                 IDGuid;                                            // 0x958(0x10)(Edit, BlueprintVisible, Net, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                DamageObjectClass;                                 // 0x968(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsInitializingHealth;                              // 0x970(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_StructureBase_C* GetDefaultObj();

	void GetEncounterEvents(class UBP_EncounterEventsObject_C** EncounterEventsObject, class UBP_EncounterEventsObject_C* CallFunc_GetDefaultObject_ReturnValue);
	void GetEventsObject(class UStructureEventsObject** EventObject, class UStructureEventsObject* CallFunc_GetStructureEventsObject_ReturnValue);
	void GetFacingTarget(class UObject* QueryingActor, class AActor** FacingTarget);
	void GetRangedAttackLocation(class UObject* QueryingActor, enum class Enum_AttackLocationType AttackLocationType, struct FVector* Location, const struct FVector& CallFunc_GetMeshOrigin_LocalLocation, const struct FVector& CallFunc_GetMeshOrigin_WorldLocation);
	void CompleteCompletableStructure(class ANWXAICharacter* AICharacter, bool* Complete);
	void GetReachableNavTransform(class APawn* Pawn, bool* Success, struct FTransform* ReachableNavTransform, class UObject** Structure, double BoxExtentDimension, const TArray<struct FVector>& LLocations, class APawn* LPawn, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UObject* Temp_object_Variable, TScriptInterface<class ISupportInterface> K2Node_DynamicCast_AsSupport_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_TraceForGroundSupport_OutIsIntersectingGround, TArray<struct FHitResult>& CallFunc_TraceForGroundSupport_OutResults, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_IsServer_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, TScriptInterface<class ISupportAccessInterface> K2Node_DynamicCast_AsSupport_Access_Interface, bool K2Node_DynamicCast_bSuccess_1, class UObject* CallFunc_GetSupportInterfaceObject_ReturnValue, bool Temp_bool_Variable, int32 Temp_int_Array_Index_Variable_1, TArray<struct FVector>& CallFunc_GetStructure3DWorldFourCorners_ReturnValue, const struct FVector& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsLocationReachableOnNavMesh_ReturnValue, TArray<struct FHitResult>& Temp_struct_Variable, const struct FHitResult& CallFunc_Array_Get_Item_1, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FVector& CallFunc_MakeVector_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_FindClosestVectorToTargetVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FBox& CallFunc_MakeBox_ReturnValue, const struct FVector& CallFunc_FindBestPolyInRange_PolyLocation, bool CallFunc_FindBestPolyInRange_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2, const struct FTransform& CallFunc_MakeTransform_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_IsLocationReachableOnNavMesh_ReturnValue_1);
	void CanQueryInteractable(bool* Can_Query);
	void HoldInteractionAvailable(bool* bAvailable);
	void IsInteractionDisabled(class AController* Controller, const struct FInteractionData& InteractionData, bool* bIsDisabled, class FString* DisabledText);
	void DoesHaveResourceType(int32 HitId, enum class EResourceType DesiredResourceType, bool* bHasResourceType);
	void IsHarvestable(const struct FInteractionData& Interaction, bool* IsHarvestable);
	void GetInteractIcon(const struct FInteractionData& InteractionData, TSoftObjectPtr<class UTexture2D>* Icon);
	void GetInteractText(const struct FInteractionData& InteractionData, class FString* InteractText);
	void InteractionRequiresClientOnly(class AController* Controller, bool* RequiresClientAction);
	void InteractReleased(bool* Success);
	void InteractPressed(bool* Success);
	void ReturnMeshToHighlight(const struct FInteractionData& InteractionData, TArray<class UStaticMeshComponent*>* StaticMesh_to_Highlight, TArray<class USkeletalMeshComponent*>* SkeletalMesh_to_Highlight, bool* Hostile_, enum class EItemQuality* Quality);
	void CanInteractWithActor(class AController* Controller, const struct FInteractionData& InteractionData, bool* InteractAvailable);
	void GetRedirectedTarget(bool* ShouldRedirect, class AActor** RedirectedTarget);
	void GetDamageEffect(class UClass** DamageEffect);
	void ExecuteDeconstructStructure(enum class EDeconstructionResourceReturn ResourceReturn, class AActor* DeconstructionSource, bool* Success);
	void ExecuteDestroyStructure(class AActor* DestructionSource, bool* Success, class UBP_StructureDamageObject_C* CallFunc_GetDamageObject_DamageObject, bool CallFunc_DestroyStructure_bSuccess);
	class UStructureConstructedComponent* GetStructureConstructedComponent();
	class UStructureDamageObject* GetStructureDamageObject(class UBP_StructureDamageObject_C* CallFunc_GetDamageObject_DamageObject);
	void InitializeStructure(bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_InitializeState_bSuccess);
	void OnDamageActor(class AActor* Source, struct FGameplayTagContainer& EffectTags, float BaseDamage, struct FHitResult& HitResult, struct FTagValueContainer& TagValueContainer, TArray<struct FGameplayEffectCue>& GameplayCues, struct FTagValueContainer* AggregatedDamageTags, const struct FTagValueContainer& CallFunc_Damage_Actor_Internal_OutTagValueContainer, double CallFunc_Damage_Actor_Internal_BaseDamage_ImplicitCast);
	void InitializeStructureId(bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_Guid_ReturnValue, const struct FGuid& CallFunc_NewUniqueInstanceId_InstanceId);
	void GetFowardVector(struct FVector* FowardVector, const struct FVector& CallFunc_GetForwardVector_ReturnValue);
	void ApplyGameplayTagData(bool CallFunc_GetStructureData_IsValid, const struct FStructureData& CallFunc_GetStructureData_OutStructureData, const class FString& CallFunc_GetStructureDataDebugName_OutDebugName, const class FString& CallFunc_Concat_StrStr_ReturnValue, TArray<struct FGameplayTag>& CallFunc_BreakGameplayTagContainer_GameplayTags);
	void GetDamageObject(class UBP_StructureDamageObject_C** DamageObject, const class FString& CallFunc_GetStructureDataDebugName_OutDebugName, const class FString& CallFunc_GetStructureDataDebugName_OutDebugName_1, const class FString& CallFunc_GetStructureDataDebugName_OutDebugName_2, bool CallFunc_GetStructureData_IsValid, const struct FStructureData& CallFunc_GetStructureData_OutStructureData, bool CallFunc_IsValid_ReturnValue, class UClass* CallFunc_LoadClassAsset_Blocking_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsBP_Structure_Damage_Object, bool K2Node_ClassDynamicCast_bSuccess, class UBP_StructureDamageObject_C* CallFunc_GetDefaultObject_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& CallFunc_GetDisplayName_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, const class FString& CallFunc_Concat_StrStr_ReturnValue_10, const class FString& CallFunc_Concat_StrStr_ReturnValue_11);
	void InitializeState(bool* bSuccess);
	void PerformClientSideInteraction(class AController* Controller);
	void OnDamageReceived(float Damage, class AActor* Target, class AActor* Source, struct FGameplayTagContainer& EffectTags, struct FHitResult& HitResult, struct FTagValueContainer& TagValueContainer);
	void AddGameplayTagToStructure(const struct FGameplayTag& GameplayTag);
	void RemoveGameplayTagFromStructure(const struct FGameplayTag& GameplayTag);
	void OnPersistentDataRestored();
	void Multicast_CallClientOnHealthChangedEvent(struct FStructureHealthChangedContext& HealthChangedContext);
	void CallHealthChangedEvent(const struct FStructureHealthChangedContext& HealthChangedContext);
	void ReceiveDestroyed();
	void ExecuteUbergraph_BP_StructureBase(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, float K2Node_Event_Damage, class AActor* K2Node_Event_Target, class AActor* K2Node_Event_Source, const struct FGameplayTagContainer& K2Node_Event_EffectTags, const struct FHitResult& K2Node_Event_HitResult, const struct FTagValueContainer& K2Node_Event_TagValueContainer, class AController* K2Node_Event_Controller, class UBP_StructureDamageObject_C* CallFunc_GetDamageObject_DamageObject, const struct FGameplayTag& K2Node_Event_GameplayTag_1, bool CallFunc_HasAuthority_ReturnValue_1, const struct FGameplayTag& K2Node_Event_GameplayTag, bool CallFunc_HasAuthority_ReturnValue_2, bool CallFunc_HasAuthority_ReturnValue_3, bool CallFunc_GetShouldIgnoreIncomingDamage_ReturnValue, const struct FStructureHealthChangedContext& K2Node_CustomEvent_HealthChangedContext, class UStructureEventsObject* CallFunc_GetStructureEventsObject_ReturnValue, const struct FStructureHealthChangedContext& K2Node_Event_HealthChangedContext, class UStructureEventsObject* CallFunc_GetStructureEventsObject_ReturnValue_1, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, class UStructureEventsObject* CallFunc_GetStructureEventsObject_ReturnValue_2, bool CallFunc_HasAuthority_ReturnValue_4, double CallFunc_OnStructureDamageReceived_Damage_ImplicitCast);
};

}


