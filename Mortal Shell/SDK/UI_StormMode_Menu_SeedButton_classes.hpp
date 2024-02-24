#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xAC8 (0xCF8 - 0x230)
// WidgetBlueprintGeneratedClass UI_StormMode_Menu_SeedButton.UI_StormMode_Menu_SeedButton_C
class UUI_StormMode_Menu_SeedButton_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               Button_Setting;                                    // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_SeedButtons;                         // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Button;                                      // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Setting;                                      // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_StormMode_Menu_SettingButton_C*    UI_StormMode_Menu_CurrentSeed;                     // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_StormMode_SeedButton_C*            UI_StormMode_SeedButton_0;                         // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_StormMode_SeedButton_C*            UI_StormMode_SeedButton_1;                         // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_StormMode_SeedButton_C*            UI_StormMode_SeedButton_2;                         // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_StormMode_SeedButton_C*            UI_StormMode_SeedButton_3;                         // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_StormMode_SeedButton_C*            UI_StormMode_SeedButton_4;                         // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_StormMode_SeedButton_C*            UI_StormMode_SeedButton_5;                         // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MID_Inactive;                                      // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Text_Name;                                         // 0x298(0x18)(Edit, BlueprintVisible)
	class UMaterialInstanceDynamic*              MID_Active;                                        // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  ArrowsVisibility;                                  // 0x2B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_20F0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               Widget_Parent;                                     // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Setting_Index;                                     // 0x2C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_20F9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnSettingConfirmed;                                // 0x2D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         IsHighlighted;                                     // 0x2E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_20FF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Setting_Index_Temp;                                // 0x2E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FText>                          Values;                                            // 0x2E8(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	int32                                        MyVerticalIndex;                                   // 0x2F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_210F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FButtonStyle                          Style_Hovered_R;                                   // 0x300(0x278)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FButtonStyle                          Style_Unhovered_R;                                 // 0x578(0x278)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FButtonStyle                          Style_Hovered_L;                                   // 0x7F0(0x278)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FButtonStyle                          Style_Unhovered_L;                                 // 0xA68(0x278)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsActive;                                          // 0xCE0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsEnabled;                                         // 0xCE1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2135[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Index_Vertical;                                    // 0xCE4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Index_Horizontal;                                  // 0xCE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_213B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UUI_StormMode_SettingsWindow_C*        UI_StormMode_SettingsWindow;                       // 0xCF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_StormMode_Menu_SeedButton_C* GetDefaultObj();

	void IsButtonEnabled(bool* Enabled_);
	void SeedButtonsVisibility(enum class ESlateVisibility InVisibility, float InOpacity, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UUI_StormMode_SeedButton_C*>& CallFunc_GetSeedButtons_Array, class UUI_StormMode_SeedButton_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void CreateMIDs(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1);
	void NavLeftRight(bool UseWidget, bool CustomIndex, bool SkipIndexCheck, bool SkipSound, int32 Delta, class UUI_StormMode_SeedButton_C* Widget, int32 Index, int32 Local_IndexSelected, class UUI_StormMode_SeedButton_C* Local_Widget, int32 Local_Delta, bool Local_SkipSound, bool Local_SkipIndexCheck, bool Local_CustomIndex, bool Local_UseWidget, TArray<class UUI_StormMode_SeedButton_C*>& CallFunc_GetSeedButtons_Array, class UUI_StormMode_SeedButton_C* CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class UUI_StormMode_SeedButton_C*>& CallFunc_GetSeedButtons_Array_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Clamp_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, TArray<class UUI_StormMode_SeedButton_C*>& CallFunc_GetSeedButtons_Array_2, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Find_ReturnValue, class UUI_StormMode_SeedButton_C* CallFunc_Array_Get_Item_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_3);
	int32 GetMin(bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 K2Node_Select_Default);
	void NavUpDown(bool UseWidget, bool CustomIndex, bool SkipIndexCheck, bool SkipSound, int32 Delta, class UUI_StormMode_SeedButton_C* Widget, int32 Index, int32 Local_IndexSelected, class UUI_StormMode_SeedButton_C* Local_Widget, int32 Local_Delta, bool Local_SkipSound, bool Local_SkipIndexCheck, bool Local_CustomIndex, bool Local_UseWidget, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, TArray<class UUI_StormMode_SeedButton_C*>& CallFunc_GetSeedButtons_Array, class UUI_StormMode_SeedButton_C* CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, TArray<class UUI_StormMode_SeedButton_C*>& CallFunc_GetSeedButtons_Array_1, int32 CallFunc_GetMin_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, int32 CallFunc_GetMin_ReturnValue_1);
	void GetSeedButtons(TArray<class UUI_StormMode_SeedButton_C*>* Array, TArray<class UUI_StormMode_SeedButton_C*>& K2Node_MakeArray_Array);
	void Sound_OnValueChange();
	void SetHighlighted(bool Highlighted, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable, bool Temp_bool_Variable_1, float K2Node_Select_Default, class UMaterialInterface* K2Node_Select_Default_1);
	void UpdateSettingValues(TArray<class FText>& Values);
	void Value_Next();
	void Value_Previous();
	void Value_Reset();
	void UpdateSettingName(class FText Text);
	void ForceSelectButton(bool Select);
	void EnableOrDisableButton(bool Enable);
	void OverrideCurrentValue(int32 Index);
	void UpdateIndexes(TArray<int32>& Indexes);
	void OnInitialized();
	void SelectButton(bool Select_);
	void HighlightButton(bool Highlight_);
	void SetParentRef(class UWidget* Parent);
	void DeactivateButton();
	void ActivateButton();
	void BndEvt__Button_Setting_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
	void NavHorizontal(int32 Delta);
	void NavVertical(int32 Delta);
	void OnArrowHovered(class UUI_StormMode_SeedButton_C* Widget);
	void OnArrowClicked(int32 Delta);
	void BndEvt__Button_Setting_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Setting_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_UI_StormMode_Menu_SeedButton(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, TScriptInterface<class IBPI_StormModeMenu_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Menu, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, TArray<class FText>& K2Node_Event_Values, class FText K2Node_Event_Text, bool K2Node_Event_Select, bool K2Node_Event_Enable, int32 K2Node_Event_Index, TArray<int32>& K2Node_Event_Indexes, bool K2Node_Event_Select_, bool K2Node_Event_Highlight_, class UWidget* K2Node_Event_Parent, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 K2Node_Event_Delta_1, int32 K2Node_Event_Delta, class UUI_StormMode_SeedButton_C* K2Node_CustomEvent_Widget, int32 K2Node_CustomEvent_Delta, TArray<class UUI_StormMode_SeedButton_C*>& CallFunc_GetSeedButtons_Array, class UUI_StormMode_SeedButton_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TScriptInterface<class IBPI_StormModeMenu_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Menu_1, bool K2Node_DynamicCast_bSuccess_1);
	void OnSettingConfirmed__DelegateSignature(int32 Value);
};

}


