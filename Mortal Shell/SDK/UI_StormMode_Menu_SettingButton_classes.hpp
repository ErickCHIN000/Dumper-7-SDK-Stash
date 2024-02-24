#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xAA8 (0xCD8 - 0x230)
// WidgetBlueprintGeneratedClass UI_StormMode_Menu_SettingButton.UI_StormMode_Menu_SettingButton_C
class UUI_StormMode_Menu_SettingButton_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               Button_Left;                                       // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Right;                                      // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Setting;                                    // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Button;                                      // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Setting;                                      // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Setting_Value;                                // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MID_Inactive;                                      // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  BackgroundVisibility;                              // 0x270(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1C3C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Text_Name;                                         // 0x278(0x18)(Edit, BlueprintVisible)
	class UMaterialInstanceDynamic*              MID_Active;                                        // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  ArrowsVisibility;                                  // 0x298(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1C54[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               Widget_Parent;                                     // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Setting_Index;                                     // 0x2A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1C6C[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnSettingConfirmed;                                // 0x2B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         IsHighlighted;                                     // 0x2C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1C75[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Setting_Index_Temp;                                // 0x2C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FText>                          Values;                                            // 0x2C8(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	int32                                        MyVerticalIndex;                                   // 0x2D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1C86[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FButtonStyle                          Style_Hovered_R;                                   // 0x2E0(0x278)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FButtonStyle                          Style_Unhovered_R;                                 // 0x558(0x278)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FButtonStyle                          Style_Hovered_L;                                   // 0x7D0(0x278)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FButtonStyle                          Style_Unhovered_L;                                 // 0xA48(0x278)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsActive;                                          // 0xCC0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IsEnabled;                                         // 0xCC1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1CA3[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnSettingChanged;                                  // 0xCC8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UUI_StormMode_Menu_SettingButton_C* GetDefaultObj();

	void IsButtonEnabled(bool* Enabled_);
	void ArrowVisibility(bool Custom, enum class ESlateVisibility ArrowsVisibility);
	void SetSettingName();
	void Sound_OnValueChange();
	void SetCurrentSettingValue(class FText CallFunc_Array_Get_Item);
	void UpdateValue(class FText CallFunc_Array_Get_Item);
	void SetHighlighted(bool Highlighted, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable, bool Temp_bool_Variable_1, float K2Node_Select_Default, class UMaterialInterface* K2Node_Select_Default_1);
	void ForceSelectButton(bool Select);
	void NavVertical(int32 Delta);
	void NavHorizontal(int32 Delta);
	void UpdateIndexes(TArray<int32>& Indexes);
	void PreConstruct(bool IsDesignTime);
	void OnInitialized();
	void SelectButton(bool Select_);
	void HighlightButton(bool Highlight_);
	void SetParentRef(class UWidget* Parent);
	void UpdateSettingValues(TArray<class FText>& Values);
	void Value_Previous();
	void Value_Next();
	void Value_Reset();
	void UpdateSettingName(class FText Text);
	void BndEvt__Button_Right_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Button_Left_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void DeactivateButton();
	void BndEvt__Button_Left_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Left_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Right_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Right_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
	void ActivateButton();
	void BndEvt__Button_Setting_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
	void EnableOrDisableButton(bool Enable);
	void OverrideCurrentValue(int32 Index);
	void BndEvt__Button_Setting_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Button_Setting_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_UI_StormMode_Menu_SettingButton(int32 EntryPoint, bool K2Node_SwitchInteger_CmpSuccess, bool K2Node_SwitchInteger_CmpSuccess_1, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool K2Node_Event_Select, int32 K2Node_Event_Delta_1, int32 K2Node_Event_Delta, TArray<int32>& K2Node_Event_Indexes, bool K2Node_Event_IsDesignTime, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, bool K2Node_Event_Select_, bool K2Node_Event_Highlight_, class UWidget* K2Node_Event_Parent, TArray<class FText>& K2Node_Event_Values, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue_1, int32 CallFunc_Clamp_ReturnValue, int32 CallFunc_Clamp_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, int32 CallFunc_Array_LastIndex_ReturnValue_2, class FText K2Node_Event_Text, bool K2Node_Event_Enable, int32 K2Node_Event_Index, TScriptInterface<class IBPI_StormModeMenu_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Menu, bool K2Node_DynamicCast_bSuccess);
	void OnSettingChanged__DelegateSignature(int32 NewValue);
	void OnSettingConfirmed__DelegateSignature(int32 Value);
};

}


