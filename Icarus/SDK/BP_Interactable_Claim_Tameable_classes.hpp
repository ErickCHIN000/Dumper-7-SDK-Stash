#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xF8 - 0xF0)
// BlueprintGeneratedClass BP_Interactable_Claim_Tameable.BP_Interactable_Claim_Tameable_C
class UBP_Interactable_Claim_Tameable_C : public UBP_Interactable_Enter_Seat_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xF0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_Interactable_Claim_Tameable_C* GetDefaultObj();

	bool CanInteract(class AActor* Instigator, const struct FHitResult& HitResult, bool CallFunc_CanInteract_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AIcarusMountCharacter* K2Node_DynamicCast_AsIcarus_Mount_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_PlayerCharacterID_ReturnValue);
	void Interact(class AActor* Instigator, struct FHitResult& HitResult);
	void ExecuteUbergraph_BP_Interactable_Claim_Tameable(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* K2Node_Event_Instigator, const struct FHitResult& K2Node_Event_HitResult, class ABP_Mount_Base_C* K2Node_DynamicCast_AsBP_Mount_Base, bool K2Node_DynamicCast_bSuccess, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess_1, class AController* CallFunc_GetController_ReturnValue, class UUMG_MountInterface_C* K2Node_DynamicCast_AsUMG_Mount_Interface, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsLocallyControlled_ReturnValue, class ACharacter* K2Node_DynamicCast_AsCharacter_1, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsServer_ReturnValue, class AIcarusPlayerState* K2Node_DynamicCast_AsIcarus_Player_State, bool K2Node_DynamicCast_bSuccess_4, class AActor* CallFunc_GetOwner_ReturnValue_1, class AIcarusMountCharacter* K2Node_DynamicCast_AsIcarus_Mount_Character, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_SetMountOwner_ReturnValue);
};

}


