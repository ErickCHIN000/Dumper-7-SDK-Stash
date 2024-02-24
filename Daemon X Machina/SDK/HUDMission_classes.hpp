#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x530 - 0x4C8)
// BlueprintGeneratedClass HUDMission.HUDMission_C
class AHUDMission_C : public ATTLHUDMission
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4C8(0x8)(Transient, DuplicateTransient)
	class UTTLAutoTextInputComponent*            TTLAutoTextInput;                                  // 0x4D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTTLSpectatorModeControlComponent*     TTLSpectatorModeControl;                           // 0x4D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UConsoleMessageComponent_C*            ConsoleMessageComponent;                           // 0x4E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMissionTutorialHUDComponent_C*        MissionTutorialHUDComponent;                       // 0x4E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UMultiplayDuelComponent_C*             MultiplayDuelComponent;                            // 0x4F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTTLLockonHUDComponent*                TTLLockonHUD;                                      // 0x4F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UDebugHudComponent_C*                  DebugHudComponent;                                 // 0x500(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UTalkHUDComponent_C*                   TalkHUDComponent;                                  // 0x508(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UReticleHUDComponent_C*                ReticleHUDComponent;                               // 0x510(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x518(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentSight;                                      // 0x520(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsDrawLockonUI;                                    // 0x524(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_B35[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMsn_judge_top00_C*                    MissionCompleatWidget;                             // 0x528(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AHUDMission_C* GetDefaultObj();

	void SetVisibilityAllOwnedWidgets(enum class ESlateVisibility Visibility, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UUserWidget* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void TryCancelPickUp(class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class UArsenalPickUpPartsComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	class UCmn_parts_fade00_C* PlayFadeoutAnime(float StartAtTime, float* EndTime, class UUserWidget* FadeWidget, class UCmn_parts_fade00_C* CallFunc_Create_ReturnValue, float CallFunc_GetEndTime_ReturnValue);
	class UMsn_judge_top00_C* PlayMissionCompleatAnime(enum class ETTLEMissionResult MissionResult, float* A_in_00, enum class ETTLEMissionResult NewLocalVar_0, const TArray<class FString>& WIdgetNameTbl, class UWidgetAnimation* WidgetAnimation, class UMsn_judge_top00_C* MsnJudgeTop, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum1_CmpSuccess, TArray<class FString>& K2Node_MakeArray_Array, int32 Temp_int_Array_Index_Variable, class UMsn_judge_top00_C* CallFunc_Create_ReturnValue, class FText CallFunc_FindTextInLocalizationTable_OutText, bool CallFunc_FindTextInLocalizationTable_ReturnValue, bool CallFunc_IsSessionHost_ReturnValue, class UAtomComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, class UAtomComponent* CallFunc_SpawnSoundAtLocation_ReturnValue1, bool CallFunc_IsSessionHost_ReturnValue1, bool CallFunc_IsSessionHost_ReturnValue2, class FText CallFunc_FindTextInLocalizationTable_OutText1, bool CallFunc_FindTextInLocalizationTable_ReturnValue1, class FText CallFunc_FindTextInLocalizationTable_OutText2, bool CallFunc_FindTextInLocalizationTable_ReturnValue2, class FText CallFunc_FindTextInLocalizationTable_OutText3, bool CallFunc_FindTextInLocalizationTable_ReturnValue3, class FText CallFunc_FindTextInLocalizationTable_OutText4, bool CallFunc_FindTextInLocalizationTable_ReturnValue4, class FText CallFunc_FindTextInLocalizationTable_OutText5, bool CallFunc_FindTextInLocalizationTable_ReturnValue5, int32 Temp_int_Loop_Counter_Variable, class FText CallFunc_FindTextInLocalizationTable_OutText6, bool CallFunc_FindTextInLocalizationTable_ReturnValue6, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UWidget* CallFunc_GetWidgetFromName_ReturnValue, class FText CallFunc_FindTextInLocalizationTable_OutText7, bool CallFunc_FindTextInLocalizationTable_ReturnValue7, class UTextBlock* K2Node_DynamicCast_AsText, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetEndTime_ReturnValue);
	void SetTalkHUD(class FName TalkEventName, bool CallFunc_Start_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void UserConstructionScript();
	void InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_4(const struct FKey& Key);
	void InpActEvt_Gamepad_DPad_Up_K2Node_InputKeyEvent_3(const struct FKey& Key);
	void InpActEvt_Gamepad_DPad_Down_K2Node_InputKeyEvent_2(const struct FKey& Key);
	void InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_1(const struct FKey& Key);
	void InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_0(const struct FKey& Key);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveDrawHUD(int32 SizeX, int32 SizeY);
	void OnStartMultiplayDuel();
	void OnResultEventFinished();
	void OnResultEventStarted(enum class ETTLEMissionResult MissionResult);
	void OnMissionPlayerChanged();
	void OnMissionStarted();
	void OnLevelLoadStarted();
	void OnMissionFinished(enum class ETTLEMissionResult MissionResult);
	void OnLevelFinished();
	void OnMenuStarted();
	void OnMissionDuelEvaluationScreenStarted();
	void FinishedMissionLevelProcess();
	void SetVisibilityAllOwnedWidgetsForCallBP(enum class ESlateVisibility Visibility);
	void OnMissionEndingEventStarted(enum class ETTLEMissionResult MissionResult);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_HUDMission(int32 EntryPoint, class UMsn_hud_top00_C* CallFunc_Create_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, bool Temp_bool_IsClosed_Variable, bool CallFunc_IsNeedHideHud_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsEnableOuterLockOn_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue1, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue2, class ULockonComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_BooleanAND_ReturnValue3, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsPlayableOgreRelation_ReturnValue, class AArsenalCharacter_C* K2Node_DynamicCast_AsArsenal_Character, bool K2Node_DynamicCast_bSuccess1, class UCmn_parts_fade00_C* CallFunc_PlayFadeoutAnime_ReturnValue, float CallFunc_PlayFadeoutAnime_EndTime, const struct FKey& Temp_struct_Variable, const struct FKey& K2Node_InputKeyEvent_Key, const struct FKey& K2Node_InputKeyEvent_Key1, const struct FKey& K2Node_InputKeyEvent_Key2, int32 Temp_int_Variable, const struct FKey& K2Node_InputKeyEvent_Key3, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FKey& K2Node_InputKeyEvent_Key4, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class ATTLGameState* K2Node_DynamicCast_AsTTLGame_State, bool K2Node_DynamicCast_bSuccess2, class APlayerController* CallFunc_GetPlayerController_ReturnValue, int32 Temp_int_Array_Index_Variable, class AGameStateBase* CallFunc_GetGameState_ReturnValue1, class ATTLGameState* K2Node_DynamicCast_AsTTLGame_State1, bool K2Node_DynamicCast_bSuccess3, enum class ETTLEMissionResult K2Node_Event_MissionResult2, enum class ETTLEMissionResult K2Node_Event_MissionResult1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UMsn_judge_top00_C* CallFunc_PlayMissionCompleatAnime_ReturnValue, float CallFunc_PlayMissionCompleatAnime_a_in_00, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue1, int32 K2Node_Event_SizeX, int32 K2Node_Event_SizeY, class AGameStateBase* CallFunc_GetGameState_ReturnValue2, class ATTLGameState* K2Node_DynamicCast_AsTTLGame_State2, bool K2Node_DynamicCast_bSuccess4, float K2Node_Event_DeltaSeconds, enum class ESlateVisibility K2Node_Event_visibility, class AGameStateBase* CallFunc_GetGameState_ReturnValue3, class ATTLGameState* K2Node_DynamicCast_AsTTLGame_State3, bool K2Node_DynamicCast_bSuccess5, bool K2Node_SwitchEnum1_CmpSuccess, class UUserWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue1, class AGameStateBase* CallFunc_GetGameState_ReturnValue4, class ATTLGameState* K2Node_DynamicCast_AsTTLGame_State4, bool K2Node_DynamicCast_bSuccess6, int32 Temp_int_Array_Index_Variable1, class UUserWidget* CallFunc_Array_Get_Item1, class UMsn_hud_top00_C* K2Node_DynamicCast_AsMsn_Hud_Top_00, bool K2Node_DynamicCast_bSuccess7, class UMsn_hud_radar02_C* K2Node_DynamicCast_AsMsn_Hud_Radar_02, bool K2Node_DynamicCast_bSuccess8, class UOnl_duel_top00_C* CallFunc_Create_ReturnValue1, class UOnl_coop_page00_C* CallFunc_Create_ReturnValue2, int32 CallFunc_Array_Add_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue2, class UMsn_fielditem_top00_C* CallFunc_Create_ReturnValue3, int32 CallFunc_Array_Add_ReturnValue3, enum class ETTLEMissionResult K2Node_Event_MissionResult, bool CallFunc_IsValid_ReturnValue2, enum class EEndPlayReason K2Node_Event_EndPlayReason, class UMsn_rob_top00_C* CallFunc_Create_ReturnValue4, bool CallFunc_IsValid_ReturnValue3, int32 CallFunc_Array_Add_ReturnValue4, int32 Temp_int_Loop_Counter_Variable1, bool CallFunc_Less_IntInt_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue2);
};

}


