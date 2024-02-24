#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0xD8 - 0xA8)
// BlueprintGeneratedClass AI_MoveToSpecificLoc.AI_MoveToSpecificLoc_C
class UAI_MoveToSpecificLoc_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                Location;                                          // 0xB0(0x28)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UAI_MoveToSpecificLoc_C* GetDefaultObj();

	void GetDistance_Direction(const struct FVector& TargetLoc, const struct FVector& CurrentLoc, double* Distance, struct FVector* Direction, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_VSize_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue);
	void GetTargetLoc(const struct FVector& Target, class APawn* Controlled_Pawn, struct FVector* RandomLoc, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetRandomLocationInNavigableRadius_RandomLocation, bool CallFunc_K2_GetRandomLocationInNavigableRadius_ReturnValue, double CallFunc_GetDistance_Direction_Distance, const struct FVector& CallFunc_GetDistance_Direction_Direction, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, double CallFunc_Vector_Distance_ReturnValue, const struct FVector& CallFunc_K2_GetRandomReachablePointInRadius_RandomLocation, bool CallFunc_K2_GetRandomReachablePointInRadius_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue);
	void OnFail_23691D184123CB040E4C31A41B25C185(enum class EPathFollowingResult MovementResult);
	void OnSuccess_23691D184123CB040E4C31A41B25C185(enum class EPathFollowingResult MovementResult);
	void OnFail_413338964241E2AC5210E1B19DC04362(enum class EPathFollowingResult MovementResult);
	void OnSuccess_413338964241E2AC5210E1B19DC04362(enum class EPathFollowingResult MovementResult);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_AI_MoveToSpecificLoc(int32 EntryPoint, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult_3, enum class EPathFollowingResult Temp_byte_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult_1, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class EPathFollowingResult Temp_byte_Variable_1, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class UBP_SmartAIComponent_C* CallFunc_GetComponentByClass_ReturnValue, const struct FVector& CallFunc_GetBlackboardValueAsVector_ReturnValue, const struct FVector& CallFunc_GetTargetLoc_RandomLoc, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UAIAsyncTaskBlueprintProxy* CallFunc_CreateMoveToProxyObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UAIAsyncTaskBlueprintProxy* CallFunc_CreateMoveToProxyObject_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class USD_AIComponent_C* CallFunc_GetComponentByClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, double CallFunc_Vector_Distance_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, double CallFunc_Vector_Distance_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, enum class EPathFollowingResult K2Node_CustomEvent_MovementResult_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3);
};

}


