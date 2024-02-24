#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1453 (0x1683 - 0x230)
// WidgetBlueprintGeneratedClass UI_SaveMenu.UI_SaveMenu_C
class UUI_SaveMenu_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_FadeOut;                                      // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_FadeIn;                                       // 0x240(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UButton*                               Button_SaveSlot_1;                                 // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_SaveSlot_2;                                 // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_SaveSlot_3;                                 // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_SaveMenu_1;                          // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_SaveMenu_2;                          // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_SaveMenu_3;                          // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Background;                                  // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Slot_NotPresent_1;                           // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Slot_NotPresent_2;                           // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Slot_NotPresent_3;                           // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_SaveSlot_1_Button;                         // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_SaveSlot_2_Button;                         // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_SaveSlot_3_Button;                         // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Date_1;                                       // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Date_2;                                       // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Date_3;                                       // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Glimpse_1;                                    // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Glimpse_2;                                    // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Glimpse_3;                                    // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Location_1;                                   // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Location_2;                                   // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Location_3;                                   // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Playtime_1;                                   // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Playtime_2;                                   // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Playtime_3_Value;                             // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Tar_1;                                        // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Tar_2;                                        // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Tar_3;                                        // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_79;                                      // 0x328(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_SaveMenu_Overwrite_C*              UI_SaveMenu_Overwrite_1;                           // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_SaveMenu_Overwrite_C*              UI_SaveMenu_Overwrite_2;                           // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_SaveMenu_Overwrite_C*              UI_SaveMenu_Overwrite_3;                           // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_StormMode_SaveSlot_C*              UI_StormMode_SaveSlot_1;                           // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_StormMode_SaveSlot_C*              UI_StormMode_SaveSlot_2;                           // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_StormMode_SaveSlot_C*              UI_StormMode_SaveSlot_3;                           // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FButtonStyle                          ButtonStyle_Normal;                                // 0x360(0x278)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FButtonStyle                          ButtonStyle_Hovered;                               // 0x5D8(0x278)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        Index_Current;                                     // 0x850(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Index_Max;                                         // 0x854(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Input_Enabled;                                     // 0x858(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1C1D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          NavDown_Timer;                                     // 0x860(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          NavUp_Timer;                                       // 0x868(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TArray<class UButton*>                       Buttons_LoadGame;                                  // 0x870(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	enum class Enum_SaveMenu_Type                SaveMenuType;                                      // 0x880(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FStruct_SaveSlotState                 SaveSlotState;                                     // 0x881(0x3)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1C24[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_MainMenu_C*                        UI_MainMenu;                                       // 0x888(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SaveSlotIndex;                                     // 0x890(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Overwrite_Enabled;                                 // 0x894(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ConsumeInput;                                      // 0x895(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1C3A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSaveSlotInfo                         SaveSlotInfo_1;                                    // 0x898(0x38)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSaveSlotInfo                         SaveSlotInfo_2;                                    // 0x8D0(0x38)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSaveSlotInfo                         SaveSlotInfo_3;                                    // 0x908(0x38)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         SlotBackup_1;                                      // 0x940(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         SlotBackup_2;                                      // 0x941(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         SlotBackup_3;                                      // 0x942(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1C4E[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UButton*>                       Buttons_StormMode;                                 // 0x948(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_1C4F[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_StormModeSave                 SaveInfoStormMode_1;                               // 0x960(0x458)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_1C56[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_StormModeSave                 SaveInfoStormMode_2;                               // 0xDC0(0x458)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_1C5D[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_StormModeSave                 SaveInfoStormMode_3;                               // 0x1220(0x458)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_1C65[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_IsStormMode                   StormModeCanAccessSlots;                           // 0x1680(0x3)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_SaveMenu_C* GetDefaultObj();

	void HandleButtonsStormMode(bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void SetStormModeButton_3(bool Local_ButtonEnabled, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility K2Node_Select_Default, float K2Node_Select_Default_1, int32 CallFunc_Array_Add_ReturnValue);
	void SetStormModeButton_2(bool Local_ButtonEnabled, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility K2Node_Select_Default, float K2Node_Select_Default_1, int32 CallFunc_Array_Add_ReturnValue);
	void GetStormModeSaveSlotsData(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_StormMode_GetHasEnteredOnce_HasEnteredOnce, const struct FStruct_IsStormMode& CallFunc_StormMode_GetHasEnteredOnce_SlotsData);
	void SetStormModeButton_1(bool Local_ButtonEnabled, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility K2Node_Select_Default, float K2Node_Select_Default_1, int32 CallFunc_Array_Add_ReturnValue);
	void CheckBackupSaves(const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Conv_BoolToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UDHGameInstance* CallFunc_GetInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetPrimaryUserIndex_ReturnValue, bool CallFunc_GetSaveRestoreEnabled_ReturnValue, bool CallFunc_HasSaveBackup_ReturnValue, class UDHGameInstance* CallFunc_GetInstance_ReturnValue_1, class UDHGameInstance* CallFunc_GetInstance_ReturnValue_2, int32 CallFunc_GetPrimaryUserIndex_ReturnValue_1, int32 CallFunc_GetPrimaryUserIndex_ReturnValue_2, bool CallFunc_HasSaveBackup_ReturnValue_1, bool CallFunc_HasSaveBackup_ReturnValue_2);
	void HighlightButtonOnFadeInEnd(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, TArray<class UButton*>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue, class UButton* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsHovered_ReturnValue);
	void DebugSaveSlot(const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	class FString FixTime(int32 InputPin, bool Temp_bool_Variable, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& K2Node_Select_Default);
	void ListenForInput();
	void NavConfirm_Click(int32 SaveSlot, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1);
	void NavRight(bool K2Node_SwitchInteger_CmpSuccess);
	void NavLeft(bool K2Node_SwitchInteger_CmpSuccess);
	void SelectOverwrite(bool CustomIndex, int32 Index, int32 SaveSlot, bool Temp_bool_Variable, bool Temp_bool_Variable_1, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 K2Node_Select_Default, TArray<class UUI_SaveMenu_Overwrite_C*>& K2Node_MakeArray_Array, class UUI_SaveMenu_Overwrite_C* CallFunc_Array_Get_Item, int32 K2Node_Select_Default_1, bool K2Node_SwitchInteger_CmpSuccess);
	void CloseOverwrite(class UUI_SaveMenu_Overwrite_C* Widget);
	void OpenOverwrite(class UUI_SaveMenu_Overwrite_C* Widget, bool Clicking);
	void ResetOverwrite(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UUI_SaveMenu_Overwrite_C*>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue, class UUI_SaveMenu_Overwrite_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void NavRightListen(FDelegateProperty_ Event);
	void NavLeftListen(FDelegateProperty_ Event);
	void UI_Sound_Select(class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue);
	void NavConfirm(bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1);
	int32 GetHoveredIndex(int32 New_Game, class UButton*& Button, enum class Enum_SaveMenu_Type Temp_byte_Variable, int32 CallFunc_Array_Find_ReturnValue, int32 CallFunc_Array_Find_ReturnValue_1, int32 K2Node_Select_Default);
	void SetLoadButton_3(bool Local_SaveSlot, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default, float K2Node_Select_Default_1, int32 CallFunc_Array_Add_ReturnValue);
	void SetLoadButton_2(bool Local_SaveSlot, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default, float K2Node_Select_Default_1, int32 CallFunc_Array_Add_ReturnValue);
	void SetLoadButton_1(bool Local_SaveSlot, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility K2Node_Select_Default, float K2Node_Select_Default_1, int32 CallFunc_Array_Add_ReturnValue);
	void Set_Buttons(bool Local_Buttons, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess);
	void NavConfirmListen(FDelegateProperty_ Event);
	void SetMainMenuObject(class UUI_MainMenu_C* UI_MainMenu);
	void SetSaveSlotTexts(bool SaveExist, class UTextBlock* Playtime, class UTextBlock* Tar, class UTextBlock* Glimpse, class UTextBlock* Location, class UTextBlock* Date, struct FSaveSlotInfo& SaveSlotInfo, bool Local_SaveExist, class FText Temp_text_Variable, class FText CallFunc_GetDateTimeText_DateText, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, class FText CallFunc_GetPlaytimeText_ReturnValue, bool Temp_bool_Variable, class FText Temp_text_Variable_1, bool Temp_bool_Variable_1, class FText Temp_text_Variable_2, bool Temp_bool_Variable_2, class FText Temp_text_Variable_3, class FText CallFunc_MakeLiteralText_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, class FText K2Node_Select_Default, class FText K2Node_Select_Default_1, bool Temp_bool_Variable_3, class FText K2Node_Select_Default_2, class FText Temp_text_Variable_4, bool Temp_bool_Variable_4, class FText Temp_text_Variable_5, class FText K2Node_Select_Default_3, bool Temp_bool_Variable_5, class FText K2Node_Select_Default_4, class FText K2Node_Select_Default_5);
	class FText GetTitleText(const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void GetDateTimeText(const struct FDateTime& InDateTime, class FText* DateText, int32 CallFunc_BreakDateTime_Year, int32 CallFunc_BreakDateTime_Month, int32 CallFunc_BreakDateTime_Day, int32 CallFunc_BreakDateTime_Hour, int32 CallFunc_BreakDateTime_Minute, int32 CallFunc_BreakDateTime_Second, int32 CallFunc_BreakDateTime_Millisecond, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_FixTime_ReturnValue, const class FString& CallFunc_FixTime_ReturnValue_1, const class FString& CallFunc_FixTime_ReturnValue_2, const class FString& CallFunc_FixTime_ReturnValue_3, const class FString& CallFunc_FixTime_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, class FText CallFunc_Conv_StringToText_ReturnValue);
	class FText GetPlaytimeText(const struct FDateTime& InDateTime, int32 NewGamePlusLevel, bool Temp_bool_Variable, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, int32 CallFunc_BreakDateTime_Year, int32 CallFunc_BreakDateTime_Month, int32 CallFunc_BreakDateTime_Day, int32 CallFunc_BreakDateTime_Hour, int32 CallFunc_BreakDateTime_Minute, int32 CallFunc_BreakDateTime_Second, int32 CallFunc_BreakDateTime_Millisecond, const class FString& Temp_string_Variable, const class FString& CallFunc_FixTime_ReturnValue, const class FString& CallFunc_FixTime_ReturnValue_1, const class FString& K2Node_Select_Default, const class FString& CallFunc_FixTime_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, class FText CallFunc_Conv_StringToText_ReturnValue);
	void PopulateSaveSlotText();
	void LoadSaveSlotData(bool Local_SaveExist, int32 Local_Index, class UDHGameInstance* CallFunc_GetInstance_ReturnValue, class UDHGameInstance* CallFunc_GetInstance_ReturnValue_1, int32 CallFunc_GetPrimaryUserIndex_ReturnValue, int32 CallFunc_GetPrimaryUserIndex_ReturnValue_1, int32 Temp_int_Variable, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FName Temp_name_Variable, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess_1, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_DoesSaveGameExist_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class USaveGame* CallFunc_DHLoadGameFromSlot_ReturnValue, class UServerSaveGame_C* K2Node_DynamicCast_AsServer_Save_Game, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_Get_Shell_Bonding_Points_Name_Name, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, class FText CallFunc_GetLocationNameFromMapName_Location, const struct FSaveSlotInfo& K2Node_MakeStruct_SaveSlotInfo);
	void NavUp(int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue);
	void NavDown(int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue);
	void NavUp_Listen(FDelegateProperty_ Event_Pressed, FDelegateProperty_ Event_Released);
	void NavDown_Listen(FDelegateProperty_ Event_Pressed, FDelegateProperty_ Event_Released);
	void NavUnsetButtons(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, TArray<class UButton*>& CallFunc_GetButtons_Array, int32 CallFunc_Array_Length_ReturnValue, class UButton* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void NavSetButton(bool SkipIndexCheck, int32 Index, class UButton* Local_Button, bool Local_SkipIndexCheck, int32 Local_Index, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, TArray<class UButton*>& CallFunc_GetButtons_Array, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, class UButton* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void GetButtons(TArray<class UButton*>* Array, enum class Enum_SaveMenu_Type Temp_byte_Variable, TArray<class UButton*>& K2Node_MakeArray_Array, TArray<class UButton*>& K2Node_Select_Default);
	void OnClose(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void OnOpenSet(enum class Enum_SaveMenu_Type SaveMenuType, bool Clicking, FDelegateProperty_ Delegate, bool Local_Clicking, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void OnOpen(enum class Enum_SaveMenu_Type SaveMenuType, bool Clicking);
	void OnFadeInEnd();
	void BndEvt__Button_SaveSlot_1_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_SaveSlot_2_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_SaveSlot_3_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__UI_SaveMenu_Overwrite_1_K2Node_ComponentBoundEvent_9_OnClick__DelegateSignature(int32 Index);
	void BndEvt__UI_SaveMenu_Overwrite_2_K2Node_ComponentBoundEvent_10_OnClick__DelegateSignature(int32 Index);
	void BndEvt__UI_SaveMenu_Overwrite_3_K2Node_ComponentBoundEvent_11_OnClick__DelegateSignature(int32 Index);
	void Nav_Down_Released();
	void Nav_Down_Set();
	void Nav_Down_Bind();
	void Nav_Down_Listen();
	void Nav_Up_Released();
	void Nav_Up_Set();
	void Nav_Up_Bind();
	void Nav_Up_Listen();
	void BndEvt__Button_SaveSlot_1_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_SaveSlot_1_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_SaveSlot_2_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_SaveSlot_2_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_SaveSlot_3_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_SaveSlot_3_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void Nav_Confirm_Set();
	void Nav_Confirm_Listen();
	void Nav_Right_Bind();
	void Nav_Left_Listen();
	void Nav_Left_Bind();
	void Nav_Right_Listen();
	void ExecuteUbergraph_UI_SaveMenu(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 K2Node_ComponentBoundEvent_Index_2, int32 K2Node_ComponentBoundEvent_Index_1, int32 K2Node_ComponentBoundEvent_Index, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class Enum_SaveMenu_Type K2Node_CustomEvent_SaveMenuType, bool K2Node_CustomEvent_Clicking, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, int32 CallFunc_GetHoveredIndex_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FTimerHandle& CallFunc_UI_HoldTimer_ReturnValue, int32 CallFunc_GetHoveredIndex_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, int32 CallFunc_GetHoveredIndex_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, const struct FTimerHandle& CallFunc_UI_HoldTimer_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9);
};

}


