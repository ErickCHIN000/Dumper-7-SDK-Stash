#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x166 (0x478 - 0x312)
// BlueprintGeneratedClass Usable_Weapon.Usable_Weapon_C
class AUsable_Weapon_C : public AUsable_Actor_C
{
public:
	uint8                                        Pad_31B8[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x318(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        Timeline_Weapon_Show_Alpha_177FAAAC4ED4BFBB4B9CE387CC41EAAE; // 0x320(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_Weapon_Show__Direction_177FAAAC4ED4BFBB4B9CE387CC41EAAE; // 0x324(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31C3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_Weapon_Show;                              // 0x328(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_Weapon_Hide_Alpha_5A61DFB74A9143D0262F5E96AC2C2F46; // 0x330(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_Weapon_Hide__Direction_5A61DFB74A9143D0262F5E96AC2C2F46; // 0x334(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31C6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_Weapon_Hide;                              // 0x338(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SoundToPlay;                                       // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UAudioComponent*                       FireArmorIdleLoop;                                 // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EComboTypes                       Weapon;                                            // 0x350(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         AlwaysUnlocked_;                                   // 0x351(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_31D7[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            WeaponEquipped;                                    // 0x358(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            ActorUsed;                                         // 0x368(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         DestroyAftterEquipped_;                            // 0x378(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         bIsGhostMode_;                                     // 0x379(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31E6[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class ALevelSequenceActor>    GhostSequence;                                     // 0x380(0x28)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	class UBriefFadeToBlack_C*                   UI_BriefFadeToBlack;                               // 0x3A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBriefReturnFromBlackFade_C*           UI_BriefReturnFromFadeToBlack;                     // 0x3B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInterface*>            DefaultMaterials;                                  // 0x3B8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class ABPUsable_DarkFather_C> BP_DarkFather;                                     // 0x3C8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class ABP_Audio_CinematicAudioTrigger_C> CutsceneAudioBP;                                   // 0x3F0(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                         IsCurrentlyPlaying;                                // 0x418(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31F3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class AEmitter>               EffectsToHideWhenNotGhosted;                       // 0x420(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                         SetItemAsDiscovered;                               // 0x448(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_31F7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            WeaponEquipCancelled;                              // 0x450(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UAudioComponent*                       DualSense_Audio;                                   // 0x460(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EComboTypes                       Weapon_Old;                                        // 0x468(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31FE[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ULargeTutorial_C*                      UI_AxatanaTut;                                     // 0x470(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AUsable_Weapon_C* GetDefaultObj();

	void AxatanaSkin(bool Temp_bool_Variable, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, bool CallFunc_TwitchDrop_ShouldUseWeaponSkin_bYes, class UMaterialInterface* K2Node_Select_Default);
	bool OldWeaponIsAxatana(bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	void Weapon_Invisible();
	void Weapon_Unequippable();
	void Weapon_Equippable(enum class EComboTypes Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, class FText K2Node_Select_Default);
	bool IsAxatanaWeapon(bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
	bool IsHoldingAxatana(bool CallFunc_IsAxatanaWeapon_ReturnValue, const struct FInventoryItem& CallFunc_GetMainHandWeapon_EquippedMainHandWeapon, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void DualSenseAudio_Stop(bool CallFunc_IsValid_ReturnValue);
	void DualSenseAudio_Play(enum class EComboTypes Temp_byte_Variable, class USoundBase* Temp_object_Variable, class USoundBase* Temp_object_Variable_1, class USoundBase* Temp_object_Variable_2, class USoundBase* Temp_object_Variable_3, class USoundBase* Temp_object_Variable_4, class USoundBase* Temp_object_Variable_5, class USoundBase* Temp_object_Variable_6, class USoundBase* K2Node_Select_Default, class UAudioComponent* CallFunc_Spawn2DControllerSound_ReturnValue);
	void SetActorNameAndAction(enum class EComboTypes Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, bool Temp_bool_Variable, class FText Temp_text_Variable_7, class FText K2Node_Select_Default, class FText K2Node_Select_Default_1);
	void DiscoverWeapon(class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, bool K2Node_SwitchEnum_CmpSuccess);
	void HideVFX(class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class AEmitter* K2Node_DynamicCast_AsEmitter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void FadeOutMusic(class AGamePlayGameState_C* CallFunc_GetGameStateAsGameplayGameState_AsGamePlayGameState, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void Usable_Weapon_AutoGenFunc(class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, class ABP_Audio_CinematicAudioTrigger_C* K2Node_DynamicCast_AsBP_Audio_Cinematic_Audio_Trigger, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess_1, class AGamePlayGameState_C* CallFunc_GetGameStateAsGameplayGameState_AsGamePlayGameState, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, class ABPUsable_DarkFather_C* K2Node_DynamicCast_AsBPUsable_Dark_Father, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValidSoftObjectReference_ReturnValue_1);
	void SetDefaultMaterials(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UMaterialInterface* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void SaveDefaultMaterials(TArray<class UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue);
	void SetWeaponDefaultStaticMesh(enum class EComboTypes Temp_byte_Variable, class UStaticMesh* Temp_object_Variable, class UStaticMesh* Temp_object_Variable_1, class UStaticMesh* Temp_object_Variable_2, class UStaticMesh* Temp_object_Variable_3, class UStaticMesh* Temp_object_Variable_4, class UStaticMesh* Temp_object_Variable_5, class UStaticMesh* Temp_object_Variable_6, class UStaticMesh* K2Node_Select_Default, bool CallFunc_SetStaticMesh_ReturnValue);
	void IsCryptSuperBuff(class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base);
	void IsBurnedMace(class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base);
	void UseGhostWeapon(bool CallFunc_Not_PreBool_ReturnValue);
	void SetGhostMode();
	void GetIsActorUsable(bool* IsUsable, bool CallFunc_CheckForNearbyEnemies_ReturnValue, bool CallFunc_GetIsActorUsable_IsUsable);
	void Update_Visibility(bool CallFunc_IsAxatanaUnlocked_bUnlocked, bool CallFunc_IsHoldingAxatana_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsAxatanaWeapon_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_StormModeIsActive_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class FName CallFunc_GetCharacterWeaponIDFromEnum_ID, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_IsAxatanaUnlocked_StormMode_bUnlocked, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, const struct FInventoryItem& CallFunc_GetMainHandWeapon_EquippedMainHandWeapon, class FName CallFunc_GetCharacterWeaponIDFromEnum_ID_1, bool CallFunc_EqualEqual_NameName_ReturnValue);
	void OnActorUsed(class APlayerController* Controller, bool* Success, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, bool CallFunc_OnActorUsed_Success, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_CheckForNearbyEnemies_ReturnValue);
	void UserConstructionScript(bool CallFunc_K2_AttachToComponent_ReturnValue);
	void Timeline_Weapon_Hide__FinishedFunc();
	void Timeline_Weapon_Hide__UpdateFunc();
	void Timeline_Weapon_Show__FinishedFunc();
	void Timeline_Weapon_Show__UpdateFunc();
	void ReceiveBeginPlay();
	void HideWeaponIfEquipped();
	void EquipWeaponPostFade();
	void FadeCompletedWeaponEquipped();
	void DamageTakenWhileFading();
	void ResetPlayerDisable();
	void EquipWeapon(class APlayerController* PlayerController);
	void StartGhostCutscene();
	void Weapon_Hide();
	void Weapon_Show();
	void OnWeaponSummoned(enum class EComboTypes Weapon);
	void OnAxatanaTutDismissed_1();
	void OnAxatanaTutDismissed_2();
	void OnSummonedEnd();
	void OnSkinChanged(enum class Enum_Skins SkinChanged);
	void ExecuteUbergraph_Usable_Weapon(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, TArray<class AUsable_Weapon_C*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class AZero_Base_C* K2Node_DynamicCast_As0_Base, bool K2Node_DynamicCast_bSuccess, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, int32 CallFunc_GetMainHandWeaponItemIndex_Index, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base, TScriptInterface<class ICharacterUtilInterface_C> CallFunc_CharacterUtils_WeaponSwitched_self_CastInput, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_1, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_2, class APlayerController* K2Node_CustomEvent_PlayerController, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_IsValidSoftObjectReference_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue_1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class ABP_Audio_CinematicAudioTrigger_C* K2Node_DynamicCast_AsBP_Audio_Cinematic_Audio_Trigger, bool K2Node_DynamicCast_bSuccess_1, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, class ALevelSequenceActor* K2Node_DynamicCast_AsLevel_Sequence_Actor, bool K2Node_DynamicCast_bSuccess_2, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue_1, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_3, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class FName CallFunc_GetCharacterWeaponIDFromEnum_ID, const struct FInventoryItem& CallFunc_GetItemFromID_Item, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_4, bool CallFunc_SetInventoryItem_Success, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_5, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_6, enum class EComboTypes K2Node_CustomEvent_Weapon, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_4, class UBriefReturnFromBlackFade_C* CallFunc_Create_ReturnValue, int32 Temp_int_Array_Index_Variable, class AUsable_Weapon_C* CallFunc_Array_Get_Item, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_5, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_7, class FName Temp_name_Variable, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2, class ABPUsable_DarkFather_C* K2Node_DynamicCast_AsBPUsable_Dark_Father, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_OldWeaponIsAxatana_ReturnValue, bool CallFunc_IsAxatanaWeapon_ReturnValue, bool CallFunc_IsTutorialUnlocked_Unlocked_, bool CallFunc_Not_PreBool_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ULargeTutorial_C* CallFunc_Create_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class ULargeTutorial_C* CallFunc_Create_ReturnValue_2, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_6, class FName Temp_name_Variable_1, class AZero_Base_C* CallFunc_GetCharacterAs0_Base_As0_Base_7, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_8, bool CallFunc_IsAxatanaWeapon_ReturnValue_1, enum class Enum_Skins K2Node_CustomEvent_SkinChanged, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_StormModeContentIsEnabled_Enabled_);
	void WeaponEquipCancelled__DelegateSignature();
	void ActorUsed__DelegateSignature();
	void WeaponEquipped__DelegateSignature();
};

}


