#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x339 (0x5F1 - 0x2B8)
// AnimBlueprintGeneratedClass SK_Dev_Hammer_AnimBP.SK_Dev_Hammer_AnimBP_C
class USK_Dev_Hammer_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_2422[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x2C8(0x30)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1;                   // 0x2F8(0xA0)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone;                          // 0x398(0x108)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0x4A0(0x20)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool;                     // 0x4C0(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer;                      // 0x560(0x80)(None)
	class UBP_ActionableBehaviour_Flying_Hammer_C* Hammer;                                            // 0x5E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FlyingForward;                                     // 0x5E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2437[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Speed;                                             // 0x5EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Swinging;                                          // 0x5F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class USK_Dev_Hammer_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void GetHammerActionable(class UBP_ActionableBehaviour_Flying_Hammer_C** Hammer, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwningActor_ReturnValue, class UBP_ActionableBehaviour_Flying_Hammer_C* CallFunc_GetComponentByClass_ReturnValue);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void AnimNotify_FmodEvent();
	void ExecuteUbergraph_SK_Dev_Hammer_AnimBP(int32 EntryPoint, float K2Node_Event_DeltaTimeX, class UBP_ActionableBehaviour_Flying_Hammer_C* CallFunc_GetHammerActionable_Hammer, bool CallFunc_IsValid_ReturnValue, class UBP_ActionableBehaviour_Flying_Hammer_C* CallFunc_GetHammerActionable_Hammer_1, class UBP_ActionableBehaviour_Flying_Hammer_C* CallFunc_GetHammerActionable_Hammer_2, float CallFunc_Multiply_FloatFloat_ReturnValue, class UBP_ActionableBehaviour_Flying_Hammer_C* CallFunc_GetHammerActionable_Hammer_3, class USkeletalMeshComponent* CallFunc_GetOwningComponent_ReturnValue, enum class EFMODValid CallFunc_PlayEventAttached_IsValid, class UFMODAudioComponent* CallFunc_PlayEventAttached_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
};

}


