#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x34 - 0x30)
// BlueprintGeneratedClass RALS_OverlayOverride_NotifyState.RALS_OverlayOverride_NotifyState_C
class URALS_OverlayOverride_NotifyState_C : public UAnimNotifyState
{
public:
	int32                                        OverlayOverrideState;                              // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class URALS_OverlayOverride_NotifyState_C* GetDefaultObj();

	class FString GetNotifyName(const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, TScriptInterface<class IRALS_Animation_BPI_C> K2Node_DynamicCast_AsRALS_Animation_BPI, bool K2Node_DynamicCast_bSuccess);
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, struct FAnimNotifyEventReference& EventReference, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, TScriptInterface<class IRALS_Animation_BPI_C> K2Node_DynamicCast_AsRALS_Animation_BPI, bool K2Node_DynamicCast_bSuccess);
};

}


