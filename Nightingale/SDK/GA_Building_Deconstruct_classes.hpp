#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x19 (0x439 - 0x420)
// BlueprintGeneratedClass GA_Building_Deconstruct.GA_Building_Deconstruct_C
class UGA_Building_Deconstruct_C : public UBP_NWXGameplayAbility_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x420(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UObject*                               TargetObject;                                      // 0x428(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UObject*                               BuildingObject;                                    // 0x430(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	enum class EBuildingFeedback                 Feedback_Id;                                       // 0x438(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_Building_Deconstruct_C* GetDefaultObj();

	void PlayDeconstructionSound(enum class EStructureState StructureState, class UAkAudioEvent* AkAudioEventUncomplete, class UAkAudioEvent* AkAudioEventComplete, class UAkComponent* AkComponent, class APawn* ActivatingPawn, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, class UAkSwitchValue* Temp_object_Variable, class UAkSwitchValue* Temp_object_Variable_1, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, bool Temp_bool_Variable_1, bool CallFunc_IsValid_ReturnValue_1, class UAkAudioEvent* K2Node_Select_Default, int32 CallFunc_PostAssociatedAkEvent_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UScopedAkComponent* CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue, class UAkSwitchValue* K2Node_Select_Default_1, class ACharacter* CallFunc_GetActivatingCharacter_Character);
	void OnCopyCancelled(enum class EBuildingFeedback FeedbackId);
	void OnCopyConfirmed();
	void OnDeconstructCancelled(enum class EBuildingFeedback FeedbackId);
	void OnDeconstructConfirmed();
	void OnEndBuilding(enum class EBuildingFeedback FeedbackId);
	void OnMovementCancelled(class UObject* MovingStructure, enum class EBuildingFeedback FeedbackId);
	void OnMovementConfirmed(class UObject* MovingStructure);
	void OnPlacementCancelled(struct FStructureAssetReference& StructureReference, enum class EBuildingFeedback FeedbackId);
	void OnPlacementConfirmed(bool bRefire);
	void OnPlacePreviewStructure(struct FGameplayAbilityTargetDataHandle& TargetData, struct FStructureAssetReference& StructureReference, bool IgnoreStructureBudgets);
	void OnStartBuilding();
	void OnStartCopy(class UObject* Structure);
	void OnStartMovement(class UObject* Structure);
	void OnStartPlacing(struct FStructureAssetReference& StructureReference);
	void OnStructureSpawned(class UObject* SpawnedStructure);
	void ServerOnly_OnSpawnStructure(struct FGameplayAbilityTargetDataHandle& TargetData, struct FStructureAssetReference& StructureReference, bool IgnoreStructureBudgets);
	void K2_ActivateAbility();
	void OnStartDeconstruct(class UObject* Structure);
	void K2_OnEndAbility(bool bWasCancelled);
	void OnStructureDeconstructed();
	void ExecuteUbergraph_GA_Building_Deconstruct(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, enum class EBuildingFeedback K2Node_Event_FeedbackId_4, enum class EBuildingFeedback K2Node_Event_FeedbackId_3, enum class EBuildingFeedback K2Node_Event_FeedbackId_2, class UObject* K2Node_Event_MovingStructure_1, enum class EBuildingFeedback K2Node_Event_FeedbackId_1, class UObject* K2Node_Event_MovingStructure, const struct FStructureAssetReference& K2Node_Event_StructureReference_3, enum class EBuildingFeedback K2Node_Event_FeedbackId, bool K2Node_Event_bRefire, const struct FGameplayAbilityTargetDataHandle& K2Node_Event_TargetData_1, const struct FStructureAssetReference& K2Node_Event_StructureReference_2, bool K2Node_Event_IgnoreStructureBudgets_1, class UObject* K2Node_Event_Structure_2, class UObject* K2Node_Event_Structure_1, const struct FStructureAssetReference& K2Node_Event_StructureReference_1, class UObject* K2Node_Event_SpawnedStructure, const struct FGameplayAbilityTargetDataHandle& K2Node_Event_TargetData, const struct FStructureAssetReference& K2Node_Event_StructureReference, bool K2Node_Event_IgnoreStructureBudgets, bool CallFunc_K2_CommitAbility_ReturnValue, class AController* CallFunc_GetActivatingController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AController* CallFunc_GetActivatingController_ReturnValue_1, TScriptInterface<class IBuildingInterface> K2Node_DynamicCast_AsBuilding_Interface, bool K2Node_DynamicCast_bSuccess, class UObject* K2Node_Event_Structure, TScriptInterface<class IBuildingEventInterface> CallFunc_AddBuildingEventListener_Listener_CastInput, TScriptInterface<class IStructureStateInterface> K2Node_DynamicCast_AsStructure_State_Interface, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_1, enum class EStructureState CallFunc_GetSchematicState_ReturnValue, bool K2Node_Event_bWasCancelled, TScriptInterface<class IBuildingInterface> K2Node_DynamicCast_AsBuilding_Interface_1, bool K2Node_DynamicCast_bSuccess_2, TSubclassOf<class IInterface> Temp_class_Variable, TScriptInterface<class IBuildingInterface> K2Node_DynamicCast_AsBuilding_Interface_2, bool K2Node_DynamicCast_bSuccess_3, class UObject* CallFunc_FindFirstImplementor_ReturnValue);
};

}


