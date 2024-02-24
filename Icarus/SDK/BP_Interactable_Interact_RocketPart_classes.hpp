#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xF0 - 0xE8)
// BlueprintGeneratedClass BP_Interactable_Interact_RocketPart.BP_Interactable_Interact_RocketPart_C
class UBP_Interactable_Interact_RocketPart_C : public UInteractableBehaviour
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_Interactable_Interact_RocketPart_C* GetDefaultObj();

	bool CanInteract(class AActor* Instigator, const struct FHitResult& HitResult, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class ABP_PartBase_C* K2Node_DynamicCast_AsBP_Part_Base, bool K2Node_DynamicCast_bSuccess_1, class AIcarusPlayerControllerSurvival* CallFunc_GetAssignedPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void Interact(class AActor* Instigator, struct FHitResult& HitResult);
	void ExecuteUbergraph_BP_Interactable_Interact_RocketPart(int32 EntryPoint, class AActor* K2Node_Event_Instigator, const struct FHitResult& K2Node_Event_HitResult, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_PartBase_C* K2Node_DynamicCast_AsBP_Part_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, const struct FHitResult& CallFunc_WorldInteract_HitResult);
};

}


