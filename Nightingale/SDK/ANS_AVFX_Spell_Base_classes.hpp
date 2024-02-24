#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1E (0x56 - 0x38)
// BlueprintGeneratedClass ANS_AVFX_Spell_Base.ANS_AVFX_Spell_Base_C
class UANS_AVFX_Spell_Base_C : public UAnimNotifyState_FPTP
{
public:
	bool                                         HandleNotifyTick;                                  // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1C67[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          SpellcastingStateTag;                              // 0x3C(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          AnimPreviewSpell;                                  // 0x44(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          AnimPreviewItem;                                   // 0x4C(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	bool                                         IsSFXNotify;                                       // 0x54(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsVFXNotify;                                       // 0x55(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UANS_AVFX_Spell_Base_C* GetDefaultObj();

	void GetSpellAVFXComp(class USkeletalMeshComponent* MeshComponent, class UBP_SpellAVFXComponent_C** SpellAVFXComp, class UBP_SpellAVFXComponent_C* FoundComponent, class AActor* Owner, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UBP_SpellAVFXComponent_C* CallFunc_GetComponentByClass_ReturnValue, class UBP_SpellAVFXComponent_C* CallFunc_AddComponentByClass_ReturnValue);
	bool Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime, struct FAnimNotifyEventReference& EventReference, class UBP_SpellAVFXComponent_C* SpellAVFXComp, bool CallFunc_Received_NotifyTick_ReturnValue, bool CallFunc_IsInEditorPreview_ReturnValue, class UBP_SpellAVFXComponent_C* CallFunc_GetSpellAVFXComp_SpellAVFXComp, bool CallFunc_IsValid_ReturnValue);
	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, class UBP_SpellAVFXComponent_C* SpellAVFXComp, bool CallFunc_Received_NotifyEnd_ReturnValue, bool CallFunc_IsInEditorPreview_ReturnValue, class UBP_SpellAVFXComponent_C* CallFunc_GetSpellAVFXComp_SpellAVFXComp, bool CallFunc_IsValid_ReturnValue);
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, struct FAnimNotifyEventReference& EventReference, class UBP_SpellAVFXComponent_C* SpellAVFXComp, bool CallFunc_Received_NotifyBegin_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UBP_SpellAVFXComponent_C* CallFunc_GetSpellAVFXComp_SpellAVFXComp, bool CallFunc_IsInEditorPreview_ReturnValue);
};

}


