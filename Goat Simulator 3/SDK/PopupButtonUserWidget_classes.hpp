#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x544 (0xB6C - 0x628)
// WidgetBlueprintGeneratedClass PopupButtonUserWidget.PopupButtonUserWidget_C
class UPopupButtonUserWidget_C : public UGGButtonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x628(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UGGRichTextBlock*                      ButtonLabel;                                       // 0x630(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                ID;                                                // 0x638(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                  Text;                                              // 0x648(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FButtonStyle                          Style;                                             // 0x660(0x278)(Edit, BlueprintVisible, ExposeOnSpawn)
	enum class EPopupResponse                    Response;                                          // 0x8D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_4BB[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FButtonStyle                          DefaultStyle;                                      // 0x8E0(0x278)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         VerticalFlip;                                      // 0xB58(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_4BE[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          HoveredBGColor;                                    // 0xB5C(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UPopupButtonUserWidget_C* GetDefaultObj();

	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_SetUserFocus_ReturnValue);
	bool HasStyle(bool CallFunc_IsValid_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BndEvt__PopupButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void TogglePopupButtonEnabled(bool Enabled);
	void OnFocusMarkerEnabled(bool bEnabled, bool bPrevious);
	void ShowFocused(bool Focused);
	void ExecuteUbergraph_PopupButtonUserWidget(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool K2Node_Event_IsDesignTime, bool CallFunc_TextIsEmpty_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText K2Node_Select_Default, bool CallFunc_HasStyle_ReturnValue, bool K2Node_CustomEvent_Enabled, bool K2Node_Event_bEnabled, bool K2Node_Event_bPrevious, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool K2Node_CustomEvent_Focused, const struct FLinearColor& K2Node_Select_Default_1);
};

}


