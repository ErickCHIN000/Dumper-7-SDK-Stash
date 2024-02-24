#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x30 - 0x30)
// BlueprintGeneratedClass MainCharMoveAttackWindow.MainCharMoveAttackWindow_C
class UMainCharMoveAttackWindow_C : public UAnimNotifyState
{
public:

	static class UClass* StaticClass();
	static class UMainCharMoveAttackWindow_C* GetDefaultObj();

	bool Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, bool CallFunc_BooleanOR_ReturnValue);
	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base);
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base);
};

}


