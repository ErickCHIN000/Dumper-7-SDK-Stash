#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF0 (0x320 - 0x230)
// BlueprintGeneratedClass BP_MainMenu.BP_MainMenu_C
class ABP_MainMenu_C : public AMainMenuActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UUI_MainMenu_C*                        UI_MainMenu;                                       // 0x240(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_Startup_C*                         UI_Startup;                                        // 0x248(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_StorytellerTester_C*              UI_Storyteller;                                    // 0x250(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AAmbientSound*                         Audio_Menu;                                        // 0x258(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                SaveSlotName;                                      // 0x260(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class UGameInfoInstance_C*                   GameInfoInstance;                                  // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULevelStreamingDynamic*                LevelRef;                                          // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class ACameraActor*>                  Cameras;                                           // 0x280(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, HasGetValueTypeHash)
	class ABP_Storyteller_Credits_C*             BP_Storyteller_Credits;                            // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<struct FDateTime, int32>                SaveDates;                                         // 0x298(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        CurrentSaveSlot;                                   // 0x2E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_204E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_FirstStartup_C*                    BP_FirstStartup;                                   // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         BrightnessConfirmed;                               // 0x2F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         LogosComplete;                                     // 0x2F9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_205B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMainMenuLoadingScreen_C*              MMLoadingScreen;                                   // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULevelStreamingDynamic*                SeasonalMenuRef;                                   // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_MainMenuLevel                MainMenuLevel;                                     // 0x310(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bCheckForActivity;                                 // 0x311(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_207B[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_Rain_StormMode_C*                  BP_StormMode_Rain;                                 // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_MainMenu_C* GetDefaultObj();

	void StormMode_GetRainBP(const class FString& CallFunc_GetDisplayName_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, TArray<class ABP_Rain_StormMode_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ABP_Rain_StormMode_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue_1);
	void SeasonalContentMenuVisibility(bool bShouldBeVisible, bool CallFunc_IsValid_ReturnValue);
	void SeasonalContentMenu(bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsHalloweenSeasonalContentEnabled_Return, bool CallFunc_LoadLevelInstanceBySoftObjectPtr_bOutSuccess, class ULevelStreamingDynamic* CallFunc_LoadLevelInstanceBySoftObjectPtr_ReturnValue);
	void DebugSaveSlot(const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	void IsLevelRefLoaded(const class FString& LevelName, bool* Loaded, class FName CallFunc_GetWorldAssetPackageFName_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Contains_ReturnValue);
	void RequiresTitleScreen(bool* NewParam, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UDHGameInstance* K2Node_DynamicCast_AsDHGame_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_WelcomeScreenEnabled_ReturnValue);
	void EnableMouseInput(class APlayerController* CallFunc_GetPlayerController_ReturnValue);
	void SetGameInfoInstanceRef(class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance);
	class FString GetSaveSlotName(const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1);
	void SaveSlotFailSafe(const struct FDateTime& Local_Date);
	void SetViewTarget(bool* CameraFound, bool Local_CameraFound, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ACameraActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue, TArray<class ACameraActor*>& CallFunc_GetAllActorsOfClass_OutActors);
	void CheckAllSaves(bool* SaveExist, const struct FDateTime& Local_SlotSaveTime, int32 Local_NewestSaveSlot, const struct FDateTime& Local_SaveTime, int32 Local_PrimaryUserIndex, bool Local_SaveExist, bool CallFunc_Greater_DateTimeDateTime_ReturnValue, bool CallFunc_Greater_DateTimeDateTime_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_Greater_DateTimeDateTime_ReturnValue_2, const struct FDateTime& CallFunc_MakeDateTime_ReturnValue, class USaveGame* CallFunc_DHLoadGameFromSlot_ReturnValue, bool CallFunc_DoesSaveGameExist_ReturnValue, class UServerSaveGame_C* K2Node_DynamicCast_AsServer_Save_Game, bool K2Node_DynamicCast_bSuccess, class USaveGame* CallFunc_DHLoadGameFromSlot_ReturnValue_1, class UServerSaveGame_C* K2Node_DynamicCast_AsServer_Save_Game_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_DoesSaveGameExist_ReturnValue_1, class USaveGame* CallFunc_DHLoadGameFromSlot_ReturnValue_2, bool CallFunc_DoesSaveGameExist_ReturnValue_2, class UServerSaveGame_C* K2Node_DynamicCast_AsServer_Save_Game_2, bool K2Node_DynamicCast_bSuccess_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UDHGameInstance* K2Node_DynamicCast_AsDHGame_Instance, bool K2Node_DynamicCast_bSuccess_3, int32 CallFunc_GetPrimaryUserIndex_ReturnValue);
	void SaveGameCheck(bool LoadTitleScreen, bool LevelAlreadyLoaded, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UDHGameInstance* K2Node_DynamicCast_AsDHGame_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_GetPrimaryUserIndex_ReturnValue, bool CallFunc_IsLevelRefLoaded_loaded, bool CallFunc_IsLevelRefLoaded_loaded_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, bool CallFunc_IsLevelRefLoaded_loaded_2, class UDHGameInstance* K2Node_DynamicCast_AsDHGame_Instance_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_GetPrimaryUserIndex_ReturnValue_1, bool CallFunc_IsLevelRefLoaded_loaded_3, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, class UDHGameInstance* K2Node_DynamicCast_AsDHGame_Instance_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_LoadLevelInstanceBySoftObjectPtr_bOutSuccess, class ULevelStreamingDynamic* CallFunc_LoadLevelInstanceBySoftObjectPtr_ReturnValue, int32 CallFunc_GetPrimaryControllerIndex_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_LoadLevelInstanceBySoftObjectPtr_bOutSuccess_1, class ULevelStreamingDynamic* CallFunc_LoadLevelInstanceBySoftObjectPtr_ReturnValue_1, bool CallFunc_LoadLevelInstanceBySoftObjectPtr_bOutSuccess_2, class ULevelStreamingDynamic* CallFunc_LoadLevelInstanceBySoftObjectPtr_ReturnValue_2, bool CallFunc_LoadLevelInstanceBySoftObjectPtr_bOutSuccess_3, class ULevelStreamingDynamic* CallFunc_LoadLevelInstanceBySoftObjectPtr_ReturnValue_3, const class FString& CallFunc_GetSaveSlotName_ReturnValue, class USaveGame* CallFunc_DHLoadGameFromSlot_ReturnValue, class UServerSaveGame_C* K2Node_DynamicCast_AsServer_Save_Game, bool K2Node_DynamicCast_bSuccess_3, bool K2Node_SwitchName_CmpSuccess, bool CallFunc_CheckAllSaves_SaveExist, bool CallFunc_DoesSaveGameExist_ReturnValue);
	void MM_Input_GameOnly(class APlayerController* CallFunc_GetPlayerController_ReturnValue);
	void MM_Menu_FadeIn(bool CallFunc_IsValid_ReturnValue);
	void MM_Input_Game_UI();
	void MM_CreateWidget_Storyteller(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UUMG_StorytellerTester_C* CallFunc_Create_ReturnValue);
	void MM_SpawnAmbientSound(const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AAmbientSound* CallFunc_FinishSpawningActor_ReturnValue);
	void MM_CreateWidget_Menu(bool CallFunc_IsValid_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UUI_MainMenu_C* CallFunc_Create_ReturnValue);
	void MainMenu_CloseCredits();
	void MainMenu_SetMenuState(enum class Enum_MainMenu_State Menu_State);
	void EscapeMenu_OnOpen();
	void EscapeMenu_OnClose();
	void MM_FadeIn_Start();
	void MM_FadeInEnd();
	void MM_StartingSequence();
	void MM_FadeIn_Bind();
	void MM_Begin();
	void Menu_FadeOut();
	void OnBrightnessConfirmed();
	void MainMenu_OnBrightnessConfirmed();
	void ShowTitleScreen();
	void ShowMainMenu();
	void CreateControllerDisconnectDialog();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void OnTitleScreenLoaded_Set();
	void OnMenuLevelLoaded_Bind(bool LevelLoaded);
	void OnMenuLevelLoaded_Set();
	void OnTitleScreenLevelLoaded_Bind(bool LevelLoaded);
	void OnSeasonalContentChange_Bind();
	void OnSeasonalContentChange_Set(bool Enabled);
	void ExecuteUbergraph_BP_MainMenu(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class Enum_MainMenu_State K2Node_Event_Menu_State, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UDHGameInstance* K2Node_DynamicCast_AsDHGame_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_GetPrimaryUserIndex_ReturnValue, bool CallFunc_DoesSaveGameExist_ReturnValue, bool CallFunc_RequiresTitleScreen_NewParam, bool CallFunc_IsValid_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UCertDialog_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_2, bool Temp_bool_IsClosed_Variable, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, class FName CallFunc_GetWorldAssetPackageFName_ReturnValue, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance, bool CallFunc_IsValid_ReturnValue_5, float K2Node_Event_DeltaSeconds, bool CallFunc_IsValid_ReturnValue_6, class UGameInfoInstance_C* CallFunc_GetGameInstanceAsGameInfoInstance_AsGame_Info_Instance_1, bool CallFunc_SetViewTarget_CameraFound, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UTitleScreen_C* CallFunc_Create_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, bool K2Node_CustomEvent_LevelLoaded_1, bool CallFunc_SetViewTarget_CameraFound_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UDHGameInstance* K2Node_DynamicCast_AsDHGame_Instance_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_GetPrimaryUserIndex_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_DoesSaveGameExist_ReturnValue_1, bool K2Node_CustomEvent_LevelLoaded, class UMainMenuLoadingScreen_C* CallFunc_Create_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool K2Node_CustomEvent_Enabled, bool CallFunc_IsHalloweenTime_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_LoadLevelInstanceBySoftObjectPtr_bOutSuccess, class ULevelStreamingDynamic* CallFunc_LoadLevelInstanceBySoftObjectPtr_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UDHGameInstance* K2Node_DynamicCast_AsDHGame_Instance_2, bool K2Node_DynamicCast_bSuccess_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, int32 CallFunc_GetPrimaryUserIndex_ReturnValue_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_3, class UDHGameInstance* K2Node_DynamicCast_AsDHGame_Instance_3, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsValid_ReturnValue_8, bool CallFunc_BooleanAND_ReturnValue);
};

}


