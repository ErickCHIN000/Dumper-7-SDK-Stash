#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0xF8 - 0xA8)
// BlueprintGeneratedClass BasicMelee_RootMotionWait.BasicMelee_RootMotionWait_C
class UBasicMelee_RootMotionWait_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                Duration;                                          // 0xB0(0x28)(Edit, BlueprintVisible)
	float                                        Counter;                                           // 0xD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LastFramePos;                                      // 0xDC(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        FailFrameCounter;                                  // 0xE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LastFrameTime;                                     // 0xEC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StrafeStartTime;                                   // 0xF0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentDuration;                                   // 0xF4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBasicMelee_RootMotionWait_C* GetDefaultObj();

	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BasicMelee_RootMotionWait(int32 EntryPoint, float CallFunc_GetBlackboardValueAsFloat_ReturnValue, float CallFunc_GetTimeSeconds_ReturnValue, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AAIController* K2Node_Event_OwnerController_1, class APawn* K2Node_Event_ControlledPawn_1, float K2Node_Event_DeltaSeconds, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetTimeSeconds_ReturnValue_1, const struct FVector& CallFunc_GetRootMotionVelocity_ReturnValue, float CallFunc_VSizeXYSquared_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSizeXYSquared_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, int32 Temp_int_Variable, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue);
};

}


