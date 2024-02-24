#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0x2E0 - 0x238)
// BlueprintGeneratedClass Map_MainMenu.Map_MainMenu_C
class AMap_MainMenu_C : public ALevelScriptActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x238(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class AGGLevelSequenceActor*>         RegularBackgroundSequences;                        // 0x240(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AGGLevelSequenceActor*>         WackyBackgroundSequences;                          // 0x250(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class AGGLevelSequenceActor*                 CurrentlyPlayingSeq;                               // 0x260(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AGGLevelSequenceActor*>         RecentlyPlayedSeqs;                                // 0x268(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<class AGGLevelSequenceActor*>         ValidSequencesToPlay;                              // 0x278(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	int32                                        RecentlyPlayedHoldAmount;                          // 0x288(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F5F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          BackgroundSequenceTimer;                           // 0x290(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        BackgroundTimerMin;                                // 0x298(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BackgroundTimerMax;                                // 0x29C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DebugTitleScreenSequences;                         // 0x2A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_F64[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          WackySeqWeightTimer;                               // 0x2A8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        WackySeqWeight;                                    // 0x2B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxWackySeqWeight;                                 // 0x2B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        IncreaseWackySeqWeightDelay;                       // 0x2B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CanChooseWackySeqsDelay;                           // 0x2BC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ClearRecentlyPlayedTimer;                          // 0x2C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_F6F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class ACineCameraActor*                      CineCameraActor_1_ExecuteUbergraph_Map_MainMenu_RefProperty; // 0x2C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGGOnlinePartyRepresentation*          GGOnlinePartyRepresentation_1_ExecuteUbergraph_Map_MainMenu_RefProperty; // 0x2D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_PartyMemberSpawnPoint_C*           GGPartyMemberSpawnPoint1_ExecuteUbergraph_Map_MainMenu_RefProperty; // 0x2D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AMap_MainMenu_C* GetDefaultObj();

	void IncreaseWackySeqWeight(bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
	void GetRandomSequence(class AGGLevelSequenceActor** SequenceToPlay, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_RandomBoolWithWeight_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class AGGLevelSequenceActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_3, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 CallFunc_RandomIntegerInRange_ReturnValue, class AGGLevelSequenceActor* CallFunc_Array_Get_Item_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool Temp_bool_Variable, TArray<class AGGLevelSequenceActor*>& K2Node_Select_Default, int32 CallFunc_Array_Length_ReturnValue_4, class AGGLevelSequenceActor* CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void PlayNextBackgroundSeq();
	void CurrentSeq_OnFinished();
	void StartIncreasingWackySeqWeigth();
	void ClearRecentlyPlayed();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void StartMainMenuFlow();
	void OnStartupFlowFinished();
	void On_Constrain_Aspect_Ratio_Changed(struct FGGGameSetting& ChangedSetting, const class FString& NewValue);
	void OnWalkInSequenceFinished();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_Map_MainMenu(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_2, enum class EEndPlayReason K2Node_Event_EndPlayReason, class AGGPlayerController* CallFunc_GetPrimaryGGPlayerController_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class ABP_MenuPlayerController_C* K2Node_DynamicCast_AsBP_Menu_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UGGGameInstance* K2Node_DynamicCast_AsGGGame_Instance, bool K2Node_DynamicCast_bSuccess_1, class UUserWidget* CallFunc_RequestMenuNavigation_OutWidget, bool CallFunc_RequestMenuNavigation_ReturnValue, bool CallFunc_ShouldPlayStartupFlow_ReturnValue, class AGGPlayerController* CallFunc_GetPrimaryGGPlayerController_ReturnValue_1, class ABP_MenuPlayerController_C* K2Node_DynamicCast_AsBP_Menu_Player_Controller_1, bool K2Node_DynamicCast_bSuccess_2, class AGGPlayerController* CallFunc_GetPrimaryGGPlayerController_ReturnValue_2, class UUserWidget* CallFunc_RequestMenuNavigation_OutWidget_1, bool CallFunc_RequestMenuNavigation_ReturnValue_1, class UUMG_LoadingScreenStartup_C* K2Node_DynamicCast_AsUMG_Loading_Screen_Startup, bool K2Node_DynamicCast_bSuccess_3, class AGGLevelSequenceActor* CallFunc_GetRandomSequence_SequenceToPlay, class ULevelSequencePlayer* CallFunc_GetSequencePlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FGGGameSetting& K2Node_CustomEvent_ChangedSetting, const class FString& K2Node_CustomEvent_NewValue, bool CallFunc_StringToBool_ReturnValue, TArray<class ACameraActor*>& CallFunc_GetAllActorsOfClass_OutActors, int32 Temp_int_Loop_Counter_Variable, class ACameraActor* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class UGGMusicManager* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UGGMusicManager* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, class UGGGlobalEventHandler* CallFunc_GetGlobalEventHandler_ReturnValue, class UGGMusicManager* CallFunc_GetGameInstanceSubsystem_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, const struct FGGDelegateHandleWrapper& CallFunc_BindDelegateToOnSettingApplied_ReturnValue, class UGGGameInstance* K2Node_DynamicCast_AsGGGame_Instance_1, bool K2Node_DynamicCast_bSuccess_4, class AGGNewsFeed* CallFunc_GetNewsFeedActor_ReturnValue, float K2Node_Event_DeltaSeconds, bool CallFunc_IsMobilePlatform_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocationAndRotation_SweepHitResult, bool CallFunc_K2_SetActorLocationAndRotation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5);
};

}


