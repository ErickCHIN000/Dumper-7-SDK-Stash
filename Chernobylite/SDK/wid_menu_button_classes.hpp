#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x49 (0x2A9 - 0x260)
// WidgetBlueprintGeneratedClass wid_menu_button.wid_menu_button_C
class UWid_menu_button_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UButton*                               Btn;                                               // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_1;                                           // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text;                                              // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            BtnClicked;                                        // 0x280(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class FText                                  BntText;                                           // 0x290(0x18)(Edit, BlueprintVisible)
	bool                                         WasMouseClick;                                     // 0x2A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UWid_menu_button_C* GetDefaultObj();

	void PlayClickEffect(const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	void ClearClickEffect(const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	void GetHoveredText(class FText* Text, const class FString& HoveredText, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, TArray<class FString>& CallFunc_GetCharacterArrayFromString_ReturnValue, const class FString& CallFunc_Array_Get_Item, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, int32 CallFunc_Len_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void SetSelected(bool New_Selected, bool Temp_bool_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, bool Temp_bool_Variable_1, class FName K2Node_Select_Default, class FText CallFunc_GetHoveredText_Text, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, class FText CallFunc_TextToUpper_ReturnValue, class FText K2Node_Select_Default_1, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__Btn_K2Node_ComponentBoundEvent_0_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__Btn_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__Btn_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__Btn_K2Node_ComponentBoundEvent_4_OnButtonReleasedEvent__DelegateSignature();
	void ExecuteUbergraph_wid_menu_button(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class FText CallFunc_TextToUpper_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, bool CallFunc_IsHovered_ReturnValue);
	void BtnClicked__DelegateSignature();
};

}


