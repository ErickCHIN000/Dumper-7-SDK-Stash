#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xCDA (0xF92 - 0x2B8)
// AnimBlueprintGeneratedClass 1ST_CHA_RIG_VehicleAnimBP.1ST_CHA_RIG_VehicleAnimBP_C
class UOneST_CHA_RIG_VehicleAnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_4C0D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_2;                              // 0x2C8(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_1;                   // 0x2F8(0x118)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_1;                              // 0x410(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x440(0x118)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x558(0xA0)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0x5F8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0x620(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x648(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x670(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x698(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x718(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x748(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x7C8(0x30)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator;                   // 0x7F8(0x50)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x848(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x878(0xB0)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive;                       // 0x928(0xC8)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x9F0(0x80)(None)
	struct FAnimNode_TwoBoneIK                   AnimGraphNode_TwoBoneIK_1;                         // 0xA70(0x1E0)(None)
	struct FAnimNode_TwoBoneIK                   AnimGraphNode_TwoBoneIK;                           // 0xC50(0x1E0)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0xE30(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0xE50(0x20)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0xE70(0x30)(None)
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer;                     // 0xEA0(0xB0)(None)
	float                                        DeltaT;                                            // 0xF50(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsDriver;                                          // 0xF54(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4C74[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               VehicleRef;                                        // 0xF58(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        VehicleSpeed;                                      // 0xF60(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SteeringValue;                                     // 0xF64(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TotalSteeringAngle;                                // 0xF68(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LHandSocketLocation;                               // 0xF6C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RHandSocketLocation;                               // 0xF78(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SteeringAngle;                                     // 0xF84(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentOriginAngle;                                // 0xF88(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SteeringSpeed;                                     // 0xF8C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsTurningRight;                                    // 0xF90(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsTurningLeft;                                     // 0xF91(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UOneST_CHA_RIG_VehicleAnimBP_C* GetDefaultObj();

	void VehicleLowerBody(const struct FPoseLink& LowerInPose, struct FPoseLink* VehicleLowerBody);
	void VehicleUpperBody(const struct FPoseLink& UpperInPose, struct FPoseLink* VehicleUpperBody);
	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_1ST_CHA_RIG_VehicleAnimBP_AnimGraphNode_ApplyAdditive_13410CC14B94F4DCCB2E1BAA4AD2333B();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_1ST_CHA_RIG_VehicleAnimBP_AnimGraphNode_SequenceEvaluator_F2BD9F5440E7731C01AD5282C93DAE82();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_1ST_CHA_RIG_VehicleAnimBP(int32 EntryPoint, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class AIcarusPlayerCharacter* K2Node_DynamicCast_AsIcarus_Player_Character, bool K2Node_DynamicCast_bSuccess, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FMin_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, float K2Node_Event_DeltaTimeX);
};

}


