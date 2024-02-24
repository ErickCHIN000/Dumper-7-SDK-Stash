#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD0 (0x3F0 - 0x320)
// AnimBlueprintGeneratedClass SK_CHA_3RD_MAL_01_GraveStone_AnimBP.SK_CHA_3RD_MAL_01_GraveStone_AnimBP_C
class USK_CHA_3RD_MAL_01_GraveStone_AnimBP_C : public UIcarusCorpseAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x320(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x328(0x30)(None)
	struct FAnimNode_PoseSnapshot                AnimGraphNode_PoseSnapshot;                        // 0x358(0x90)(None)
	class ABP_Gravestone_C*                      As_BP_Gravestone;                                  // 0x3E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USK_CHA_3RD_MAL_01_GraveStone_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_SK_CHA_3RD_MAL_01_GraveStone_AnimBP(int32 EntryPoint, float K2Node_Event_DeltaTimeX);
};

}


