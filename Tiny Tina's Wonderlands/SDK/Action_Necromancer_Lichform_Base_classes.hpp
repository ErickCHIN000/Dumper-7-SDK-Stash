#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x288 - 0x280)
// BlueprintGeneratedClass Action_Necromancer_Lichform_Base.Action_Necromancer_Lichform_Base_C
class UAction_Necromancer_Lichform_Base_C : public UOakAction_Anim_ActionAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UAction_Necromancer_Lichform_Base_C* GetDefaultObj();

	void OnBegin(class AActor* Actor);
	void PlayFeedback();
	void OnEnd(enum class EGbxActionEndState ActionEndState, class AActor* Actor);
	void ExecuteUbergraph_Action_Necromancer_Lichform_Base(int32 EntryPoint, class UObject* CallFunc_K2_GetObjectRegisterValue_OutObject, bool CallFunc_K2_GetObjectRegisterValue_ReturnValue, class UActionSkill_Necro_LichForm_C* K2Node_DynamicCast_AsAction_Skill_Necro_Lich_Form, bool K2Node_DynamicCast_bSuccess, class AActor* K2Node_Event_Actor1, class AActor* CallFunc_K2_GetActor_ReturnValue, class AActor* CallFunc_K2_GetActor_ReturnValue1, class UOakFirstPersonComponent* CallFunc_GetComponentByClass_ReturnValue, class UGbxSkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue1, class AActor* CallFunc_K2_GetActor_ReturnValue2, enum class EGbxActionEndState K2Node_Event_ActionEndState, class AActor* K2Node_Event_Actor, class APlayerController* CallFunc_GetAssociatedPlayerController_ReturnValue);
};

}


