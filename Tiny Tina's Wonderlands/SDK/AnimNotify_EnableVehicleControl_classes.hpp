#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x38 - 0x38)
// BlueprintGeneratedClass AnimNotify_EnableVehicleControl.AnimNotify_EnableVehicleControl_C
class UAnimNotify_EnableVehicleControl_C : public UAnimNotify
{
public:

	static class UClass* StaticClass();
	static class UAnimNotify_EnableVehicleControl_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class AActor* CallFunc_GetOwner_ReturnValue, class AOakCharacter* K2Node_DynamicCast_AsOak_Character, bool K2Node_DynamicCast_bSuccess, class AOakVehicle* CallFunc_FindAssociatedOakVehicle_ReturnValue, class AActor* CallFunc_GetAttachParentActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ATurretSeatPawn* K2Node_DynamicCast_AsTurret_Seat_Pawn, bool K2Node_DynamicCast_bSuccess1);
};

}


