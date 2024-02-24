#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x2F8 - 0x2C0)
// BlueprintGeneratedClass BP_GOAPInteractable_Base.BP_GOAPInteractable_Base_C
class ABP_GOAPInteractable_Base_C : public AIcarusActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBillboardComponent*                   Billboard;                                         // 0x2C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      Sphere;                                            // 0x2D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAIPerceptionStimuliSourceComponent*   AIPerceptionStimuliSource;                         // 0x2D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_GOAPInteractableComponent_C*       BP_GOAPInteractableComponent;                      // 0x2E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ABP_IcarusNPCGOAPCharacter_C*          GOAPCharRef;                                       // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_GOAPInteractable_Base_C* GetDefaultObj();

	bool ShouldOverrideTargetNeutrality(class AActor* TargetActor, bool* bIsTargetHostile);
	TArray<struct FCriticalHitLocation> GetCriticalHitBones();
	struct FAIRelationshipsRowHandle GetRelationshipData();
	int32 GetTargetAlertness();
	struct FVector GetTargetLocation();
	bool IsActorAlive();
	bool IsCriticalHitDisabled();
	bool IsHidden();
	void OnInteractionComplete(class AIcarusNPCGOAPController* Controller);
	void BndEvt__BP_GOAPInteractableComponent_K2Node_ComponentBoundEvent_1_GOAPInteractionSignature__DelegateSignature(class UIcarusGOAPInteractableComponent* Component);
	void OnMontageComplete(class UAnimMontage* Montage, bool bInterrupted);
	void ReceiveBeginPlay();
	void CheckDebugEnabled();
	void BndEvt__BP_GOAPInteractableComponent_K2Node_ComponentBoundEvent_0_GOAPAbortSignature__DelegateSignature(class UIcarusGOAPInteractableComponent* Component);
	void BndEvt__BP_GOAPInteractableComponent_K2Node_ComponentBoundEvent_3_GOAPInteractionCompleteSignature__DelegateSignature(class UIcarusGOAPInteractableComponent* Component);
	void ExecuteUbergraph_BP_GOAPInteractable_Base(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UIcarusGOAPInteractableComponent* K2Node_ComponentBoundEvent_Component_2, class UClass* CallFunc_GetObjectClass_ReturnValue, class AIcarusNPCGOAPCharacter* CallFunc_GetNPCCharacter_ReturnValue, TSoftClassPtr<class UIcarusGOAPAction> CallFunc_Conv_ClassToSoftClassReference_ReturnValue, class FText CallFunc_Conv_ObjectToText_ReturnValue, class ABP_IcarusNPCGOAPCharacter_C* K2Node_DynamicCast_AsBP_Icarus_NPCGOAPCharacter, bool K2Node_DynamicCast_bSuccess, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_CompleteCurrentAction_ReturnValue, class UAnimMontage* K2Node_CustomEvent_Montage, bool K2Node_CustomEvent_bInterrupted, bool CallFunc_Not_PreBool_ReturnValue, TSoftObjectPtr<class UAnimMontage> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AIcarusGameStateSurvival* K2Node_DynamicCast_AsIcarus_Game_State_Survival, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_EqualEqual_BoolBool_ReturnValue, class UIcarusGOAPInteractableComponent* K2Node_ComponentBoundEvent_Component_1, class UIcarusGOAPInteractableComponent* K2Node_ComponentBoundEvent_Component, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TSoftObjectPtr<class UAnimMontage> CallFunc_GetMontageForAction_ActionMontage, class FName CallFunc_GetMontageForAction_MontageSection, class FName CallFunc_GetMontageForAction_MontageNotify, bool CallFunc_GetMontageForAction_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, class UAnimMontage* K2Node_DynamicCast_AsAnim_Montage, bool K2Node_DynamicCast_bSuccess_2, class UAnimMontage* K2Node_DynamicCast_AsAnim_Montage_1, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_EqualEqual_SoftObjectReference_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class FText CallFunc_Conv_ObjectToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue);
};

}


