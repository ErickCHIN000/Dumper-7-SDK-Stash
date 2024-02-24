#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x31 (0x2C1 - 0x290)
// WidgetBlueprintGeneratedClass StyledSpinner.StyledSpinner_C
class UStyledSpinner_C : public USpinner
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x290(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            LabelTextBlock;                                    // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                LeftArrow;                                         // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               LeftButton;                                        // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                RightArrow;                                        // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               RightButton;                                       // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         DoHoverColor;                                      // 0x2C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UStyledSpinner_C* GetDefaultObj();

	struct FLinearColor Get_LabelTextBlock_ColorAndOpacity_0(const struct FLinearColor& CallFunc_SelectColor_ReturnValue);
	void Get_Button_Color(bool IsHovered, bool Valid, struct FLinearColor* LinearColor, bool Temp_bool_Variable, bool CallFunc_BooleanAND_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, float Temp_float_Variable, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, float Temp_float_Variable_1, float K2Node_Select_Default, const struct FLinearColor& K2Node_MakeStruct_LinearColor);
	void OnSelectionChanged(const struct FSettingOption& SelectedOption, class FText CallFunc_GetLabelText_ReturnValue);
	struct FLinearColor GetRightArrowColorAndOpacity(bool CallFunc_HasValidNext_ReturnValue, bool CallFunc_IsHovered_ReturnValue, const struct FLinearColor& CallFunc_Get_Button_Color_LinearColor);
	struct FLinearColor GetLeftArrowColorAndOpacity(bool CallFunc_HasValidPrevious_ReturnValue, bool CallFunc_IsHovered_ReturnValue, const struct FLinearColor& CallFunc_Get_Button_Color_LinearColor);
	class FText GetLabelText(const struct FSettingOption& CallFunc_GetCurrentOption_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_ToUpper_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void BndEvt__LeftButton_K2Node_ComponentBoundEvent_178_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__RightButton_K2Node_ComponentBoundEvent_196_OnButtonClickedEvent__DelegateSignature();
	void OnHoverColor(bool HoverColor);
	void ExecuteUbergraph_StyledSpinner(int32 EntryPoint, bool K2Node_Event_hoverColor);
};

}


