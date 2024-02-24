#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x118 - 0x118)
// BlueprintGeneratedClass BP_Interactable_Pickup_Deployable_LandingPad.BP_Interactable_Pickup_Deployable_LandingPad_C
class UBP_Interactable_Pickup_Deployable_LandingPad_C : public UBP_Interactable_Pickup_Deployable_C
{
public:

	static class UClass* StaticClass();
	static class UBP_Interactable_Pickup_Deployable_LandingPad_C* GetDefaultObj();

	bool CanInteract(class AActor* Instigator, const struct FHitResult& HitResult, bool CallFunc_CanInteract_ReturnValue, class ULandingPadComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FPlayerCharacterID& CallFunc_GetPlayerID_ReturnValue, bool CallFunc_IsValid_PlayerCharacterID_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void Pickup_Item(bool* PickedUp, const struct FPlayerCharacterID& AssignedPlayer, bool CallFunc_IsValid_PlayerCharacterID_ReturnValue, int32 Temp_int_Array_Index_Variable, TArray<class AIcarusRocket*>& CallFunc_GetAllActorsOfClass_OutActors, class AIcarusRocket* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Max_ReturnValue, bool CallFunc_EqualEqual_PlayerCharacterIDPlayerCharacterID_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_Deployable_Pickup_PickedUp, class ULandingPadComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FPlayerCharacterID& CallFunc_GetPlayerID_ReturnValue);
};

}


