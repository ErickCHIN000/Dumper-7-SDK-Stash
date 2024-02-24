#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x30 - 0x30)
// BlueprintGeneratedClass StoneSkin.StoneSkin_C
class UStoneSkin_C : public UAnimNotifyState
{
public:

	static class UClass* StaticClass();
	static class UStoneSkin_C* GetDefaultObj();

	bool Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime);
	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class AActor* CallFunc_GetOwner_ReturnValue, TScriptInterface<class IEnemyCommonInterface_C> K2Node_DynamicCast_AsEnemy_Common_Interface, bool K2Node_DynamicCast_bSuccess);
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, class AActor* CallFunc_GetOwner_ReturnValue, TScriptInterface<class IEnemyCommonInterface_C> K2Node_DynamicCast_AsEnemy_Common_Interface, bool K2Node_DynamicCast_bSuccess, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess_1);
};

}


