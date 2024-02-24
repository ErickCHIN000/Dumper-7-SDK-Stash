#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x21 (0x441 - 0x420)
// BlueprintGeneratedClass GA_Building_Move.GA_Building_Move_C
class UGA_Building_Move_C : public UBP_NWXGameplayAbility_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x420(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UObject*                               OriginalStructure;                                 // 0x428(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UObject*                               MovedStructure;                                    // 0x430(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UObject*                               BuildingObject;                                    // 0x438(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	enum class EBuildingFeedback                 Feedback_Id;                                       // 0x440(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_Building_Move_C* GetDefaultObj();

	void OnCopyCancelled(enum class EBuildingFeedback FeedbackId);
	void OnCopyConfirmed();
	void OnDeconstructCancelled(enum class EBuildingFeedback FeedbackId);
	void OnDeconstructConfirmed();
	void OnEndBuilding(enum class EBuildingFeedback FeedbackId);
	void OnMovementConfirmed(class UObject* MovingStructure);
	void OnPlacePreviewStructure(struct FGameplayAbilityTargetDataHandle& TargetData, struct FStructureAssetReference& StructureReference, bool IgnoreStructureBudgets);
	void OnStartBuilding();
	void OnStartCopy(class UObject* Structure);
	void OnStartDeconstruct(class UObject* Structure);
	void OnStartPlacing(struct FStructureAssetReference& StructureReference);
	void OnStructureDeconstructed();
	void ServerOnly_OnSpawnStructure(struct FGameplayAbilityTargetDataHandle& TargetData, struct FStructureAssetReference& StructureReference, bool IgnoreStructureBudgets);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void OnPlacementConfirmed(bool bRefire);
	void OnPlacementCancelled(struct FStructureAssetReference& StructureReference, enum class EBuildingFeedback FeedbackId);
	void OnStructureSpawned(class UObject* SpawnedStructure);
	void OnStartMovement(class UObject* Structure);
	void OnMovementCancelled(class UObject* MovingStructure, enum class EBuildingFeedback FeedbackId);
	void ExecuteUbergraph_GA_Building_Move(int32 EntryPoint, TSubclassOf<class IInterface> Temp_class_Variable, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, enum class EBuildingFeedback K2Node_Event_FeedbackId_4, enum class EBuildingFeedback K2Node_Event_FeedbackId_3, enum class EBuildingFeedback K2Node_Event_FeedbackId_2, class UObject* K2Node_Event_MovingStructure_1, const struct FGameplayAbilityTargetDataHandle& K2Node_Event_TargetData_1, const struct FStructureAssetReference& K2Node_Event_StructureReference_3, bool K2Node_Event_IgnoreStructureBudgets_1, class UObject* K2Node_Event_Structure_2, class UObject* K2Node_Event_Structure_1, const struct FStructureAssetReference& K2Node_Event_StructureReference_2, const struct FGameplayAbilityTargetDataHandle& K2Node_Event_TargetData, const struct FStructureAssetReference& K2Node_Event_StructureReference_1, bool K2Node_Event_IgnoreStructureBudgets, bool K2Node_Event_bWasCancelled, TScriptInterface<class IStructureDataProviderInterface> K2Node_DynamicCast_AsStructure_Data_Provider_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetStructureAssetReference_IsValid, const struct FStructureAssetReference& CallFunc_GetStructureAssetReference_OutStructureReference, TScriptInterface<class IBuildingInterface> K2Node_DynamicCast_AsBuilding_Interface, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IBuildingInterface> K2Node_DynamicCast_AsBuilding_Interface_1, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IBuildingInterface> K2Node_DynamicCast_AsBuilding_Interface_2, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_K2_CommitAbility_ReturnValue, class AController* CallFunc_GetActivatingController_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AController* CallFunc_GetActivatingController_ReturnValue_1, class UObject* CallFunc_FindFirstImplementor_ReturnValue, TScriptInterface<class IBuildingInterface> K2Node_DynamicCast_AsBuilding_Interface_3, bool K2Node_DynamicCast_bSuccess_4, bool K2Node_Event_bRefire, TScriptInterface<class IBuildingEventInterface> CallFunc_AddBuildingEventListener_Listener_CastInput, const struct FStructureAssetReference& K2Node_Event_StructureReference, enum class EBuildingFeedback K2Node_Event_FeedbackId_1, class UObject* K2Node_Event_SpawnedStructure, class UObject* K2Node_Event_Structure, class UObject* K2Node_Event_MovingStructure, enum class EBuildingFeedback K2Node_Event_FeedbackId, TScriptInterface<class IBuildingInterface> K2Node_DynamicCast_AsBuilding_Interface_4, bool K2Node_DynamicCast_bSuccess_5, TScriptInterface<class IBuildingEventInterface> CallFunc_RemoveBuildingEventListener_Listener_CastInput);
};

}


