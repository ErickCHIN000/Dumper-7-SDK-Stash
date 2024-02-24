#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA (0x370 - 0x366)
// BlueprintGeneratedClass BP_Seat_Chair.BP_Seat_Chair_C
class ABP_Seat_Chair_C : public ABP_SeatBase_C
{
public:
	uint8                                        Pad_6147[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x368(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_Seat_Chair_C* GetDefaultObj();

	bool FindExit(struct FVector* OutExitLocation, struct FRotator* OutExitRotation, const struct FVector& CallFunc_FindExit_OutExitLocation, const struct FRotator& CallFunc_FindExit_OutExitRotation, bool CallFunc_FindExit_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_ChairBase_C* K2Node_DynamicCast_AsBP_Chair_Base, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_FindExitSpot_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue);
	void ReceiveBeginPlay();
	void OwningBedDestroyed(class AActor* DestroyedActor);
	void ExecuteUbergraph_BP_Seat_Chair(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* K2Node_CustomEvent_DestroyedActor);
};

}


