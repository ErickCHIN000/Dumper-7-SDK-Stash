#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x30 - 0x30)
// BlueprintGeneratedClass PauseThrowAnim.PauseThrowAnim_C
class UPauseThrowAnim_C : public UAnimNotifyState
{
public:

	static class UClass* StaticClass();
	static class UPauseThrowAnim_C* GetDefaultObj();

	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);
	bool Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime, class AActor* CallFunc_GetOwner_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess, class USword_AnimBP2v3_C* K2Node_DynamicCast_AsSword_Anim_BP2v_3, bool K2Node_DynamicCast_bSuccess_1);
};

}


