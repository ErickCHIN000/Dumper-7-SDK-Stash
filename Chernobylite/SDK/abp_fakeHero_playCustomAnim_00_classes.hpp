#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3E0 (0x698 - 0x2B8)
// AnimBlueprintGeneratedClass abp_fakeHero_playCustomAnim_00.abp_fakeHero_playCustomAnim_00_C
class UAbp_fakeHero_playCustomAnim_00_C : public UAnimInstance
{
public:
	uint8                                        Pad_1691[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2C8(0x30)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x2F8(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x320(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x3A0(0x30)(None)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend;                    // 0x3D0(0xC0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x490(0x80)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x510(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x590(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x5C0(0xB0)(None)
	bool                                         bPlay;                                             // 0x670(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_16A5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimSequenceBase*                     Anim;                                              // 0x678(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StartPosition;                                     // 0x680(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bInit;                                             // 0x684(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_16AD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BlendHands;                                        // 0x688(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_16BB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class Aba_fakeHero_C*                        Owner;                                             // 0x690(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAbp_fakeHero_playCustomAnim_00_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void Set();
	void Init(class UAnimSequenceBase* InCustomAnim, float InStartPosition);
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_abp_fakeHero_playCustomAnim_00(int32 EntryPoint, float K2Node_Event_DeltaTimeX, class UAnimSequenceBase* K2Node_Event_InCustomAnim, float K2Node_Event_InStartPosition, float CallFunc_GetWorldDeltaSeconds_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float CallFunc_FInterpTo_ReturnValue, class AActor* CallFunc_GetOwningActor_ReturnValue, class Aba_fakeHero_C* K2Node_DynamicCast_AsBa_Fake_Hero, bool K2Node_DynamicCast_bSuccess);
};

}


