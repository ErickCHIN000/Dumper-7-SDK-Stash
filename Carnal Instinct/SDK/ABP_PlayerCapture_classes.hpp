#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1FE8 (0x22A0 - 0x2B8)
// AnimBlueprintGeneratedClass ABP_PlayerCapture.ABP_PlayerCapture_C
class UABP_PlayerCapture_C : public UAnimInstance
{
public:
	uint8                                        Pad_15DA[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2C8(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4;                    // 0x2F8(0x80)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x378(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x398(0x20)(None)
	uint8                                        Pad_15EB[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_5;                      // 0x3C0(0x440)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_4;                      // 0x800(0x440)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_3;                      // 0xC40(0x440)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_2;                      // 0x1080(0x440)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x14C0(0x80)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_2;                     // 0x1540(0xC8)(None)
	uint8                                        Pad_1602[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_1;                      // 0x1610(0x440)(None)
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics;                        // 0x1A50(0x440)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_1;                     // 0x1E90(0xC8)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x1F58(0x80)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x1FD8(0x80)(None)
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive;                       // 0x2058(0xC8)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x2120(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x21C0(0x80)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x2240(0x48)(None)
	class ABP_CombatCharacter_C*                 CharacterReference;                                // 0x2288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Male_;                                          // 0x2290(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_162A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Boob_Physics;                                      // 0x2294(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Jackal;                                         // 0x2298(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_162D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        JackalAlpha;                                       // 0x229C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UABP_PlayerCapture_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_ABP_PlayerCapture(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, float K2Node_Event_DeltaTimeX, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player, float CallFunc_FClamp_ReturnValue);
};

}


