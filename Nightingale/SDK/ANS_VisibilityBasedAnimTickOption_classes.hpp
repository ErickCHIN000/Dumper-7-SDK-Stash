#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x31 - 0x30)
// BlueprintGeneratedClass ANS_VisibilityBasedAnimTickOption.ANS_VisibilityBasedAnimTickOption_C
class UANS_VisibilityBasedAnimTickOption_C : public UAnimNotifyState
{
public:
	enum class EVisibilityBasedAnimTickOption    VisibilityBasedAnimTickOption;                     // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UANS_VisibilityBasedAnimTickOption_C* GetDefaultObj();

	class FString GetNotifyName(const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue);
	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, class USkeletalMeshComponent* LMesh, class UBP_CreatureSocketTraceComponent_C* SocketTraceComponent);
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, struct FAnimNotifyEventReference& EventReference, class AActor* Actor, class UBP_CreatureSocketTraceComponent_C* SocketTraceComponent, const struct FS_CreatureKnockbackData& KnockbackData, class UAnimMontage* K2Node_DynamicCast_AsAnim_Montage, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ANWXAICharacter* K2Node_DynamicCast_AsNWXAICharacter, bool K2Node_DynamicCast_bSuccess_1);
};

}


