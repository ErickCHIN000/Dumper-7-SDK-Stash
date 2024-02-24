#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x442 (0x6FA - 0x2B8)
// AnimBlueprintGeneratedClass abp_genericNPC_buildingInteraction_00.abp_genericNPC_buildingInteraction_00_C
class UAbp_genericNPC_buildingInteraction_00_C : public UAnimInstance
{
public:
	uint8                                        Pad_137E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2C8(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose;                     // 0x2F8(0x118)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose;                      // 0x410(0x158)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose;                       // 0x568(0x28)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x590(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x630(0x80)(None)
	class Aba_ch_npc_00_C*                       Owner;                                             // 0x6B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_13A7[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            InteractionTransform;                              // 0x6C0(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UAnimSequenceBase*                     InteractionAnim;                                   // 0x6F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsCurrentlyInteracting;                           // 0x6F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bInteraction;                                      // 0x6F9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UAbp_genericNPC_buildingInteraction_00_C* GetDefaultObj();

	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void OnBaseBuildingUpdate();
	void ExecuteUbergraph_abp_genericNPC_buildingInteraction_00(int32 EntryPoint, float K2Node_Event_DeltaTimeX, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class Aba_ch_npc_00_C* K2Node_DynamicCast_AsBa_Ch_Npc_00, bool K2Node_DynamicCast_bSuccess, const struct FNPCBuildingInteractionStats& CallFunc_GetBuildingInteractionStats_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, bool CallFunc_IsPlaying_ReturnValue, const struct FRotator& CallFunc_NormalizedDeltaRotator_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Abs_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2);
};

}


