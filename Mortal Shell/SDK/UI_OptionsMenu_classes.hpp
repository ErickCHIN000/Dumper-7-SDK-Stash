#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC4 (0x2F4 - 0x230)
// WidgetBlueprintGeneratedClass UI_OptionsMenu.UI_OptionsMenu_C
class UUI_OptionsMenu_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_FadeOut;                                      // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_FadeIn;                                       // 0x240(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Image_Background;                                  // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_OptionsMenu;                               // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_MainMenu_Button_C*                 UI_MM_Button_Audio;                                // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_MainMenu_Button_C*                 UI_MM_Button_Controls;                             // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_MainMenu_Button_C*                 UI_MM_Button_Gameplay;                             // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_MainMenu_Button_C*                 UI_MM_Button_Video;                                // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_AudioSettings_C*                  UI_Options_Audio;                                  // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Options_Controls_C*                UI_Options_Controls;                               // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_GameplaySettings_C*               UI_Options_Gameplay;                               // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_VideoSettings_C*                  UI_Options_Video;                                  // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Prompt_Switcher_C*                 UI_Prompt_Switcher_Tab_Left;                       // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Prompt_Switcher_C*                 UI_Prompt_Switcher_Tab_Right;                      // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher_Options;                            // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        Index_Current;                                     // 0x2B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Index_Max;                                         // 0x2B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Input_Enabled;                                     // 0x2B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_239D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          NavDown_Timer;                                     // 0x2C0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          NavUp_Timer;                                       // 0x2C8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          NavLeftTimer;                                      // 0x2D0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          NavRightTimer;                                     // 0x2D8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         ConsumeInput;                                      // 0x2E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_23B9[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_MainMenu_C*                        UI_MainMenu;                                       // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ScrollingTime;                                     // 0x2F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_OptionsMenu_C* GetDefaultObj();

	void StopListen_Confirm_Video();
	void StopListen_ResetToDefault_Video();
	void StopListen_ResetToDefault_Gameplay();
	void StopListen_ResetToDefault_Controls();
	void ClearAllTimers(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FTimerHandle>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue, const struct FTimerHandle& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void UpdateScrollingTime(float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue);
	void OpenEvents(bool K2Node_SwitchInteger_CmpSuccess);
	void UpdatePrompts(bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void SetMainMenuObject(class UUI_MainMenu_C* UI_MainMenu);
	void ListenForInput();
	void NavConfirm(bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void NavConfirm_Listen(FDelegateProperty_ Callback);
	void NavRight(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchInteger_CmpSuccess);
	void NavLeft(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchInteger_CmpSuccess);
	void NavRight_Listen(FDelegateProperty_ Pressed, FDelegateProperty_ Released);
	void NavLeft_Listen(FDelegateProperty_ Pressed, FDelegateProperty_ Released);
	void NavUp_Listen(FDelegateProperty_ Event_Pressed, FDelegateProperty_ Event_Released);
	void NavUp(class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance, bool K2Node_DynamicCast_bSuccess, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance_1, bool K2Node_DynamicCast_bSuccess_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance_2, bool K2Node_DynamicCast_bSuccess_2, bool K2Node_SwitchInteger_CmpSuccess);
	void NavDown(bool SetIndex, int32 Index, int32 Local_Index, bool Local_SetIndex, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance, bool K2Node_DynamicCast_bSuccess, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance_1, bool K2Node_DynamicCast_bSuccess_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance_2, bool K2Node_DynamicCast_bSuccess_2, bool K2Node_SwitchInteger_CmpSuccess);
	void NavDown_Listen(FDelegateProperty_ Event_Preseed, FDelegateProperty_ Event_Released);
	void NavUpperClick(int32 Index, bool CallFunc_Nav_SetButton_CanNavigate, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_IsVSyncDirty_ReturnValue, bool CallFunc_IsScreenResolutionDirty_ReturnValue, bool CallFunc_IsFullscreenModeDirty_ReturnValue, bool CallFunc_IsDirty_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsFramerateDirty_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_3, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess);
	void NavUnsetButton(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UUI_MainMenu_Button_C*>& CallFunc_GetButtons_Array, int32 CallFunc_Array_Length_ReturnValue, class UUI_MainMenu_Button_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void Nav_SelectButton(class USoundBase* Sound, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UUI_MainMenu_Button_C*>& CallFunc_GetButtons_Array, int32 CallFunc_Array_Length_ReturnValue, class UUI_MainMenu_Button_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class UUI_MainMenu_Button_C* CallFunc_Array_Get_Item_1);
	void NavUpperRight_Listen(FDelegateProperty_ Event);
	void NavUpperLeft_Listen(FDelegateProperty_ Event);
	void OnOpen(bool Clicking, bool Local_Clicking, bool CallFunc_Nav_SetButton_CanNavigate);
	void NavUpper_Right(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_IsVSyncDirty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsScreenResolutionDirty_ReturnValue, bool CallFunc_IsFullscreenModeDirty_ReturnValue, bool CallFunc_IsDirty_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsFramerateDirty_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_3, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance, bool K2Node_DynamicCast_bSuccess, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance_1, bool K2Node_DynamicCast_bSuccess_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance_2, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, bool CallFunc_Nav_SetButton_CanNavigate);
	void NavUpper_Left(class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, bool CallFunc_IsVSyncDirty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsScreenResolutionDirty_ReturnValue, bool CallFunc_IsFullscreenModeDirty_ReturnValue, bool CallFunc_IsDirty_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsFramerateDirty_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_3, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance, bool K2Node_DynamicCast_bSuccess, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance_1, bool K2Node_DynamicCast_bSuccess_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, class UGameInfoInstance_C* K2Node_DynamicCast_AsGame_Info_Instance_2, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, bool CallFunc_Nav_SetButton_CanNavigate);
	void Nav_SetActiveWidget(bool SetIndex, int32 Index, int32 Local_Index, bool Local_SetIndex);
	void Nav_SetButton(bool IsHovering, bool SkipIndexCheck, int32 Index, class USoundBase* Sound, bool* CanNavigate, bool Local_IsHovering, int32 Local_Index_Temp, bool Local_CanNavigate, int32 Local_Index, bool Local_SkipIndexCheck, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UUI_MainMenu_Button_C*>& CallFunc_GetButtons_Array, class UUI_MainMenu_Button_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool Temp_bool_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 K2Node_Select_Default, bool CallFunc_EqualEqual_IntInt_ReturnValue_1);
	void GetButtons(TArray<class UUI_MainMenu_Button_C*>* Array, TArray<class UUI_MainMenu_Button_C*>& K2Node_MakeArray_Array);
	void OnClose(bool CloseImmediately, enum class EPlatform CallFunc_GetPlatform_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void FadeIn(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void NavUpper_Right_Set();
	void NavUpper_Left_Set();
	void NavUpper_Left_Listen();
	void NavUpper_Right_Listen();
	void BndEvt__UI_MM_Button_Audio_K2Node_ComponentBoundEvent_0_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget);
	void BndEvt__UI_MM_Button_Controls_K2Node_ComponentBoundEvent_1_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget);
	void BndEvt__UI_MM_Button_Gameplay_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget);
	void BndEvt__UI_MM_Button_Video_K2Node_ComponentBoundEvent_3_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget);
	void BndEvt__UI_MM_Button_Audio_K2Node_ComponentBoundEvent_4_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget);
	void BndEvt__UI_MM_Button_Controls_K2Node_ComponentBoundEvent_5_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget);
	void BndEvt__UI_MM_Button_Gameplay_K2Node_ComponentBoundEvent_6_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget);
	void BndEvt__UI_MM_Button_Video_K2Node_ComponentBoundEvent_7_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget);
	void BndEvt__UI_MM_Button_Audio_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget);
	void BndEvt__UI_MM_Button_Gameplay_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget);
	void BndEvt__UI_MM_Button_Controls_K2Node_ComponentBoundEvent_10_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget);
	void BndEvt__UI_MM_Button_Video_K2Node_ComponentBoundEvent_11_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget);
	void Nav_Left_Bind();
	void Nav_Left_Listen();
	void Nav_Right_Bind();
	void Nav_Right_Listen();
	void Nav_Confirm_Listen();
	void Nav_Confirm_Set();
	void NavLeft_Released();
	void NavLeft_Set();
	void NavRight_Set();
	void NavRight_Released();
	void OnInitialized();
	void Nav_Down_Set();
	void Nav_Down_Released();
	void Nav_Down_Listen();
	void Nav_Down_Bind();
	void Nav_Up_Set();
	void Nav_Up_Released();
	void Nav_Up_Listen();
	void Nav_Up_Bind();
	void ExecuteUbergraph_UI_OptionsMenu(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FTimerHandle& CallFunc_UI_HoldTimer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, const struct FTimerHandle& CallFunc_UI_HoldTimer_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, int32 K2Node_ComponentBoundEvent_Index_11, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_11, int32 K2Node_ComponentBoundEvent_Index_10, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_10, bool CallFunc_Nav_SetButton_CanNavigate, bool CallFunc_Nav_SetButton_CanNavigate_1, int32 K2Node_ComponentBoundEvent_Index_9, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_9, int32 K2Node_ComponentBoundEvent_Index_8, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_8, bool CallFunc_Nav_SetButton_CanNavigate_2, bool CallFunc_Nav_SetButton_CanNavigate_3, int32 K2Node_ComponentBoundEvent_Index_7, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_7, int32 K2Node_ComponentBoundEvent_Index_6, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_6, int32 K2Node_ComponentBoundEvent_Index_5, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_5, int32 K2Node_ComponentBoundEvent_Index_4, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_4, int32 K2Node_ComponentBoundEvent_Index_3, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_3, int32 K2Node_ComponentBoundEvent_Index_2, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_2, int32 K2Node_ComponentBoundEvent_Index_1, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_1, int32 K2Node_ComponentBoundEvent_Index, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, const struct FTimerHandle& CallFunc_UI_HoldTimer_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, const struct FTimerHandle& CallFunc_UI_HoldTimer_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14);
};

}


