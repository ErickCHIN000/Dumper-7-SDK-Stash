#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x415 (0x67D - 0x268)
// AnimBlueprintGeneratedClass HalberdBro_animBP.HalberdBro_animBP_C
class UHalberdBro_animBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_154F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x278(0x30)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_1;                  // 0x2A8(0xE0)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x388(0xA0)(None)
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer;                    // 0x428(0xE0)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x508(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x538(0xB0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1;                              // 0x5E8(0x48)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x630(0x48)(None)
	float                                        Speed;                                             // 0x678(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsPatrolling_;                                    // 0x67C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UHalberdBro_animBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void GetSpeed(class APawn* Pawn, float* Speed, const struct FVector& CallFunc_GetVelocity_ReturnValue, class ABP_HalberdBroBase_C* K2Node_DynamicCast_AsBP_Halberd_Bro_Base, bool K2Node_DynamicCast_bSuccess, float CallFunc_VSize_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_SelectFloat_ReturnValue);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_HalberdBro_animBP(int32 EntryPoint, bool Temp_bool_Variable, float K2Node_Event_DeltaTimeX, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, float CallFunc_GetSpeed_Speed, float CallFunc_FInterpTo_ReturnValue, float K2Node_Select_Default);
};

}


