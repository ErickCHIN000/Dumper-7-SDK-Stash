#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x6BC (0x924 - 0x268)
// AnimBlueprintGeneratedClass Heavy_Cultist_Skeleton_AnimBlueprint.Heavy_Cultist_Skeleton_AnimBlueprint_C
class UHeavy_Cultist_Skeleton_AnimBlueprint_C : public UAnimInstance
{
public:
	uint8                                        Pad_2082[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x278(0x30)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer;                    // 0x2A8(0xE0)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x388(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x3B8(0xB0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x468(0x48)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_3;                        // 0x4B0(0x108)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0x5B8(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x5D8(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_2;                        // 0x5F8(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1;                        // 0x700(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x808(0x108)(None)
	float                                        Speed;                                             // 0x910(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LeftHipJiggleAlpha;                                // 0x914(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RightHipJiggleAlpha;                               // 0x918(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RightElbowJiggleAlpha;                             // 0x91C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LeftElbowJiggleAlpha;                              // 0x920(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UHeavy_Cultist_Skeleton_AnimBlueprint_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void GetSpeed(class APawn* Pawn, class ABP_HeavyCultistBase_C* HeavyCultist, float* Speed, const struct FVector& CallFunc_GetVelocity_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_SelectFloat_ReturnValue);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_Heavy_Cultist_Skeleton_AnimBlueprint(int32 EntryPoint, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, float K2Node_Event_DeltaTimeX, class ABP_HeavyCultistBase_C* K2Node_DynamicCast_AsBP_Heavy_Cultist_Base, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetSpeed_Speed);
};

}


