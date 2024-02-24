#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xBE5 (0xE9D - 0x2B8)
// AnimBlueprintGeneratedClass CHA_3RD_MAL_RIG_DropShipAnimBP.CHA_3RD_MAL_RIG_DropShipAnimBP_C
class UCHA_3RD_MAL_RIG_DropShipAnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_4C19[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_2;                 // 0x2C8(0x50)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x318(0x80)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_2;                   // 0x398(0xA0)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x438(0x158)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_1;                   // 0x590(0x118)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_2;                              // 0x6A8(0x30)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0x6D8(0xA0)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_1;                 // 0x778(0x50)(None)
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend;                         // 0x7C8(0xC8)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x890(0x80)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator;                   // 0x910(0x50)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x960(0xA0)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0xA00(0x118)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_1;                              // 0xB18(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0xB48(0x80)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0xBC8(0x20)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0xBE8(0x20)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0xC08(0x30)(None)
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer_1;                   // 0xC38(0xB0)(None)
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer;                     // 0xCE8(0xB0)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0xD98(0xC0)(None)
	bool                                         IsDriver;                                          // 0xE58(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4C9F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UObject*                               VehicleRef;                                        // 0xE60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AimPitch;                                          // 0xE68(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AimYaw;                                            // 0xE6C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              LookRot;                                           // 0xE70(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                        AnimDelta;                                         // 0xE7C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        VehicleSpeed;                                      // 0xE80(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LHandSocketLocation;                               // 0xE84(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               RHandSocketLocation;                               // 0xE90(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Shake;                                             // 0xE9C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UCHA_3RD_MAL_RIG_DropShipAnimBP_C* GetDefaultObj();

	void VehicleLowerBody(const struct FPoseLink& LowerInPose, struct FPoseLink* VehicleLowerBody);
	void VehicleUpperBody(const struct FPoseLink& UpperInPose, struct FPoseLink* VehicleUpperBody);
	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_CHA_3RD_MAL_RIG_DropShipAnimBP_AnimGraphNode_TwoWayBlend_48EE6D0D44CF60EFC312A8956D6A7A38();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_CHA_3RD_MAL_RIG_DropShipAnimBP(int32 EntryPoint, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class AIcarusPlayerCharacter* K2Node_DynamicCast_AsIcarus_Player_Character, bool K2Node_DynamicCast_bSuccess, float CallFunc_Divide_FloatFloat_ReturnValue, class ASeatBase* CallFunc_GetAttachedToSeat_ReturnValue, float CallFunc_FMin_ReturnValue, class ABP_DropshipSeat_C* K2Node_DynamicCast_AsBP_Dropship_Seat, bool K2Node_DynamicCast_bSuccess_1, float K2Node_Event_DeltaTimeX);
};

}


