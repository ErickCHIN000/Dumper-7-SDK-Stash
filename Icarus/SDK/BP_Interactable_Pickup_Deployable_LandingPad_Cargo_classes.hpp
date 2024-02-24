#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x118 - 0x118)
// BlueprintGeneratedClass BP_Interactable_Pickup_Deployable_LandingPad_Cargo.BP_Interactable_Pickup_Deployable_LandingPad_Cargo_C
class UBP_Interactable_Pickup_Deployable_LandingPad_Cargo_C : public UBP_Interactable_Pickup_Deployable_C
{
public:

	static class UClass* StaticClass();
	static class UBP_Interactable_Pickup_Deployable_LandingPad_Cargo_C* GetDefaultObj();

	bool CanInteract(class AActor* Instigator, const struct FHitResult& HitResult, bool CallFunc_CanInteract_ReturnValue, class UCargoLandingPadComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasAssignedSlot_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void Pickup_Item(bool* PickedUp, const struct FVector& DeployPos, bool FoundAssigned, bool CallFunc_Deployable_Pickup_PickedUp, class UCargoLandingPadComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasAssignedSlot_ReturnValue);
};

}


