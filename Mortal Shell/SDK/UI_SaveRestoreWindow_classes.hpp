#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x250 (0x480 - 0x230)
// WidgetBlueprintGeneratedClass UI_SaveRestoreWindow.UI_SaveRestoreWindow_C
class UUI_SaveRestoreWindow_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_FadeInDismiss;                                // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_FadeOut;                                      // 0x240(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_FadeIn;                                       // 0x248(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                               Button_SaveSlot_1;                                 // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_SaveSlot_2;                                 // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_SaveSlot_3;                                 // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_Cancel;                              // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_Confirm;                             // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_LastBackup_1;                        // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_LastBackup_2;                        // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_LastBackup_3;                        // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_Navigate;                            // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_SaveSlot_1;                          // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_SaveSlot_2;                          // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_SaveSlot_3;                          // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_NoBackup_1;                                // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_NoBackup_2;                                // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_NoBackup_3;                                // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_SaveSlot_1_Button;                         // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_SaveSlot_2_Button;                         // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_SaveSlot_3_Button;                         // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Backup_Date_Value_1;                          // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Backup_Date_Value_2;                          // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Backup_Date_Value_3;                          // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Date_1;                                       // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Date_2;                                       // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Date_3;                                       // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Glimpse_1;                                    // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Glimpse_2;                                    // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Glimpse_3;                                    // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Location_1;                                   // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Location_2;                                   // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Location_3;                                   // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Playtime_1;                                   // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Playtime_2;                                   // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Playtime_3_Value;                             // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Tar_1;                                        // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Tar_2;                                        // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Tar_3;                                        // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_RestoreSave_Header;                      // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ControllerButton_C*                UI_ControllerButton_Cancel;                        // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ControllerButton_C*                UI_ControllerButton_Confirm;                       // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ControllerButton_C*                UI_ControllerButton_Navigate;                      // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_SaveMenu_Restore_C*                UI_SaveMenu_Restore_1;                             // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_SaveMenu_Restore_C*                UI_SaveMenu_Restore_2;                             // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_SaveMenu_Restore_C*                UI_SaveMenu_Restore_3;                             // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_MainMenu_C*                        UI_MainMenu;                                       // 0x3A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FStruct_SaveSlotState                 SaveSlotState;                                     // 0x3B0(0x3)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_25AF[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSaveSlotInfo                         SaveSlotInfo_1;                                    // 0x3B8(0x38)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSaveSlotInfo                         SaveSlotInfo_2;                                    // 0x3F0(0x38)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSaveSlotInfo                         SaveSlotInfo_3;                                    // 0x428(0x38)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         SlotBackup_1;                                      // 0x460(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         SlotBackup_2;                                      // 0x461(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         SlotBackup_3;                                      // 0x462(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_25CF[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Index_Current;                                     // 0x464(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Index_Temp;                                        // 0x468(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Input_Consume;                                     // 0x46C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Input_Enabled;                                     // 0x46D(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         InRestoreWindow;                                   // 0x46E(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         RestoreInProgress;                                 // 0x46F(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UUI_SaveMenu_Restore_C*                SelectedRestoreWidget;                             // 0x470(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          Timer_Restore;                                     // 0x478(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_SaveRestoreWindow_C* GetDefaultObj();

	void SetHeaderText(class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue);
	void NavRight(bool K2Node_SwitchInteger_CmpSuccess);
	void NavLeft(bool K2Node_SwitchInteger_CmpSuccess);
	void ConfirmRestore(bool K2Node_SwitchInteger_CmpSuccess);
	void SaveRestoreRef();
	void CloseRestore(class UUI_SaveMenu_Restore_C* Widget);
	void RestoreButtonSelected(int32 Selection, int32 Slot, class UUI_SaveMenu_Restore_C* SelectedRestoreWidget, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class UDHGameInstance* CallFunc_GetInstance_ReturnValue, int32 CallFunc_GetPrimaryUserIndex_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2);
	void NavBackListen(FDelegateProperty_ Event);
	void NavConfirmListen(FDelegateProperty_ Event);
	void NavRightListen(FDelegateProperty_ Event);
	void NavLeftListen(FDelegateProperty_ Event);
	void OpenRestore(class UUI_SaveMenu_Restore_C* InputPin);
	void SelectSlot(bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1);
	void SetSlotAvailability_3(class FText CallFunc_GetDateTimeText_ReturnValue);
	void SetSlotAvailability_2(class FText CallFunc_GetDateTimeText_ReturnValue);
	void SetSlotAvailability_1(class FText CallFunc_GetDateTimeText_ReturnValue);
	void NavUpListen(FDelegateProperty_ Event);
	void NavDownListen(FDelegateProperty_ Event);
	int32 Navigation_GetIndex(int32 SelectedIndex, int32 Delta, int32 MaxIndex, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue);
	void GetButtons(TArray<class UButton*>* Array, TArray<class UButton*>& K2Node_MakeArray_Array);
	void Navigation_UpDown(bool UseWidget, bool CustomIndex, bool SkipIndexCheck, bool SkipSound, int32 Delta, class UButton* Button, int32 Index, const struct FButtonStyle& ButtonStyle_Normal, const struct FButtonStyle& ButtonStyle_Hovered, class UButton* Local_Button, int32 Local_IndexSelected, class UButton* Local_SelectedButton, int32 Local_Delta, bool Local_SkipSound, bool Local_SkipIndexCheck, bool Local_CustomIndex, bool Local_UseWidget, TArray<class UButton*>& CallFunc_GetButtons_Array, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class UButton*>& CallFunc_GetButtons_Array_1, TArray<class UButton*>& CallFunc_GetButtons_Array_2, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_Navigation_GetIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_1, class UButton* CallFunc_Array_Get_Item, TArray<class UButton*>& CallFunc_GetButtons_Array_3, int32 CallFunc_Array_Find_ReturnValue, int32 Temp_int_Array_Index_Variable, class UButton* CallFunc_Array_Get_Item_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_4, bool CallFunc_EqualEqual_IntInt_ReturnValue_5, bool CallFunc_Not_PreBool_ReturnValue);
	void ListenForInput();
	void CheckBackupAvailable(const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class UDHGameInstance* CallFunc_GetInstance_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue_1, int32 CallFunc_GetPrimaryUserIndex_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_HasSaveBackup_ReturnValue, class UDHGameInstance* CallFunc_GetInstance_ReturnValue_1, const class FString& CallFunc_Conv_BoolToString_ReturnValue_2, int32 CallFunc_GetPrimaryUserIndex_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, bool CallFunc_HasSaveBackup_ReturnValue_1, class UDHGameInstance* CallFunc_GetInstance_ReturnValue_2, int32 CallFunc_GetPrimaryUserIndex_ReturnValue_2, bool CallFunc_HasSaveBackup_ReturnValue_2);
	void PopulateSlots();
	class FText GetDateTimeText(const struct FDateTime& InDateTime, int32 CallFunc_BreakDateTime_Year, int32 CallFunc_BreakDateTime_Month, int32 CallFunc_BreakDateTime_Day, int32 CallFunc_BreakDateTime_Hour, int32 CallFunc_BreakDateTime_Minute, int32 CallFunc_BreakDateTime_Second, int32 CallFunc_BreakDateTime_Millisecond, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_FixTime_ReturnValue, const class FString& CallFunc_FixTime_ReturnValue_1, const class FString& CallFunc_FixTime_ReturnValue_2, const class FString& CallFunc_FixTime_ReturnValue_3, const class FString& CallFunc_FixTime_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, class FText CallFunc_Conv_StringToText_ReturnValue);
	class FString FixTime(int32 Input, bool Temp_bool_Variable, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& K2Node_Select_Default);
	class FText GetPlaytimeText(const struct FDateTime& InDateTime, int32 NG, bool Temp_bool_Variable, bool CallFunc_Greater_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_BreakDateTime_Year, int32 CallFunc_BreakDateTime_Month, int32 CallFunc_BreakDateTime_Day, int32 CallFunc_BreakDateTime_Hour, int32 CallFunc_BreakDateTime_Minute, int32 CallFunc_BreakDateTime_Second, int32 CallFunc_BreakDateTime_Millisecond, const class FString& Temp_string_Variable, const class FString& CallFunc_FixTime_ReturnValue, const class FString& CallFunc_FixTime_ReturnValue_1, const class FString& K2Node_Select_Default, const class FString& CallFunc_FixTime_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, class FText CallFunc_Conv_StringToText_ReturnValue);
	void SetSaveSlotTexts(bool SaveExist, class UTextBlock* Playtime, class UTextBlock* Tar, class UTextBlock* Glimpse, class UTextBlock* Location, class UTextBlock* Date, struct FSaveSlotInfo& SaveSlotInfo, bool Local_SaveExist, class FText Temp_text_Variable, class FText CallFunc_GetDateTimeText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, class FText CallFunc_GetPlaytimeText_ReturnValue, bool Temp_bool_Variable, class FText Temp_text_Variable_1, bool Temp_bool_Variable_1, class FText Temp_text_Variable_2, bool Temp_bool_Variable_2, class FText Temp_text_Variable_3, class FText CallFunc_MakeLiteralText_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, class FText K2Node_Select_Default, class FText K2Node_Select_Default_1, bool Temp_bool_Variable_3, class FText K2Node_Select_Default_2, class FText Temp_text_Variable_4, bool Temp_bool_Variable_4, class FText Temp_text_Variable_5, class FText K2Node_Select_Default_3, bool Temp_bool_Variable_5, class FText K2Node_Select_Default_4, class FText K2Node_Select_Default_5);
	void LoadSaveSlotData(bool Local_SaveExist, int32 Local_Index, class UDHGameInstance* CallFunc_GetInstance_ReturnValue, class UDHGameInstance* CallFunc_GetInstance_ReturnValue_1, int32 CallFunc_GetPrimaryUserIndex_ReturnValue, int32 CallFunc_GetPrimaryUserIndex_ReturnValue_1, int32 Temp_int_Variable, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FName Temp_name_Variable, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess_1, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_DoesSaveGameExist_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class USaveGame* CallFunc_DHLoadGameFromSlot_ReturnValue, class UServerSaveGame_C* K2Node_DynamicCast_AsServer_Save_Game, bool K2Node_DynamicCast_bSuccess, class FText CallFunc_GetLocationNameFromMapName_Location, class FName CallFunc_Get_Shell_Bonding_Points_Name_Name, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, const struct FSaveSlotInfo& K2Node_MakeStruct_SaveSlotInfo);
	void FadeInDismiss(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void OnOpen();
	void Nav_Down_Bind();
	void Nav_Down_Set();
	void Nav_Up_Bind();
	void Nav_Up_Set();
	void Nav_Right_Bind();
	void Nav_Left_Set();
	void Nav_Left_Bind();
	void Nav_Right_Set();
	void Nav_Confirm_Bind();
	void Nav_Confirm_Set();
	void Nav_Back_Bind();
	void Nav_Back_Set();
	void OnCloseAnimFinished();
	void OnOpenAnimFinished();
	void RestoreInProgress_Bind();
	void RestoreInProgress_Check();
	void BndEvt__UI_SaveMenu_Restore_1_K2Node_ComponentBoundEvent_0_OnClick__DelegateSignature(int32 Index, int32 Slot, class UUI_SaveMenu_Restore_C* Widget);
	void BndEvt__UI_SaveMenu_Restore_2_K2Node_ComponentBoundEvent_1_OnClick__DelegateSignature(int32 Index, int32 Slot, class UUI_SaveMenu_Restore_C* Widget);
	void BndEvt__UI_SaveMenu_Restore_3_K2Node_ComponentBoundEvent_2_OnClick__DelegateSignature(int32 Index, int32 Slot, class UUI_SaveMenu_Restore_C* Widget);
	void BndEvt__Button_SaveSlot_1_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_SaveSlot_2_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_SaveSlot_3_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_SaveSlot_1_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_SaveSlot_2_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_SaveSlot_3_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UI_ControllerButton_Cancel_K2Node_ComponentBoundEvent_9_OnButtonClicked__DelegateSignature(class UUI_ControllerButton_C* ControllerButton);
	void ExecuteUbergraph_UI_SaveRestoreWindow(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_IsRestoreOperationInProgress_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, int32 K2Node_ComponentBoundEvent_Index_2, int32 K2Node_ComponentBoundEvent_Slot_2, class UUI_SaveMenu_Restore_C* K2Node_ComponentBoundEvent_Widget_2, int32 K2Node_ComponentBoundEvent_Index_1, int32 K2Node_ComponentBoundEvent_Slot_1, class UUI_SaveMenu_Restore_C* K2Node_ComponentBoundEvent_Widget_1, int32 K2Node_ComponentBoundEvent_Index, int32 K2Node_ComponentBoundEvent_Slot, class UUI_SaveMenu_Restore_C* K2Node_ComponentBoundEvent_Widget, bool CallFunc_CheckAllSaves_SaveExist, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class UUI_ControllerButton_C* K2Node_ComponentBoundEvent_ControllerButton);
};

}


