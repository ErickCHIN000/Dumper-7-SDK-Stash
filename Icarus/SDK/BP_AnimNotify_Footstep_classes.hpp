#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2 (0x3A - 0x38)
// BlueprintGeneratedClass BP_AnimNotify_Footstep.BP_AnimNotify_Footstep_C
class UBP_AnimNotify_Footstep_C : public UAnimNotify
{
public:
	enum class EFootstepType                     Footstep_Type;                                     // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPlayerAudioStance                Player_Stance;                                     // 0x39(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_AnimNotify_Footstep_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class AActor* CallFunc_GetOwner_ReturnValue, TScriptInterface<class IBP_PlayerAudio_AnimNotify_Interface_C> K2Node_DynamicCast_AsBP_Player_Audio_Anim_Notify_Interface, bool K2Node_DynamicCast_bSuccess);
};

}


