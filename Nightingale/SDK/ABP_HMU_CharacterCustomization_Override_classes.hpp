#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x690 (0x9D8 - 0x348)
// AnimBlueprintGeneratedClass ABP_HMU_CharacterCustomization_Override.ABP_HMU_CharacterCustomization_Override_C
class UABP_HMU_CharacterCustomization_Override_C : public UAnimInstance
{
public:
	uint8                                        Pad_51F8[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimBlueprintGeneratedMutableData    __AnimBlueprintMutables;                           // 0x358(0x2)(HasGetValueTypeHash)
	uint8                                        Pad_51FB[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x360(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x368(0x8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_2;                              // 0x370(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_1;                   // 0x390(0xB8)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x448(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x490(0x48)(None)
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum;                     // 0x4D8(0x48)(None)
	struct FAnimNode_MakeDynamicAdditive         AnimGraphNode_MakeDynamicAdditive;                 // 0x520(0x38)(None)
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose;                        // 0x558(0x10)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive;                       // 0x568(0xC8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_1;                              // 0x630(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x650(0xB8)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0x708(0x128)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x830(0x128)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x958(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x978(0x20)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x998(0x20)(None)
	enum class EBodyType                         InBodyType;                                        // 0x9B8(0x1)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_521D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Offset;                                            // 0x9C0(0x18)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UABP_HMU_CharacterCustomization_Override_C* GetDefaultObj();

	void BodyType(const struct FPoseLink& InPose, enum class EBodyType InBodyType, struct FPoseLink* BodyType);
	void EyeOffset(const struct FPoseLink& InPose_0, const struct FVector& Offset, struct FPoseLink* EyeOffset);
	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_HMU_CharacterCustomization_Override_AnimGraphNode_ModifyBone_5E35D2B84D40BE0F83D2B0ACE50D1AAB();
	void ExecuteUbergraph_ABP_HMU_CharacterCustomization_Override(int32 EntryPoint, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue);
};

}


