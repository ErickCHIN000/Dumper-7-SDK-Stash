#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xF8 - 0xF0)
// BlueprintGeneratedClass BP_Interactable_Enter_Seat_Mount.BP_Interactable_Enter_Seat_Mount_C
class UBP_Interactable_Enter_Seat_Mount_C : public UBP_Interactable_Enter_Seat_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xF0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_Interactable_Enter_Seat_Mount_C* GetDefaultObj();

	bool CanInteract(class AActor* Instigator, const struct FHitResult& HitResult, bool CallFunc_CanInteract_ReturnValue, class AIcarusPlayerCharacter* K2Node_DynamicCast_AsIcarus_Player_Character, bool K2Node_DynamicCast_bSuccess, class AActor* Temp_wildcard_Variable, class AIcarusMountCharacter* K2Node_DynamicCast_AsIcarus_Mount_Character, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsBeingRidden_ReturnValue, bool CallFunc_IsValid_PlayerCharacterID_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class ASeatBase* CallFunc_GetSeatActor_Seat, bool CallFunc_GetSeatActor_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class ASeatBase* K2Node_DynamicCast_AsSeat_Base, bool K2Node_DynamicCast_bSuccess_2, class AActor* CallFunc_GetParentActor_ReturnValue, bool CallFunc_CanPlayerEnterSeat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	void Interact(class AActor* Instigator, struct FHitResult& HitResult);
	void ExecuteUbergraph_BP_Interactable_Enter_Seat_Mount(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, class AActor* K2Node_Event_Instigator, const struct FHitResult& K2Node_Event_HitResult, class AIcarusPlayerCharacter* K2Node_DynamicCast_AsIcarus_Player_Character, bool K2Node_DynamicCast_bSuccess, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess_1, class AActor* CallFunc_GetOwner_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class AIcarusMountCharacter* K2Node_DynamicCast_AsIcarus_Mount_Character, bool K2Node_DynamicCast_bSuccess_2, class AIcarusPlayerController* K2Node_DynamicCast_AsIcarus_Player_Controller, bool K2Node_DynamicCast_bSuccess_3, class ASeatBase* CallFunc_GetSeatActor_Seat, bool CallFunc_GetSeatActor_ReturnValue, bool CallFunc_GetIsThirdPerson_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EnterSeat_ReturnValue, bool CallFunc_IsLocalPlayerController_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class AIcarusMountCharacter* K2Node_DynamicCast_AsIcarus_Mount_Character_1, bool K2Node_DynamicCast_bSuccess_4);
};

}


