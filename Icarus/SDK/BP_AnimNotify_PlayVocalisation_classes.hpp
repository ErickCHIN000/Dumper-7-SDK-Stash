#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x50 - 0x38)
// BlueprintGeneratedClass BP_AnimNotify_PlayVocalisation.BP_AnimNotify_PlayVocalisation_C
class UBP_AnimNotify_PlayVocalisation_C : public UAnimNotify
{
public:
	struct FVocalisationsRowHandle               Vocalisation;                                      // 0x38(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_AnimNotify_PlayVocalisation_C* GetDefaultObj();

	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, class AActor* CallFunc_GetOwner_ReturnValue, class UVocalisationComponent* CallFunc_GetComponentByClass_ReturnValue, enum class EVocalisationPlayResult CallFunc_TryPlayVocalisation_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


