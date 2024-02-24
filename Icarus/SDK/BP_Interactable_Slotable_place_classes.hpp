#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xF0 - 0xE8)
// BlueprintGeneratedClass BP_Interactable_Slotable_place.BP_Interactable_Slotable_place_C
class UBP_Interactable_Slotable_place_C : public UInteractableBehaviour
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_Interactable_Slotable_place_C* GetDefaultObj();

	bool CanInteract(class AActor* Instigator, const struct FHitResult& HitResult, class AActor* CallFunc_GetOwner_ReturnValue, class AIcarusPlayerCharacter* K2Node_DynamicCast_AsIcarus_Player_Character, bool K2Node_DynamicCast_bSuccess, class UBP_Slotable_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_CanInteract_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_CanInteract_CanInteract, bool CallFunc_CanInteract_HitSlotVisualizer, bool CallFunc_CanInteract_PassedQuery, class UStaticMeshComponent* CallFunc_CanInteract_HitStaticMesh_Component);
	void Interact(class AActor* Instigator, struct FHitResult& HitResult);
	void ExecuteUbergraph_BP_Interactable_Slotable_place(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class UBP_Slotable_C* CallFunc_GetComponentByClass_ReturnValue, class AActor* K2Node_Event_Instigator, const struct FHitResult& K2Node_Event_HitResult, bool CallFunc_IsValid_ReturnValue, class AIcarusPlayerCharacter* K2Node_DynamicCast_AsIcarus_Player_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SlotableInteract_SuccessfullyInteracted);
};

}


