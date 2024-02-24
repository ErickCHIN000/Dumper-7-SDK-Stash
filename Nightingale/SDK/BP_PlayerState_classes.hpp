#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C8 (0x720 - 0x558)
// BlueprintGeneratedClass BP_PlayerState.BP_PlayerState_C
class ABP_PlayerState_C : public ANWXPlayerState
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x558(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBP_TutorialComponent_C*               BP_TutorialComponent;                              // 0x560(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DialoguePersistenceComponent_C*    Dialogue_Persistence;                              // 0x568(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_CodexTrackerComponent_C*           BP_CodexTrackerComponent;                          // 0x570(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_Music_Manager_C*                   BP_Music_Manager;                                  // 0x578(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_QuestTrackerComponent_C*           BP_QuestTrackerComponent;                          // 0x580(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAkComponent*                          Ak_UI;                                             // 0x588(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_UI_PersistenceComponent_C*         UI_Persistence;                                    // 0x590(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_DebugModeStateComponent_C*         BP_DebugModeState;                                 // 0x598(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_UIMenusComponent_C*                BP_UIMenusComponent;                               // 0x5A0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBP_CharacterAppearanceComponent_C*    BP_CharacterAppearanceComponent;                   // 0x5A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x5B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         bServerReady;                                      // 0x5B8(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7551[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            CharacterStatesUpdated;                            // 0x5C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<struct FS_CharacterStateEntry>        CharacterStatesList;                               // 0x5D0(0x10)(Edit, BlueprintVisible, Net, DisableEditOnInstance, RepNotify)
	FMulticastInlineDelegateProperty_            PlayerStateReady;                                  // 0x5E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OwnerReplicated;                                   // 0x5F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bClientReady;                                      // 0x600(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_DebugModes                      DebugMode;                                         // 0x601(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7574[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            TagGiven;                                          // 0x608(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            CreatureKilled;                                    // 0x618(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class ANWXPlayerStart*                       RespawnPoint;                                      // 0x628(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnRespawnPointSet;                                 // 0x630(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            StructureBlueprintPlaced;                          // 0x640(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            ResourceHarvested;                                 // 0x650(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            StructureCompleted;                                // 0x660(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            ItemDepositedWorldContainer;                       // 0x670(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FTimerHandle                          CheckControllerHandle;                             // 0x680(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnControllerFound;                                 // 0x688(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UObject*                               RecentItemsSaveGame;                               // 0x698(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnItemAbilityUsed;                                 // 0x6A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnPawnDamageReceived;                              // 0x6B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnPlayerInteraction;                               // 0x6C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            WeakpointHit;                                      // 0x6D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnGlyphReveal;                                     // 0x6E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnFishCaught;                                      // 0x6F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnInteractedWithPlayer;                            // 0x700(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnSpellCasted;                                     // 0x710(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class ABP_PlayerState_C* GetDefaultObj();

	class UMenusComponent* GetMenusComponent();
	TScriptInterface<class IQuestTrackerInterface> GetQuestTracker();
	void CallFishCaught(struct FFish& CaughtFish, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsServer_ReturnValue);
	void GetWeakpointComponent(bool* HasInterface, TScriptInterface<class IBPI_WeakPoint_C>* Interface);
	void GetPingInterface(bool* bHasInterface, TScriptInterface<class IBPI_Ping_C>* PingInterface);
	void GetBPPlayerController(class ABP_PlayerController_C** Player_Controller, class FText CallFunc_Conv_ObjectToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_IsValid_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class ABP_PlayerController_C* K2Node_DynamicCast_AsBP_Player_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1);
	void GetMapTracker(class UBP_MapTracker_C** MapTracker, class ABP_PlayerController_C* CallFunc_GetBPPlayerController_Player_Controller, bool CallFunc_IsValid_ReturnValue, class UBP_MapTracker_C* CallFunc_GetMapTracker_MapTrackerComponent, bool CallFunc_IsValid_ReturnValue_1);
	void GetGroupSystem(class UGroupComponentBase** GroupComponent);
	void GetDebugModeStateInterface(class UBP_DebugModeStateComponent_C** DebugModeState);
	void GetRespawnPoint(class ANWXPlayerStart** RespawnPoint);
	void GetOwningCharacter(bool* bSuccess, class ABP_AnimCharacter_C** Character, class AActor* CallFunc_GetOwner_ReturnValue, class APlayerController* K2Node_DynamicCast_AsPlayer_Controller, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, class ABP_AnimCharacter_C* K2Node_DynamicCast_AsBP_Anim_Character, bool K2Node_DynamicCast_bSuccess_1);
	void IsCharacterInStatus(enum class E_CharacterGameStatus CharacterState, bool* IsActive, bool Found, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FS_CharacterStateEntry& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void OnPawnRespawned();
	void OnCharacterStatesChanged(const struct FS_CharacterStateEntry& MostRecentState, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FS_CharacterStateEntry& CallFunc_Array_Get_Item);
	void RemoveCharacterState(class UObject* StateReporter, enum class E_CharacterGameStatus State, const struct FS_CharacterStateEntry& CallFunc_GetExistentStateForStateReporter_CharacterState, int32 CallFunc_GetExistentStateForStateReporter_Index, bool CallFunc_GetExistentStateForStateReporter_Found);
	void OnRep_CharacterStatesList();
	void AddCharacterState(class UObject* StateReporter, enum class E_CharacterGameStatus State, const struct FS_CharacterStateEntry& CallFunc_GetExistentStateForStateReporter_CharacterState, int32 CallFunc_GetExistentStateForStateReporter_Index, bool CallFunc_GetExistentStateForStateReporter_Found, const struct FS_CharacterStateEntry& K2Node_MakeStruct_S_CharacterStateEntry, int32 CallFunc_Array_Add_ReturnValue);
	void GetExistentStateForStateReporter(class UObject* StateReporter, enum class E_CharacterGameStatus State, struct FS_CharacterStateEntry* CharacterState, int32* Index, bool* Found, const struct FS_CharacterStateEntry& FoundCharacterState, int32 FoundStateIndex, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FS_CharacterStateEntry& K2Node_MakeStruct_S_CharacterStateEntry, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1);
	void OnRep_bServerReady(bool CallFunc_IsServer_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UInventoryComponentBase* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const class FString& CallFunc_GetFunctionName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_GetFunctionName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1);
	void Run_CodexTelemetry_CodexViewed(class UCodexBaseDataAsset* Codex_Data_Asset);
	void Server_AddCharacterState(class UObject* StateReporter, enum class E_CharacterGameStatus CharacterState);
	void Server_RemoveCharacterState(class UObject* StateReporter, enum class E_CharacterGameStatus CharacterState);
	void CallGiveTag(const struct FGameplayTag& Gameplay_Tag);
	void CallCreatureKilled(const struct FDataTableRowHandle& Creature_Information, const struct FGameplayTagContainer& CreatureTagContainer, const struct FGameplayTagContainer& KillerTagContainer);
	void CallStructureBlueprintPlaced(const struct FDataTableRowHandle& StructureDataHandle);
	void CallResourceHarvested(const struct FInventoryEntry& ItemEntry, int32 Amount);
	void CallStructureCompleted(class AActor* Owning_Actor, int32 Piece_ID);
	void CallItemDeposited_InWorldContainer(const struct FItemDataReference& ItemRowHandle, int32 Quantity, const struct FGameplayTag& ContainerTag);
	void CrossServer_StructureBlueprintPlaced(const struct FDataTableRowHandle& StructureDataHandle);
	void CrossServer_CallCreatureKilled(const struct FDataTableRowHandle& Creature_Info, const struct FGameplayTagContainer& CreatureTagContainer, const struct FGameplayTagContainer& KillerTagContainer);
	void CrossServer_CallTagGiven(const struct FGameplayTag& Tag);
	void CallWeakpointHit(const struct FGameplayTagContainer& WeakpointType, const struct FGameplayTagContainer& CreatureTags, const struct FHitResult& HitResult);
	void CrossServer_WeakpointHit(const struct FGameplayTagContainer& WeakpointType, const struct FGameplayTagContainer& CreatureTags);
	void CallOnGlyphRevealed();
	void CallOnSpellCast(TSoftObjectPtr<class UTechniqueDataAsset> SpellCast);
	void CrossServer_OnGlyphReveal();
	void CallOnInteractedWithPlayer(class APawn* InteractingPawn);
	void ReceiveBeginPlay();
	void OnReady();
	void GameStateReady();
	void OnBroadcastClientReady();
	void ClientInitialized();
	void ServerInit();
	void OnInventoryReady(bool Success);
	void ExecuteUbergraph_BP_PlayerState(int32 EntryPoint, const class FString& CallFunc_GetFunctionName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCodexBaseDataAsset* K2Node_CustomEvent_Codex_Data_Asset, bool CallFunc_HasAuthority_ReturnValue_2, class UObject* K2Node_CustomEvent_StateReporter_1, enum class E_CharacterGameStatus K2Node_CustomEvent_CharacterState_1, class UObject* K2Node_CustomEvent_StateReporter, enum class E_CharacterGameStatus K2Node_CustomEvent_CharacterState, const struct FGameplayTag& K2Node_Event_Gameplay_Tag, const struct FDataTableRowHandle& K2Node_Event_Creature_Information, const struct FGameplayTagContainer& K2Node_Event_CreatureTagContainer, const struct FGameplayTagContainer& K2Node_Event_KillerTagContainer, const struct FDataTableRowHandle& K2Node_Event_StructureDataHandle, const struct FInventoryEntry& K2Node_Event_ItemEntry, int32 K2Node_Event_Amount, class AActor* K2Node_Event_Owning_Actor, int32 K2Node_Event_Piece_ID, const struct FItemDataReference& K2Node_Event_ItemRowHandle, int32 K2Node_Event_Quantity, const struct FGameplayTag& K2Node_Event_ContainerTag, const struct FDataTableRowHandle& K2Node_CustomEvent_StructureDataHandle, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_3, bool CallFunc_HasAuthority_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsServer_ReturnValue_2, bool CallFunc_HasAuthority_ReturnValue_5, bool CallFunc_IsServer_ReturnValue_3, const struct FDataTableRowHandle& K2Node_CustomEvent_Creature_Info, const struct FGameplayTagContainer& K2Node_CustomEvent_CreatureTagContainer, const struct FGameplayTagContainer& K2Node_CustomEvent_KillerTagContainer, bool CallFunc_IsServer_ReturnValue_4, const struct FGameplayTag& K2Node_CustomEvent_Tag, bool CallFunc_HasAuthority_ReturnValue_6, const struct FGameplayTagContainer& K2Node_Event_WeakpointType, const struct FGameplayTagContainer& K2Node_Event_CreatureTags, const struct FHitResult& K2Node_Event_HitResult, const struct FGameplayTagContainer& K2Node_CustomEvent_WeakpointType, const struct FGameplayTagContainer& K2Node_CustomEvent_CreatureTags, TSoftObjectPtr<class UTechniqueDataAsset> K2Node_Event_SpellCast, bool CallFunc_IsServer_ReturnValue_5, bool CallFunc_IsServer_ReturnValue_6, bool CallFunc_HasAuthority_ReturnValue_7, bool CallFunc_HasAuthority_ReturnValue_8, bool CallFunc_IsServer_ReturnValue_7, class APawn* K2Node_Event_InteractingPawn, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class AGameStateBase* CallFunc_GetGameState_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_9, class ABP_GameState_C* K2Node_DynamicCast_AsBP_Game_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_10, bool CallFunc_HasAuthority_ReturnValue_11, bool CallFunc_BooleanAND_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsServer_ReturnValue_8, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_2, class UBasicAwaiter* CallFunc_GetInventoryAwaiter_ReturnValue, TScriptInterface<class IAwaitable> CallFunc_AwaitBP_Awaitable_CastInput, const struct FDelegateHandleBPWrapper& CallFunc_AwaitBP_Handle, const class FString& CallFunc_GetFunctionName_ReturnValue_1, const class FString& CallFunc_GetFunctionName_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, bool CallFunc_IsServer_ReturnValue_9, bool K2Node_CustomEvent_Success, bool CallFunc_IsServer_ReturnValue_10);
	void OnSpellCasted__DelegateSignature(TSoftObjectPtr<class UTechniqueDataAsset> Spell_Casted);
	void OnInteractedWithPlayer__DelegateSignature(class APawn* InteractingPawn);
	void OnFishCaught__DelegateSignature(const struct FFish& CaughtFish);
	void OnGlyphReveal__DelegateSignature();
	void WeakpointHit__DelegateSignature(const struct FGameplayTagContainer& WeakpointType, const struct FGameplayTagContainer& CreatureTags, const struct FHitResult& HitResult);
	void OnPlayerInteraction__DelegateSignature(const struct FGameplayTagContainer& InteractionTags, class UObject* InteractionTarget);
	void OnPawnDamageReceived__DelegateSignature(double Damage, const struct FGameplayTagContainer& EffectTags);
	void OnItemAbilityUsed__DelegateSignature(TSoftObjectPtr<class UTechniqueDataAsset> Technique, const struct FInventoryEntry& ItemEntry);
	void OnControllerFound__DelegateSignature();
	void ItemDepositedWorldContainer__DelegateSignature(const struct FItemDataReference& ItemRowHandle, int32 Quantity, const struct FGameplayTag& ContainerTag);
	void StructureCompleted__DelegateSignature(class AActor* Owning_Actor, int32 Piece_ID);
	void ResourceHarvested__DelegateSignature(const struct FInventoryEntry& ItemEntry, int32 Amount);
	void StructureBlueprintPlaced__DelegateSignature(const struct FDataTableRowHandle& StructureDataHandle);
	void OnRespawnPointSet__DelegateSignature();
	void CreatureKilled__DelegateSignature(const struct FDataTableRowHandle& Creature_Info, const struct FGameplayTagContainer& CreatureTagContainer, const struct FGameplayTagContainer& KillerTagContainer);
	void TagGiven__DelegateSignature(const struct FGameplayTag& Tag);
	void OwnerReplicated__DelegateSignature();
	void PlayerStateReady__DelegateSignature();
	void CharacterStatesUpdated__DelegateSignature(const struct FS_CharacterStateEntry& MostRecentState);
};

}


