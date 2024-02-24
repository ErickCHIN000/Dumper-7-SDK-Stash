#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x30 - 0x30)
// BlueprintGeneratedClass ANS_HillGiantRock.ANS_HillGiantRock_C
class UANS_HillGiantRock_C : public UAnimNotifyState
{
public:

	static class UClass* StaticClass();
	static class UANS_HillGiantRock_C* GetDefaultObj();

	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_Creature_Wildlife_HillGiant_C* K2Node_DynamicCast_AsBP_Creature_Wildlife_Hill_Giant, bool K2Node_DynamicCast_bSuccess);
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, struct FAnimNotifyEventReference& EventReference, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_Creature_Wildlife_HillGiant_C* K2Node_DynamicCast_AsBP_Creature_Wildlife_Hill_Giant, bool K2Node_DynamicCast_bSuccess);
};

}


