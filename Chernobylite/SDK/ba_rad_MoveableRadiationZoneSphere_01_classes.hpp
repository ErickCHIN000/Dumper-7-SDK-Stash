#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x2F8 - 0x278)
// BlueprintGeneratedClass ba_rad_MoveableRadiationZoneSphere_01.ba_rad_MoveableRadiationZoneSphere_01_C
class Aba_rad_MoveableRadiationZoneSphere_01_C : public Aba_rad_RadioactiveZone_01_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x278(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UStaticMeshComponent*                  SphereStaticMesh;                                  // 0x280(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      InternalSphereTrigger;                             // 0x288(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      SphereTrigger;                                     // 0x290(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class Aba_PatrolNode_00_C*                   RefPatrolNode;                                     // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SphereRadius;                                      // 0x2A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_17D2[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           MovementCurve;                                     // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                           DefaultMovementCurveForOpenSpline;                 // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                           DefaultMovementCurveForClosedSpline;               // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MoveForwardStartTime;                              // 0x2C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MoveForwardEndTime;                                // 0x2C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MoveBackwardStartTime;                             // 0x2C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MoveBackwardEndTime;                               // 0x2CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MovementDuration;                                  // 0x2D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HalfMovementDuration;                              // 0x2D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        WaitDuration;                                      // 0x2D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MovementTimeElapsed;                               // 0x2DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               StaticMeshScale;                                   // 0x2E0(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1800[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UStaticMesh*                           RefStaticMesh;                                     // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class Aba_rad_MoveableRadiationZoneSphere_01_C* GetDefaultObj();

	void InternalInitializeVariables(float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_2, bool CallFunc_IsClosedLoop_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void InternalUpdateOnClosedSplineMovement(float DeltaSeconds, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Percent_FloatFloat_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, const struct FTransform& CallFunc_GetTransformAtTime_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue);
	void InternalUpdateOnOpenSplineMovement(float DeltaSeconds, bool Temp_bool_Variable, float Temp_float_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, float Temp_float_Variable_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue_2, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float K2Node_Select_Default, float K2Node_Select_Default_1, bool CallFunc_Less_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, float K2Node_Select_Default_2, float CallFunc_Percent_FloatFloat_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, const struct FTransform& CallFunc_GetTransformAtTime_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue);
	void InternalUpdateOnSplineMovement(float DeltaSeconds, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsClosedLoop_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void InternalInitializeMovementCurve(bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsClosedLoop_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UCurveFloat* K2Node_Select_Default);
	void GetRadiationForWorldPos(const struct FVector& World_Position, float* Radiation, float CallFunc_GetMaxRadiationWithOscilationRandomOffset_Rads, float CallFunc_GetMaxRadiationWithOscilationRandomOffset_Rads_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FVector& CallFunc_InverseTransformLocation_ReturnValue, float CallFunc_VSize_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue);
	void UserConstructionScript(bool CallFunc_SetStaticMesh_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_ba_rad_MoveableRadiationZoneSphere_01(int32 EntryPoint, float K2Node_Event_DeltaSeconds);
};

}


