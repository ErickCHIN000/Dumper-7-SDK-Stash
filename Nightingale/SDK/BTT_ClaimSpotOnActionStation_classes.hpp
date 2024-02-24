#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x110 - 0xA8)
// BlueprintGeneratedClass BTT_ClaimSpotOnActionStation.BTT_ClaimSpotOnActionStation_C
class UBTT_ClaimSpotOnActionStation_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ACharacter*                            Char;                                              // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UNWXActionStationComponent*            ActionStation;                                     // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FBlackboardKeySelector                Target;                                            // 0xC0(0x28)(Edit, BlueprintVisible)
	struct FBlackboardKeySelector                TargetLocation;                                    // 0xE8(0x28)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UBTT_ClaimSpotOnActionStation_C* GetDefaultObj();

	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTT_ClaimSpotOnActionStation(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasActionStationUserForCharacter_ReturnValue, class UObject* CallFunc_GetBlackboardValueAsObject_ReturnValue, class AActor* K2Node_DynamicCast_AsActor, bool K2Node_DynamicCast_bSuccess_1, class UNWXActionStationComponent* CallFunc_GetComponentByClass_ReturnValue, const struct FTransform& CallFunc_TryAndClaimBestActionStation_ActionStationStartTransform, int32 CallFunc_TryAndClaimBestActionStation_ActionStationIndex, int32 CallFunc_TryAndClaimBestActionStation_AnimIndex, bool CallFunc_TryAndClaimBestActionStation_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool CallFunc_IsValid_ReturnValue);
};

}


