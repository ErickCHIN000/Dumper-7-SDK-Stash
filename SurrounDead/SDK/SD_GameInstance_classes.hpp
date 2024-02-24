#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x43 (0x203 - 0x1C0)
// BlueprintGeneratedClass SD_GameInstance.SD_GameInstance_C
class USD_GameInstance_C : public UGameInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	FMulticastInlineDelegateProperty_            SmoothLoadLevel;                                   // 0x1C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UAudioComponent*                       MenuMusic;                                         // 0x1D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         NewGame_;                                          // 0x1E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_43CD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Level_Name;                                        // 0x1E4(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_43D0[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            PlayerRespawned;                                   // 0x1F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         InSafeZone_;                                       // 0x200(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Difficulty                   Difficulty;                                        // 0x201(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         GameStarted_;                                      // 0x202(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USD_GameInstance_C* GetDefaultObj();

	void Debug_SpawnCamera(TArray<class APlayerStart*>& CallFunc_GetAllActorsOfClassWithTag_OutActors, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerStart* CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AFlyingPlayerCamera_C* CallFunc_FinishSpawningActor_ReturnValue);
	void Debug_SpawnPlayer(class ABP_PlayerCharacter_C* PlayerRef, const class FString& CallFunc_GetSlotInfoSaveGame_SaveGameName, class UEMSInfoSaveGame* CallFunc_GetSlotInfoSaveGame_ReturnValue, class AUltra_Dynamic_Sky_C* CallFunc_GetUDS_UDS, class USave_General_C* CallFunc_GetCustomSave_ReturnValue, class USave_Player_C* CallFunc_GetCustomSave_ReturnValue_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, TArray<class FString>& CallFunc_GetSortedSaveSlots_ReturnValue, bool CallFunc_Array_IsEmpty_ReturnValue, class ABP_PlayerCharacter_C* CallFunc_FinishSpawningActor_ReturnValue, class ABP_MPPlayerController_C* CallFunc_CastToController_Controller, TArray<class APlayerStart*>& CallFunc_GetAllActorsOfClassWithTag_OutActors, class APlayerStart* CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class ABP_PlayerCharacter_C* CallFunc_FinishSpawningActor_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1);
	void GameMode_SpawnPlayer(class ABP_PlayerCharacter_C* PlayerRef, TArray<class ABP_GameModeStart_C*>& CallFunc_GetAllActorsOfClass_OutActors, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ABP_GameModeStart_C* CallFunc_Array_Get_Item, class UPassiveSkillsComponent_C* CallFunc_GetComponentByClass_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class UTechTreeComponent_C* CallFunc_GetComponentByClass_ReturnValue_1, class ABP_PlayerCharacter_C* CallFunc_FinishSpawningActor_ReturnValue);
	void Survival_Respawn(bool Suicide_, class ABP_PlayerCharacter_C* PlayerRef, class ABP_MPPlayerController_C* CallFunc_CastToController_Controller, class AHUD_Game_C* CallFunc_GetGameHUD_HUD, TArray<class APlayerStart*>& CallFunc_GetAllActorsOfClassWithTag_OutActors, class APlayerStart* CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_PlayerCharacter_C* CallFunc_FinishSpawningActor_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TArray<class APlayerStart*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_LastIndex_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, int32 CallFunc_RandomIntegerInRange_ReturnValue, class APlayerStart* CallFunc_Array_Get_Item, const struct FTransform& CallFunc_GetTransform_ReturnValue_1, const struct FTransform& CallFunc_SelectTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class ABP_PlayerCharacter_C* CallFunc_FinishSpawningActor_ReturnValue_1);
	void Survival_SpawnPlayer(class ABP_PlayerCharacter_C* PlayerRef, TArray<class APlayerStart*>& CallFunc_GetAllActorsOfClassWithTag_OutActors, class APlayerStart* CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, const struct FTransform& CallFunc_GetTransform_ReturnValue, class USave_General_C* CallFunc_GetCustomSave_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ABP_PlayerCharacter_C* CallFunc_FinishSpawningActor_ReturnValue, class AUltra_Dynamic_Sky_C* CallFunc_GetUDS_UDS, class USave_Player_C* CallFunc_GetCustomSave_ReturnValue_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class ABP_PlayerCharacter_C* CallFunc_FinishSpawningActor_ReturnValue_1, class ABP_MPPlayerController_C* CallFunc_CastToController_Controller, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1);
	void ReceiveInit();
	void GamepadIconsChanged(const class FString& NewValue);
	void UIVolumeChanged(float NewValue);
	void EffectsVolumeChanged(float NewValue);
	void MusicVolumeChanged(float NewValue);
	void AmbientVolumeChanged(float NewValue);
	void MasterVolumeChanged(float NewValue);
	void Event_ResetAIOSpawner();
	void Event_LoadNonSaveLevel(class FName Level);
	void Event_LoadLevel(class FName Level);
	void Event_LoadSavedLevel();
	void Event_Fog(bool NewValue);
	void Event_VolFog();
	void ExecuteUbergraph_SD_GameInstance(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const class FString& CallFunc_Conv_NameToString_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const class FString& K2Node_CustomEvent_NewValue_6, bool K2Node_SwitchString_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, float K2Node_CustomEvent_NewValue_5, float K2Node_CustomEvent_NewValue_4, float K2Node_CustomEvent_NewValue_3, float K2Node_CustomEvent_NewValue_2, float K2Node_CustomEvent_NewValue_1, TArray<class ABP_AISpawner_Master_C*>& CallFunc_GetAllActorsOfClass_OutActors, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class ABP_AISpawner_Master_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class FName K2Node_CustomEvent_Level_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class USave_General_C* CallFunc_GetCustomSave_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, class FName K2Node_CustomEvent_Level, class USave_General_C* CallFunc_GetCustomSave_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class AUltra_Dynamic_Sky_C* CallFunc_GetUDS_UDS, bool K2Node_CustomEvent_NewValue);
	void PlayerRespawned__DelegateSignature();
	void SmoothLoadLevel__DelegateSignature(class FName LevelName);
};

}


