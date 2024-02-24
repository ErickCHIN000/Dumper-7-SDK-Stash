#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x79 (0x3C1 - 0x348)
// BlueprintGeneratedClass PhotoModeFreeCamera.PhotoModeFreeCamera_C
class APhotoModeFreeCamera_C : public ASpectatorPawn
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCameraComponent*                      Camera;                                            // 0x350(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USpringArmComponent*                   SpringArm;                                         // 0x358(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       FreeCameraMaximumDistance;                         // 0x360(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class ACharacter*                            PlayerPawn;                                        // 0x368(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            MovingFreeCamera;                                  // 0x370(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            NotMovingFreeCamera;                               // 0x380(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	double                                       CameraSensitivity;                                 // 0x390(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                       TimeDilation;                                      // 0x398(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	double                                       StartingFOV;                                       // 0x3A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FRotator                              StartingRotation;                                  // 0x3A8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         UseMaximumDistanceLimit;                           // 0x3C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class APhotoModeFreeCamera_C* GetDefaultObj();

	void UserConstructionScript(float CallFunc_GetGlobalTimeDilation_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, class UFloatingPawnMovement* K2Node_DynamicCast_AsFloating_Pawn_Movement, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetMaxSpeed_ReturnValue, double CallFunc_SafeDivide_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast, float CallFunc_SetFieldOfView_InFieldOfView_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float K2Node_VariableSet_CustomTimeDilation_ImplicitCast, float K2Node_VariableSet_MaxSpeed_ImplicitCast);
	void InpActEvt_MouseScrollUp_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void InpActEvt_MouseScrollDown_K2Node_InputKeyEvent_0(const struct FKey& Key);
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_PhotoModeFreeCamera(int32 EntryPoint, const struct FKey& K2Node_InputKeyEvent_Key_1, float CallFunc_GetDistanceTo_ReturnValue, float K2Node_Event_DeltaSeconds, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, double CallFunc_VSize_ReturnValue, double CallFunc_Abs_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool Temp_bool_IsClosed_Variable, class UFloatingPawnMovement* K2Node_DynamicCast_AsFloating_Pawn_Movement, bool K2Node_DynamicCast_bSuccess, class UFloatingPawnMovement* K2Node_DynamicCast_AsFloating_Pawn_Movement_1, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_GetMaxSpeed_ReturnValue, float CallFunc_GetMaxSpeed_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, double CallFunc_FClamp_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, double CallFunc_Multiply_IntFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, const struct FKey& K2Node_InputKeyEvent_Key, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_VInterpTo_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float K2Node_VariableSet_MaxSpeed_ImplicitCast, float K2Node_VariableSet_MaxSpeed_ImplicitCast_1, float CallFunc_VInterpTo_InterpSpeed_ImplicitCast);
	void NotMovingFreeCamera__DelegateSignature();
	void MovingFreeCamera__DelegateSignature();
};

}


