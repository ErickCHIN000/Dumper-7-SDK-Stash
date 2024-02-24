#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x31 (0xD9 - 0xA8)
// BlueprintGeneratedClass BTTask_SetActorRotationTowardsTarget.BTTask_SetActorRotationTowardsTarget_C
class UBTTask_SetActorRotationTowardsTarget_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                TargetKey;                                         // 0xB0(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         YawOnly;                                           // 0xD8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UBTTask_SetActorRotationTowardsTarget_C* GetDefaultObj();

	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTTask_SetActorRotationTowardsTarget(int32 EntryPoint, const struct FVector& Temp_wildcard_Variable, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetBlackboardValueAsVector_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, bool CallFunc_NotEqualExactly_VectorVector_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FRotator& CallFunc_SelectRotator_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue);
};

}


