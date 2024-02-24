#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xF0 - 0xE8)
// BlueprintGeneratedClass BP_Interactable_MountBehaviour.BP_Interactable_MountBehaviour_C
class UBP_Interactable_MountBehaviour_C : public UInteractableBehaviour
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_Interactable_MountBehaviour_C* GetDefaultObj();

	bool CanInteract(class AActor* Instigator, const struct FHitResult& HitResult, class AIcarusPlayerCharacter* K2Node_DynamicCast_AsIcarus_Player_Character, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue, class AIcarusPlayerState* CallFunc_GetIcarusPlayerState_ReturnValue, class ABP_Mount_Base_C* K2Node_DynamicCast_AsBP_Mount_Base, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsMountOwner_ReturnValue);
	void Interact(class AActor* Instigator, struct FHitResult& HitResult);
	void ExecuteUbergraph_BP_Interactable_MountBehaviour(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_Mount_Base_C* K2Node_DynamicCast_AsBP_Mount_Base, bool K2Node_DynamicCast_bSuccess, class AActor* K2Node_Event_Instigator, const struct FHitResult& K2Node_Event_HitResult, bool CallFunc_IsValid_ReturnValue);
};

}


