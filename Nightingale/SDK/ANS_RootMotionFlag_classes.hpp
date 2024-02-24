#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x30 - 0x30)
// BlueprintGeneratedClass ANS_RootMotionFlag.ANS_RootMotionFlag_C
class UANS_RootMotionFlag_C : public UAnimNotifyState
{
public:

	static class UClass* StaticClass();
	static class UANS_RootMotionFlag_C* GetDefaultObj();

	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_AnimCharacter_C* K2Node_DynamicCast_AsBP_Anim_Character, bool K2Node_DynamicCast_bSuccess, enum class ENetRole CallFunc_GetLocalRole_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue);
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, struct FAnimNotifyEventReference& EventReference, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_AnimCharacter_C* K2Node_DynamicCast_AsBP_Anim_Character, bool K2Node_DynamicCast_bSuccess, enum class ENetRole CallFunc_GetLocalRole_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue);
};

}


