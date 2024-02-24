#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x220 (0x450 - 0x230)
// WidgetBlueprintGeneratedClass UI_StormMode_Menu.UI_StormMode_Menu_C
class UUI_StormMode_Menu_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_FadeOut;                                      // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_FadeIn;                                       // 0x240(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBackgroundBlur*                       BackgroundBlur_Menu;                               // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_Prompt_NewRun_Close_Back;            // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_Prompt_Newrun_Confirm;               // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_Prompt_NewRun_Navigate;              // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_Prompt_Settings_Close;               // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_Prompt_Settings_Confirm;             // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_Prompt_Settings_Navigate;            // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_Prompt_Statistics_Close;             // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_Prompt_Statistics_NextPage;          // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_Prompt_Statistics_PreviousPage;      // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_Prompts_NewRun;                      // 0x298(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_Prompts_Settings;                    // 0x2A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_Prompts_Statistics;                  // 0x2A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Background;                                  // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Background_Black;                            // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Background_Pillar;                         // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Menu;                                      // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Prompts_All;                               // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBox_Background;                               // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_Menu;                                      // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               Spacer_EnterSM;                                    // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               Spacer_Top_Menu;                                   // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_MainMenu_Button_C*                 UI_Button_EnterSM;                                 // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_MainMenu_Button_C*                 UI_Button_NewRun;                                  // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_MainMenu_Button_C*                 UI_Button_Settings;                                // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_MainMenu_Button_C*                 UI_Button_Statistics;                              // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ControllerButton_C*                UI_ControllerButton_Back;                          // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ControllerButton_C*                UI_ControllerButton_Close;                         // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ControllerButton_C*                UI_ControllerButton_ConfirmChoice;                 // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ControllerButton_C*                UI_ControllerButton_ConfirmCustomSeed;             // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ControllerButton_C*                UI_ControllerButton_Navigate;                      // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ControllerButton_C*                UI_ControllerButton_RemoveCustomSeed;              // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ControllerButton_C*                UI_ControllerButton_Select_WarningWindow;          // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ControllerButton_C*                UI_ControllerButton_SetCustomSeed;                 // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ControllerButton_C*                UI_ControllerButton_Settings_Close;                // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ControllerButton_C*                UI_ControllerButton_Settings_Navigate;             // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ControllerButton_C*                UI_ControllerButton_StartRun;                      // 0x368(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ControllerButton_C*                UI_ControllerButton_Statistics_Close;              // 0x370(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ControllerButton_C*                UI_ControllerButton_Statistics_NextPage;           // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ControllerButton_C*                UI_ControllerButton_Statistics_PreviousPage;       // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Prompt_Switcher_C*                 UI_Prompt_Switcher_Tab_Left;                       // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Prompt_Switcher_C*                 UI_Prompt_Switcher_Tab_Right;                      // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_StormMode_Menu_Enter_C*            UI_StormMode_Menu_Enter;                           // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_StormMode_Menu_NewRun_C*           UI_StormMode_Menu_NewRun;                          // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_StormMode_SettingsWindow_C*        UI_StormMode_Menu_Settings;                        // 0x3A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_StormMode_Statistics_C*            UI_StormMode_Menu_Statistics;                      // 0x3B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher_Menu;                               // 0x3B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         IsFromMainMenu;                                    // 0x3C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Input_Consume;                                     // 0x3C1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Input_Enabled;                                     // 0x3C2(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsDesignTime;                                      // 0x3C3(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int32                                        Index_Current;                                     // 0x3C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_MainMenu_C*                        UI_MainMenu;                                       // 0x3C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          NavDown_Timer;                                     // 0x3D0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          NavUp_Timer;                                       // 0x3D8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          NavLeftTimer;                                      // 0x3E0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          NavRightTimer;                                     // 0x3E8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        Index_Temp;                                        // 0x3F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SaveSlot;                                          // 0x3F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UUI_MainMenu_Button_C*>         Buttons_Tab;                                       // 0x3F8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)
	class UUI_MainMenu_Button_C*                 UI_TabButton_Selected;                             // 0x408(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Index_Last;                                        // 0x410(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A7B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABP_SeedManager_C*                     SeedManager;                                       // 0x418(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UServerSaveGame_C*                     SaveGameReference;                                 // 0x420(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_StormMode_Starter_C*               BP_StormMode_Starter;                              // 0x428(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        PreviewIndex;                                      // 0x430(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A8F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UKeyboardModeNotifierComponent_C*      KeyboardMode_Notifier;                             // 0x438(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMapState_C*                           MapStateSaveReference;                             // 0x440(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             SpacerTopSize;                                     // 0x448(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_StormMode_Menu_C* GetDefaultObj();

	void OnMenuOpen_Actor(class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier);
	class FString GetSaveSlotName_MapState(const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1);
	bool IsNotInWarningWindow(bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue);
	void NavTopClick(int32 Index, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue);
	void Navigation_Back(bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_IsValid_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, bool K2Node_SwitchEnum_CmpSuccess, TScriptInterface<class IBPI_StormModeMenu_C> CallFunc_NavBack_self_CastInput, bool CallFunc_IsValid_ReturnValue_1);
	void Sound_Hover();
	void NavTopUnHover(class UUI_MainMenu_Button_C* Local_Tab, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UUI_MainMenu_Button_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void NavTopHover(int32 Index, bool Local_Blink, int32 Local_Index_Selected, class UUI_MainMenu_Button_C* Local_Tab, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, class UUI_MainMenu_Button_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void GetSeedManager(TArray<class ABP_SeedManager_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ABP_SeedManager_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue);
	void OnMenuOpen(class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier);
	enum class ESlateVisibility Get_Prompt_Statistics_PreviousNextPage_Visibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	enum class ESlateVisibility Get_Prompt_Statistics_ChangePage_Visibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	enum class ESlateVisibility Get_Prompt_Settings_RemoveSeed_Visibility(bool CallFunc_EqualEqual_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	enum class ESlateVisibility Get_Prompt_Settings_ConfirmSeed_Visibility(bool CallFunc_EqualEqual_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	enum class ESlateVisibility Get_Prompt_Settings_SetSeed_Visibility(bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	enum class ESlateVisibility Get_Prompt_NewRun_Select_Visibility(bool CallFunc_EqualEqual_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void PreviewTab();
	void SetParentWidget(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UUserWidget*>& CallFunc_GetTabWidgets_Array, class UUserWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TScriptInterface<class IBPI_StormModeMenu_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Menu, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue);
	enum class ESlateVisibility Get_Prompt_NewRun_ConfirmChoice_Visibility(bool CallFunc_EqualEqual_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	enum class ESlateVisibility Get_Prompt_NewRun_StartRun_Visibility(bool CallFunc_EqualEqual_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	enum class ESlateVisibility Get_Prompt_NewRun_Close_Visibility(bool CallFunc_EqualEqual_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	enum class ESlateVisibility Get_Prompt_NewRun_Back_Visibility(bool CallFunc_EqualEqual_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	enum class ESlateVisibility Get_Prompts_Statistics_Visibility(bool CallFunc_EqualEqual_IntInt_ReturnValue);
	enum class ESlateVisibility Get_Prompts_Settings_Visibility(bool CallFunc_EqualEqual_IntInt_ReturnValue);
	enum class ESlateVisibility Get_Prompts_NewRun_Visibility(bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void HidePrompts(enum class ESlateVisibility InVisibility);
	void OnFadeOutEnd();
	void GetTabWidgets(TArray<class UUserWidget*>* Array, TArray<class UUserWidget*>& K2Node_MakeArray_Array);
	void NavBack_CloseStormModeMenu(bool CallFunc_IsValid_ReturnValue);
	void NavBackListen(FDelegateProperty_ Event);
	void GetTabWidgetFromIndex(int32 Index, class UWidget** Output, TArray<class UWidget*>& K2Node_MakeArray_Array, class UWidget* CallFunc_Array_Get_Item);
	void NavConfirmListen(FDelegateProperty_ Event);
	void NavUpListen(FDelegateProperty_ Event);
	void NavDownListen(FDelegateProperty_ Event);
	void NavRightListen(FDelegateProperty_ Event);
	void NavLeftListen(FDelegateProperty_ Event);
	void NavUpperLeftListen(FDelegateProperty_ Event);
	void NavUpperRightListen(FDelegateProperty_ Event);
	void ListenForInputs();
	void GetButtonWidgetFromIndex(int32 Index, class UUI_MainMenu_Button_C** Output, class UUI_MainMenu_Button_C* CallFunc_Array_Get_Item);
	void GetTabButtons(int32 CallFunc_Array_LastIndex_ReturnValue, TArray<class UUI_MainMenu_Button_C*>& K2Node_MakeArray_Array);
	void NavigateTab(bool CustomIndex, bool SkipIndexCheck, bool SkipSound, int32 Index, int32 Delta, int32 Local_Delta, bool Local_SkipSound, int32 Local_WidgetIndex, class UUI_MainMenu_Button_C* Local_Button, int32 Local_Index_Temp, int32 Local_SelectedIndex, bool Local_SkipIndexCheck, bool Local_CustomIndex, int32 Temp_int_Array_Index_Variable, class UWidget* CallFunc_GetTabWidgetFromIndex_Output, TScriptInterface<class IBPI_StormModeMenu_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Menu, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_GetTabWidgetFromIndex_Output_1, TScriptInterface<class IBPI_StormModeMenu_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, class UUI_MainMenu_Button_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class UUI_MainMenu_Button_C* CallFunc_GetButtonWidgetFromIndex_Output, int32 CallFunc_Clamp_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_3);
	class FString GetSaveSlotName_GPData(const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1);
	void LoadDataForSlot(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_GetSaveSlotName_MapState_ReturnValue, const class FString& CallFunc_GetSaveSlotName_MapState_ReturnValue_1, const class FString& CallFunc_GetSaveSlotName_MapState_ReturnValue_2, class UDHGameInstance* CallFunc_GetInstance_ReturnValue, class UDHGameInstance* CallFunc_GetInstance_ReturnValue_1, int32 CallFunc_GetPrimaryUserIndex_ReturnValue, int32 CallFunc_GetPrimaryUserIndex_ReturnValue_1, bool CallFunc_DoesSaveGameExist_ReturnValue, class USaveGame* CallFunc_DHLoadGameFromSlot_ReturnValue, class UMapState_C* K2Node_DynamicCast_AsMap_State, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_GetSaveSlotName_GPData_ReturnValue, TArray<class UUserWidget*>& CallFunc_GetTabWidgets_Array, const class FString& CallFunc_GetSaveSlotName_GPData_ReturnValue_1, class UUserWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TScriptInterface<class IBPI_StormModeMenu_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Menu, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_GetSaveSlotName_GPData_ReturnValue_2, class UDHGameInstance* CallFunc_GetInstance_ReturnValue_2, class UDHGameInstance* CallFunc_GetInstance_ReturnValue_3, int32 CallFunc_GetPrimaryUserIndex_ReturnValue_2, int32 CallFunc_GetPrimaryUserIndex_ReturnValue_3, bool CallFunc_DoesSaveGameExist_ReturnValue_1, class USaveGame* CallFunc_DHLoadGameFromSlot_ReturnValue_1, class UServerSaveGame_C* K2Node_DynamicCast_AsServer_Save_Game, bool K2Node_DynamicCast_bSuccess_2);
	void ImmediateFadeIn();
	void ImmediateFadeOut();
	void OnClose(bool CloseImmediately, bool RemoveFromParent, bool Local_RemoveFromParent, bool Local_CloseImmediately);
	void FadeOutAnim(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void FadeInAnim(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void DisableEnterTab();
	void PreConstruct(bool IsDesignTime);
	void OnOpen_Event(class UUI_MainMenu_C* UI_MainMenu, bool Clicking, int32 IndexSaveSlot);
	void OnClose_Event(bool CloseImmediately, bool RemoveFromParent);
	void NavUpper_Left_Set();
	void NavUpper_Left_Listen();
	void NavUpper_Right_Set();
	void NavUpper_Right_Listen();
	void Nav_Confirm_Listen();
	void Nav_Confirm_Set();
	void Nav_Down_Listen();
	void Nav_Down_Bind();
	void Nav_Down_Set();
	void Nav_Up_Bind();
	void Nav_Up_Listen();
	void Nav_Up_Set();
	void OnInitialized();
	void Nav_Left_Listen();
	void Nav_Right_Listen();
	void Nav_Left_Set();
	void Nav_Right_Set();
	void Nav_Back_Listen();
	void Nav_Back_Set();
	void OnOpenEvent_Actor(class ABP_StormMode_Starter_C* Actor);
	void BndEvt__UI_Button_EnterSM_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget);
	void BndEvt__UI_Button_EnterSM_K2Node_ComponentBoundEvent_1_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget);
	void BndEvt__UI_Button_EnterSM_K2Node_ComponentBoundEvent_2_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget);
	void BndEvt__UI_Button_NewRun_K2Node_ComponentBoundEvent_3_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget);
	void BndEvt__UI_Button_NewRun_K2Node_ComponentBoundEvent_4_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget);
	void BndEvt__UI_Button_NewRun_K2Node_ComponentBoundEvent_5_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget);
	void BndEvt__UI_Button_Settings_K2Node_ComponentBoundEvent_6_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget);
	void BndEvt__UI_Button_Settings_K2Node_ComponentBoundEvent_7_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget);
	void BndEvt__UI_Button_Settings_K2Node_ComponentBoundEvent_8_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget);
	void BndEvt__UI_Button_Statistics_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget);
	void BndEvt__UI_Button_Statistics_K2Node_ComponentBoundEvent_10_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget);
	void BndEvt__UI_Button_Statistics_K2Node_ComponentBoundEvent_11_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget);
	void NavSpecialButton_1_Listen();
	void NavSpecialButton_1_Set();
	void ExecuteUbergraph_UI_StormMode_Menu(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Array_Index_Variable, bool K2Node_Event_IsDesignTime, class UUI_MainMenu_C* K2Node_CustomEvent_UI_MainMenu, bool K2Node_CustomEvent_Clicking, int32 K2Node_CustomEvent_IndexSaveSlot, bool K2Node_CustomEvent_CloseImmediately, bool K2Node_CustomEvent_RemoveFromParent, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWidget* CallFunc_GetTabWidgetFromIndex_Output, TScriptInterface<class IBPI_StormModeMenu_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Menu, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UWidget* CallFunc_GetTabWidgetFromIndex_Output_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, TScriptInterface<class IBPI_StormModeMenu_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_1, bool K2Node_DynamicCast_bSuccess_1, class UWidget* CallFunc_GetTabWidgetFromIndex_Output_2, class UWidget* CallFunc_GetTabWidgetFromIndex_Output_3, TScriptInterface<class IBPI_StormModeMenu_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_2, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IBPI_StormModeMenu_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_3, bool K2Node_DynamicCast_bSuccess_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UWidget* CallFunc_GetTabWidgetFromIndex_Output_4, TScriptInterface<class IBPI_StormModeMenu_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_4, bool K2Node_DynamicCast_bSuccess_4, TArray<class UUserWidget*>& CallFunc_GetTabWidgets_Array, class UUserWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TScriptInterface<class IBPI_StormModeMenu_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_5, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_Less_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class ABP_StormMode_Starter_C* K2Node_CustomEvent_Actor, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess_6, int32 CallFunc_GetCurrentSaveSlot_Slot, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, int32 K2Node_ComponentBoundEvent_Index_11, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_11, int32 K2Node_ComponentBoundEvent_Index_10, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_10, int32 K2Node_ComponentBoundEvent_Index_9, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_9, int32 K2Node_ComponentBoundEvent_Index_8, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_8, int32 K2Node_ComponentBoundEvent_Index_7, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_7, int32 K2Node_ComponentBoundEvent_Index_6, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_6, int32 K2Node_ComponentBoundEvent_Index_5, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_5, int32 K2Node_ComponentBoundEvent_Index_4, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_4, int32 K2Node_ComponentBoundEvent_Index_3, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_3, int32 K2Node_ComponentBoundEvent_Index_2, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_2, int32 K2Node_ComponentBoundEvent_Index_1, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_1, int32 K2Node_ComponentBoundEvent_Index, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget, bool CallFunc_LessEqual_IntInt_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, class UWidget* CallFunc_GetTabWidgetFromIndex_Output_5, TScriptInterface<class IBPI_StormModeMenu_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_6, bool K2Node_DynamicCast_bSuccess_7);
};

}


