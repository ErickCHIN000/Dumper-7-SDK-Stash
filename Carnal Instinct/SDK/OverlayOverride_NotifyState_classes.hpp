#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x34 - 0x30)
// BlueprintGeneratedClass OverlayOverride_NotifyState.OverlayOverride_NotifyState_C
class UOverlayOverride_NotifyState_C : public UAnimNotifyState
{
public:
	int32                                        OverlayOverrideState;                              // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UOverlayOverride_NotifyState_C* GetDefaultObj();

	class FString GetNotifyName(const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, TScriptInterface<class IALS_Animation_BPI_C> K2Node_DynamicCast_AsALS_Animation_BPI, bool K2Node_DynamicCast_bSuccess);
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, TScriptInterface<class IALS_Animation_BPI_C> K2Node_DynamicCast_AsALS_Animation_BPI, bool K2Node_DynamicCast_bSuccess);
};

}


