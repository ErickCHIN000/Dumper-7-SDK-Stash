#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x1228 - 0x11F0)
// BlueprintGeneratedClass LightBrigandBase_Guitar.LightBrigandBase_Guitar_C
class ALightBrigandBase_Guitar_C : public ALightBrigandBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x11F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       Theorbo_Cue;                                       // 0x11F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Guitar;                                            // 0x1200(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        FadeInGuitar_Opacity_E24766BA45BCD4994BE88FB79CD81EB0; // 0x1208(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                FadeInGuitar__Direction_E24766BA45BCD4994BE88FB79CD81EB0; // 0x120C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1236[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    FadeInGuitar;                                      // 0x1210(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GameTimeLastHit;                                   // 0x1218(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasGuitarBeenDropped_;                             // 0x121C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Use_Custom_Attenuation;                            // 0x121D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1241[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundAttenuation*                     Custom_Atteunation;                                // 0x1220(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ALightBrigandBase_Guitar_C* GetDefaultObj();

	void SetLuteSound(bool* IsValid, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void FadeInGuitar__FinishedFunc();
	void FadeInGuitar__UpdateFunc();
	void OnNotifyEnd_A567B98F44E869CE96445A8EA6A5B701(class FName NotifyName);
	void OnNotifyBegin_A567B98F44E869CE96445A8EA6A5B701(class FName NotifyName);
	void OnInterrupted_A567B98F44E869CE96445A8EA6A5B701(class FName NotifyName);
	void OnBlendOut_A567B98F44E869CE96445A8EA6A5B701(class FName NotifyName);
	void OnCompleted_A567B98F44E869CE96445A8EA6A5B701(class FName NotifyName);
	void UpdateAggroPoseFromSpawner();
	void DropGuitar();
	void StopPlaying();
	void SetDistanceCheckTimer();
	void AggroAnimComplete();
	void AggroAnimInterrupted();
	void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void AggroOnPlayerDamage(class AActor* PlayerToAggro, bool bIsFromLute_);
	void JamHard(class USoundWave* PlayingSoundWave, float PlaybackPercent);
	void ReduceSightRadius();
	void BrigandJamAlong();
	void PlayerLuteAudioFadeOut(class USoundWave* PlayingSoundWave, float PlaybackPercent);
	void ReceiveBeginPlay();
	void FadeOutAudio();
	void FadeInAudio();
	void InitAfterSpawn(class AAdvancedEnemySpawner_C* SpawnerRef, class FName UniqueId, enum class ELevelPhases PhaseToSpawn, bool bPermanentlyDeadOnceKilled_, class APatrolPoint_C* PatrolPointA, bool bShouldWander_, class APatrolPoint_C* PatrolPointB, float AggroRadius, class ABP_TriggerOnEnemyAggro_C* TriggerToActivateOnAggro, bool ShouldPatrol_, const struct FTransform& SpawnTransform);
	void Set_Atteunation_settings();
	void JamHard_Unbind();
	void ExecuteUbergraph_LightBrigandBase_Guitar(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_4, class FName K2Node_CustomEvent_NotifyName, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName Temp_name_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class Abp_small_physics_prop_guitar_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, float K2Node_Event_Damage, class UDamageType* K2Node_Event_DamageType, class AController* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, class AActor* K2Node_Event_PlayerToAggro, bool K2Node_Event_bIsFromLute_, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, int32 CallFunc_GetItemFamiliarity_Value, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class USoundWave* K2Node_CustomEvent_PlayingSoundWave_1, float K2Node_CustomEvent_PlaybackPercent_1, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_IsPlayingParryRiposteReactOrDead__ReturnValue, class AController* CallFunc_GetController_ReturnValue, class AMyDetourCrowdAIController_C* K2Node_DynamicCast_AsMy_Detour_Crowd_AIController, bool K2Node_DynamicCast_bSuccess, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_1, class USoundWave* K2Node_CustomEvent_PlayingSoundWave, float K2Node_CustomEvent_PlaybackPercent, bool CallFunc_Less_FloatFloat_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, enum class EAudioComponentPlayState CallFunc_GetPlayState_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, class AAdvancedEnemySpawner_C* K2Node_Event_SpawnerRef, class FName K2Node_Event_UniqueID, enum class ELevelPhases K2Node_Event_PhaseToSpawn, bool K2Node_Event_bPermanentlyDeadOnceKilled_, class APatrolPoint_C* K2Node_Event_PatrolPointA, bool K2Node_Event_bShouldWander_, class APatrolPoint_C* K2Node_Event_PatrolPointB, float K2Node_Event_AggroRadius, class ABP_TriggerOnEnemyAggro_C* K2Node_Event_TriggerToActivateOnAggro, bool K2Node_Event_ShouldPatrol_, const struct FTransform& K2Node_Event_SpawnTransform, const class FString& CallFunc_Conv_BoolToString_ReturnValue, class ALightBrigandSpawner_Guitar_C* K2Node_DynamicCast_AsLight_Brigand_Spawner_Guitar, bool K2Node_DynamicCast_bSuccess_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const struct FSoundAttenuationSettings& K2Node_Select_Default, class FName K2Node_CustomEvent_NotifyName_1, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_2, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_3, bool CallFunc_IsValid_ReturnValue_3, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_4, bool CallFunc_IsValid_ReturnValue_4, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_IsValid_ReturnValue_5, class FName K2Node_CustomEvent_NotifyName_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName K2Node_CustomEvent_NotifyName_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, bool CallFunc_SetLuteSound_IsValid);
};

}


