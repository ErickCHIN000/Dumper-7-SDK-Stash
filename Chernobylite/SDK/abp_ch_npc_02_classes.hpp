#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x7F0 (0xAA8 - 0x2B8)
// AnimBlueprintGeneratedClass abp_ch_npc_02.abp_ch_npc_02_C
class UAbp_ch_npc_02_C : public UAnimInstance
{
public:
	uint8                                        Pad_1346[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2C8(0x30)(None)
	struct FAnimNode_ApplyMeshSpaceAdditive      AnimGraphNode_ApplyMeshSpaceAdditive_1;            // 0x2F8(0xD0)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x3C8(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3;                    // 0x468(0x80)(None)
	struct FAnimNode_ApplyMeshSpaceAdditive      AnimGraphNode_ApplyMeshSpaceAdditive;              // 0x4E8(0xD0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2;                    // 0x5B8(0x80)(None)
	struct FAnimNode_LinkedAnimGraph             AnimGraphNode_SubInstance_1;                       // 0x638(0xA0)(None)
	struct FAnimNode_LinkedAnimGraph             AnimGraphNode_LinkedAnimGraph_1;                   // 0x6D8(0xA0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_2;                              // 0x778(0x48)(None)
	struct FAnimNode_LinkedAnimGraph             AnimGraphNode_SubInstance;                         // 0x7C0(0xA0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1;                              // 0x860(0x48)(None)
	struct FAnimNode_LinkedAnimGraph             AnimGraphNode_LinkedAnimGraph;                     // 0x8A8(0xA0)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot;                                // 0x948(0x48)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1;                    // 0x990(0x80)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0xA10(0x80)(None)
	class Aba_ch_npc_00_C*                       Owner;                                             // 0xA90(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsFrightened;                                     // 0xA98(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_13A0[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        CurrentHP;                                         // 0xA9C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACGNPC*                                OwnerAsNpc;                                        // 0xAA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAbp_ch_npc_02_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_abp_ch_npc_02(int32 EntryPoint, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class ACGNPC* K2Node_DynamicCast_AsCGNPC, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_DeltaTimeX);
};

}


