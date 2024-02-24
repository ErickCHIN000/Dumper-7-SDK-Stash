#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x831 (0xF41 - 0x710)
// AnimBlueprintGeneratedClass ABP_Narrative_NPC.ABP_Narrative_NPC_C
class UABP_Narrative_NPC_C : public UNWXAINPCAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x710(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimBlueprintGeneratedMutableData    __AnimBlueprintMutables;                           // 0x718(0x5)(HasGetValueTypeHash)
	uint8                                        Pad_5445[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x720(0x8)(None)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x728(0x8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_2;                              // 0x730(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_1;                   // 0x750(0xB8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_1;                              // 0x808(0x20)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x828(0xB8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x8E0(0x20)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0x900(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0x928(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x950(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x978(0x28)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_3;                   // 0x9A0(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x9E8(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_3;                       // 0xA30(0x20)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_2;                   // 0xA50(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0xA98(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0xAE0(0x20)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0xB00(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0xB48(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0xB90(0x20)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0xBB0(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0xBF8(0x48)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0xC40(0x20)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0xC60(0xC8)(None)
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer_1;                   // 0xD28(0xC8)(None)
	struct FAnimNode_LinkedAnimLayer             AnimGraphNode_LinkedAnimLayer;                     // 0xDF0(0xC8)(None)
	enum class EBodyType                         __CustomProperty_InBodyType_A48B6F27429BE908EBA76783EB4DEB5C; // 0xEB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_549F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               __CustomProperty_Offset_22FE629148EB97A7D4CEF38B15834253; // 0xEC0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnimSequenceCache                    DialogueEnterAnimCache;                            // 0xED8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class FName                                  DialogueEnterAnimKey;                              // 0xEE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bInDialogue;                                       // 0xEF0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_54AF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimSequenceCache                    DialogueAnimCache;                                 // 0xEF8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class FName                                  DialogueAnimKey;                                   // 0xF08(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAnimSequenceCache                    DialogueExitAnimCache;                             // 0xF10(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class FName                                  DialogueExitAnimKey;                               // 0xF20(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Offset;                                            // 0xF28(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBodyType                         EBodyType;                                         // 0xF40(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UABP_Narrative_NPC_C* GetDefaultObj();

	void BodyType(const struct FPoseLink& InPose, enum class EBodyType InBodyType, struct FPoseLink* BodyType);
	void EyeOffset(const struct FPoseLink& InPose_0, const struct FVector& Offset, struct FPoseLink* EyeOffset);
	void AnimGraph(struct FPoseLink* AnimGraph);
	void SetCharacterEyeScale(float& Scale);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Narrative_NPC_AnimGraphNode_TransitionResult_5BF0A7414B8EEBF1AA0F5D92C0AB90F7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Narrative_NPC_AnimGraphNode_TransitionResult_300190B04F6DA12E6EF5079421608DD6();
	void BlueprintInitializeAnimation();
	void BlueprintBeginPlay();
	void SetCharacterEyeOffset(struct FVector& Offset);
	void SetCharacterBodyType(enum class EBodyType Type);
	void ExecuteUbergraph_ABP_Narrative_NPC(int32 EntryPoint, enum class EBodyType K2Node_Event_Type, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, float K2Node_Event_Scale, float CallFunc_GetRelevantAnimTimeRemaining_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue_1, const struct FVector& K2Node_Event_Offset, double CallFunc_Less_DoubleDouble_A_ImplicitCast, double CallFunc_Less_DoubleDouble_A_ImplicitCast_1);
};

}


