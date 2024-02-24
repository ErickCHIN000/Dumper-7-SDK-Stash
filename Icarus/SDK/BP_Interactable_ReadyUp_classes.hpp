#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xF0 - 0xE8)
// BlueprintGeneratedClass BP_Interactable_ReadyUp.BP_Interactable_ReadyUp_C
class UBP_Interactable_ReadyUp_C : public UInteractableBehaviour
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_Interactable_ReadyUp_C* GetDefaultObj();

	void Interact(class AActor* Instigator, struct FHitResult& HitResult);
	void ExecuteUbergraph_BP_Interactable_ReadyUp(int32 EntryPoint, class AActor* K2Node_Event_Instigator, const struct FHitResult& K2Node_Event_HitResult, class AIcarusCharacter* K2Node_DynamicCast_AsIcarus_Character, bool K2Node_DynamicCast_bSuccess, class AController* CallFunc_GetController_ReturnValue, class ABP_IcarusPlayerControllerSpace_C* K2Node_DynamicCast_AsBP_Icarus_Player_Controller_Space, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_ShowMainMenu_Success);
};

}


