#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20D (0x679 - 0x46C)
// BlueprintGeneratedClass Usable_Armor.Usable_Armor_C
class AUsable_Armor_C : public AUsable_Crypt_C
{
public:
	uint8                                        Pad_37FF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x470(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBoxComponent*                         InteractibleCollision;                             // 0x478(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              P_AshEmbersShell;                                  // 0x480(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SkeletalMesh;                                      // 0x488(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_0_Weight_EAD5FF524A56207754FF8B89502A10C1; // 0x490(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_0__Direction_EAD5FF524A56207754FF8B89502A10C1; // 0x494(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3808[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_0;                                        // 0x498(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Showopacity_NewTrack_0_37F203A947E4A9C6015735BC9EEBEDA4; // 0x4A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Showopacity__Direction_37F203A947E4A9C6015735BC9EEBEDA4; // 0x4A4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_380F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Showopacity;                                       // 0x4A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EArmorTypes                       Shell;                                             // 0x4B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_3811[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USkeletalMesh*                         ArmorSkeletalMesh;                                 // 0x4B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  ShellUnlockID;                                     // 0x4C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class USoundBase*                            SoundToPlay;                                       // 0x4C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UAudioComponent*                       FireArmorIdleLoop;                                 // 0x4D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                ShellType;                                         // 0x4D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharacter*                            OldShell;                                          // 0x4E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBriefFadeToBlack_C*                   BriefFadeToBlackWB;                                // 0x4E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShouldHeartbeat_;                                  // 0x4F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsMorgueShell_;                                    // 0x4F1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_381D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            ShellEquipped;                                     // 0x4F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            StartShellOutlineCheck;                            // 0x508(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            StopShellOutlineCheck;                             // 0x518(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FTimerHandle                          ShellOutlineCheckTimer;                            // 0x528(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        ShellOutlineMaxDistance;                           // 0x530(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShouldOutlineShell_;                               // 0x534(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_382A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class ALevelSequenceActor>    TakeShellSequence;                                 // 0x538(0x28)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	class ULevelStreamingDynamic*                TakeShellSublevelRef;                              // 0x560(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameplayPC_C*                         GameplayPCRef;                                     // 0x568(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInterface*>            DefaultMaterials;                                  // 0x570(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         bShouldShowGhostShell_;                            // 0x580(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_3836[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class ALevelSequenceActor>    GhostShellSequence;                                // 0x588(0x28)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	class AZero_Base_C*                          ZeroBase;                                          // 0x5B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABarbarous_C*                          Barbarous;                                         // 0x5B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBriefReturnFromBlackFade_C*           BriefReturnFromFadeToBlack;                        // 0x5C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class ABPUsable_DarkFather_C> BP_DarkFather;                                     // 0x5C8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class AWaifuNPC_C>            BP_WaifuNPC;                                       // 0x5F0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         IsCurrentlyPlaying;                                // 0x618(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3843[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Audio_CinematicAudioTrigger_C*     CutsceneAudioBP;                                   // 0x620(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class AEmitter>               GhostShellVFXToHideInLevel;                        // 0x628(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                         ManuallyRespawnEnemies;                            // 0x650(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3848[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<TSoftObjectPtr<class AAdvancedEnemySpawner_C>> AdvancedEnemySpawners;                             // 0x658(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	class UAudioComponent*                       DualSense_Audio;                                   // 0x668(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       DualSense_TakeShellAudio;                          // 0x670(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECollisionEnabled                 ArmorUsable_CollisionEnabled;                      // 0x678(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AUsable_Armor_C* GetDefaultObj();

	bool IsSkinApplied(enum class Enum_Skins Skin);
	bool StormMode_HasLoreEntry(class FName ID);
	bool GetHideUI();
	void GetMainLevelFromSave_StormMode(class FName* Level);
	void GetMainLevelFromSave(class FName* Level);
	bool GetIsInputBlocked();
	void InventoryUtil_IsTutorialUnlocked_(class FName Tut, bool* Unlocked_);
	bool GetIsInBossFight();
	void GetHadernAbilityTextFromIndex(int32 Index, bool* InvalidIndex, class FText* Text);
	void GetHadernAbilityTextFromSlot(enum class Enum_HadernSkills HadernSlot, class FText* Text);
	void GetCurrentHadernAbilityForSlot(enum class Enum_HadernSkills HadernSlot, class FName* AbilityID);
	void StormMode_GetCurrentMainLevelFromSave(class FName* Level);
	bool GetEquipmentMenuType(enum class Enum_EquipmentMenuType* Menu);
	bool CanOpenPhotoModeFromPauseMenu();
	bool GetIsInCutscene();
	void GetShellDyesLockState(struct FStruct_ShellsDyes_LockState* LockState, const struct FStruct_ShellsDyes_LockState& K2Node_MakeStruct_Struct_ShellsDyes_LockState);
	bool GetHasRenouncedShell();
	void GetShellDyes(struct FStruct_ShellDyes* Dyes);
	void GetIsInPhotoMode(bool* PhotoMode_);
	void GameplayPC_IsInTutorial(bool* IsInTutorial);
	void InventoryUtil_IsUpgradeUnlocked(class FName UnlockID, bool* Unlocked);
	enum class Enum_InventoryItem_CanUse InventoryUtil_GetCanUseItem(class FName ID, bool UsableInDarkForm);
	void UI_GetNumPlayerDeaths(int32* TotalPlayerDeaths);
	void UI_GetWasInputKeyJustPressed(bool* WasKeyPressed);
	void UI_GetInventoryItemFromSlot(int32 InventorySlot, struct FInventoryItem* InventoryItem);
	void UI_GetContainerItem(int32 ContainerSlot, struct FInventoryItem* InventoryItem);
	bool IsShellUnlocked(bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FName Temp_name_Variable, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TMap<class FName, int32> CallFunc_StormMode_GetNamedInts_NamedInts, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_StormModeIsActive_ReturnValue, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, bool CallFunc_Array_Contains_ReturnValue);
	void DualSenseAudio_Play(enum class EArmorTypes Temp_byte_Variable, class USoundBase* Temp_object_Variable, class USoundBase* Temp_object_Variable_1, class USoundBase* Temp_object_Variable_2, class USoundBase* Temp_object_Variable_3, class USoundBase* Temp_object_Variable_4, class USoundBase* Temp_object_Variable_5, class USoundBase* K2Node_Select_Default, class UAudioComponent* CallFunc_Spawn2DControllerSound_ReturnValue);
	void DualSenseAudio_Stop(bool CallFunc_IsValid_ReturnValue);
	void HideGhostShellVFX(class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class AEmitter* K2Node_DynamicCast_AsEmitter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void DisableShellOutline(bool CallFunc_EndOutlineFocus_Success);
	void Usable_Armor_AutoGenFunc(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, class AGamePlayGameState_C* CallFunc_GetGameStateAsGameplayGameState_AsGamePlayGameState, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ALevelSequenceActor* K2Node_DynamicCast_AsLevel_Sequence_Actor, bool K2Node_DynamicCast_bSuccess_1, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2, class AWaifuNPC_C* K2Node_DynamicCast_AsWaifu_NPC, bool K2Node_DynamicCast_bSuccess_2, class ABPUsable_DarkFather_C* K2Node_DynamicCast_AsBPUsable_Dark_Father, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsValidSoftObjectReference_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue_1);
	void CallShellChanged(class FText CallFunc_GetShellTagline_ShellTagline, class FText CallFunc_GetShellName_ShellName, TScriptInterface<class IGamePlayPCInterface_C> CallFunc_EquippedShell_self_CastInput);
	void BriefReturnFromFadeToBlack_Create(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UBriefReturnFromBlackFade_C* CallFunc_Create_ReturnValue);
	void EquipShell(bool CallFunc_IsShellUnlocked_ReturnValue, bool CallFunc_IsShellUnlocked_ReturnValue_1, bool CallFunc_IsShellUnlocked_ReturnValue_2, bool CallFunc_IsShellUnlocked_ReturnValue_3, int32 CallFunc_MakeLiteralInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, class FName CallFunc_GetShellUnlockID_ShellUnlockID, class ABarbarous_C* K2Node_DynamicCast_AsBarbarous, bool K2Node_DynamicCast_bSuccess);
	void BriefFadeToBlack_Remove(bool CallFunc_IsValid_ReturnValue);
	void BriefFadeToBlack_Create(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UBriefFadeToBlack_C* CallFunc_Create_ReturnValue);
	void PlayGhostShellSequence(bool CallFunc_Not_PreBool_ReturnValue);
	void IsGhostShell_(bool* IsGhostShell_, class FName Temp_name_Variable, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TMap<class FName, int32> CallFunc_StormMode_GetNamedInts_NamedInts, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_StormModeIsActive_ReturnValue, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, bool CallFunc_Array_Contains_ReturnValue);
	void SaveDefaultMaterials(TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue);
	void SetDefaultMaterials(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UMaterialInterface* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void SetGhostMaterials(int32 Temp_int_Array_Index_Variable, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, int32 Temp_int_Loop_Counter_Variable, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void GetUseActionText(class FText* ActionText, bool Temp_bool_Variable, class FText Temp_text_Variable, bool CallFunc_IsGhostShell__IsGhostShell_, bool CallFunc_BooleanAND_ReturnValue, class FText CallFunc_GetShellName_ShellName, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText K2Node_Select_Default);
	void GetIsActorUsable(bool* IsUsable, bool CallFunc_GetIsActorUsable_IsUsable, bool CallFunc_CheckForNearbyEnemies_ReturnValue);
	void OnWasUsed(bool* Success);
	void EndOutlineFocus(bool* Success);
	void BeginOutlineFocus(bool* Success);
	void OnActorUsed(class APlayerController* Controller, bool* Success, class APlayerController* Local_Controller, bool CallFunc_IsGhostShell__IsGhostShell_, bool CallFunc_CheckForNearbyEnemies_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC);
	void Showopacity__FinishedFunc();
	void Showopacity__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void OnLoaded_EC235F7B4EFE61C063CAA38A5F3CC153(class UObject* Loaded);
	void UI_SetDialogMode(bool IsDialogMode);
	void UI_SetUIMode(bool IsUIMode);
	void UI_OpenStartPortals();
	void UI_OnInteract();
	void Util_SaveGame(bool bShouldRestorePlayerTransformOnLoad);
	void InventoryUtil_SetInventoryItemByID(int32 WeaponID, int32 Slot, bool IsChangingWeaponMode);
	void InventoryUtil_UnlockWeaponByID(int32 ID);
	void InventoryUtil_LockWeaponByID(int32 ID);
	void InventoryUtil_SwitchArmor(int32 ArmorID);
	void PlayerControllerUtils_SetMaxHP(int32 SetMaxHP);
	void InventoryUtil_UnlockUpgrade(class FName ItemName);
	void InventoryUtil_LockUpgrade(class FName ItemName);
	void PlayerControllerUtils_SetGhostShellDeteriorationCounter(int32 Count);
	void PlayerControllerUtils_SetHadernDefeatCounter(int32 NewCounter);
	void OnPairedAnimFinish_WhilePlayerDead();
	void EquippedShell(class FText ShellName, class FText ShellTagline);
	void UI_PauseMenuResume();
	void UI_EscapeMenuPressed(bool Closed);
	void OnWeaponChange(int32 Index, bool IsChangingWeaponMode);
	void SetCameraShake(float Scale);
	void SetForceFeedback(float Scale);
	void UI_DebugLineEntry(class AActor* Actor, const class FString& DebugLine);
	void UpdateAspectRationConstraint(int32 Index);
	void UpdateBallistazookaOpacity(float Opacity);
	void CallPhotoModeEnter();
	void SetShellDyes(const struct FStruct_ShellDyes& Dyes);
	void CallPhotoModeClose();
	void SetShellDyesLockState(const struct FStruct_ShellsDyes_LockState& LockState);
	void ResetPhotoModeCamera();
	void ResetCheckpointsSave();
	void SetNewGamePlusLevel(int32 Level);
	void SetInputBlocked(bool bLock);
	void StormMode_UnlockLoreEntry(class FName ID);
	void EquipArmor(class APlayerController* PlayerController);
	void EquipArmor_OnFadeCompleted();
	void HideEquippedArmor();
	void ReceiveBeginPlay();
	void PossessNewShell();
	void DestroyUsableDeathStatues();
	void ShowOtherArmors();
	void ShowThisArmor();
	void UpdateState();
	void BlinkPPMaterialStart();
	void BlinkPPStop();
	void EquipArmor_OnFadeEnd();
	void StartShellOutlineChecks();
	void ShellOutlineCheck();
	void StopShellOutlineChecks();
	void TerrorRadiusBeginOverlap();
	void TerrorRadiusEndOverlap();
	void PlayFirstTimeShellEquipSequence();
	void TakeShellSequenceFaded();
	void PlaySeq();
	void ResetEnemySpawns();
	void StartGhostCutscene();
	void SetSignificanceBP(enum class EDHSignificanceLevel SignificanceLevel);
	void OnCharacterInputEnabled();
	void OnTakeShellSequenceFinished();
	void ExecuteUbergraph_Usable_Armor(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_Event_IsDialogMode, bool K2Node_Event_IsUIMode, bool K2Node_Event_bShouldRestorePlayerTransformOnLoad, int32 K2Node_Event_WeaponID, int32 K2Node_Event_Slot, bool K2Node_Event_IsChangingWeaponMode_1, int32 K2Node_Event_ID_2, int32 K2Node_Event_ID_1, int32 K2Node_Event_ArmorID, int32 K2Node_Event_SetMaxHP, class FName K2Node_Event_ItemName_1, class FName K2Node_Event_ItemName, int32 K2Node_Event_Count, int32 K2Node_Event_NewCounter, class FText K2Node_Event_ShellName, class FText K2Node_Event_ShellTagline, bool K2Node_Event_Closed, int32 K2Node_Event_Index_1, bool K2Node_Event_IsChangingWeaponMode, float K2Node_Event_Scale_1, float K2Node_Event_Scale, class AActor* K2Node_Event_Actor, const class FString& K2Node_Event_DebugLine, int32 K2Node_Event_Index, float K2Node_Event_Opacity, const struct FStruct_ShellDyes& K2Node_Event_Dyes, const struct FStruct_ShellsDyes_LockState& K2Node_Event_LockState, int32 K2Node_Event_Level, bool K2Node_Event_Block, class FName K2Node_Event_ID, class APlayerController* K2Node_CustomEvent_PlayerController, TArray<class AUsable_Armor_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 Temp_int_Array_Index_Variable_2, int32 CallFunc_Array_Length_ReturnValue, class AUsable_Armor_C* CallFunc_Array_Get_Item, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<class AUseable_Player_Death_Statue_C*>& CallFunc_GetAllActorsOfClass_OutActors_1, class AUseable_Player_Death_Statue_C* CallFunc_Array_Get_Item_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue_1, int32 Temp_int_Array_Index_Variable_3, bool CallFunc_Not_PreBool_ReturnValue, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class UObject* Temp_object_Variable, class AGamePlayGameState_C* K2Node_DynamicCast_AsGame_Play_Game_State, bool K2Node_DynamicCast_bSuccess_1, class AAdvancedEnemySpawner_C* K2Node_DynamicCast_AsAdvanced_Enemy_Spawner, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_1, class FName CallFunc_GetActorName_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_BeginOutlineFocus_Success, bool CallFunc_Not_PreBool_ReturnValue_2, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_1, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, class UObject* K2Node_CustomEvent_Loaded, bool CallFunc_IsValid_ReturnValue_3, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class ALevelSequenceActor* K2Node_DynamicCast_AsLevel_Sequence_Actor, bool K2Node_DynamicCast_bSuccess_3, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_2, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_3, int32 Temp_int_Loop_Counter_Variable_3, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_3, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2, bool CallFunc_IsGhostShell__IsGhostShell_, bool CallFunc_IsGhostShell__IsGhostShell__1, bool CallFunc_BooleanAND_ReturnValue, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_4, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_IsValid_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_5, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AGameplayGM_C* CallFunc_GetGameModeAsGameplayGM_AsGameplay_GM, TArray<class AAdvancedEnemySpawner_C*>& CallFunc_GetAllActorsOfClass_OutActors_2, class AActor* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_1, class AAdvancedEnemySpawner_C* K2Node_DynamicCast_AsAdvanced_Enemy_Spawner_1, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_Less_IntInt_ReturnValue_1, TArray<class AEnemyCharacter_C*>& CallFunc_GetAllActorsOfClass_OutActors_3, class AEnemyCharacter_C* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class ALevelSequenceActor* K2Node_DynamicCast_AsLevel_Sequence_Actor_1, bool K2Node_DynamicCast_bSuccess_5, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class AGamePlayGameState_C* CallFunc_GetGameStateAsGameplayGameState_AsGamePlayGameState, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2, class AWaifuNPC_C* K2Node_DynamicCast_AsWaifu_NPC, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_IsValidSoftObjectReference_ReturnValue_1, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_1, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_6, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_3, const struct FWeightedBlendable& K2Node_MakeStruct_WeightedBlendable, TSoftObjectPtr<class AAdvancedEnemySpawner_C> CallFunc_Array_Get_Item_4, TArray<struct FWeightedBlendable>& K2Node_MakeArray_Array, const struct FWeightedBlendables& K2Node_MakeStruct_WeightedBlendables, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Greater_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, enum class EDHSignificanceLevel K2Node_Event_SignificanceLevel, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_4, bool K2Node_SwitchEnum_CmpSuccess, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess_7, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABarbarous_C* CallFunc_FinishSpawningActor_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_3, class UAudioComponent* CallFunc_Spawn2DControllerSound_ReturnValue, class ABPUsable_DarkFather_C* K2Node_DynamicCast_AsBPUsable_Dark_Father, bool K2Node_DynamicCast_bSuccess_8, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess_9, bool CallFunc_StormModeContentIsEnabled_Enabled_, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_IsShellUnlocked_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_IsShellUnlocked_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_6);
	void StopShellOutlineCheck__DelegateSignature();
	void StartShellOutlineCheck__DelegateSignature();
	void ShellEquipped__DelegateSignature(class FText ShellName);
};

}


