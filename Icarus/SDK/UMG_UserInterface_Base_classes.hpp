#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x139 (0x399 - 0x260)
// WidgetBlueprintGeneratedClass UMG_UserInterface_Base.UMG_UserInterface_Base_C
class UUMG_UserInterface_Base_C : public UUserInterfaceBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TMap<struct FKey, struct FStaticWidget>      StaticWidgets;                                     // 0x268(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TMap<struct FKey, bool>                      ImportantKeys;                                     // 0x2B8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<enum class EModifierKeys, struct FFModifierKeyValues> ModifierKeys;                                      // 0x308(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UWidget*                               FocusedWidget;                                     // 0x358(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIcarusWidget*                         OldFocusedWidget;                                  // 0x360(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMG_CheatOverlay_C*                   CheatOverlay;                                      // 0x368(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CreatedCheatOverlay;                               // 0x370(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3A7D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnHidePanelDisplay;                                // 0x378(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnMenuOpened;                                      // 0x388(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         HiddenByUser;                                      // 0x398(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UUMG_UserInterface_Base_C* GetDefaultObj();

	void GetMap(class UIcarusMapScreenBase** Radar);
	void CollapseIcarusLogVisibilty(class UUMG_ClientLogging_C* CallFunc_GetIcarusLogWindow_LogWindow);
	void GetIcarusLogWindow(class UUMG_ClientLogging_C** LogWindow);
	void ToggleIcarusLogVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UUMG_ClientLogging_C* CallFunc_GetIcarusLogWindow_LogWindow, bool CallFunc_IsVisible_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void RemoveCustomPopup(class UUserWidget* PopupWidget);
	void ShowCustomPopup(class UUserWidget* PopupWidget);
	void SetHiddenByUser(bool NewHiddenByUser);
	void SetForceShowCrosshair(bool ForceShowCrosshair);
	void GetConfirmationOverlay(class UOverlay** Overlay);
	void ToggleStatDebugger();
	void IsShowingRadialMenu(bool* ShowingRadialMenu);
	void RemoveRadialMenu(class UUserWidget* RadialMenu);
	void AddRadialMenu(class UUserWidget* RadialMenu);
	void GetSize(struct FVector2D* Size);
	class UConfirmationPopupBase* GetConfirmationPopup(class UUMG_ConfirmationPopup_C* CallFunc_GetConfirmationWindow_ConfirmationWidget);
	void GetMaxProjectionWidgets(int32* MaxProjectionWidgetCount);
	void SetMaxProjectionWidgets(int32 NewMaxWidgetCount);
	void GetDialogue(class UUMG_Dialogue_C** Dialogue);
	void GetCheatOverlay(class UUMG_CheatOverlay_C** Overlay);
	void Show_Game_Message(bool Error, class FText Message, float LifeTimeOverride);
	void WidgetFocusGained(class UIcarusWidget* Widget, bool CallFunc_IsPlayerUsingControllerStatic_ReturnValue, bool CallFunc_GetFocusWidget_bValid, class UWidget* CallFunc_GetFocusWidget_Widget, bool CallFunc_GetFocusWidget_bThis, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
	void WidgetFocusLost(class UIcarusWidget* Widget, bool CallFunc_IsPlayerUsingControllerStatic_ReturnValue, bool CallFunc_GetFocusWidget_bValid, class UWidget* CallFunc_GetFocusWidget_Widget, bool CallFunc_GetFocusWidget_bThis, bool CallFunc_IsPlayerUsingControllerStatic_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FFocusEvent& Temp_struct_Variable, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsMouseNavigation_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void ToggleEscapeMenu();
	void IsSpace_(bool* InSpace);
	void HideLoadingScreen();
	void ShowLoadingScreen(class FText Optional_Message, class UWidget* OptionalWidget);
	void HideErrorCode();
	void ShowErrorCode(const struct FErrorCodesEnum& ErrorCode);
	void OpenEscapeMenu();
	void IsMenuVisible(bool* Visible);
	void EscapeKeyPressed(bool CallFunc_IsMenuVisible_Visible);
	void GetCheatContext(enum class ECheatContext* Context);
	void ToggleCheatMenu(enum class ECheatsEnabled CallFunc_IfCheatsEnabled_Paths, class UUMG_CheatOverlay_C* CallFunc_GetCheatOverlay_Overlay, bool K2Node_SwitchEnum_CmpSuccess, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue);
	class UW_ProjectionInterface_C* GetProjectionInterface();
	void GetConfirmationWindow(class UUMG_ConfirmationPopup_C** ConfirmationWidget);
	void FixFocus(bool CallFunc_GetFocusWidget_bValid, class UWidget* CallFunc_GetFocusWidget_Widget, bool CallFunc_GetFocusWidget_bThis, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void SetFocusWidget();
	void GetCursorWidget(class UUMG_CursorWidget_C** CursorWidget);
	void FocusStaticWidget(enum class EStaticUIWidgets Panel);
	void Reset();
	void HidePanelDisplay();
	void ClearModifierKeys(enum class EModifierKeys Temp_byte_Variable, enum class EModifierKeys Temp_byte_Variable_1, enum class EModifierKeys Temp_byte_Variable_2, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, bool Temp_bool_Variable, const struct FFModifierKeyValues& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FFModifierKeyValues& CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, const struct FKey& CallFunc_Array_Get_Item, const struct FKey& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, const struct FFModifierKeyValues& CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, bool Temp_bool_Variable_1, const struct FKey& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool Temp_bool_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_2);
	void IsKeyDown(enum class EModifierKeys Key, bool* KeyHeld, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FFModifierKeyValues& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FKey& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, bool Temp_bool_Variable, const struct FKey& CallFunc_GetKey_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FKey& Key, bool Temp_bool_Variable, const struct FKey& CallFunc_GetKey_ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue_1, const struct FEventReply& CallFunc_Unhandled_ReturnValue, bool CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void InputTypeApplied(enum class EInputTypeSetting Value);
	void Construct();
	void OnWindowReceivedFocus();
	void ErrorRequested(const struct FErrorCodesEnum& ErrorCode);
	void CreateCheatOverlay();
	void DisplayIcarusError(const struct FErrorCodesEnum& OutgoingError);
	void ExecuteUbergraph_UMG_UserInterface_Base(int32 EntryPoint, const struct FErrorCodesEnum& K2Node_Event_OutgoingError, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UIcarusErrorSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, TArray<struct FKey>& K2Node_MakeArray_Array, TArray<struct FKey>& K2Node_MakeArray_Array_1, const struct FFModifierKeyValues& K2Node_MakeStruct_FModifierKeyValues, const struct FFModifierKeyValues& K2Node_MakeStruct_FModifierKeyValues_1, TArray<struct FKey>& K2Node_MakeArray_Array_2, TMap<struct FKey, bool> K2Node_MakeMap_Map, const struct FFModifierKeyValues& K2Node_MakeStruct_FModifierKeyValues_2, TMap<enum class EModifierKeys, struct FFModifierKeyValues> K2Node_MakeMap_Map_1, TMap<struct FKey, struct FStaticWidget> K2Node_MakeMap_Map_2, enum class EInputTypeSetting K2Node_CustomEvent_Value, bool K2Node_SwitchEnum_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, enum class ECheatsEnabled CallFunc_IfCheatsEnabled_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, enum class ECheatContext CallFunc_GetCheatContext_Context, class UUMG_CheatOverlay_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UIcarusGameInstance* K2Node_DynamicCast_AsIcarus_Game_Instance, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, const struct FErrorCodesEnum& K2Node_CustomEvent_ErrorCode, class UBP_IcarusGameInstance_C* K2Node_DynamicCast_AsBP_Icarus_Game_Instance, bool K2Node_DynamicCast_bSuccess_1, class UBP_IcarusGameUserSettings_C* CallFunc_Get_Icarus_Game_User_Settings_Settings, enum class EInputTypeSetting CallFunc_GetInputType_ReturnValue);
	void OnMenuOpened__DelegateSignature();
	void OnHidePanelDisplay__DelegateSignature();
};

}


