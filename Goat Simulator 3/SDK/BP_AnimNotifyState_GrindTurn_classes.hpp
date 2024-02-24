#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x30 - 0x30)
// BlueprintGeneratedClass BP_AnimNotifyState_GrindTurn.BP_AnimNotifyState_GrindTurn_C
class UBP_AnimNotifyState_GrindTurn_C : public UAnimNotifyState
{
public:

	static class UClass* StaticClass();
	static class UBP_AnimNotifyState_GrindTurn_C* GetDefaultObj();

	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class AActor* CallFunc_GetOwner_ReturnValue, class AGGGoat* K2Node_DynamicCast_AsGGGoat, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsGrinding_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, class AActor* CallFunc_GetOwner_ReturnValue, class AGGGoat* K2Node_DynamicCast_AsGGGoat, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
};

}


