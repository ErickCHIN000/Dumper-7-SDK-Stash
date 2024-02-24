#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x2B0 - 0x280)
// BlueprintGeneratedClass Action_Shaman_02_Base.Action_Shaman_02_Base_C
class UAction_Shaman_02_Base_C : public UOakAction_Anim_ActionAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(Transient, DuplicateTransient)
	class UBPEventHub_PlayerCharacter_C*         PlayerEventHub;                                    // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       VFX_Left_FirstPerson;                              // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       VFX_Left_ThirdPerson;                              // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                PlayerActor;                                       // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           SkillActivateAudio;                                // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAction_Shaman_02_Base_C* GetDefaultObj();

	void OnBegin(class AActor* Actor);
	void PlayFeedback();
	void Shaman_02_Spawn();
	void OnServerBegin(class AActor* Actor);
	void ExecuteUbergraph_Action_Shaman_02_Base(int32 EntryPoint, class AActor* K2Node_Event_Actor1, class AActor* CallFunc_K2_GetActor_ReturnValue, class UOakFirstPersonComponent* CallFunc_GetComponentByClass_ReturnValue, class AActor* CallFunc_K2_GetActor_ReturnValue1, class UGbxSkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue1, class AActor* CallFunc_K2_GetActor_ReturnValue2, bool CallFunc_IsServer_ReturnValue, class APlayerController* CallFunc_GetAssociatedPlayerController_ReturnValue, class AActor* CallFunc_K2_GetActor_ReturnValue3, class AActor* K2Node_Event_Actor, class UOakPlayerAbilityManagerComponent* CallFunc_GetComponentByClass_ReturnValue2, class UBPEventHub_PlayerCharacter_C* K2Node_DynamicCast_AsBPEvent_Hub_Player_Character, bool K2Node_DynamicCast_bSuccess, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue1, const struct FWwisePlaybackInstance& CallFunc_PostAttachedEvent_ReturnValue);
};

}


