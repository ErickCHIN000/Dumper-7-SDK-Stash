#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3E0 (0x610 - 0x230)
// WidgetBlueprintGeneratedClass UI_Equipment_InventoryTab.UI_Equipment_InventoryTab_C
class UUI_Equipment_InventoryTab_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_Scale_Large;                                  // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_Scale_Medium;                                 // 0x240(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_Scale_Default;                                // 0x248(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      QuickAssignMode;                                   // 0x250(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      FadeOutQuickAccessbar;                             // 0x258(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      FadeIn;                                            // 0x260(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_Prompt_AssignItem;                   // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_Prompt_ConsumeItem;                  // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_Prompt_RemoveItem;                   // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_QuickItems;                          // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_SecondaryTabs;                       // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ScrollBox_Categories;                              // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_MainMenu_Button_C*                 UI_Button_All;                                     // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_MainMenu_Button_C*                 UI_Button_Consumables;                             // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_MainMenu_Button_C*                 UI_Button_Equipment;                               // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_MainMenu_Button_C*                 UI_Button_Glimpses;                                // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_MainMenu_Button_C*                 UI_Button_KeyItems;                                // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_MainMenu_Button_C*                 UI_Button_Tar;                                     // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_MainMenu_Button_C*                 UI_Button_UnlimitedUse;                            // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ControllerButton_C*                UI_ControllerButton_AssignItem;                    // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ControllerButton_C*                UI_ControllerButton_Close;                         // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ControllerButton_C*                UI_ControllerButton_ConsumeItem;                   // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ControllerButton_C*                UI_ControllerButton_RemoveItem;                    // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_CurrencyPanel_C*                   UI_CurrencyPanel;                                  // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventoryGrid_C*                      UI_Inventory;                                      // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemDescription_C*                    UI_ItemDescriptionPanel;                           // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Prompt_Switcher_C*                 UI_Prompt_Switcher_Left;                           // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Prompt_Switcher_C*                 UI_Prompt_Switcher_Right;                          // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInventoryQuickAccessBar_C*            UI_QuickSlotsPanel;                                // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_InventoryTab;                          // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_SecondaryTabs;                         // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        Index_SelectedItem;                                // 0x330(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsInQuickAssignMode;                               // 0x334(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38A1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnBackButtonCloseRequested;                        // 0x338(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FInventoryNavData                     SelectedItemNavData;                               // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CurrentParallaxPos;                                // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Index_Tab;                                         // 0x358(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38AF[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInventoryGridItem_C*                  UI_SelectedItemWidget;                             // 0x360(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_Equipment_Menu_C*                  UI_EquipmentMenu;                                  // 0x368(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGamePlayGameState_C*                  GameStateRef;                                      // 0x370(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AGameplayPC_C*                         GameplayPCRef;                                     // 0x378(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsSwitchingTab;                                    // 0x380(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38B6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Index_Inventory;                                   // 0x384(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Index_QuickSlots;                                  // 0x388(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_38BC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryItem                        Item;                                              // 0x390(0x132)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_38C0[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AZero_Base_C*                          ZeroBaseRef;                                       // 0x4C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Index_Tab_Max;                                     // 0x4D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         QuickItemsFadedOut;                                // 0x4D4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_38D3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInventoryItem                        Item_TriedToUse;                                   // 0x4D8(0x132)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_38D9[0x6];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UUI_Equipment_InventoryTab_C* GetDefaultObj();

	void HandleScale(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, enum class Enum_HUD_Size CallFunc_GetUIScale_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void GetCategories(TArray<class UUI_MainMenu_Button_C*>* Array, TArray<class UUI_MainMenu_Button_C*>& K2Node_MakeArray_Array);
	void ResetScrollBoxOffset();
	void PrintCurrentlySelectedItem(const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	int32 GetNavUpInventoryUp(bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 K2Node_Select_Default);
	int32 GetNavDownInventoryDelta(bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 K2Node_Select_Default);
	void StopListeningUseItem();
	void RemoveFromQuickSlot(class UQuickAccessSlot_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue);
	void ResetNav(bool CallFunc_Nav_Inventory_ItemSelected, class UInventoryGridItem_C* CallFunc_Nav_Inventory_SelectedWidget);
	enum class ESlateVisibility Prompt_RemoveItemVisibility(bool Local_CanRemove, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsHovered_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier, int32 CallFunc_Array_Length_ReturnValue, class UQuickAccessSlot_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	bool IsDarkForm(bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	bool CannotUseItem(enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	enum class ESlateVisibility Prompt_AssignItemVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, int32 Temp_int_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility Temp_byte_Variable_4, class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, enum class ESlateVisibility K2Node_Select_Default_2);
	enum class ESlateVisibility Prompt_ConsumeItemVisibility(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, int32 Temp_int_Variable, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility Temp_byte_Variable_4, bool CallFunc_Get_Use_Item_Conditions_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, enum class ESlateVisibility K2Node_Select_Default_2);
	void Nav_Right(bool CallFunc_Nav_Inventory_ItemSelected, class UInventoryGridItem_C* CallFunc_Nav_Inventory_SelectedWidget);
	void Nav_Left(bool CallFunc_Nav_Inventory_ItemSelected, class UInventoryGridItem_C* CallFunc_Nav_Inventory_SelectedWidget);
	void OnGridItemSelectedBind(FDelegateProperty_& Event);
	void OnClose();
	void OnOpen();
	void Nav_Confirm(bool CallFunc_IsValid_ReturnValue, bool CallFunc_Nav_Inventory_ItemSelected, class UInventoryGridItem_C* CallFunc_Nav_Inventory_SelectedWidget, bool CallFunc_IsCannotQuickAssignTab_ReturnValue);
	void Inventory_HoverSound();
	void Nav_QuickSlots(bool CustomIndex, int32 IndexValue, int32 Delta, int32 DeltaIndex, class UQuickAccessSlot_C* Local_QuickSlot, int32 Local_Index_Temp, int32 Temp_int_Array_Index_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UQuickAccessSlot_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UQuickAccessSlot_C* CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Clamp_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1);
	void NavConfirm_Listen(FDelegateProperty_ Callback);
	void HoverInventoryItem(int32 Index, class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier, const class FString& CallFunc_BuildString_Int_ReturnValue, bool CallFunc_Nav_Inventory_ItemSelected, class UInventoryGridItem_C* CallFunc_Nav_Inventory_SelectedWidget);
	void ResetInventoryGrid(bool ResetAll, class UInventoryGridItem_C* Local_Item, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UInventoryGridItem_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void Nav_Inventory(bool CustomIndex, bool SkipIndexCheck, bool MouseHover, int32 IndexValue, int32 Delta, bool* ItemSelected, class UInventoryGridItem_C** SelectedWidget, bool Local_Hovering, bool Local_SkipIndexCheck, bool Local_CustomIndex, class UInventoryGridItem_C* Local_SelectedWidget, int32 Local_Index_Temp, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UInventoryGridItem_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, class UInventoryGridItem_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Clamp_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, class UInventoryGridItem_C* CallFunc_Array_Get_Item_2, bool CallFunc_IsValid_ReturnValue);
	void CloseMenu();
	void UseInventoryItem_Listen(FDelegateProperty_ Callback);
	void NavUp_Listen(FDelegateProperty_ Callback);
	void NavLeft_Listen(FDelegateProperty_ Callback);
	void NavDown_Listen(FDelegateProperty_ Callback);
	void NavRight_Listen(FDelegateProperty_ Callback);
	void NavTab_HoverSound();
	void NavBack_Listen(FDelegateProperty_ Event);
	void Nav_Back(class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier);
	void SetInventoryWidget();
	void OnWidgetDestruct();
	void NavTab_Next_Listen(FDelegateProperty_ Event);
	void NavTab_Previous_Listen(FDelegateProperty_ Event);
	void FadeInAnim_Play(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void SetBlueprintRef(class AGamePlayGameState_C* CallFunc_GetGameStateAsGameplayGameState_AsGamePlayGameState, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC);
	void Item_Selected(const struct FInventoryItem& InventoryItem, class UInventoryGridItem_C* HoveredWidget, int32 HoveredInventorySlot, bool CallFunc_IsValid_ReturnValue);
	void NavTab_Set(int32 Index, bool AnimateScrollBox, bool SkipSound, bool Local_AnimateScrollBox, int32 Local_IndexTab, TArray<class UUI_MainMenu_Button_C*>& CallFunc_GetCategories_Array, class UUI_MainMenu_Button_C* CallFunc_Array_Get_Item, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_Not_PreBool_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
	void NavTab_Click(int32 Index, int32 Local_Index, bool CallFunc_NotEqual_IntInt_ReturnValue);
	void NavTab_Unhover(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UUI_MainMenu_Button_C*>& CallFunc_Get_Tab_Buttons_Array, int32 CallFunc_Array_Length_ReturnValue, class UUI_MainMenu_Button_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void Get_Tab_Buttons(TArray<class UUI_MainMenu_Button_C*>* Array, TArray<class UUI_MainMenu_Button_C*>& K2Node_MakeArray_Array);
	void NavTab_Hover(int32 Index, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UUI_MainMenu_Button_C*>& CallFunc_Get_Tab_Buttons_Array, int32 CallFunc_Array_Length_ReturnValue, class UUI_MainMenu_Button_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void NavTab_Next(int32 Local_Index_Temp, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue);
	void NavTab_Previous(int32 Local_Index_Temp, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue);
	void NavTab_UpdateButtons(int32 Index, int32 Local_IndexTab, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UUI_MainMenu_Button_C*>& CallFunc_Get_Tab_Buttons_Array, class UUI_MainMenu_Button_C* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FKey& CallFunc_PointerEvent_GetEffectingButton_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue);
	bool IsCannotQuickAssignTab(bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
	void QuickAssignMode_Cancel(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void QuickAssignMode_Enable(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void HandleParallax(const struct FVector2D& DesiredParallaxPos, const struct FVector2D& NormalizedMousePos, const struct FVector2D& Temp_struct_Variable, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier, const struct FVector2D& CallFunc_GetMousePosFromCenterOfScreen_Position, float CallFunc_GetWorldDeltaSeconds_ReturnValue, bool Temp_bool_Variable, const struct FVector2D& K2Node_Select_Default, const struct FVector2D& CallFunc_Vector2DInterpTo_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnGridItemSelected_Set(const struct FInventoryItem& InventoryItem, class UInventoryGridItem_C* HoveredWidget, int32 HoveredInventorySlot);
	void OnQuickAccessSlotsChanged_Set(bool QuickIndicatorAnim);
	void OnSecondaryTabPrevious_Set();
	void OnSecondaryTabNext_Set();
	void NavBack_Set();
	void UseInventoryItem_Set();
	void OnItemStartedDragging_Set(int32 InventorySlot, class UInventoryGridItem_C* GridItemWidget, class UDragDropOperation* DragDropOperation);
	void Destruct();
	void OnKeyboardModeChanged_Set(bool KeyboardMode);
	void OnInventoryTabOpenEvent();
	void OnInventoryTabCloseEvent();
	void OnGridItemSelected_Bind();
	void OnKeyboardModeChanged_Bind();
	void Construct();
	void OnItemStartedDragging_Bind();
	void OnQuickAccessSlotsChanged_Bind();
	void OnSecondaryTabPrevious_Bind();
	void OnSecondaryTabNext_Bind();
	void NavBack_Bind();
	void BndEvt__UI_ControllerButton_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(class UUI_ControllerButton_C* ControllerButton);
	void BndEvt__UI_ControllerButton_C_0_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature(class UUI_ControllerButton_C* ControllerButton);
	void NavDown_Bind();
	void NavDown_Set();
	void NavUp_Bind();
	void NavUp_Set();
	void NavLeft_Bind();
	void NavLeft_Set();
	void NavRight_Bind();
	void NavRight_Set();
	void UseInventoryItem_Bind();
	void OnItemHovered(int32 Index);
	void OnItemUnhovered();
	void NavConfirm_Set();
	void NavConfirm_Bind();
	void NavFaceButtonLeft_Listen();
	void NavFaceButtonLeft_Set();
	void PreConstruct(bool IsDesignTime);
	void OnInitialized();
	void RemoveQuickSlot_RightClicking();
	void UseInventoryItem_LeftClicking();
	void BndEvt__UI_Button_UnlimitedUse_K2Node_ComponentBoundEvent_11_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget);
	void BndEvt__UI_Button_Experience_K2Node_ComponentBoundEvent_10_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget);
	void BndEvt__UI_Button_Equipment_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget);
	void BndEvt__UI_Button_Currency_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget);
	void BndEvt__UI_Button_All_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget);
	void BndEvt__UI_Button_KeyItems_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget);
	void BndEvt__UI_Button_Consumables_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget);
	void BndEvt__UI_Button_Equipment_K2Node_ComponentBoundEvent_6_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget);
	void BndEvt__UI_Button_UnlimitedUse_K2Node_ComponentBoundEvent_5_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget);
	void BndEvt__UI_Button_Experience_K2Node_ComponentBoundEvent_4_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget);
	void BndEvt__UI_Button_Currency_K2Node_ComponentBoundEvent_3_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget);
	void BndEvt__UI_Button_All_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget);
	void BndEvt__UI_Button_KeyItems_K2Node_ComponentBoundEvent_2_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget);
	void BndEvt__UI_Button_Consumables_K2Node_ComponentBoundEvent_0_Hovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget);
	void BndEvt__UI_Button_UnlimitedUse_K2Node_ComponentBoundEvent_16_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget);
	void BndEvt__UI_Button_Experience_K2Node_ComponentBoundEvent_15_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget);
	void BndEvt__UI_Button_Equipment_K2Node_ComponentBoundEvent_14_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget);
	void BndEvt__UI_Button_Currency_K2Node_ComponentBoundEvent_13_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget);
	void BndEvt__UI_Button_All_K2Node_ComponentBoundEvent_12_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget);
	void BndEvt__UI_Button_KeyItems_K2Node_ComponentBoundEvent_3_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget);
	void BndEvt__UI_Button_Consumables_K2Node_ComponentBoundEvent_1_Unhovered__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget);
	void ExecuteUbergraph_UI_Equipment_InventoryTab(int32 EntryPoint, int32 K2Node_ComponentBoundEvent_Index, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_Get_Use_Item_Conditions_ReturnValue, const struct FInventoryItem& CallFunc_GetInventoryItem_InventoryItem, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class Enum_InventoryItem_CanUse CallFunc_GetCanUseItem_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_Get_Use_Item_Conditions_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_UseInventoryItem_ItemUsed, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_UseInventoryItem_ItemUsed_1, bool CallFunc_UseInventoryItem_ItemUsed_2, bool CallFunc_IsValid_ReturnValue_1, const struct FInventoryItem& CallFunc_GetInventoryItem_InventoryItem_1, bool CallFunc_UseInventoryItem_ItemUsed_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_UseInventoryItem_ItemUsed_4, bool CallFunc_UseInventoryItem_ItemUsed_5, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, const struct FInventoryItem& K2Node_CustomEvent_InventoryItem, class UInventoryGridItem_C* K2Node_CustomEvent_HoveredWidget, int32 K2Node_CustomEvent_HoveredInventorySlot, bool K2Node_CustomEvent_QuickIndicatorAnim, bool CallFunc_Greater_IntInt_ReturnValue_1, int32 K2Node_CustomEvent_InventorySlot, class UInventoryGridItem_C* K2Node_CustomEvent_GridItemWidget, class UDragDropOperation* K2Node_CustomEvent_DragDropOperation, bool K2Node_CustomEvent_KeyboardMode, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, bool CallFunc_IsValid_ReturnValue_2, enum class Enum_InventoryItem_CanUse CallFunc_GetCanUseItem_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, class UUI_ControllerButton_C* K2Node_ComponentBoundEvent_ControllerButton_1, class UUI_ControllerButton_C* K2Node_ComponentBoundEvent_ControllerButton, int32 K2Node_CustomEvent_Index, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier, bool K2Node_Event_IsDesignTime, int32 CallFunc_GetNavDownInventoryDelta_ReturnValue, bool CallFunc_Nav_Inventory_ItemSelected, class UInventoryGridItem_C* CallFunc_Nav_Inventory_SelectedWidget, int32 CallFunc_GetNavUpInventoryUp_ReturnValue, bool CallFunc_Nav_Inventory_ItemSelected_1, class UInventoryGridItem_C* CallFunc_Nav_Inventory_SelectedWidget_1, int32 K2Node_ComponentBoundEvent_Index_20, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_20, int32 K2Node_ComponentBoundEvent_Index_19, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_19, int32 K2Node_ComponentBoundEvent_Index_18, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_18, int32 K2Node_ComponentBoundEvent_Index_17, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_17, int32 K2Node_ComponentBoundEvent_Index_16, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_16, int32 K2Node_ComponentBoundEvent_Index_15, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_15, int32 K2Node_ComponentBoundEvent_Index_14, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_14, bool CallFunc_IsValid_ReturnValue_3, int32 K2Node_ComponentBoundEvent_Index_13, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_13, int32 K2Node_ComponentBoundEvent_Index_12, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_12, int32 K2Node_ComponentBoundEvent_Index_11, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_11, int32 K2Node_ComponentBoundEvent_Index_10, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_10, int32 K2Node_ComponentBoundEvent_Index_9, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_9, int32 K2Node_ComponentBoundEvent_Index_8, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_8, int32 K2Node_ComponentBoundEvent_Index_7, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_7, int32 K2Node_ComponentBoundEvent_Index_6, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_6, int32 K2Node_ComponentBoundEvent_Index_5, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_5, int32 K2Node_ComponentBoundEvent_Index_4, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_4, int32 K2Node_ComponentBoundEvent_Index_3, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_3, int32 K2Node_ComponentBoundEvent_Index_2, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_2, int32 K2Node_ComponentBoundEvent_Index_1, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_1);
	void OnBackButtonCloseRequested__DelegateSignature();
};

}


