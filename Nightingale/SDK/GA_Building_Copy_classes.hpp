#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x21 (0x441 - 0x420)
// BlueprintGeneratedClass GA_Building_Copy.GA_Building_Copy_C
class UGA_Building_Copy_C : public UBP_NWXGameplayAbility_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x420(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UObject*                               TargetStructure;                                   // 0x428(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         IsMoveAction;                                      // 0x430(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2826[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               BuildingObject;                                    // 0x438(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	enum class EBuildingFeedback                 Feedback_Id;                                       // 0x440(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_Building_Copy_C* GetDefaultObj();

	void OnCopyCancelled(enum class EBuildingFeedback FeedbackId);
	void OnCopyConfirmed();
	void OnDeconstructCancelled(enum class EBuildingFeedback FeedbackId);
	void OnDeconstructConfirmed();
	void OnEndBuilding(enum class EBuildingFeedback FeedbackId);
	void OnMovementCancelled(class UObject* MovingStructure, enum class EBuildingFeedback FeedbackId);
	void OnMovementConfirmed(class UObject* MovingStructure);
	void OnPlacePreviewStructure(struct FGameplayAbilityTargetDataHandle& TargetData, struct FStructureAssetReference& StructureReference, bool IgnoreStructureBudgets);
	void OnStartBuilding();
	void OnStartDeconstruct(class UObject* Structure);
	void OnStartMovement(class UObject* Structure);
	void OnStartPlacing(struct FStructureAssetReference& StructureReference);
	void OnStructureDeconstructed();
	void OnStructureSpawned(class UObject* SpawnedStructure);
	void ServerOnly_OnSpawnStructure(struct FGameplayAbilityTargetDataHandle& TargetData, struct FStructureAssetReference& StructureReference, bool IgnoreStructureBudgets);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbility();
	void OnStartCopy(class UObject* Structure);
	void OnPlacementConfirmed(bool bRefire);
	void OnPlacementCancelled(struct FStructureAssetReference& StructureReference, enum class EBuildingFeedback FeedbackId);
	void ExecuteUbergraph_GA_Building_Copy(int32 EntryPoint, TSubclassOf<class IInterface> Temp_class_Variable, bool CallFunc_IsValid_ReturnValue, enum class EBuildingFeedback K2Node_Event_FeedbackId_4, enum class EBuildingFeedback K2Node_Event_FeedbackId_3, enum class EBuildingFeedback K2Node_Event_FeedbackId_2, class UObject* K2Node_Event_MovingStructure_1, enum class EBuildingFeedback K2Node_Event_FeedbackId_1, class UObject* K2Node_Event_MovingStructure, const struct FGameplayAbilityTargetDataHandle& K2Node_Event_TargetData_1, const struct FStructureAssetReference& K2Node_Event_StructureReference_3, bool K2Node_Event_IgnoreStructureBudgets_1, class UObject* K2Node_Event_Structure_2, class UObject* K2Node_Event_Structure_1, const struct FStructureAssetReference& K2Node_Event_StructureReference_2, class UObject* K2Node_Event_SpawnedStructure, const struct FGameplayAbilityTargetDataHandle& K2Node_Event_TargetData, const struct FStructureAssetReference& K2Node_Event_StructureReference_1, bool K2Node_Event_IgnoreStructureBudgets, bool K2Node_Event_bWasCancelled, TScriptInterface<class IBuildingInterface> K2Node_DynamicCast_AsBuilding_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IBuildingInterface> K2Node_DynamicCast_AsBuilding_Interface_1, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IBuildingInterface> K2Node_DynamicCast_AsBuilding_Interface_2, bool K2Node_DynamicCast_bSuccess_2, const class FString& CallFunc_GetFunctionName_ReturnValue, TScriptInterface<class IStructureDataProviderInterface> K2Node_DynamicCast_AsStructure_Data_Provider_Interface, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_GetStructureAssetReference_IsValid, const struct FStructureAssetReference& CallFunc_GetStructureAssetReference_OutStructureReference, bool CallFunc_K2_CommitAbility_ReturnValue, class AController* CallFunc_GetActivatingController_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AController* CallFunc_GetActivatingController_ReturnValue_1, class UObject* CallFunc_FindFirstImplementor_ReturnValue, TScriptInterface<class IBuildingInterface> K2Node_DynamicCast_AsBuilding_Interface_3, bool K2Node_DynamicCast_bSuccess_4, class UObject* K2Node_Event_Structure, TScriptInterface<class IBuildingEventInterface> CallFunc_AddBuildingEventListener_Listener_CastInput, bool K2Node_Event_bRefire, const struct FStructureAssetReference& K2Node_Event_StructureReference, enum class EBuildingFeedback K2Node_Event_FeedbackId, TScriptInterface<class IBuildingInterface> K2Node_DynamicCast_AsBuilding_Interface_4, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_IsValid_ReturnValue_2, TScriptInterface<class IBuildingEventInterface> CallFunc_RemoveBuildingEventListener_Listener_CastInput);
};

}


