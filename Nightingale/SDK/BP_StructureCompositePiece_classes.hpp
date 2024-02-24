#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x19 (0x1F1 - 0x1D8)
// BlueprintGeneratedClass BP_StructureCompositePiece.BP_StructureCompositePiece_C
class UBP_StructureCompositePiece_C : public UStructureCompositePiece
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         LocalHasCompleted;                                 // 0x1E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ConstructionSFXReady;                              // 0x1E1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3BF9[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          PendingRefresh;                                    // 0x1E8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	enum class EStructureState                   CachedSchematicState;                              // 0x1F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_StructureCompositePiece_C* GetDefaultObj();

	void GetFirstSupportingObject(class UObject** OutFirstSupportingObject);
	void GetSupportingObjects(TArray<struct FStructureSupportObjectData>* OutSupportingStructures);
	bool IsSupported();
	void GetSupportedObjects(TArray<struct FStructureSupportObjectData>* OutSupportedStructures);
	bool IsSupportingOtherObjects();
	void TraceForGroundSupport(bool bIncludeBasePotential, bool* OutIsIntersectingGround, TArray<struct FHitResult>* OutResults, TArray<struct FHitResult>& Temp_struct_Variable, bool Temp_bool_Variable, class UObject* CallFunc_GetSupportInterfaceObject_ReturnValue, TScriptInterface<class ISupportInterface> K2Node_DynamicCast_AsSupport_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_TraceForGroundSupport_OutIsIntersectingGround, TArray<struct FHitResult>& CallFunc_TraceForGroundSupport_OutResults);
	bool TryDestroyIfUnsupported(class AActor* DeconstructionSource, class UObject* CallFunc_GetSupportInterfaceObject_ReturnValue, TScriptInterface<class ISupportInterface> K2Node_DynamicCast_AsSupport_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_TryDestroyIfUnsupported_ReturnValue);
	struct FStructurePlacementFeedback_Support UpdateSupport();
	class USphereComponent* GetAreaOfEffect();
	class UActorComponent* GetAudioComponent(class ABP_Structure_Composite_C* CallFunc_GetBPStructureComposite_AsBP_Structure_Composite, TScriptInterface<class ISchematicInfoInterface> CallFunc_GetAudioComponent_self_CastInput, class UActorComponent* CallFunc_GetAudioComponent_ReturnValue);
	void GetBuildRadiusInformation(float* OutRadius, struct FVector* OutOrigin);
	class FText GetDisplayNameText(bool CallFunc_GetUIData_IsValid, const struct FStructureUIData& CallFunc_GetUIData_OutUIData);
	class FString GetStructureID(const struct FCompositePieceGameplay& CallFunc_GetPieceData_OutPieceData, const class FString& CallFunc_Conv_IntToString_ReturnValue);
	TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*> GetStructureInteractions(TArray<class UStructureInteraction_PostConstructionInteraction_DataAsset*>& CallFunc_GetAllStructureInteractions_AvailableInteractions);
	TArray<struct FStructureResourceRequirements> GetTotalResourceRequirements(class ABP_Structure_Composite_C* CallFunc_GetBPStructureComposite_AsBP_Structure_Composite, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class ISchematicInfoInterface> CallFunc_GetTotalResourceRequirements_self_CastInput, TArray<struct FStructureResourceRequirements>& CallFunc_GetTotalResourceRequirements_ReturnValue);
	bool StructureHasAddedResources(class UBP_StructureResourcesObject_C* CallFunc_GetResourcesInfoObject_OutComponent, bool CallFunc_StructureHasAddedResources_HasAddedResources);
	void GetSupportMesh(class UStaticMeshComponent** SupportMesh);
	struct FTransform GetWorldTransform(class UBP_CompositePieceMeshInstance_C* CallFunc_GetBPMeshInstance_MeshInstance, const struct FTransform& CallFunc_GetRootTransform_ReturnValue);
	void GetFuelComponent(class UBP_StructureFuelComponent_C** FuelComponent);
	void GetInventoryContainerInterface(class AActor* RequestingActor, TScriptInterface<class IItemContainer>* ContainerInterface);
	void GetReachableNavTransform(class APawn* Pawn, bool* Success, struct FTransform* ReachableNavTransform, class UObject** Structure);
	void CompleteCompletableStructure(class ANWXAICharacter* AICharacter, bool* Complete);
	void GetRangedAttackLocation(class UObject* QueryingActor, enum class Enum_AttackLocationType AttackLocationType, struct FVector* Location, const struct FTransform& CallFunc_GetStructureWorldTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale);
	void GetFacingTarget(class UObject* QueryingActor, class AActor** FacingTarget);
	void GetSimulationStateManager(class ANWXSimStateManagerBase** Simulation_State_Manager);
	void ResolveSimulationRound(bool* bSuccess);
	void GetDamageEffect(class UClass** DamageEffect);
	void GetRedirectedTarget(bool* ShouldRedirect, class AActor** RedirectedTarget);
	void GetEventsObject(class UStructureEventsObject** EventObject, class UStructureEventsObject* CallFunc_GetStructureEventsObject_ReturnValue);
	void GetSnapPoints(TArray<struct FGridPoint>* SnapPoints, class UCompositePieceSnapObject* CallFunc_GetSnapComponent_SnapObject, TArray<struct FGridPoint>& CallFunc_GetGridPoints_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void GetSnapType(enum class ESnapType* SnapPointType, class UCompositePieceSnapObject* CallFunc_GetSnapComponent_SnapObject, enum class ESnapType CallFunc_GetSnapType_ReturnValue);
	void GetSnapComponent(class UCompositePieceSnapObject** SnapObject, class ABP_Structure_Composite_C* CallFunc_GetBPStructureComposite_AsBP_Structure_Composite, class UCompositePieceSnapObject* CallFunc_GetSnapObjectForPiece_ResourcesManager, bool CallFunc_IsValid_ReturnValue);
	void CanQueryInteractable(bool* Can_Query);
	void HoldInteractionAvailable(bool* bAvailable);
	void IsInteractionDisabled(class AController* Controller, const struct FInteractionData& InteractionData, bool* bIsDisabled, class FString* DisabledText);
	void DoesHaveResourceType(int32 HitId, enum class EResourceType DesiredResourceType, bool* bHasResourceType);
	void IsHarvestable(const struct FInteractionData& Interaction, bool* IsHarvestable);
	void GetInteractIcon(const struct FInteractionData& InteractionData, TSoftObjectPtr<class UTexture2D>* Icon);
	void GetInteractText(const struct FInteractionData& InteractionData, class FString* InteractText, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_CanInteractWithStructure_CanInteract, class FText CallFunc_CanInteractWithStructure_InteractionMessage, const class FString& CallFunc_Conv_TextToString_ReturnValue);
	void CanInteractWithActor(class AController* Controller, const struct FInteractionData& InteractionData, bool* InteractAvailable, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_CanInteractWithStructure_CanInteract, class FText CallFunc_CanInteractWithStructure_InteractionMessage);
	void ReturnMeshToHighlight(const struct FInteractionData& InteractionData, TArray<class UStaticMeshComponent*>* StaticMesh_to_Highlight, TArray<class USkeletalMeshComponent*>* SkeletalMesh_to_Highlight, bool* Hostile_, enum class EItemQuality* Quality, class UBP_CompositePieceMeshInstance_C* CallFunc_GetBPMeshInstance_MeshInstance, TArray<class UStaticMeshComponent*>& CallFunc_GetMeshes_OutMeshes);
	void InteractPressed(bool* Success);
	void InteractReleased(bool* Success);
	void InteractionRequiresClientOnly(class AController* Controller, bool* RequiresClientAction);
	void ExecuteDeconstructStructure(enum class EDeconstructionResourceReturn ResourceReturn, class AActor* DeconstructionSource, bool* Success, class AStructureComposite* OwningStructure, bool CallFunc_ExecuteDestroyStructure_Success, class UBP_DamageObject_CompositePiece_C* CallFunc_GetDamageObject_DamageObject, bool CallFunc_IsServer_ReturnValue);
	void ExecuteDestroyStructure(class AActor* DestructionSource, bool* Success, class UBP_DamageObject_CompositePiece_C* CallFunc_GetDamageObject_DamageObject, bool CallFunc_DestroyStructure_bSuccess);
	class UStaticMeshComponent* GetEntitySupportMesh();
	class UBoxComponent* GetEntityPlacementCollider();
	class UStructurePlacerObject* GetStructurePlacerObject(class UBP_PlacerObject_CompositePiece_C* CallFunc_GetDefaultObject_ReturnValue, class UStructurePlacerObject* CallFunc_GetStructurePlacerObject_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	bool SetPlacementFeedback(struct FGameplayAbilityTargetDataHandle& PlacementTargetData, class AController* Controller, struct FStructurePlacementFeedback* FeedbackData, class UStructurePlacerObject* PlacerObject, class UStructurePlacerObject* CallFunc_GetStructurePlacerObject_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_OwnerHasAuthority_ReturnValue, const struct FStructurePlacementFeedback& CallFunc_SetPlacementFeedback_ReturnValue);
	void IsValidPlacement(class AController* Controller, struct FGameplayAbilityTargetDataHandle& TargetData, struct FStructurePlacementFeedback* PlacementFeedbackData, class UStructurePlacerObject* CallFunc_GetStructurePlacerObject_ReturnValue, const struct FStructurePlacementFeedback& CallFunc_IsValidPlacement_ReturnValue);
	void GetPlacementTransform(class ACharacter* Character, float OptionalDeltaRotationZ, float OptionalDeltaHeightZ, struct FGameplayAbilityTargetDataHandle* TargetData, class UStructurePlacerObject* CallFunc_GetStructurePlacerObject_ReturnValue, const struct FGameplayAbilityTargetDataHandle& CallFunc_GetPlacementTransform_ReturnValue);
	bool FinalizePlacement(class AController* Controller, struct FSnapPlacementTargetData& SnapData, class FString* Message, class UStructurePlacerObject* CallFunc_GetStructurePlacerObject_ReturnValue, bool CallFunc_FinalizePlacement_ReturnValue);
	bool InitializePlacementState(class APawn* PlacingCharacter, enum class EStructureState CallFunc_SetStructureSchematicState_ReturnValue, class ABP_Structure_Composite_C* CallFunc_GetBPStructureComposite_AsBP_Structure_Composite, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IStructureStateInterface> CallFunc_SetStructureSchematicState_self_CastInput, enum class EStructureState CallFunc_SetStructureSchematicState_ReturnValue_1);
	class UObject* GetSupportInterfaceObject(class ABP_Structure_Composite_C* CallFunc_GetBPStructureComposite_AsBP_Structure_Composite, class UStructureSupportObject* CallFunc_GetSupportObjectForPiece_ReturnValue);
	void OnStateChanged(class UStructureCompositePiece* StructurePiece, enum class EStructureState State);
	class UStructureDamageObject* GetStructureDamageObject(class UBP_DamageObject_CompositePiece_C* CallFunc_GetDamageObject_DamageObject);
	void GetCompositePieceGameplay(struct FCompositePieceGameplay* GameplayData, const struct FCompositePieceGameplay& CallFunc_GetPieceData_OutPieceData);
	void GetCompositeStructure(class AStructureComposite** Composite, class ABP_Structure_Composite_C* CallFunc_GetBPStructureComposite_AsBP_Structure_Composite);
	void LocalPlayerExitedVolume(class AActor* Actor, const class FString& CallFunc_GetDisplayName_ReturnValue);
	void LocalPlayerEnteredVolume(class AActor* Actor, const class FString& CallFunc_GetDisplayName_ReturnValue);
	void UpdateMeshMaterialsBasedOnState(class UBP_CompositePieceMeshInstance_C* LMeshInstance, const struct FStructurePlacementFeedback& CallFunc_GetValidPlacementFeedbackData_ReturnValue, enum class EStructureState CallFunc_GetSchematicState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_GetFunctionName_ReturnValue, class UStructurePlacerObject* CallFunc_GetStructurePlacerObject_ReturnValue, TScriptInterface<class IStructureResourceRequirementsInterface> CallFunc_GetResourceRequirementsForCurrentState_ReturnValue, bool CallFunc_HasAnyAddedResources_ReturnValue, class UBP_CompositePieceMeshInstance_C* CallFunc_GetBPMeshInstance_MeshInstance, bool CallFunc_IsValid_ReturnValue);
	void UpdateMeshOnStateChange(class UCompositePieceInstance* CallFunc_GetMeshInstance_ReturnValue, enum class EStructureState CallFunc_GetSchematicState_ReturnValue, enum class EStructureState CallFunc_GetSchematicState_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UBP_CompositePieceMeshInstance_C* CallFunc_GetBPMeshInstance_MeshInstance, class UBP_CompositePieceMeshInstance_C* CallFunc_GetBPMeshInstance_MeshInstance_1, const class FString& CallFunc_GetFunctionName_ReturnValue, class UBP_CompositePieceMeshInstance_C* CallFunc_GetBPMeshInstance_MeshInstance_2, bool CallFunc_IsValid_ReturnValue);
	void GetDamageObject(class UBP_DamageObject_CompositePiece_C** DamageObject, class UBP_DamageObject_CompositePiece_C* CallFunc_GetComponentOfClass_OutComponent);
	void RefreshOverlappingPawns(const class FString& CurrentFunctionName, bool OverlappingNPCOrCharacter, class AActor* LCurrentHitActor, class UPrimitiveComponent* LCurrentMesh, const struct FTimerHandle& CallFunc_RefreshIsStructureCompletionBlocked_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_OwnerHasAuthority_ReturnValue);
	void PlayDestructionEffects(class UNiagaraComponent* System, class UNiagaraSystem* EffectTemplate, class UBP_CompositePieceMeshInstance_C* Instance, const struct FVector& StructureBounds, class AStructureComposite* CallFunc_GetCompositeStructure_Composite, enum class EStructureState CallFunc_GetSchematicState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FStructureDestructionData& CallFunc_MakeStructureDestructionData_DestructionData, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_OwnerHasAuthority_ReturnValue);
	void On_Owner_Composite_State_Changed(enum class EStructureState StructureState, class UStructureStateObject* CallFunc_GetStateObject_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class EStructureState CallFunc_SetStructureSchematicState_ReturnValue, bool CallFunc_CheckStateTransition_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void GetResourcesInfoObject(class UBP_StructureResourcesObject_C** OutComponent, class UBP_StructureResourcesObject_C* CallFunc_GetComponentOfClass_OutComponent);
	void ChangeMaterialBasedOnHealth(double CurrentHealth, double MaxHealth, double CurrentHealthPercentage, enum class EStructureState CallFunc_GetSchematicState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, float CallFunc_GetCurrentHealth_ReturnValue, float CallFunc_GetMaxHealth_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, class UBP_CompositePieceMeshInstance_C* CallFunc_GetBPMeshInstance_MeshInstance, double K2Node_VariableSet_CurrentHealth_ImplicitCast, double K2Node_VariableSet_MaxHealth_ImplicitCast);
	void ToggleMeshVisibility(bool IsVisible, class UBP_CompositePieceMeshInstance_C* CallFunc_GetBPMeshInstance_MeshInstance, bool CallFunc_IsValid_ReturnValue);
	void OnCompleteState(bool* Success, class AStructureComposite* CallFunc_GetOwnerStructureComposite_ReturnValue, const struct FCompositePieceGameplay& CallFunc_GetPieceData_OutPieceData, class ABP_StructureComposite_Base_C* K2Node_DynamicCast_AsBP_Structure_Composite_Base, bool K2Node_DynamicCast_bSuccess);
	void OnConstructionState(bool* Success, bool CallFunc_IsServer_ReturnValue, bool CallFunc_OwnerHasAuthority_ReturnValue);
	void OnConfirmedState(bool* Success);
	void OnInitState(bool* Success);
	void OnSchematicPlacedState(bool* Success);
	void GetBPMeshInstance(class UBP_CompositePieceMeshInstance_C** MeshInstance, const class FString& CallFunc_GetFunctionName_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue_1, class UCompositePieceInstance* CallFunc_GetMeshInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UBP_CompositePieceMeshInstance_C* K2Node_DynamicCast_AsBP_Composite_Piece_Mesh_Instance, bool K2Node_DynamicCast_bSuccess);
	void GetBPStructureComposite(class ABP_Structure_Composite_C** AsBP_Structure_Composite, class AStructureComposite* CallFunc_GetOwnerStructureComposite_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_Structure_Composite_C* K2Node_DynamicCast_AsBP_Structure_Composite, bool K2Node_DynamicCast_bSuccess);
	void OnPlacementState(bool* Success);
	void RefreshState(bool LSuccess, enum class EStructureState CallFunc_GetSchematicState_ReturnValue, bool CallFunc_OnCompleteState_Success, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_OnConstructionState_Success, bool CallFunc_OnConfirmedState_Success, bool CallFunc_OnInitState_Success, bool CallFunc_OnSchematicPlacedState_Success, bool CallFunc_OnPlacementState_Success);
	void BindTo_SupportingObjectsChangedDelegate(FDelegateProperty_& SupportingObjectsChangedDelegate);
	void InvalidateSupportingObjectsCache();
	void OnOwnerInitialized();
	void OnOwnerSnapped();
	void OnPlacementBlockedBeforeSupport();
	void RebuildSupportingObjectsCache();
	void TrackSupportedObject(struct FStructureSupportObjectData& SupportedObject);
	void UnbindFrom_SupportingObjectsChangedDelegate(FDelegateProperty_& SupportingObjectsChangedDelegate);
	void UntrackSupportedObject(struct FStructureSupportObjectData& SupportedObject);
	void OnAnyAttributeChanged(struct FGameplayAttribute& Attribute);
	void OnCharacterOverWeight();
	void OnCharacterUnderWeight();
	void OnCharacterWeightChanged(float Delta);
	void OnCharacterWeightMaxChanged(float Delta);
	void OnCraftBuildPointsChanged(float Delta);
	void OnCraftIntegrityChanged(float Delta);
	void OnCraftQualityChanged(float Delta);
	void OnEstateScoreChanged(float Delta);
	void OnFedChanged(float Delta);
	void OnFedMaxChanged(float Delta);
	void OnFuelChanged(float Delta);
	void OnHealthMaxChanged(float Delta);
	void OnHopeChanged(float Delta);
	void OnHopeMaxChanged(float Delta);
	void OnHopeMinChanged(float Delta);
	void OnLoadoutLevelChanged(float Delta);
	void OnMaxSpeedBonusChanged(float Delta);
	void OnMaxSpeedRunChanged(float Delta);
	void OnMaxSpeedWalkChanged(float Delta);
	void OnMaxSpeedWalkFastChanged(float Delta);
	void OnQuestScoreChanged(float Delta);
	void OnRestedChanged(float Delta);
	void OnRestedMaxChanged(float Delta);
	void OnStaminaChanged(float Delta);
	void OnStaminaDepleted();
	void OnStaminaMaxChanged(float Delta);
	void OnReceiveCarriedResources(class AController* Controller);
	void PerformClientSideInteraction(class AController* Controller);
	void OnBuildProgressChanged(float Delta);
	void OnHealthChanged(float Delta);
	void OnReachedMinSchematicTimeout();
	void CallHealthChangedEvent(const struct FStructureHealthChangedContext& HealthChangedContext);
	void K2_OnDestroyed();
	void K2_OnBeginPlay();
	void K2_OnDamageReceived(float Damage, class AActor* Target, class AActor* Source, struct FGameplayTagContainer& EffectTags, struct FHitResult& HitResult, struct FTagValueContainer& TagValueContainer);
	void K2_OnRepCompositePieceData();
	void AddGameplayTagToStructure(const struct FGameplayTag& GameplayTag);
	void RemoveGameplayTagFromStructure(const struct FGameplayTag& GameplayTag);
	void ExecuteUbergraph_BP_StructureCompositePiece(int32 EntryPoint, const struct FCompositePieceGameplay& CallFunc_GetPieceData_OutPieceData, FDelegateProperty_ K2Node_Event_SupportingObjectsChangedDelegate_1, const struct FStructureSupportObjectData& K2Node_Event_SupportedObject_1, FDelegateProperty_ K2Node_Event_SupportingObjectsChangedDelegate, const struct FStructureSupportObjectData& K2Node_Event_SupportedObject, const struct FGameplayAttribute& K2Node_Event_Attribute, float K2Node_Event_Delta_24, float K2Node_Event_Delta_23, float K2Node_Event_Delta_22, float K2Node_Event_Delta_21, float K2Node_Event_Delta_20, float K2Node_Event_Delta_19, float K2Node_Event_Delta_18, float K2Node_Event_Delta_17, float K2Node_Event_Delta_16, float K2Node_Event_Delta_15, float K2Node_Event_Delta_14, float K2Node_Event_Delta_13, float K2Node_Event_Delta_12, float K2Node_Event_Delta_11, float K2Node_Event_Delta_10, float K2Node_Event_Delta_9, float K2Node_Event_Delta_8, float K2Node_Event_Delta_7, float K2Node_Event_Delta_6, float K2Node_Event_Delta_5, float K2Node_Event_Delta_4, float K2Node_Event_Delta_3, float K2Node_Event_Delta_2, class AController* K2Node_Event_Controller_1, class AController* K2Node_Event_Controller, float K2Node_Event_Delta_1, float K2Node_Event_Delta, const struct FStructureHealthChangedContext& K2Node_Event_HealthChangedContext, class ABP_Structure_Composite_C* CallFunc_GetBPStructureComposite_AsBP_Structure_Composite, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_Event_Damage, class AActor* K2Node_Event_Target, class AActor* K2Node_Event_Source, const struct FGameplayTagContainer& K2Node_Event_EffectTags, const struct FHitResult& K2Node_Event_HitResult, const struct FTagValueContainer& K2Node_Event_TagValueContainer, class UBP_DamageObject_CompositePiece_C* CallFunc_GetDamageObject_DamageObject, class ABP_Structure_Composite_C* CallFunc_GetBPStructureComposite_AsBP_Structure_Composite_1, class ABP_Structure_Composite_C* CallFunc_GetBPStructureComposite_AsBP_Structure_Composite_2, const struct FGameplayTag& K2Node_Event_GameplayTag_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_OwnerHasAuthority_ReturnValue, bool CallFunc_IsServer_ReturnValue, const struct FGameplayTag& K2Node_Event_GameplayTag, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_OwnerHasAuthority_ReturnValue_1, class AStructureComposite* CallFunc_GetCompositeStructure_Composite, class ABP_Structure_Composite_C* CallFunc_GetBPStructureComposite_AsBP_Structure_Composite_3, TScriptInterface<class ISchematicInfoInterface> K2Node_DynamicCast_AsSchematic_Info_Interface, bool K2Node_DynamicCast_bSuccess, class UActorComponent* CallFunc_GetAudioComponent_ReturnValue, bool CallFunc_GetIsVisible_Client_IsVisible, enum class EStructureState CallFunc_GetSchematicState_ReturnValue, enum class EStructureState CallFunc_SetStructureSchematicState_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UActorComponent* Temp_object_Variable, bool CallFunc_OwnerHasAuthority_ReturnValue_2, class UBP_Structure_Audio_Component_C* K2Node_DynamicCast_AsBP_Structure_Audio_Component, bool K2Node_DynamicCast_bSuccess_1, class ABP_Structure_Composite_C* CallFunc_GetBPStructureComposite_AsBP_Structure_Composite_4, bool CallFunc_IsValid_ReturnValue_1, class UStructureEventsObject* CallFunc_GetStructureEventsObject_ReturnValue, bool CallFunc_OwnerHasAuthority_ReturnValue_3, class UStructureEventsObject* CallFunc_GetStructureEventsObject_ReturnValue_1, bool CallFunc_OwnerHasAuthority_ReturnValue_4, double CallFunc_OnStructureDamageReceived_Damage_ImplicitCast);
};

}


