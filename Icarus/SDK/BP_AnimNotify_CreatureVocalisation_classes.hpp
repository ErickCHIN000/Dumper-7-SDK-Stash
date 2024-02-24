#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x39 - 0x38)
// BlueprintGeneratedClass BP_AnimNotify_CreatureVocalisation.BP_AnimNotify_CreatureVocalisation_C
class UBP_AnimNotify_CreatureVocalisation_C : public UAnimNotify
{
public:
	enum class EAIVocalisationType               Type;                                              // 0x38(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_AnimNotify_CreatureVocalisation_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, TScriptInterface<class IBP_CreatureAudio_AnimNotify_Interface_C> K2Node_DynamicCast_AsBP_Creature_Audio_Anim_Notify_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_DoesImplementInterface_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue);
};

}


