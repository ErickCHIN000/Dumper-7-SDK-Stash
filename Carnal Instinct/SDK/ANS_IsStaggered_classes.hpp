#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x30 - 0x30)
// BlueprintGeneratedClass ANS_IsStaggered.ANS_IsStaggered_C
class UANS_IsStaggered_C : public UAnimNotifyState
{
public:

	static class UClass* StaticClass();
	static class UANS_IsStaggered_C* GetDefaultObj();

	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class AActor* CallFunc_GetOwner_ReturnValue, class UStaggerComponent_C* CallFunc_GetComponentByClass_ReturnValue);
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, class AActor* CallFunc_GetOwner_ReturnValue, class UStaggerComponent_C* CallFunc_GetComponentByClass_ReturnValue);
	class FString GetNotifyName();
};

}


