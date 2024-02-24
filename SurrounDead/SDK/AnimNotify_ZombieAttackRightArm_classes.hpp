#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x30 - 0x30)
// BlueprintGeneratedClass AnimNotify_ZombieAttackRightArm.AnimNotify_ZombieAttackRightArm_C
class UAnimNotify_ZombieAttackRightArm_C : public UAnimNotifyState
{
public:

	static class UClass* StaticClass();
	static class UAnimNotify_ZombieAttackRightArm_C* GetDefaultObj();

	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_MasterZombie_C* K2Node_DynamicCast_AsBP_Master_Zombie, bool K2Node_DynamicCast_bSuccess);
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, struct FAnimNotifyEventReference& EventReference, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_MasterZombie_C* K2Node_DynamicCast_AsBP_Master_Zombie, bool K2Node_DynamicCast_bSuccess, double CallFunc_GetWorldDeltaSeconds_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, float CallFunc_K2_SetTimer_Time_ImplicitCast);
};

}


