#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x30 - 0x30)
// BlueprintGeneratedClass ANS_IgnoreRootMotion.ANS_IgnoreRootMotion_C
class UANS_IgnoreRootMotion_C : public UAnimNotifyState
{
public:

	static class UClass* StaticClass();
	static class UANS_IgnoreRootMotion_C* GetDefaultObj();

	class FString GetNotifyName();
	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue);
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue);
};

}


