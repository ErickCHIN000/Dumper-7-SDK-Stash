#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x551 (0xB79 - 0x628)
// WidgetBlueprintGeneratedClass PopupTimedButtonUserWidget.PopupTimedButtonUserWidget_C
class UPopupTimedButtonUserWidget_C : public UGGButtonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x628(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UGGRichTextBlock*                      ButtonLabel;                                       // 0x630(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGGRichTextBlock*                      CountdownTimer;                                    // 0x638(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                ID;                                                // 0x640(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                  Text;                                              // 0x650(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FButtonStyle                          Style;                                             // 0x668(0x278)(Edit, BlueprintVisible, ExposeOnSpawn)
	enum class EPopupResponse                    Response;                                          // 0x8E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_CAD[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FButtonStyle                          DefaultStyle;                                      // 0x8E8(0x278)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         VerticalFlip;                                      // 0xB60(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_CB1[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          HoveredBGColor;                                    // 0xB64(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TimerLength;                                       // 0xB74(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShouldCountDown;                                   // 0xB78(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UPopupTimedButtonUserWidget_C* GetDefaultObj();

	enum class ESlateVisibility Visiblity_CountdownNotReachedZero(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_Greater_FloatFloat_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	enum class ESlateVisibility Visiblity_CountdownReachedZero(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	bool CountdownReachedZero(bool CallFunc_LessEqual_FloatFloat_ReturnValue);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_SetUserFocus_ReturnValue);
	bool HasStyle(bool CallFunc_IsValid_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BndEvt__PopupButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void TogglePopupButtonEnabled(bool Enabled);
	void OnFocusMarkerEnabled(bool bEnabled, bool bPrevious);
	void ShowFocused(bool Focused);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_PopupTimedButtonUserWidget(int32 EntryPoint, bool CallFunc_TextIsEmpty_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_HasStyle_ReturnValue, bool K2Node_CustomEvent_Enabled, bool K2Node_Event_bEnabled, bool K2Node_Event_bPrevious, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool K2Node_CustomEvent_Focused, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool K2Node_Event_IsDesignTime, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_CountdownReachedZero_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_Variable, const struct FLinearColor& K2Node_Select_Default, int32 CallFunc_FCeil_ReturnValue, bool Temp_bool_Variable_1, class FText CallFunc_Conv_IntToText_ReturnValue, class FText K2Node_Select_Default_1);
};

}


