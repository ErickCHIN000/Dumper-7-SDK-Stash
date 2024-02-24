#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x119 (0x539 - 0x420)
// BlueprintGeneratedClass GA_Building_Placement.GA_Building_Placement_C
class UGA_Building_Placement_C : public UBP_NWXGameplayAbility_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x420(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AController*                           PlayerController;                                  // 0x428(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 PlayerPawn;                                        // 0x430(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                PlacementTargetActorClass;                         // 0x438(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   PlacementObjectRowHandle;                          // 0x440(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGuid                                 PlacementAbilityId;                                // 0x450(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          DefaultMontageAction;                              // 0x460(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FSoftObjectPath                       PlacementObjectPath;                               // 0x468(0x20)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_2E31[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStructureAssetReference              PlacementStructureRef;                             // 0x490(0x80)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UObject*                               BuildingObject;                                    // 0x510(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayAbilityPayloadHandle         DummyPayload;                                      // 0x518(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class EBuildingFeedback                 Feedback_Id;                                       // 0x538(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_Building_Placement_C* GetDefaultObj();

	void PlayAnimations(class ABP_Character_C* LBPCharacter, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class AEquippableItem* Temp_object_Variable, class USkeletalMeshComponent* CallFunc_GetSK_HMM_FP_ReturnValue, const struct FItemDataReference& CallFunc_GetItemID_OutItemReference, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class ILoadoutReadInterface> K2Node_DynamicCast_AsLoadout_Read_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetMontageSetForAction_bFoundMontageSet, const struct FAbilityMontages& CallFunc_GetMontageSetForAction_MontageSetForAction, class AEquippableItem* CallFunc_GetEquippedItem_ReturnValue, class UAnimMontage* CallFunc_GetRandomMontagesFromSet_RandomFirstPersonItem, class UAnimMontage* CallFunc_GetRandomMontagesFromSet_RandomFirstPersonCharacter, class UAnimMontage* CallFunc_GetRandomMontagesFromSet_RandomThirdPersonItem, class UAnimMontage* CallFunc_GetRandomMontagesFromSet_RandomThirdPersonCharacter, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character, bool K2Node_DynamicCast_bSuccess_1);
	void CancelPlacementTelemetryEvent();
	void StartPlacementTelemetryEvent();
	void Cancelled_CC9EF8D346CAB6973D1771B1A2F4A076(struct FGameplayAbilityTargetDataHandle& Data);
	void ValidData_CC9EF8D346CAB6973D1771B1A2F4A076(struct FGameplayAbilityTargetDataHandle& Data);
	void EventReceived_0F50C93E41D09DB84EE4FD8E0BAA851E(const struct FGameplayEventData& Payload);
	void OnNotifyEnd_992E08CB452FAED7A5C641ABAA84AA2F(class FName NotifyName);
	void OnNotifyBegin_992E08CB452FAED7A5C641ABAA84AA2F(class FName NotifyName);
	void OnInterrupted_992E08CB452FAED7A5C641ABAA84AA2F(class FName NotifyName);
	void OnBlendOut_992E08CB452FAED7A5C641ABAA84AA2F(class FName NotifyName);
	void OnCompleted_992E08CB452FAED7A5C641ABAA84AA2F(class FName NotifyName);
	void OnCopyCancelled(enum class EBuildingFeedback FeedbackId);
	void OnCopyConfirmed();
	void OnDeconstructCancelled(enum class EBuildingFeedback FeedbackId);
	void OnDeconstructConfirmed();
	void OnEndBuilding(enum class EBuildingFeedback FeedbackId);
	void OnMovementConfirmed(class UObject* MovingStructure);
	void OnPlacementConfirmed(bool bRefire);
	void OnPlacePreviewStructure(struct FGameplayAbilityTargetDataHandle& TargetData, struct FStructureAssetReference& StructureReference, bool IgnoreStructureBudgets);
	void OnStartBuilding();
	void OnStartCopy(class UObject* Structure);
	void OnStartDeconstruct(class UObject* Structure);
	void OnStartMovement(class UObject* Structure);
	void OnStructureDeconstructed();
	void ServerOnly_OnSpawnStructure(struct FGameplayAbilityTargetDataHandle& TargetData, struct FStructureAssetReference& StructureReference, bool IgnoreStructureBudgets);
	void K2_OnEndAbility(bool bWasCancelled);
	void PlayMontage(class USkeletalMeshComponent* SkeletalMesh, class UAnimMontage* Montage);
	void K2_ActivateAbility();
	void OnStructureSpawned(class UObject* SpawnedStructure);
	void OnStartPlacing(struct FStructureAssetReference& StructureReference);
	void OnPlacementCancelled(struct FStructureAssetReference& StructureReference, enum class EBuildingFeedback FeedbackId);
	void OnMovementCancelled(class UObject* MovingStructure, enum class EBuildingFeedback FeedbackId);
	void ExecuteUbergraph_GA_Building_Placement(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FGameplayEventData& K2Node_CustomEvent_Payload, const struct FGameplayEventData& Temp_struct_Variable, class UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName K2Node_CustomEvent_NotifyName_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName Temp_name_Variable, TSubclassOf<class IInterface> Temp_class_Variable, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue_1, bool Temp_bool_Variable_1, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_Data_1, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_1, enum class EBuildingFeedback K2Node_Event_FeedbackId_4, enum class EBuildingFeedback K2Node_Event_FeedbackId_3, enum class EBuildingFeedback K2Node_Event_FeedbackId_2, class UObject* K2Node_Event_MovingStructure_1, bool K2Node_Event_bRefire, const struct FGameplayAbilityTargetDataHandle& K2Node_Event_TargetData_1, const struct FStructureAssetReference& K2Node_Event_StructureReference_3, bool K2Node_Event_IgnoreStructureBudgets_1, class UObject* K2Node_Event_Structure_2, class UObject* K2Node_Event_Structure_1, class UObject* K2Node_Event_Structure, const struct FGameplayAbilityTargetDataHandle& K2Node_Event_TargetData, const struct FStructureAssetReference& K2Node_Event_StructureReference_2, bool K2Node_Event_IgnoreStructureBudgets, bool CallFunc_K2_CommitAbility_ReturnValue, const struct FGameplayAbilityTargetingLocationInfo& CallFunc_MakeTargetLocationInfoFromOwnerActor_ReturnValue, bool K2Node_Event_bWasCancelled, class AController* CallFunc_GetActivatingController_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class ACharacter* CallFunc_GetActivatingCharacter_Character, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class UAbilityTask_WaitTargetData* CallFunc_WaitTargetData_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class AGameplayAbilityTargetActor* CallFunc_BeginSpawningActor_SpawnedActor, bool CallFunc_BeginSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, class USkeletalMeshComponent* K2Node_CustomEvent_SkeletalMesh, class UAnimMontage* K2Node_CustomEvent_Montage, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, class UObject* CallFunc_FindFirstImplementor_ReturnValue, TScriptInterface<class IBuildingInterface> K2Node_DynamicCast_AsBuilding_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IBuildingEventInterface> CallFunc_AddBuildingEventListener_Listener_CastInput, TScriptInterface<class IBuildingInterface> K2Node_DynamicCast_AsBuilding_Interface_1, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IBuildingEventInterface> CallFunc_RemoveBuildingEventListener_Listener_CastInput, const struct FSoftObjectPath& CallFunc_GetAssetPathFromStructureAssetReference_ReturnValue, const struct FGameplayAbilityPayloadHandle& CallFunc_AbilityPayloadFromSoftObjectPath_ReturnValue, TScriptInterface<class IBuildingInterface> K2Node_DynamicCast_AsBuilding_Interface_2, bool K2Node_DynamicCast_bSuccess_2, const struct FGameplayAbilityPayloadHandle& CallFunc_AppendPayloadHandle_ReturnValue, bool CallFunc_IsMoving_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, TScriptInterface<class IBuildingInterface> K2Node_DynamicCast_AsBuilding_Interface_3, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsCopying_ReturnValue, TScriptInterface<class IBuildingInterface> K2Node_DynamicCast_AsBuilding_Interface_4, bool K2Node_DynamicCast_bSuccess_4, TScriptInterface<class IBuildingInterface> K2Node_DynamicCast_AsBuilding_Interface_5, bool K2Node_DynamicCast_bSuccess_5, TScriptInterface<class IBuildingInterface> K2Node_DynamicCast_AsBuilding_Interface_6, bool K2Node_DynamicCast_bSuccess_6, class UObject* K2Node_Event_SpawnedStructure, const struct FStructureAssetReference& K2Node_Event_StructureReference_1, bool CallFunc_K2_CommitAbility_ReturnValue_1, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable_1, const struct FStructureAssetReference& K2Node_Event_StructureReference, enum class EBuildingFeedback K2Node_Event_FeedbackId_1, TScriptInterface<class IBuildingInterface> K2Node_DynamicCast_AsBuilding_Interface_7, bool K2Node_DynamicCast_bSuccess_7, class UObject* K2Node_Event_MovingStructure, enum class EBuildingFeedback K2Node_Event_FeedbackId, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_Data);
};

}


