#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE5 (0x345 - 0x260)
// WidgetBlueprintGeneratedClass wid_WorkshopUI_Main.wid_WorkshopUI_Main_C
class UWid_WorkshopUI_Main_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UCanvasPanel*                          CanvasPanel_0;                                     // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MissionAssigment_Main_C*          MissionAssigment;                                  // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_MissionSelection_Main_C*          MissionSelection;                                  // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TScriptInterface<class IWid_IWorkshopUIApp_C> CurrentApp;                                        // 0x288(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	FMulticastInlineDelegateProperty_            Finish;                                            // 0x298(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnMoveOut;                                         // 0x2A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UWid_RoomSkillTreeConfirm_C*           ConfirmPopup;                                      // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IgorMissionPopupVisible;                           // 0x2C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ArrowsEnabled;                                     // 0x2C1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         FEnabled;                                          // 0x2C2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         EnterEnabled;                                      // 0x2C3(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         RMBEnabled;                                        // 0x2C4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7BC[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class Abp_MissionSelection_C*                Owner;                                             // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UITutorialStarted;                                 // 0x2D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7C9[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  TutorialItemToSelect;                              // 0x2D8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        CurrentTutorialStep;                               // 0x2F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7CA[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Igor;                                              // 0x2F8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         UseButtonPressed;                                  // 0x310(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7D1[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        PressTime;                                         // 0x314(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PressDelay;                                        // 0x318(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Last_Played_Pitch;                                 // 0x31C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SelectedTutorialIndex;                             // 0x320(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         TutorialActivated;                                 // 0x324(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IgorOnWrongLevel;                                  // 0x325(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IgorOnWrongLevelAlreadyDisplayed;                  // 0x326(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7DA[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_RoomSkillTreeConfirm_C*           MoveOutPopup;                                      // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MoveOutPopupVisible;                               // 0x330(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7DE[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWid_RoomSkillTreeConfirm_C*           TutorialPopup;                                     // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         WeatherTutorialVisible;                            // 0x340(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         DecisionsTutorialVisible;                          // 0x341(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         TimePassageTutorialVisible;                        // 0x342(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         CompanionStoryMissionTutorialVisible;              // 0x343(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         NormalPopupVisible;                                // 0x344(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UWid_WorkshopUI_Main_C* GetDefaultObj();

	bool AnyTutorialPopupVisible(bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3);
	void IsAnyCompanionAssignedToStoryMission(bool* Result, TMap<enum class EEventMap, struct FActiveQuestInfo> Quests, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, TMap<enum class EEventMap, struct FActiveQuestInfo> K2Node_MakeVariable_MakeVariableOutput, TArray<enum class EEventMap>& CallFunc_Map_Keys_Keys, enum class EEventMap CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FActiveQuestInfo& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, bool CallFunc_NotEqual_NameName_ReturnValue, TMap<enum class EEventMap, struct FActiveQuestInfo> CallFunc_GetActiveQuests_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, const struct FQuestInfoInput& CallFunc_GetQuestInfoBP_ReturnValue);
	void SetTutorialSeen(class FName PermamentData, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle);
	void ValidateIgorEvent(bool FoundCorrectEvent, const struct FCompanionEntry& IgorStats, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, TArray<class ABackend*>& CallFunc_GetAllActorsOfClass_OutActors, class ABackend* CallFunc_Array_Get_Item, bool CallFunc_UnsetCompanionFromCurrentActiveEvent_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, TArray<class UWid_LevelSelection_Entry_C*>& CallFunc_GetAllLevels_Levels, int32 CallFunc_Add_IntInt_ReturnValue_1, class UWid_LevelSelection_Entry_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, bool CallFunc_GetCurrentStatsForCompanion2_Valid, const struct FCompanionEntry& CallFunc_GetCurrentStatsForCompanion2_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, TMap<enum class EEventMap, struct FActiveQuestInfo> CallFunc_GetActiveQuests_ReturnValue, TArray<struct FActiveQuestInfo>& CallFunc_Map_Values_Values, int32 CallFunc_Array_Length_ReturnValue_1, const struct FActiveQuestInfo& CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1);
	bool IsDetailInfoVisible(bool CallFunc_IsVisible_ReturnValue);
	void UpdatePopupPosition(class UWid_RoomSkillTreeConfirm_C* Popup, const struct FMargin& K2Node_MakeStruct_Margin, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FAnchors& K2Node_MakeStruct_Anchors);
	void HideAllHighLights(int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWid_LevelSelection_Entry_C* K2Node_DynamicCast_AsWid_Level_Selection_Entry, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetChildrenCount_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void SetInput(bool ArrowsEnabled, bool FEnabled, bool EnterEnabled, bool RMBEnabled);
	void GetCurrentSelectedEvent(class FName* Name, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, TMap<enum class EEventMap, struct FActiveQuestInfo> CallFunc_GetActiveQuests_ReturnValue, enum class EEventMap CallFunc_CurrentSelectedMap_Mapp, const struct FActiveQuestInfo& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void ChangeApp(TScriptInterface<class IWid_IWorkshopUIApp_C> NewApp);
	void InputActivateTutorial();
	void InputOpenPDA();
	void Construct();
	void InputUp();
	void InputRight();
	void InputDown();
	void InputLeft();
	void InputToggle1();
	void InputToggle2();
	void InputBack();
	void InputAccept();
	void OnAssign(class FName Event, enum class EEventMap Map);
	void OnMoveOutEvent();
	void InputMoveOut();
	void OnBackMissionSelectionEvent();
	void GoBackMissionAssigmentEvent();
	void InputUpDown(float Axis);
	void InputLeftRight(float Axis);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void InputMoveOutReleased();
	void InputAlternativeAttack();
	void InputAnyKey();
	void InputKeyboardMenu();
	void InternalInputMoveOut();
	void InternalInputBack();
	void InternalInputAccept();
	void InternalInputKeyboardMenu();
	void BeginTutorials();
	void Destruct();
	void ShowNormalPopup(class FName Message);
	void ExecuteUbergraph_wid_WorkshopUI_Main(int32 EntryPoint, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, class UWid_RoomSkillTreeConfirm_C* CallFunc_Create_ReturnValue, class UWid_RoomSkillTreeConfirm_C* CallFunc_Create_ReturnValue_1, class UWid_RoomSkillTreeConfirm_C* CallFunc_Create_ReturnValue_2, bool CallFunc_AnyTutorialPopupVisible_ReturnValue, class UWid_RoomSkillTreeConfirm_C* CallFunc_Create_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, TMap<enum class EEventMap, struct FActiveQuestInfo> CallFunc_GetActiveQuests_ReturnValue, TArray<struct FCompanionEntry>& CallFunc_GetAvailableCompanions_ReturnValue, TArray<enum class EEventMap>& CallFunc_Map_Keys_Keys, TArray<struct FActiveQuestInfo>& CallFunc_Map_Values_Values, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, TScriptInterface<class IWid_IWorkshopUIApp_C> CallFunc_Start_self_CastInput, class FName K2Node_CustomEvent_Event, enum class EEventMap K2Node_CustomEvent_Map, TScriptInterface<class IWid_IWorkshopUIApp_C> CallFunc_ChangeApp_NewApp_CastInput, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, class FText Temp_text_Variable, TArray<struct FCompanionEntry>& CallFunc_GetAvailableCompanions_ReturnValue_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_2, enum class EEventMap CallFunc_GetMapForActiveEvent_ReturnValue, TScriptInterface<class IWid_IWorkshopUIApp_C> CallFunc_Show_self_CastInput, float K2Node_CustomEvent_Axis_1, TScriptInterface<class IWid_IWorkshopUIApp_C> CallFunc_ChangeApp_NewApp_CastInput_1, float K2Node_CustomEvent_Axis, class FName CallFunc_GetCurrentSelectedEvent_Name, class UWid_CompanionsPanel_C* CallFunc_UpdateAllCompanions_CompanionsPanel, class FName CallFunc_GetCurrentSelectedEvent_Name_1, class UWid_CompanionsPanel_C* CallFunc_UpdateAllCompanions_CompanionsPanel_1, class FName CallFunc_GetCurrentSelectedEvent_Name_2, class UWid_CompanionsPanel_C* CallFunc_UpdateAllCompanions_CompanionsPanel_2, bool CallFunc_RemoveChild_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_3, TArray<struct FCompanionEntry>& CallFunc_GetAvailableCompanions_ReturnValue_2, bool CallFunc_NotEqual_NameName_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, class FText Temp_text_Variable_1, class UWid_RoomSkillTreeConfirm_C* CallFunc_Create_ReturnValue_4, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool Temp_bool_Variable, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class FText K2Node_Select_Default, bool CallFunc_BooleanOR_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_4, int32 CallFunc_GetCurrentDay_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_5, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_1, bool CallFunc_PermanentDataGetValue_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, bool CallFunc_RemoveChild_ReturnValue_1, bool CallFunc_CheckAllcompanionsHaveMission_AllCompanionsAssigned, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_2, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_IsDetailInfoVisible_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_7, TArray<struct FCompanionEntry>& CallFunc_GetAvailableCompanions_ReturnValue_3, bool CallFunc_CheckAllcompanionsHaveMission_AllCompanionsAssigned_1, bool CallFunc_NotEqual_NameName_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_8, int32 Temp_int_Array_Index_Variable, enum class EEventMap CallFunc_Array_Get_Item, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_4, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_5, bool CallFunc_NotEqual_ByteByte_ReturnValue_2, bool CallFunc_NotEqual_ByteByte_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_6, bool CallFunc_NotEqual_ByteByte_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_7, bool CallFunc_NotEqual_ByteByte_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_8, bool CallFunc_NotEqual_ByteByte_ReturnValue_6, bool CallFunc_BooleanAND_ReturnValue_9, const struct FActiveQuestInfo& CallFunc_Array_Get_Item_1, bool CallFunc_BooleanAND_ReturnValue_10, bool CallFunc_EqualEqual_NameName_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_9, int32 CallFunc_GetCurrentDay_ReturnValue_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_10, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_GetCompletedStoryQuestsCount_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_RemoveChild_ReturnValue_2, bool CallFunc_RemoveChild_ReturnValue_3, bool CallFunc_RemoveChild_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_6, class UWid_RoomSkillTreeConfirm_C* CallFunc_Create_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_7, bool CallFunc_RemoveChild_ReturnValue_5, class FName K2Node_CustomEvent_Message, bool CallFunc_BooleanOR_ReturnValue_8, bool CallFunc_NotEqual_NameName_ReturnValue_3, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, bool CallFunc_BooleanOR_ReturnValue_9, bool CallFunc_BooleanOR_ReturnValue_10, bool CallFunc_BooleanOR_ReturnValue_11, bool CallFunc_BooleanOR_ReturnValue_12, bool CallFunc_BooleanOR_ReturnValue_13, bool CallFunc_BooleanOR_ReturnValue_14, bool CallFunc_BooleanOR_ReturnValue_15, bool CallFunc_BooleanOR_ReturnValue_16, bool CallFunc_RemoveChild_ReturnValue_6, class ACGHUD_C* CallFunc_GetCGHud_AsCGHUD, class ACGHUD_C* CallFunc_GetCGHud_AsCGHUD_1, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_3, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_11, bool CallFunc_AnyTutorialPopupVisible_ReturnValue_1, bool CallFunc_PermanentDataGetValue_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_11, bool CallFunc_AnyTutorialPopupVisible_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_12, bool CallFunc_Not_PreBool_ReturnValue_3, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue_1, class UWid_RoomSkillTreeConfirm_C* CallFunc_Create_ReturnValue_6, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_13, bool CallFunc_BooleanAND_ReturnValue_14, class UPanelSlot* CallFunc_AddChild_ReturnValue, class FText Temp_text_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_12, class FText Temp_text_Variable_3, bool Temp_bool_Variable_1, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_4, class FText K2Node_Select_Default_1, bool CallFunc_PermanentDataGetValue_ReturnValue_2, class UWid_RoomSkillTreeConfirm_C* CallFunc_Create_ReturnValue_7, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_13, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_5, bool CallFunc_PermanentDataGetValue_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, bool Temp_bool_Variable_2, class FText K2Node_Select_Default_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue_5, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_14, class UWid_RoomSkillTreeConfirm_C* CallFunc_Create_ReturnValue_8, class FText Temp_text_Variable_6, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_6, bool CallFunc_PermanentDataGetValue_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, bool CallFunc_IsAnyCompanionAssignedToStoryMission_Result, class FText Temp_text_Variable_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue_6, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_15, bool Temp_bool_Variable_3, bool CallFunc_PermanentDataGetValue_ReturnValue_5, class FText K2Node_Select_Default_3);
	void OnMoveOut__DelegateSignature(enum class EEventMap Map);
	void Finish__DelegateSignature();
};

}

