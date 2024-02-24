#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4D1 (0x789 - 0x2B8)
// AnimBlueprintGeneratedClass SK_BLD_Floor_TrapDoorHatch_Thatch_AnimBP.SK_BLD_Floor_TrapDoorHatch_Thatch_AnimBP_C
class USK_BLD_Floor_TrapDoorHatch_Thatch_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_82A[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2C8(0x30)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_5;                  // 0x2F8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_4;                  // 0x320(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3;                  // 0x348(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2;                  // 0x370(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1;                  // 0x398(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult;                    // 0x3C0(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x3E8(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_4;                       // 0x468(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x498(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_3;                       // 0x518(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x548(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2;                       // 0x5C8(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x5F8(0x80)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1;                       // 0x678(0x30)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult;                         // 0x6A8(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine;                        // 0x6D8(0xB0)(None)
	enum class EDoorState                        DoorState;                                         // 0x788(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USK_BLD_Floor_TrapDoorHatch_Thatch_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BLD_Floor_TrapDoorHatch_Thatch_AnimBP_AnimGraphNode_TransitionResult_1E0A46EC434D9D2BC045A3B26C197953();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BLD_Floor_TrapDoorHatch_Thatch_AnimBP_AnimGraphNode_TransitionResult_5C1AABD44012849EF7035ABB1CC68FA8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BLD_Floor_TrapDoorHatch_Thatch_AnimBP_AnimGraphNode_TransitionResult_0B369BEF46FFF69E49E6F6A0A337D9FE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SK_BLD_Floor_TrapDoorHatch_Thatch_AnimBP_AnimGraphNode_TransitionResult_4E902B654DD756B8A8C2129826A3AB12();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_SK_BLD_Floor_TrapDoorHatch_Thatch_AnimBP(int32 EntryPoint, class AActor* CallFunc_GetOwningActor_ReturnValue, class ABP_Door_Base_C* K2Node_DynamicCast_AsBP_Door_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, float K2Node_Event_DeltaTimeX);
};

}


