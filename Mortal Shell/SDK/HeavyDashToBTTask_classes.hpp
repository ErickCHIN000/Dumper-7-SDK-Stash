#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0xBC - 0xA8)
// BlueprintGeneratedClass HeavyDashToBTTask.HeavyDashToBTTask_C
class UHeavyDashToBTTask_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        DashLocationLockDistance;                          // 0xB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DashCompletedAcceptanceRange;                      // 0xB4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        OverDashDist;                                      // 0xB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UHeavyDashToBTTask_C* GetDefaultObj();

	void OnFail_0B680C9B4EACD3D7C1F0DF9437E03BC3(enum class EPathFollowingResult MovementResult);
	void OnSuccess_0B680C9B4EACD3D7C1F0DF9437E03BC3(enum class EPathFollowingResult MovementResult);
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_HeavyDashToBTTask(int32 EntryPoint, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class EPathFollowingResult Temp_byte_Variable, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds, class FName CallFunc_MakeLiteralName_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AHeavyEnemy_C* K2Node_DynamicCast_AsHeavy_Enemy, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, class AEnemyCharacter_C* K2Node_DynamicCast_AsEnemy_Character, bool K2Node_DynamicCast_bSuccess_1, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetValueAsVector_ReturnValue, class UObject* CallFunc_GetValueAsObject_ReturnValue, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, TArray<class AActor*>& K2Node_MakeArray_Array, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, float CallFunc_GetDistanceTo_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue_2, class UAIAsyncTaskBlueprintProxy* CallFunc_CreateMoveToProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
};

}


