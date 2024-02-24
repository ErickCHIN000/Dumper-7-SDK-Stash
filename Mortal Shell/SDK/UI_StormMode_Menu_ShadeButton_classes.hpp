#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xAF8 (0xD28 - 0x230)
// WidgetBlueprintGeneratedClass UI_StormMode_Menu_ShadeButton.UI_StormMode_Menu_ShadeButton_C
class UUI_StormMode_Menu_ShadeButton_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               Button_Left;                                       // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Right;                                      // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button_Setting;                                    // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Button;                                      // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        RTB_ShadeAbility;                                  // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ScrollBox_ShadeAbilityText;                        // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Setting;                                      // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Setting_Value;                                // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MID_Inactive;                                      // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Text_Name;                                         // 0x280(0x18)(Edit, BlueprintVisible)
	class UMaterialInstanceDynamic*              MID_Active;                                        // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  ArrowsVisibility;                                  // 0x2A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B71[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UWidget*                               Widget_Parent;                                     // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Setting_Index;                                     // 0x2B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B74[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnSettingConfirmed;                                // 0x2B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         IsHighlighted;                                     // 0x2C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_B79[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Setting_Index_Temp;                                // 0x2CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FText>                          Values;                                            // 0x2D0(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)
	int32                                        MyVerticalIndex;                                   // 0x2E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B90[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FButtonStyle                          Style_Hovered_R;                                   // 0x2E8(0x278)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FButtonStyle                          Style_Unhovered_R;                                 // 0x560(0x278)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FButtonStyle                          Style_Hovered_L;                                   // 0x7D8(0x278)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FButtonStyle                          Style_Unhovered_L;                                 // 0xA50(0x278)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         IsActive;                                          // 0xCC8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsEnabled;                                         // 0xCC9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class EArmorTypes                       Character;                                         // 0xCCA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B9B[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_ShadeAbility                  ShadeAbility;                                      // 0xCD0(0x31)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_B9C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         Scrolling_Enabled;                                 // 0xD08(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_BA3[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Offset_Target;                                     // 0xD0C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Offset_Delta;                                      // 0xD10(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Offset_Max;                                        // 0xD14(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                Indexes;                                           // 0xD18(0x10)(Edit, BlueprintVisible, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_StormMode_Menu_ShadeButton_C* GetDefaultObj();

	void IsButtonEnabled(bool* Enabled_);
	void UpdateShadeAbility(enum class EArmorTypes Temp_byte_Variable, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, const class FString& Temp_string_Variable_2, const class FString& Temp_string_Variable_3, const class FString& Temp_string_Variable_4, const class FString& Temp_string_Variable_5, class FText CallFunc_GetShadeAbilityText_ReturnValue, TScriptInterface<class IBPI_StormModeMenu_C> K2Node_DynamicCast_AsBPI_Storm_Mode_Menu, bool K2Node_DynamicCast_bSuccess, enum class EArmorTypes CallFunc_GetSelectedCharacter_Character, class FText CallFunc_Conv_StringToText_ReturnValue, int32 CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& K2Node_Select_Default, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FStruct_ShadeAbility& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
	class FText GetShadeAbilityText();
	void ArrowVisibility(bool Custom, enum class ESlateVisibility ArrowsVisibility);
	void SetSettingName();
	void Sound_OnValueChange();
	void SetCurrentSettingValue(class FText CallFunc_Array_Get_Item);
	void UpdateValue(class FText CallFunc_Array_Get_Item);
	void SetHighlighted(bool Highlighted, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable, bool Temp_bool_Variable_1, float K2Node_Select_Default, class UMaterialInterface* K2Node_Select_Default_1);
	void ForceSelectButton(bool Select);
	void EnableOrDisableButton(bool Enable);
	void NavVertical(int32 Delta);
	void NavHorizontal(int32 Delta);
	void OverrideCurrentValue(int32 Index);
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
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ScrollBox_Bind();
	void ScrollBox_Set();
	void Reset_Offset_Start();
	void Reset_Offset_End();
	void UpdateIndexes(TArray<int32>& Indexes);
	void ExecuteUbergraph_UI_StormMode_Menu_ShadeButton(int32 EntryPoint, TArray<int32>& K2Node_Event_Indexes, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool Temp_bool_IsClosed_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable_1, bool CallFunc_EqualEqual_FloatFloat_ReturnValue_1, bool K2Node_Event_Select, bool K2Node_Event_Enable, int32 K2Node_Event_Delta_1, int32 K2Node_Event_Delta, int32 K2Node_Event_Index, bool K2Node_Event_IsDesignTime, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, bool K2Node_Event_Select_, bool K2Node_Event_Highlight_, class UWidget* K2Node_Event_Parent, TArray<class FText>& K2Node_Event_Values, int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue_1, int32 CallFunc_Clamp_ReturnValue, int32 CallFunc_Clamp_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, int32 CallFunc_Array_LastIndex_ReturnValue_2, class FText K2Node_Event_Text, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_GetScrollOffset_ReturnValue, float CallFunc_FInterpTo_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_GetScrollOffsetOfEnd_ReturnValue);
	void OnSettingConfirmed__DelegateSignature(int32 Value);
};

}


