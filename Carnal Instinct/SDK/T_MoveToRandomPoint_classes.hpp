#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0xB8 - 0xA8)
// BlueprintGeneratedClass T_MoveToRandomPoint.T_MoveToRandomPoint_C
class UT_MoveToRandomPoint_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	float                                        AcceptanceRadius;                                  // 0xB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Radius;                                            // 0xB4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UT_MoveToRandomPoint_C* GetDefaultObj();

	void OnFail_AF8F96B5438E3685A9B028A3A62FBEAC(enum class EPathFollowingResult MovementResult);
	void OnSuccess_AF8F96B5438E3685A9B028A3A62FBEAC(enum class EPathFollowingResult MovementResult);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_T_MoveToRandomPoint(int32 EntryPoint, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult_1, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EPathFollowingResult Temp_byte_Variable, class AAIController* K2Node_Event_OwnerController_1, class APawn* K2Node_Event_ControlledPawn_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class ABP_BaseAI_C* K2Node_DynamicCast_AsBP_Base_AI, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetRandomPointInNavigableRadius_RandomLocation, bool CallFunc_K2_GetRandomPointInNavigableRadius_ReturnValue, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class UAIAsyncTaskBlueprintProxy* CallFunc_CreateMoveToProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
};

}


