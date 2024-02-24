#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF8 (0x4A8 - 0x3B0)
// BlueprintGeneratedClass BP_Music_Manager.BP_Music_Manager_C
class UBP_Music_Manager_C : public UMusicManager
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_Combat_Analyser_C*                 LocalPlayerCombatAnalyser;                         // 0x3B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             DayWindow;                                         // 0x3C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             NightWindow;                                       // 0x3D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsDay;                                             // 0x3E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsNight;                                           // 0x3E1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Combat_Delay_Cancelled;                            // 0x3E2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3589[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       Combat_Cooldown_Time;                              // 0x3E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkStateValue*                         Current_Mood_State;                                // 0x3F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	double                                       EstateStateChangeTime;                             // 0x3F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkStateValue*                         BiomeDefaultMusicState;                            // 0x400(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<struct FS_CombatMusicBucket>          CombatMusicBuckets;                                // 0x408(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<struct FTimerHandle>                  FunctionTimers;                                    // 0x418(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FS_CombatMusicBucket                  CurrentCombatMusicBucket;                          // 0x428(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAkStateValue*                         PortalLoadingMusicState;                           // 0x450(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAkStateValue*                         PocketwatchLoadingMusicState;                      // 0x458(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAkStateValue*                         MainMenuLoadingMusicState;                         // 0x460(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class UAkSwitchValue*>                LoadSwitches;                                      // 0x468(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UBP_Ambience_Manager_C*                CachedBPAmbienceManager;                           // 0x478(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            LocalPlayerDowned;                                 // 0x480(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            LocalPlayerRevived;                                // 0x490(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UAkComponent*                          AkComponent;                                       // 0x4A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Music_Manager_C* GetDefaultObj();

	void CREATEDELEGATE_PROXYFUNCTION_1(struct FGameplayTag& Tag, int32 Count);
	void CREATEDELEGATE_PROXYFUNCTION_0(float CombatIntensity, double CallFunc_OnCombatIntensityUpdated_CombatIntensity_ImplicitCast);
	void TriggerMinorQuestCompleteSFX(FDelegateProperty_ Temp_delegate_Variable, class UAkComponent* CallFunc_SpawnAkComponentAtLocation_ReturnValue, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, int32 CallFunc_PostAkEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void HandleLoadingScreenVisibilityChanged(bool LoadingScreenVisibility, bool CallFunc_TrySetMusicState_ReturnValue);
	void OnQuestCompleted(struct FQuestAssetReference& QuestRowHandle, const struct FQuest& CallFunc_GetQuestDataFromQuestAssetReference_OutData, bool CallFunc_GetQuestDataFromQuestAssetReference_ReturnValue, bool CallFunc_TryTriggerVaultQuestCompletedStinger_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_TryTriggerQuestCompletedStinger_ReturnValue);
	void OnQuestAccepted(struct FQuestAssetReference& QuestRowHandle, const struct FQuest& CallFunc_GetQuestDataFromQuestAssetReference_OutData, bool CallFunc_GetQuestDataFromQuestAssetReference_ReturnValue, bool CallFunc_TryTriggerVaultQuestStartedStinger_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_TryTriggerQuestStartedStinger_ReturnValue);
	void UnbindQuestNotifications(class APlayerState* PlayerState, TScriptInterface<class IQuestTrackerInterface> QuestTracker, bool CallFunc_IsDedicatedServer_ReturnValue, TScriptInterface<class IQuestTrackerProviderInterface> K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IQuestTrackerInterface> CallFunc_GetQuestTracker_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_1);
	void BindQuestNotifications(TScriptInterface<class IQuestTrackerInterface> QuestTracker, class APlayerState* PlayerState, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IQuestTrackerProviderInterface> K2Node_DynamicCast_AsQuest_Tracker_Provider_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IQuestTrackerInterface> CallFunc_GetQuestTracker_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_1);
	void CheckNightmareRealm(bool* IsNightmareRealm, const struct FRealmPlacementRequirement& NightmareRealm, class UObject* Temp_object_Variable, bool CallFunc_DoesRealmMeetRequirement_RequirementMet);
	void UpdateCombatBucketCooldown(class UAkStateValue* MusicState, TArray<struct FS_CombatMusicBucket>& CallFunc_GetCombatBucketsFromMusicState_Buckets, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, const struct FS_CombatMusicBucket& CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void UpdateLastPlayedTimeOnCombatMusicBucket(const struct FS_CombatMusicBucket& MusicBucket, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, double CallFunc_GetRealTimeSeconds_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FS_CombatMusicBucket& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void GetCombatBucketsFromMusicState(class UAkStateValue* MusicState, TArray<struct FS_CombatMusicBucket>* Buckets, const TArray<struct FS_CombatMusicBucket>& FoundBuckets, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FS_CombatMusicBucket& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
	void GetMusicStateFromCombatBucket(const struct FS_CombatMusicBucket& CombatBucket, class UAkStateValue** MusicState, double CallFunc_Add_DoubleDouble_ReturnValue, bool Temp_bool_Variable, double CallFunc_GetRealTimeSeconds_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, class UAkStateValue* K2Node_Select_Default);
	void RevokeFunctionTimers(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FTimerHandle& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void HandlePlayerDeath(int32 Temp_int_Variable, int32 Temp_int_Variable_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, bool CallFunc_NotEqual_ByteByte_ReturnValue, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void CombatMusicBucketsContainsBucket(class UActorAudioBucket* BucketToFind, bool* Found, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FS_CombatMusicBucket& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void OnCombatIntensityUpdated(double CombatIntensity, bool CallFunc_IsDedicatedServer_ReturnValue);
	void UpdateCombatMusicRTPCs(double CombatIntensity, double LocalPlayerHPPercent, class UGlobalMusicManager* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_GetHealthPercentage_bSuccess, double CallFunc_GetHealthPercentage_HealthPercentage, double CallFunc_FClamp_ReturnValue, class UGlobalMusicManager* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, float CallFunc_SetMusicRTPC_Value_ImplicitCast, float CallFunc_SetMusicRTPC_Value_ImplicitCast_1);
	void HandleGlobalMusicCallback(enum class EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo, bool K2Node_SwitchEnum_CmpSuccess, class UAkMusicSyncCallbackInfo* K2Node_DynamicCast_AsAk_Music_Sync_Callback_Info, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchString_CmpSuccess);
	void IsEstateStateOffCooldown(bool* bOffCooldown, double EstateChangeDelay, double CallFunc_GetTimeSeconds_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue);
	void Update_Estate_State(bool CallFunc_IsLocalPlayerVisitingEstate_ReturnValue, bool CallFunc_TrySetMusicState_ReturnValue, double CallFunc_GetTimeSeconds_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsEstateStateOffCooldown_bOffCooldown, bool CallFunc_IsValid_ReturnValue_1);
	void HandleLocalPlayerTagsChanged(const struct FGameplayTag& ChangedTag, int32 TagCount, bool CallFunc_IsMusicStateActive_ReturnValue, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, bool CallFunc_IsMusicStateActive_ReturnValue_1, bool CallFunc_GetFloatAttributeFromAbilitySystemComponent_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttributeFromAbilitySystemComponent_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue, bool CallFunc_MatchesAnyTags_ReturnValue, bool CallFunc_TrySetMusicState_ReturnValue, bool CallFunc_TrySetMusicState_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, double CallFunc_Greater_DoubleDouble_A_ImplicitCast);
	void GetBPAmbienceManager(class UBP_Ambience_Manager_C** AmbienceManager, class UAmbienceManager* CallFunc_GetAmbienceManager_ReturnValue, class UBP_Ambience_Manager_C* K2Node_DynamicCast_AsBP_Ambience_Manager, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void UpdateMoodScale(class UAkStateValue* Temp_object_Variable, class UAkStateValue* Temp_object_Variable_1, bool Temp_bool_Variable, class UBP_Ambience_Manager_C* CallFunc_GetBPAmbienceManager_AmbienceManager, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GreaterEqual_DoubleDouble_ReturnValue, class UAkStateValue* K2Node_Select_Default, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
	void CheckArrivalRealm(bool* IsArrivalRealm, const struct FRealmPlacementRequirement& ArrivalRealm, class UObject* Temp_object_Variable, bool CallFunc_DoesRealmMeetRequirement_RequirementMet);
	void Get_Active_Combat_Bucket(bool* InCombat, struct FS_CombatMusicBucket* CombatBucket, const struct FS_CombatMusicBucket& CurrentBucket, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FS_CombatMusicBucket& CallFunc_Array_Get_Item, int32 CallFunc_Is_In_Combat_Score, bool CallFunc_Is_In_Combat_Combat, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void Update_Combat_State(bool In_Combat, const struct FS_CombatMusicBucket& CombatBucket, class UAkStateValue* CallFunc_GetMusicStateFromCombatBucket_MusicState, bool CallFunc_TrySetMusicState_ReturnValue, enum class EMusicPriority Temp_byte_Variable, bool CallFunc_Map_Contains_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void Bind_Callbacks(class UNWXGameInstance* GameInstance, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsValid_ReturnValue_3, class UGlobalMusicManager* CallFunc_GetGameInstanceSubsystem_ReturnValue);
	void Handle_Spawn_Location(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_2, class UBP_Character_Audio_Component_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_TrySetMusicState_ReturnValue, bool CallFunc_IsValid_ReturnValue_2);
	void HandlePlayerSpawn(class ANWXCharacter* PlayerCharacter, bool CallFunc_IsDedicatedServer_ReturnValue, class AController* CallFunc_GetController_ReturnValue, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller, bool K2Node_DynamicCast_bSuccess, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class UBP_Combat_Analyser_C* CallFunc_GetComponentByClass_ReturnValue, class UNWXAbilitySystemComponent* K2Node_DynamicCast_AsNWXAbility_System_Component, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue);
	void UpdateTimeOfDay(class UBP_Ambience_Manager_C* CallFunc_GetBPAmbienceManager_AmbienceManager, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetTimeOfDay_ReturnValue, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, double CallFunc_BreakVector2D_X_1, double CallFunc_BreakVector2D_Y_1, bool CallFunc_InRange_FloatFloat_ReturnValue, bool CallFunc_InRange_FloatFloat_ReturnValue_1, double CallFunc_InRange_FloatFloat_Value_ImplicitCast, double CallFunc_InRange_FloatFloat_Value_ImplicitCast_1);
	void GetBiome(class ANWXWorldSettings* CallFunc_GetWorldSettings_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void EnteredAstrarium();
	void EnteredCalcularium();
	void ExitedAstrarium();
	void ExitedCalcularium();
	void EnteredCalculariumHall();
	void ExitedCalculariumHall();
	void EnteredLovelaceOffice();
	void ExitedLovelaceOffice();
	void EnteredMortagPub();
	void ExitedMortagPub();
	void On_Combat_Updated();
	void EnteredBiome(enum class EBiomeID Biome);
	void EnteredPortal(class UAkStateValue* LoadingMusicStateOverride);
	void EnteredMainMenu();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void LocalPlayerSpawned(class ANWXCharacter* LocalPlayer);
	void ExecuteUbergraph_BP_Music_Manager(int32 EntryPoint, bool Temp_bool_Variable, bool CallFunc_TrySetMusicState_ReturnValue, bool CallFunc_TrySetMusicState_ReturnValue_1, bool CallFunc_TrySetMusicState_ReturnValue_2, bool CallFunc_TrySetMusicState_ReturnValue_3, bool CallFunc_TrySetMusicState_ReturnValue_4, bool CallFunc_TrySetMusicState_ReturnValue_5, bool CallFunc_TrySetMusicState_ReturnValue_6, bool CallFunc_TrySetMusicState_ReturnValue_7, bool CallFunc_TrySetMusicState_ReturnValue_8, bool CallFunc_TrySetMusicState_ReturnValue_9, bool CallFunc_TrySetMusicState_ReturnValue_10, bool CallFunc_TrySetMusicState_ReturnValue_11, bool CallFunc_TrySetMusicState_ReturnValue_12, bool CallFunc_Get_Active_Combat_Bucket_InCombat, const struct FS_CombatMusicBucket& CallFunc_Get_Active_Combat_Bucket_CombatBucket, bool CallFunc_Not_PreBool_ReturnValue, class UAkStateValue* Temp_object_Variable, class UAkStateValue* Temp_object_Variable_1, bool Temp_bool_Variable_1, enum class EBiomeID K2Node_CustomEvent_Biome, class UAkStateValue* K2Node_CustomEvent_LoadingMusicStateOverride, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_TrySetMusicState_ReturnValue_13, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool K2Node_SwitchEnum_CmpSuccess_1, class ANWXCharacter* K2Node_Event_LocalPlayer, class UAkStateValue* Temp_object_Variable_2, class UAkStateValue* Temp_object_Variable_3, bool CallFunc_TrySetMusicState_ReturnValue_14, bool CallFunc_TrySetMusicState_ReturnValue_15, bool CallFunc_CheckNightmareRealm_IsNightmareRealm, bool CallFunc_TrySetMusicState_ReturnValue_16, bool CallFunc_CheckArrivalRealm_IsArrivalRealm, bool Temp_bool_Variable_2, bool CallFunc_CheckArrivalRealm_IsArrivalRealm_1, bool CallFunc_CheckArrivalRealm_IsArrivalRealm_2, class UAkStateValue* K2Node_Select_Default, class UAkStateValue* K2Node_Select_Default_1, class UAkStateValue* Temp_object_Variable_4, class UAkStateValue* Temp_object_Variable_5, class UAkStateValue* K2Node_Select_Default_2, class UGlobalAudioSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, float CallFunc_RetriggerableDelay_Duration_ImplicitCast);
	void LocalPlayerRevived__DelegateSignature();
	void LocalPlayerDowned__DelegateSignature();
};

}


