#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x38 - 0x38)
// BlueprintGeneratedClass ANS_RightLeg_IK_Alpha_In.ANS_RightLeg_IK_Alpha_In_C
class UANS_RightLeg_IK_Alpha_In_C : public UAnimNotifyState_TimeRemaining
{
public:

	static class UClass* StaticClass();
	static class UANS_RightLeg_IK_Alpha_In_C* GetDefaultObj();

	bool Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime, struct FAnimNotifyEventReference& EventReference, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UABP_GNM_Template_C* K2Node_DynamicCast_AsABP_GNM_Template, bool K2Node_DynamicCast_bSuccess);
};

}


