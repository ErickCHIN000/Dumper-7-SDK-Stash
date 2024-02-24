#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1F0 (0x450 - 0x260)
// WidgetBlueprintGeneratedClass UMG_ExternalTitleButton.UMG_ExternalTitleButton_C
class UUMG_ExternalTitleButton_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            ButtonText;                                        // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Icon;                                              // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               ImageButton;                                       // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox;                                           // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               Spacer_186;                                        // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            Clicked;                                           // 0x290(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UFont*                                 TextFont;                                          // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Text_Size;                                         // 0x2A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F36[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Text;                                              // 0x2B0(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         Bold;                                              // 0x2C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Italic;                                            // 0x2C9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Uppercase;                                         // 0x2CA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F57[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           Text_Normal;                                       // 0x2D0(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FSlateColor                           Text_Hovered;                                      // 0x2F8(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FSlateColor                           Text_Disabled;                                     // 0x320(0x28)(Edit, BlueprintVisible)
	struct FSlateColor                           Text_Pressed;                                      // 0x348(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UTexture*                              Image_Normal;                                      // 0x370(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture*                              Image_Pressed;                                     // 0x378(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture*                              Image_Hovered;                                     // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture*                              Image_Disabled;                                    // 0x388(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Orange;                                            // 0x390(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_2F84[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           Text_Orange_Disabled;                              // 0x398(0x28)(Edit, BlueprintVisible)
	struct FSlateColor                           Text_Orange_Pressed;                               // 0x3C0(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FSlateColor                           Text_Orange_Normal;                                // 0x3E8(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FSlateColor                           Text_Orange_Hovered;                               // 0x410(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UTexture2D*                            Button_Icon;                                       // 0x438(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                            Sound_OnClicked;                                   // 0x440(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                            Sound_Hover;                                       // 0x448(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_ExternalTitleButton_C* GetDefaultObj();

	void SetDisabled(bool NewParam, bool CallFunc_Not_PreBool_ReturnValue);
	struct FSlateColor Get_ButtonText_ColorAndOpacity_0(bool CallFunc_IsPressed_ReturnValue, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue);
	void SetTextStyle(bool Bold, bool Italic, class UObject* Font, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo);
	void SetButtonImages(class UTexture* Normal, class UTexture* Hovered, class UTexture* Pressed, class UTexture* Disabled, const struct FSlateBrush& DisabledBrush, const struct FSlateBrush& PressedBrush, const struct FSlateBrush& NormalBrush, const struct FSlateBrush& HoveredBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_2, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_3, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle);
	void UpdateTextColour(const struct FLinearColor& Colour, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	void SetTextSize(int32 TextSize, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo);
	void SetText(class FText Text, class FText CallFunc_TextToUpper_ReturnValue);
	void Construct();
	void BndEvt__ImageButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ImageButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void UpdateSpacer();
	void ExecuteUbergraph_UMG_ExternalTitleButton(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_IsDesignTime, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue_1);
	void Clicked__DelegateSignature();
};

}


