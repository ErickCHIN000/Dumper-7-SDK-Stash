#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x111 (0x3D1 - 0x2C0)
// WidgetBlueprintGeneratedClass CommonCheckbox.CommonCheckbox_C
class UCommonCheckbox_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USizeBox*                              BottomSpacer;                                      // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            CheckboxName;                                      // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            CheckboxValue;                                     // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               LeftMargin;                                        // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               RightMargin;                                       // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                             Toggle;                                            // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              TopSpacer;                                         // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  ToggleTitle;                                       // 0x300(0x18)(Edit, BlueprintVisible)
	int32                                        FontSize;                                          // 0x318(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_D61[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CheckboxDefaultValueTip;                           // 0x320(0x18)(Edit, BlueprintVisible, BlueprintReadOnly)
	bool                                         ChangeCheckboxColorWhenFocused_;                   // 0x338(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ChangeTextColorWhenFocused_;                       // 0x339(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_D67[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          FocusedToggleAndTextColor;                         // 0x33C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          UnfocusedToggleAndTextColor;                       // 0x34C(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_D6E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       TopMargin;                                         // 0x360(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       BottomMargin;                                      // 0x368(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       LeftSideMargin;                                    // 0x370(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       RightSideMargin;                                   // 0x378(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DefaultValue;                                      // 0x380(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_D76[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPhotoModeWidget_C*                    PhotoModeWidget;                                   // 0x388(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FText                                  OptionFalse;                                       // 0x390(0x18)(Edit, BlueprintVisible)
	class FText                                  OptionTrue;                                        // 0x3A8(0x18)(Edit, BlueprintVisible)
	FMulticastInlineDelegateProperty_            CheckboxDispatcher;                                // 0x3C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         Focus_;                                            // 0x3D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCommonCheckbox_C* GetDefaultObj();

	class UWidget* ToggleUsingArrows(enum class EUINavigation Navigation, bool CallFunc_IsChecked_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void Set_Focused_or_Unfocused_Color(bool ChangeCheckboxColorWhenFocused_, bool ChangeTextColorWhenFocused_, class UCheckBox* CheckBox, class UWidget* CheckboxTitle, class UWidget* CheckboxValue, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_IsHovered_ReturnValue_1, bool CallFunc_HasAnyUserFocus_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue, bool CallFunc_HasAnyUserFocus_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsHovered_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, bool Temp_bool_Variable, bool Temp_bool_Variable_1, const struct FSlateColor& K2Node_Select_Default, const struct FVector2D& K2Node_Select_Default_1, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, const struct FCheckBoxStyle& K2Node_MakeStruct_CheckBoxStyle);
	class FText SetTxtValue(bool Temp_bool_Variable, bool CallFunc_IsChecked_ReturnValue, class FText K2Node_Select_Default);
	void PreConstruct(bool IsDesignTime);
	void Initialize(bool DefaultValue, class UPhotoModeWidget_C* PhotoModeWidget__Self_);
	void ResetCheckbox(bool Focus_);
	void ChangeValue(bool Value, bool Focus_);
	void BndEvt__ToggleDoF_1_K2Node_ComponentBoundEvent_3_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void SetToggleFocus();
	void ResetToggleFocus();
	void OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void ExecuteUbergraph_CommonCheckbox(int32 EntryPoint, bool K2Node_Event_IsDesignTime, bool K2Node_CustomEvent_DefaultValue, class UPhotoModeWidget_C* K2Node_CustomEvent_PhotoModeWidget__Self_, bool CallFunc_IsValid_ReturnValue, bool K2Node_CustomEvent_Focus__1, bool K2Node_CustomEvent_Value, bool K2Node_CustomEvent_Focus_, bool CallFunc_IsChecked_ReturnValue, bool K2Node_ComponentBoundEvent_bIsChecked, bool Temp_bool_Has_Been_Initd_Variable, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent, double CallFunc_Conv_IntToDouble_ReturnValue, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, double CallFunc_Conv_IntToDouble_ReturnValue_1, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo_1, bool CallFunc_IsValid_ReturnValue_1, bool Temp_bool_IsClosed_Variable, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, float K2Node_MakeStruct_Size_ImplicitCast, float K2Node_MakeStruct_Size_ImplicitCast_1, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast_1);
	void CheckboxDispatcher__DelegateSignature(bool Value);
};

}


