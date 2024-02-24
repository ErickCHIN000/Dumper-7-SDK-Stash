#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1039 (0x12A1 - 0x268)
// AnimBlueprintGeneratedClass SwordLocomotion_AnimBP_v3.SwordLocomotion_AnimBP_v3_C
class USwordLocomotion_AnimBP_v3_C : public UAnimInstance
{
public:
	uint8                                        Pad_1544[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x278(0x30)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_14;                 // 0x2A8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_13;                 // 0x2D0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_12;                 // 0x2F8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_11;                 // 0x320(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_10;                 // 0x348(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_9;                  // 0x370(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_8;                  // 0x398(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_7;                  // 0x3C0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_6;                  // 0x3E8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_5;                  // 0x410(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_4;                  // 0x438(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0x460(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0x488(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x4B0(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_6;                    // 0x4D8(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_8;                       // 0x550(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_5;                    // 0x580(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_7;                       // 0x5F8(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0x628(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_6;                       // 0x6A0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x6D0(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_5;                       // 0x748(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x778(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_4;                       // 0x7F0(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_1;                      // 0x820(0xB0)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_3;                       // 0x8D0(0x30)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x900(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x928(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x9A0(0x30)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive;                       // 0x9D0(0xC8)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_2;                  // 0xA98(0xE0)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_1;                  // 0xB78(0xE0)(None)
	struct FAnimNode_ModifyCurve                 AnimGraphNode_ModifyCurve;                         // 0xC58(0x58)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer;                    // 0xCB0(0xE0)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0xD90(0xC0)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0xE50(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0xE80(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0xEF8(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0xF28(0xB0)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0xFD8(0xB8)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_SubInput;                            // 0x1090(0x78)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x1108(0x28)(None)
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend;                         // 0x1130(0xC8)(None)
	bool                                         IsInAir_;                                          // 0x11F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_15A5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Speed;                                             // 0x11FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             LeanGrounded;                                      // 0x1200(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              LastVelocityRotation;                              // 0x1208(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FRotator                              PreviousVelocityRotation;                          // 0x1214(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                        VelocityDifference;                                // 0x1220(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        WalkingSpeed;                                      // 0x1224(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RunningSpeed;                                      // 0x1228(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AccelerationDifference;                            // 0x122C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PreviousSpeed;                                     // 0x1230(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_15C8[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCharacterMovementComponent*           CharacterMovement;                                 // 0x1238(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Direction;                                         // 0x1240(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_15CE[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AZero_Base_C*                          LocomotionCharacter;                               // 0x1248(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                     CapsuleComponent;                                  // 0x1250(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Velocity;                                          // 0x1258(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LandPredictionAlpha;                               // 0x1264(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowTraces;                                        // 0x1268(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_15DB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           LandAlphaCurve;                                    // 0x1270(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsMoving;                                          // 0x1278(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_15DF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CharacterRotationDifference;                       // 0x127C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasMovementInput;                                  // 0x1280(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_15E3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        GaitValue;                                         // 0x1284(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        N_PlayRate;                                        // 0x1288(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StartPosition;                                     // 0x128C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SprintingSpeed;                                    // 0x1290(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             FeetPosition;                                      // 0x1294(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        VelocityDifference;                                // 0x129C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EComboTypes                       CurrentWeapon;                                     // 0x12A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USwordLocomotion_AnimBP_v3_C* GetDefaultObj();

	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
	void CalculatePlayRates(float WalkAnimSpeed, float RunAnimSpeed, float SprintAnimSpeed, bool Temp_bool_Variable, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_MapRangeUnclamped_ReturnValue, float CallFunc_MapRangeUnclamped_ReturnValue_1, float CallFunc_MapRangeUnclamped_ReturnValue_2, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_1, float K2Node_Select_Default);
	void TickWhileMoving(bool CallFunc_Greater_FloatFloat_ReturnValue);
	void CalculateGaitValue(bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_1, float K2Node_Select_Default, float CallFunc_MapRangeClamped_ReturnValue_2, float K2Node_Select_Default_1);
	void CalculateLandPredictionAlpha(TArray<class AActor*>& Temp_object_Variable, bool Temp_bool_Variable, enum class EDrawDebugTrace Temp_byte_Variable, enum class EDrawDebugTrace Temp_byte_Variable_1, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue_1, float CallFunc_FInterpTo_ReturnValue, float CallFunc_FInterpTo_ReturnValue_1, float CallFunc_GetWorldDeltaSeconds_ReturnValue_2, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, float CallFunc_K2_GetWalkableFloorZ_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, float CallFunc_GetScaledCapsuleRadius_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_GetScaledCapsuleHalfHeight_WithoutHemisphere_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, enum class EDrawDebugTrace K2Node_Select_Default, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_SphereTraceSingle_OutHit, bool CallFunc_SphereTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, float CallFunc_MapRangeClamped_ReturnValue_1, float CallFunc_BreakVector_X_3, float CallFunc_BreakVector_Y_3, float CallFunc_BreakVector_Z_3, float CallFunc_GetFloatValue_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_FInterpTo_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue);
	void GetVariablesFromBaseCharacterBP(const struct FVector& CallFunc_GetVelocity_ReturnValue);
	void SetDefaultValues();
	void SetReferences();
	void CalculateLeaningValues(float LeanAcceleration, float LeanRotation, float CallFunc_GetWorldDeltaSeconds_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, float CallFunc_GetMaxAcceleration_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_1, float CallFunc_GetWorldDeltaSeconds_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Abs_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_3, float CallFunc_MapRangeClamped_ReturnValue_4, float CallFunc_GetWorldDeltaSeconds_ReturnValue_2, float CallFunc_SelectFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, const struct FRotator& CallFunc_NormalizedDeltaRotator_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Divide_FloatFloat_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SwordLocomotion_AnimBP_v3_AnimGraphNode_TransitionResult_FF050DF24EE7CF4CF5D4CD9F53F5626F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SwordLocomotion_AnimBP_v3_AnimGraphNode_TransitionResult_F12DA45C4F3C8950F41C50929E80727C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SwordLocomotion_AnimBP_v3_AnimGraphNode_TransitionResult_1B025F8844FF9D3D47F41AA660D66735();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SwordLocomotion_AnimBP_v3_AnimGraphNode_TransitionResult_83044C7743AF785EBE5B7C9AA715FE1C();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SwordLocomotion_AnimBP_v3_AnimGraphNode_BlendSpacePlayer_52EF7BD9443FD63FE671F28B9FB508C1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SwordLocomotion_AnimBP_v3_AnimGraphNode_BlendSpacePlayer_9A38A806407D5EF77859DD99244D2B20();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SwordLocomotion_AnimBP_v3_AnimGraphNode_TransitionResult_ABB047874A0A12D9F624B6B8911687F8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SwordLocomotion_AnimBP_v3_AnimGraphNode_SequencePlayer_40A2C1A34DA377C082CA18958278B871();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SwordLocomotion_AnimBP_v3_AnimGraphNode_TransitionResult_5F30DCD946290B1E557F908EEEC25ADA();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintInitializeAnimation();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SwordLocomotion_AnimBP_v3_AnimGraphNode_TransitionResult_69BBB72A4C64859ED7590285AF7AAE7E();
	void AnimNotify_Entered_Stopping();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SwordLocomotion_AnimBP_v3_AnimGraphNode_TransitionResult_7AEE64E2440E6EA4E503A390E704257E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SwordLocomotion_AnimBP_v3_AnimGraphNode_TransitionResult_0D53C3234C8BB9291D567F99FD2B3099();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SwordLocomotion_AnimBP_v3_AnimGraphNode_TransitionResult_F41313404EB37B093D82F5A3C0FB9FB9();
	void ExecuteUbergraph_SwordLocomotion_AnimBP_v3(int32 EntryPoint, class UBlendSpaceBase* Temp_object_Variable, class UBlendSpaceBase* Temp_object_Variable_1, class UBlendSpaceBase* Temp_object_Variable_2, class UBlendSpaceBase* Temp_object_Variable_3, class UBlendSpaceBase* Temp_object_Variable_4, class UBlendSpaceBase* Temp_object_Variable_5, class UBlendSpaceBase* Temp_object_Variable_6, enum class EComboTypes Temp_byte_Variable, class UAnimSequenceBase* Temp_object_Variable_7, class UAnimSequenceBase* Temp_object_Variable_8, class UAnimSequenceBase* Temp_object_Variable_9, class UAnimSequenceBase* Temp_object_Variable_10, class UAnimSequenceBase* Temp_object_Variable_11, class UAnimSequenceBase* Temp_object_Variable_12, class UAnimSequenceBase* Temp_object_Variable_13, enum class EComboTypes Temp_byte_Variable_1, float CallFunc_Abs_ReturnValue, class UBlendSpaceBase* Temp_object_Variable_14, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue, class UBlendSpaceBase* Temp_object_Variable_15, bool CallFunc_Less_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class UBlendSpaceBase* Temp_object_Variable_16, class UBlendSpaceBase* Temp_object_Variable_17, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Abs_ReturnValue_1, class UBlendSpaceBase* Temp_object_Variable_18, bool CallFunc_Less_FloatFloat_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, float CallFunc_Abs_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, class UBlendSpaceBase* K2Node_Select_Default, class UBlendSpaceBase* Temp_object_Variable_19, class UAnimSequenceBase* K2Node_Select_Default_1, class UBlendSpaceBase* Temp_object_Variable_20, bool CallFunc_BooleanAND_ReturnValue_4, float K2Node_Event_DeltaTimeX, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, enum class EComboTypes Temp_byte_Variable_2, bool CallFunc_IsValid_ReturnValue, class UBlendSpaceBase* K2Node_Select_Default_2, const struct FVector& CallFunc_GetVelocity_ReturnValue, float CallFunc_VSize_ReturnValue, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, bool CallFunc_IsFalling_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, class APawn* CallFunc_TryGetPawnOwner_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess, float CallFunc_Abs_ReturnValue_3, bool CallFunc_Greater_FloatFloat_ReturnValue_3, bool CallFunc_Less_FloatFloat_ReturnValue_3, float CallFunc_GetCurveValue_ReturnValue, float CallFunc_GetCurveValue_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
};

}


