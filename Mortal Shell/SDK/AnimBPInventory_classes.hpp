#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xDA1 (0x1009 - 0x268)
// AnimBlueprintGeneratedClass AnimBPInventory.AnimBPInventory_C
class UAnimBPInventory_C : public UAnimInstance
{
public:
	uint8                                        Pad_1A33[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x278(0x30)(None)
	uint8                                        Pad_1A38[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_LookAt                      AnimGraphNode_LookAt_1;                            // 0x2B0(0x1B0)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x460(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x480(0x20)(None)
	struct FAnimNode_RotationMultiplier          AnimGraphNode_RotationMultiplier_2;                // 0x4A0(0xF0)(None)
	struct FAnimNode_LookAt                      AnimGraphNode_LookAt;                              // 0x590(0x1B0)(None)
	struct FAnimNode_RotationMultiplier          AnimGraphNode_RotationMultiplier_1;                // 0x740(0xF0)(None)
	struct FAnimNode_RotationMultiplier          AnimGraphNode_RotationMultiplier;                  // 0x830(0xF0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_6;                    // 0x920(0x78)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_5;                    // 0x998(0x78)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_3;                              // 0xA10(0x48)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0xA58(0xC0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_2;                              // 0xB18(0x48)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1;                              // 0xB60(0x48)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0xBA8(0xB8)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_1;                     // 0xC60(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0xC88(0x28)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0xCB0(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0xCF8(0x78)(None)
	struct FAnimNode_BlendListByInt              AnimGraphNode_BlendListByInt;                      // 0xD70(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0xE10(0x78)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0xE88(0x78)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0xF00(0x78)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0xF78(0x78)(None)
	struct FVector                               LookAtLocation;                                    // 0xFF0(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              HeadLookAtRot;                                     // 0xFFC(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EComboTypes                       CurrentWeapon;                                     // 0x1008(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAnimBPInventory_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBPInventory_AnimGraphNode_BlendListByInt_667BEBFC4EBFC2DF99CC2B923924E494();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBPInventory_AnimGraphNode_RotationMultiplier_AF92193E442A1C066DA219BD80A08AE5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBPInventory_AnimGraphNode_RotationMultiplier_B6CA083F4400FBCB28DCB289D3514BED();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBPInventory_AnimGraphNode_RotationMultiplier_FE016117438EF4D5B4CA6786A52DC8B6();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_AnimBPInventory(int32 EntryPoint, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, float Temp_float_Variable_4, float Temp_float_Variable_5, int32 CallFunc_Conv_ByteToInt_ReturnValue, float Temp_float_Variable_6, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, int32 Temp_int_Variable, float K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetOwningActor_ReturnValue, float K2Node_Select_Default, class ABP_EquipmentMenuPawn_Inventory_C* K2Node_DynamicCast_AsBP_Equipment_Menu_Pawn_Inventory, bool K2Node_DynamicCast_bSuccess, class USkeletalMeshComponent* CallFunc_GetOwningComponent_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, const struct FVector& CallFunc_VInterpTo_ReturnValue);
};

}


