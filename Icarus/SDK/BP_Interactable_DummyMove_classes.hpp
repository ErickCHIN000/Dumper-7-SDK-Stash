#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xF0 - 0xE8)
// BlueprintGeneratedClass BP_Interactable_DummyMove.BP_Interactable_DummyMove_C
class UBP_Interactable_DummyMove_C : public UInteractableBehaviour
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_Interactable_DummyMove_C* GetDefaultObj();

	class FText GetInteractionText(bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_Deployable_AITargetDummy_C* K2Node_DynamicCast_AsBP_Deployable_AITarget_Dummy, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetIsMoving_IsMoving, class FText K2Node_Select_Default);
	bool CanInteract(class AActor* Instigator, const struct FHitResult& HitResult, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_Deployable_AITargetDummy_C* K2Node_DynamicCast_AsBP_Deployable_AITarget_Dummy, bool K2Node_DynamicCast_bSuccess);
	void Interact(class AActor* Instigator, struct FHitResult& HitResult);
	void ExecuteUbergraph_BP_Interactable_DummyMove(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_Deployable_AITargetDummy_C* K2Node_DynamicCast_AsBP_Deployable_AITarget_Dummy, bool K2Node_DynamicCast_bSuccess, class AActor* K2Node_Event_Instigator, const struct FHitResult& K2Node_Event_HitResult);
};

}


