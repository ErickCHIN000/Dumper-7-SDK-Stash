#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x31 (0x2B1 - 0x280)
// BlueprintGeneratedClass Action_Shaman_01_Start.Action_Shaman_01_Start_C
class UAction_Shaman_01_Start_C : public UOakAction_Anim_ActionAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(Transient, DuplicateTransient)
	class UBPEventHub_PlayerCharacter_C*         PlayerEventHub;                                    // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       HandFX;                                            // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       HandFX_3rd;                                        // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                PlayerActor;                                       // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWwiseEvent*                           SkillActivateAudio;                                // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SkillActivated;                                    // 0x2B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UAction_Shaman_01_Start_C* GetDefaultObj();

	void OnServerBegin(class AActor* Actor);
	void Shaman_01_Spawn();
	void Shaman_01_SpawnFX();
	void OnBegin(class AActor* Actor);
	void OnEnd(enum class EGbxActionEndState ActionEndState, class AActor* Actor);
	void ExecuteUbergraph_Action_Shaman_01_Start(int32 EntryPoint, class AActor* CallFunc_K2_GetActor_ReturnValue, class UOakPlayerAbilityManagerComponent* CallFunc_GetComponentByClass_ReturnValue, class AActor* K2Node_Event_Actor2, class UBPEventHub_PlayerCharacter_C* K2Node_DynamicCast_AsBPEvent_Hub_Player_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsServer_ReturnValue1, class AActor* K2Node_Event_Actor1, class AActor* CallFunc_K2_GetActor_ReturnValue1, class UOakFirstPersonComponent* CallFunc_GetComponentByClass_ReturnValue1, class AActor* CallFunc_K2_GetActor_ReturnValue2, class UGbxSkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue2, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class AActor* CallFunc_K2_GetActor_ReturnValue3, class AActor* CallFunc_K2_GetActor_ReturnValue4, class UOakFirstPersonComponent* CallFunc_GetComponentByClass_ReturnValue3, class UGbxSkeletalMeshComponent* CallFunc_GetComponentByClass_ReturnValue4, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue2, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue3, const struct FWwisePlaybackInstance& CallFunc_PostAttachedEvent_ReturnValue, class APlayerController* CallFunc_GetAssociatedPlayerController_ReturnValue, enum class EGbxActionEndState K2Node_Event_ActionEndState, class AActor* K2Node_Event_Actor, bool K2Node_SwitchEnum_CmpSuccess);
};

}


