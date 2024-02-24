#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1E9 (0x419 - 0x230)
// WidgetBlueprintGeneratedClass UI_MerchantPanelNew.UI_MerchantPanelNew_C
class UUI_MerchantPanelNew_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_Scale_Large;                                  // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_Scale_Medium;                                 // 0x240(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_Scale_Default;                                // 0x248(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_SecondaryTabs;                       // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Background_Black;                            // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_BulkBuy;                                   // 0x260(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                          RetainerBox_Pixelate;                              // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ScrollBox_Categories;                              // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_MainMenu_Button_C*                 UI_Button_All;                                     // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_MainMenu_Button_C*                 UI_Button_Consumables;                             // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_MainMenu_Button_C*                 UI_Button_Equipment;                               // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_MainMenu_Button_C*                 UI_Button_Glimpses;                                // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_MainMenu_Button_C*                 UI_Button_KeyItems;                                // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_MainMenu_Button_C*                 UI_Button_Tar;                                     // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_MainMenu_Button_C*                 UI_Button_UnlimitedUse;                            // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ControllerButton_C*                UI_Controller_BulkBuy;                             // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ControllerButton_C*                UI_Controller_Buy;                                 // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ControllerButton_C*                UI_Controller_CancelBulkBuy;                       // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ControllerButton_C*                UI_Controller_OpenAbilitiesMenu;                   // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ControllerButton_C*                UI_Controller_SelectQuantity;                      // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ControllerButton_C*                UI_ControllerButton_Close;                         // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_CurrencyPanel_C*                   UI_CurrencyPanel;                                  // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UItemDescription_C*                    UI_ItemDescriptionPanel;                           // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_MerchantGrid_C*                    UI_MerchantGrid;                                   // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_MerchantMenu_TopNav_C*             UI_MerchantMenu_TopNav;                            // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Prompt_Switcher_C*                 UI_Prompt_Switcher_Left;                           // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Prompt_Switcher_C*                 UI_Prompt_Switcher_Right;                          // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_SecondaryTabs;                         // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         Input_Consume;                                     // 0x318(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsInBulkBuy;                                       // 0x319(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A70[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Index_SelectedItem;                                // 0x31C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Index_Tab;                                         // 0x320(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2A74[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_MerchantItemNew_C*                 SelectedItemUI;                                    // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AUsable_Branching_NPC_C*               Trader;                                            // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CanBuySelected;                                    // 0x338(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A7C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Index_Tab_Max;                                     // 0x33C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsGlimpseBased;                                    // 0x340(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         CanBulkBuy;                                        // 0x341(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A85[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        ScrollingTime;                                     // 0x344(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          NavRight_Timer;                                    // 0x348(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          NavLeft_Timer;                                     // 0x350(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	TMap<class FName, int32>                     BoughtItems;                                       // 0x358(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FName, struct FInventoryItem>     BoughtInventoryItems;                              // 0x3A8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsClosing;                                         // 0x3F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2A95[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  MerchantName;                                      // 0x400(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsWaifu;                                           // 0x418(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UUI_MerchantPanelNew_C* GetDefaultObj();

	void HandleScale(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, enum class Enum_HUD_Size CallFunc_GetUIScale_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void GetCategories(TArray<class UUI_MainMenu_Button_C*>* Array, TArray<class UUI_MainMenu_Button_C*>& K2Node_MakeArray_Array);
	enum class ESlateVisibility Get_UI_Controller_OpenAbilitiesMenu_Visibility_0(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void CloseAndOpenAbilitiesMenu(class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC);
	void ResetScrollBoxOffset();
	void NavTabClick(int32 A, int32 Local_Index, bool CallFunc_NotEqual_IntInt_ReturnValue);
	void NavTabUnhover(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UUI_MainMenu_Button_C*>& CallFunc_GetTabButtons_Array, class UUI_MainMenu_Button_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void SoundHover();
	void NavTabHover(int32 Index, int32 Local_Index, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UUI_MainMenu_Button_C*>& CallFunc_GetTabButtons_Array, int32 CallFunc_Array_Length_ReturnValue, class UUI_MainMenu_Button_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void SetMerchantName();
	void MenuBack_Listen(FDelegateProperty_ Callback);
	void BuySound();
	void ShowItems(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UUI_MerchantItemNew_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void HideItems(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UUI_MerchantItemNew_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void MerchantItemHovered(int32 IndexValue, class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier, const class FString& CallFunc_BuildString_Int_ReturnValue, bool CallFunc_NavMerchant_ItemSelected);
	void OpenBulkBuyMode(bool CallFunc_IsValid_ReturnValue);
	void CloseBulkBuyMode();
	void ClearBoughtItems();
	void BoughtItemsNotify(const TArray<int32>& Local_Values, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, int32 CallFunc_Array_Get_Item, TArray<int32>& CallFunc_Map_Values_Values, TArray<class FName>& CallFunc_Map_Keys_Keys, class FName CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, const struct FInventoryItem& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void BuyMultipleItems(const struct FInventoryItem& Local_Item, int32 Local_LastIndex, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_CheckCanBuy_Return, int32 Temp_int_Variable_2, bool Temp_bool_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_NavMerchant_ItemSelected, bool CallFunc_Less_IntInt_ReturnValue, int32 K2Node_Select_Default, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue_1, bool CallFunc_TryToAddItemToInventory_Success, const struct FInventoryItem& CallFunc_TryToAddItemToInventory_OutItem, int32 CallFunc_TryToAddItemToInventory_AddedToSlot, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void UpdateScrollingTime(float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue);
	enum class ESlateVisibility Get_Overlay_BulkBuy_Visibility_0(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	enum class ESlateVisibility Get_UI_Controller_SelectQuantity_Visibility_0(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	enum class ESlateVisibility Get_UI_Controller_BulkBuy_Visibility_0(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	enum class ESlateVisibility Get_UI_Controller_CancelBulkBuy_Visibility_0(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void BulkBuyModeListen(FDelegateProperty_ Callback);
	void SetCanBuySelected(int32 CallFunc_GetPlayerCurrency_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void SetCanBulkBuy(int32 CallFunc_GetPlayerCurrency_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	int32 GetPlayerCurrency(bool Temp_bool_Variable, enum class EArmorTypes CallFunc_GetShell_CurrentArmor, int32 CallFunc_GetShellBondingPoints_Points, int32 CallFunc_GetNamedPCInt_Value, int32 K2Node_Select_Default);
	void ResetGrid(bool ResetAll, class UUI_MerchantItemNew_C* Local_Item, int32 Temp_int_Array_Index_Variable, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UUI_MerchantItemNew_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UKeyboardModeNotifierComponent_C* CallFunc_GetKeyboardModeNotifier_KeyboardModeNotifier, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void NavTabPrevious(int32 Local_Index_Temp, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue);
	void NavTabNext(int32 Local_Index_Temp, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue);
	void NavTabSet(int32 Index, bool AnimateScrollBox, bool SkipSound, int32 Local_IndexTab, bool Local_AnimateScrollBox, TArray<class UUI_MainMenu_Button_C*>& CallFunc_GetCategories_Array, class UUI_MainMenu_Button_C* CallFunc_Array_Get_Item);
	void GetTabButtons(TArray<class UUI_MainMenu_Button_C*>* Array, TArray<class UUI_MainMenu_Button_C*>& K2Node_MakeArray_Array);
	void NavTabUpdateButtons(int32 Index, int32 Local_IndexTab, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UUI_MainMenu_Button_C*>& CallFunc_GetTabButtons_Array, class UUI_MainMenu_Button_C* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void PayPrice(int32 Cost, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous, int32 CallFunc_Abs_Int_ReturnValue, enum class EArmorTypes CallFunc_GetShell_CurrentArmor);
	void SetBoughtItems(const struct FInventoryItem& Item, class FName Local_ID, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_SelectInt_ReturnValue);
	void BuyItem(int32 Temp_int_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_CheckCanBuy_Return, int32 Temp_int_Variable_1, bool Temp_bool_Variable, bool CallFunc_NavMerchant_ItemSelected, bool CallFunc_Less_IntInt_ReturnValue, int32 K2Node_Select_Default, int32 CallFunc_Multiply_IntInt_ReturnValue, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, bool CallFunc_TryToAddItemToInventory_Success, const struct FInventoryItem& CallFunc_TryToAddItemToInventory_OutItem, int32 CallFunc_TryToAddItemToInventory_AddedToSlot);
	void NavConfirmListen(FDelegateProperty_ Callback);
	void NavTabNextListen(FDelegateProperty_ Callback);
	void NavTabPreviousListen(FDelegateProperty_ Callback);
	int32 GetNavDownDelta(bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 K2Node_Select_Default);
	int32 GetNavUpDelta(bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 K2Node_Select_Default);
	void OnOpen(class AUsable_Branching_NPC_C* Trader);
	void UI_HoverSound();
	void NavMerchant(bool CustomIndex, bool SkipIndexCheck, bool MouseHover, int32 IndexValue, int32 Delta, bool SkipSound, bool* ItemSelected, bool Local_SkipSound, class UUI_MerchantItemNew_C* Local_SelectedItemUI, int32 Local_IndexTemp, int32 Local_Delta, int32 Local_IndexValue, bool Local_Hovering, bool Local_SkipIndexCheck, bool Local_CustomIndex, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, class UUI_MerchantItemNew_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Clamp_ReturnValue, int32 Temp_int_Array_Index_Variable, class UUI_MerchantItemNew_C* CallFunc_Array_Get_Item_1);
	void NavDownListen(FDelegateProperty_ Callback);
	void NavUpListen(FDelegateProperty_ Callback);
	void NavRightListen(FDelegateProperty_ Pressed, FDelegateProperty_ Released);
	void NavLeftListen(FDelegateProperty_ Pressed, FDelegateProperty_ Released);
	void NavUp_Bind();
	void NavUp_Set();
	void NavDown_Bind();
	void NavDown_Set();
	void NavLeft_Bind();
	void NavLeft_Set();
	void NavRight_Bind();
	void NavRight_Set();
	void OnOpen_Event(class AUsable_Branching_NPC_C* Trader);
	void OnSecondaryTabPrevious_Set();
	void OnSecondaryTabNext_Set();
	void OnSecondaryTabPrevious_Bind();
	void OnSecondaryTabNext_Bind();
	void NavConfirm_Set();
	void NavConfirm_Bind();
	void OnInitialized();
	void NavFaceButtonLeft_Bind();
	void NavFaceButtonLeft_Set();
	void HoldRight_Set();
	void HoldRight_Released();
	void HoldLeft_Set();
	void HoldLeft_Released();
	void OnItemHovered(int32 Index);
	void OnItemUnhovered();
	void BulkBuyMode_MouseEvent();
	void Buy_MouseEvent();
	void BndEvt__UI_ControllerButton_Close_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature(class UUI_ControllerButton_C* ControllerButton);
	void NavBack_Set();
	void NavBack_Bind();
	void Destruct();
	void OpenAbilities_Listen();
	void OpenAbilities_Set();
	void BndEvt__UI_Controller_OpenAbilitiesMenu_K2Node_ComponentBoundEvent_1_OnButtonClicked__DelegateSignature(class UUI_ControllerButton_C* ControllerButton);
	void SaveIfBoughtStuff();
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
	void BndEvt__UI_Button_UnlimitedUse_K2Node_ComponentBoundEvent_11_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget);
	void BndEvt__UI_Button_Experience_K2Node_ComponentBoundEvent_10_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget);
	void BndEvt__UI_Button_Equipment_K2Node_ComponentBoundEvent_9_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget);
	void BndEvt__UI_Button_Currency_K2Node_ComponentBoundEvent_8_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget);
	void BndEvt__UI_Button_All_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget);
	void BndEvt__UI_Button_KeyItems_K2Node_ComponentBoundEvent_5_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget);
	void BndEvt__UI_Button_Consumables_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(int32 Index, class UUI_MainMenu_Button_C* Widget);
	void ExecuteUbergraph_UI_MerchantPanelNew(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_NavMerchant_ItemSelected, bool CallFunc_NavMerchant_ItemSelected_1, class AUsable_Branching_NPC_C* K2Node_CustomEvent_Trader, int32 CallFunc_GetNavUpDelta_ReturnValue, bool CallFunc_NavMerchant_ItemSelected_2, int32 CallFunc_GetNavDownDelta_ReturnValue, bool CallFunc_NavMerchant_ItemSelected_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FTimerHandle& CallFunc_UI_HoldTimer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, int32 K2Node_CustomEvent_Index, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UUI_ControllerButton_C* K2Node_ComponentBoundEvent_ControllerButton_1, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, bool CallFunc_Not_PreBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_1, class UUI_ControllerButton_C* K2Node_ComponentBoundEvent_ControllerButton, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC_2, int32 CallFunc_Map_Length_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, class AWaifuNPC_C* K2Node_DynamicCast_AsWaifu_NPC, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, int32 K2Node_ComponentBoundEvent_Index_20, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_20, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, const struct FTimerHandle& CallFunc_UI_HoldTimer_ReturnValue_1, int32 K2Node_ComponentBoundEvent_Index_19, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_19, int32 K2Node_ComponentBoundEvent_Index_18, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_18, int32 K2Node_ComponentBoundEvent_Index_17, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_17, int32 K2Node_ComponentBoundEvent_Index_16, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_16, int32 K2Node_ComponentBoundEvent_Index_15, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_15, int32 K2Node_ComponentBoundEvent_Index_14, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_14, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, int32 K2Node_ComponentBoundEvent_Index_13, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_13, int32 K2Node_ComponentBoundEvent_Index_12, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_12, int32 K2Node_ComponentBoundEvent_Index_11, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_11, int32 K2Node_ComponentBoundEvent_Index_10, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_10, int32 K2Node_ComponentBoundEvent_Index_9, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_9, int32 K2Node_ComponentBoundEvent_Index_8, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_8, int32 K2Node_ComponentBoundEvent_Index_7, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_7, int32 K2Node_ComponentBoundEvent_Index_6, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_6, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, int32 K2Node_ComponentBoundEvent_Index_5, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_5, int32 K2Node_ComponentBoundEvent_Index_4, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_4, int32 K2Node_ComponentBoundEvent_Index_3, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_3, int32 K2Node_ComponentBoundEvent_Index_2, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_2, int32 K2Node_ComponentBoundEvent_Index_1, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget_1, int32 K2Node_ComponentBoundEvent_Index, class UUI_MainMenu_Button_C* K2Node_ComponentBoundEvent_Widget);
};

}


