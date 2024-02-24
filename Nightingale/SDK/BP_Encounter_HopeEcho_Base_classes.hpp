#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC8 (0x368 - 0x2A0)
// BlueprintGeneratedClass BP_Encounter_HopeEcho_Base.BP_Encounter_HopeEcho_Base_C
class ABP_Encounter_HopeEcho_Base_C : public AHopeEcho
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_InteractableComponent_C*           BP_InteractableComponent;                          // 0x2A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_HopeEchoAudioComponent_C*          BP_HopeEchoAudioComponent;                         // 0x2B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Hope_Echo_Mesh;                                    // 0x2B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UScopedAkComponent*                    ScopedAkComponent;                                 // 0x2C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     Hope_Echo_VFX;                                     // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                        Blacklisted_Player_IDs;                            // 0x2D8(0x10)(Edit, BlueprintVisible, Net, DisableEditOnInstance, SaveGame)
	float                                        Hope_Echo_Lifetime;                                // 0x2E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_66FB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          Lifetime_Timer;                                    // 0x2F0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        Lifetime_Timer_Update_Interval;                    // 0x2F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_670C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          Lifetime_Interval_Timer;                           // 0x300(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        Hope_Echo_Quality_Level;                           // 0x308(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Hope_Echo_Scale;                                   // 0x30C(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     Glyph_Symbol_VFX;                                  // 0x310(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        Glyph_Symbol_Cycle_Time;                           // 0x318(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_673D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          Glyph_Cycle_Timer;                                 // 0x320(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        Glyph_Number;                                      // 0x328(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_674A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       HopeEchoEscapeDuration;                            // 0x330(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEncounterRewardType              Encounter_Reward_Type;                             // 0x338(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bFinishedSpawning;                                 // 0x339(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6764[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          AdvertiseLoopTableRow;                             // 0x33C(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          AdvertiseEndTableRow;                              // 0x344(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          AdvertiseSymbolTableRow;                           // 0x34C(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          AdvertiseEscapeTableRow;                           // 0x354(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bSuccessfullySpawned;                              // 0x35C(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_678D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Spawn_Delay;                                       // 0x360(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Escape_Delay;                                      // 0x364(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Encounter_HopeEcho_Base_C* GetDefaultObj();

	bool ShouldOptOutOfPersistenceStore();
	bool GetInteractionTag(struct FGameplayTag* InteractionTag);
	void CanQueryInteractable(bool* Can_Query);
	void HoldInteractionAvailable(bool* bAvailable);
	void IsInteractionDisabled(class AController* Controller, const struct FInteractionData& InteractionData, bool* bIsDisabled, class FString* DisabledText);
	void DoesHaveResourceType(int32 HitId, enum class EResourceType DesiredResourceType, bool* bHasResourceType);
	void CanInteractWithActor(class AController* Controller, const struct FInteractionData& InteractionData, bool* InteractAvailable, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_Should_Local_Player_Receive_Hope_Echo_bShouldReceive, bool CallFunc_BooleanAND_ReturnValue);
	void ReturnMeshToHighlight(const struct FInteractionData& InteractionData, TArray<class UStaticMeshComponent*>* StaticMesh_to_Highlight, TArray<class USkeletalMeshComponent*>* SkeletalMesh_to_Highlight, bool* Hostile_, enum class EItemQuality* Quality);
	void InteractPressed(bool* Success);
	void InteractReleased(bool* Success);
	void InteractionRequiresClientOnly(class AController* Controller, bool* RequiresClientAction);
	void GetInteractText(const struct FInteractionData& InteractionData, class FString* InteractText);
	void GetInteractIcon(const struct FInteractionData& InteractionData, TSoftObjectPtr<class UTexture2D>* Icon);
	void IsHarvestable(const struct FInteractionData& Interaction, bool* IsHarvestable);
	void OnRep_bSuccessfullySpawned(bool CallFunc_HasAuthority_ReturnValue, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, class APawn* CallFunc_K2_GetPawn_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ABP_GameState_C* K2Node_DynamicCast_AsBP_Game_State, bool K2Node_DynamicCast_bSuccess);
	void Restore_Rewards_On_Persistence();
	void Cycle_Through_Glyphs();
	void Should_Local_Player_Receive_Hope_Echo(bool* bShouldReceive, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_Is_Local_Player_Blacklisted_bBlacklisted);
	void Update_Lifetime_Timer(float CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue);
	void Is_Local_Player_Blacklisted(bool* bBlacklisted, bool CallFunc_HasAuthority_ReturnValue, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController, class APawn* CallFunc_K2_GetPawn_ReturnValue, TScriptInterface<class IBPI_PlayerAccountInfo_C> K2Node_DynamicCast_AsBPI_Player_Account_Info, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetPersistentUniqueIdFromPawn_PersistentId, class ANWXPlayerController* CallFunc_GetLocalPlayerController_LocalPlayerController_1, int32 CallFunc_Array_Find_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void Spawn_Hope_Echo_Escape_AVFX(bool CallFunc_HasAuthority_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_TriggerSpawnInAudio_TravelTime_ImplicitCast);
	void Create_New_Hope_Echo_AVFX(const struct FGameplayTag& Affinity_Table_Row, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FS_EncounterAVFXParams& K2Node_MakeStruct_S_EncounterAVFXParams, bool CallFunc_CreateEncounterAVFX_bNiagaraSystemSpawned, class UNiagaraComponent* CallFunc_CreateEncounterAVFX_NiagaraSystem);
	void OnLinkedReferencesRestored();
	void CallCrossServerSendGameplayEventToActor(struct FGameplayTag& EventTag, struct FGameplayEventData& Payload);
	void CrossServerSendGameplayEventToActor(struct FGameplayTag& EventTag, struct FGameplayEventData& Payload);
	void PerformClientSideInteraction(class AController* Controller);
	void Destroy_Hope_Echo();
	void Add_Blacklisted_Player(const class FString& Local_Player_ID);
	void Receive_Hope_Echo_on_Owning_Client();
	void PerformDirtyRealmReset();
	void Spawn_Hope_Echo_Glyph_Symbol(int32 Glyph_Number);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void Register_Dirty_Realm_Actor();
	void SSMReady(class AManagerBase* Manager, bool bIsReady);
	void OnPersistentDataRestored();
	void Spawn_Hope_Echo_Loop_AVFX();
	void Clear_Hope_Echo_AVFX();
	void Initialize(class AEncounterBase* SpawningEncounter, enum class EEncounterRewardType EncounterRewardType);
	void Initialize_on_All_Clients();
	void Initialize_Hope_Echo();
	void ExecuteUbergraph_BP_Encounter_HopeEcho_Base(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, const struct FGameplayTag& K2Node_Event_EventTag_1, const struct FGameplayEventData& K2Node_Event_Payload_1, const struct FGameplayTag& K2Node_Event_EventTag, const struct FGameplayEventData& K2Node_Event_Payload, class AController* K2Node_Event_Controller, bool CallFunc_Should_Local_Player_Receive_Hope_Echo_bShouldReceive, const class FString& K2Node_CustomEvent_Local_Player_ID, int32 CallFunc_Array_AddUnique_ReturnValue, int32 K2Node_CustomEvent_Glyph_Number, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FS_EncounterAVFXParams& K2Node_MakeStruct_S_EncounterAVFXParams, bool CallFunc_Should_Local_Player_Receive_Hope_Echo_bShouldReceive_1, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue_1, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_IsValid_ReturnValue_2, class AManagerBase* K2Node_CustomEvent_Manager, bool K2Node_CustomEvent_bIsReady, TSubclassOf<class IInterface> Temp_class_Variable, class UObject* CallFunc_FindFirstImplementor_ReturnValue, TScriptInterface<class IEncounterManagerInterface> K2Node_DynamicCast_AsEncounter_Manager_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_3, TScriptInterface<class IEncounterDirtyResetInterface> CallFunc_RegisterDirtyRealmResettable_Resettable_CastInput, bool CallFunc_IsValid_ReturnValue_4, TSubclassOf<class AManagerBase> Temp_class_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_2, bool CallFunc_HasAuthority_ReturnValue_1, class AEncounterBase* K2Node_Event_SpawningEncounter, enum class EEncounterRewardType K2Node_Event_EncounterRewardType, bool CallFunc_CreateEncounterAVFX_bNiagaraSystemSpawned, class UNiagaraComponent* CallFunc_CreateEncounterAVFX_NiagaraSystem, bool CallFunc_HasAuthority_ReturnValue_2, bool CallFunc_HasAuthority_ReturnValue_3, bool CallFunc_HasAuthority_ReturnValue_4, bool CallFunc_HasAuthority_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_5);
};

}


