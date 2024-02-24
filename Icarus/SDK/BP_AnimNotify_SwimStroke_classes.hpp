#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x38 - 0x38)
// BlueprintGeneratedClass BP_AnimNotify_SwimStroke.BP_AnimNotify_SwimStroke_C
class UBP_AnimNotify_SwimStroke_C : public UAnimNotify
{
public:

	static class UClass* StaticClass();
	static class UBP_AnimNotify_SwimStroke_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class AActor* CallFunc_GetOwner_ReturnValue, TScriptInterface<class IBP_PlayerAudio_AnimNotify_Interface_C> K2Node_DynamicCast_AsBP_Player_Audio_Anim_Notify_Interface, bool K2Node_DynamicCast_bSuccess);
};

}


