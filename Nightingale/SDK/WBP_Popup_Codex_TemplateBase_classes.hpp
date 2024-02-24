#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x138 (0x428 - 0x2F0)
// WidgetBlueprintGeneratedClass WBP_Popup_Codex_TemplateBase.WBP_Popup_Codex_TemplateBase_C
class UWBP_Popup_Codex_TemplateBase_C : public UCommonUserWidget
{
public:
	FMulticastInlineDelegateProperty_            Button1_Clicked_0;                                 // 0x2F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            Button2_Clicked_0;                                 // 0x300(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            Button3_Clicked_0;                                 // 0x310(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FCodexEntry                           Codex_Entry;                                       // 0x320(0xF0)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FGameplayTag                          Subentry_Tag;                                      // 0x410(0x8)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         Show_All_Unlocked_Subentries;                      // 0x418(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_4B32[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       ScrollOffsetScale;                                 // 0x420(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_Popup_Codex_TemplateBase_C* GetDefaultObj();

	struct FEventReply OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent, const struct FEventReply& CallFunc_OnAnalogMoved_EventReplyStructure);
	void GetScrollBox(class UScrollBox** ScrollBox);
	void OnAnalogMoved(const struct FGeometry& Geometry, const struct FAnalogInputEvent& AnalogEvent, struct FEventReply* EventReplyStructure, double ScrollScale, class UScrollBox* ScrollBox, const struct FEventReply& CallFunc_Unhandled_ReturnValue, float CallFunc_GetAnalogValue_ReturnValue, const struct FKeyEvent& CallFunc_GetKeyEventFromAnalogInputEvent_ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, float CallFunc_GetScrollOffset_ReturnValue, float CallFunc_GetScrollOffsetOfEnd_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_FClamp_ReturnValue, class UScrollBox* CallFunc_GetScrollBox_ScrollBox, bool CallFunc_IsValid_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, double CallFunc_Add_DoubleDouble_B_ImplicitCast, double CallFunc_FClamp_Max_ImplicitCast, float CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast);
	void PlayCloseAnimation();
	void PlayOpenAnimation();
	void Button3_Clicked_0__DelegateSignature();
	void Button2_Clicked_0__DelegateSignature();
	void Button1_Clicked_0__DelegateSignature();
};

}


