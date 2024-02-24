#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1D8 (0x470 - 0x298)
// WidgetBlueprintGeneratedClass UMG_ButtonBase.UMG_ButtonBase_C
class UUMG_ButtonBase_C : public UIcarusWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	FMulticastInlineDelegateProperty_            Clicked;                                           // 0x2A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UFont*                                 TextFont;                                          // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Text_Size;                                         // 0x2B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_DD4[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Text;                                              // 0x2C0(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         Bold;                                              // 0x2D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Italic;                                            // 0x2D9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Uppercase;                                         // 0x2DA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_DD9[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           Text_Normal;                                       // 0x2E0(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FSlateColor                           Text_Hovered;                                      // 0x308(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FSlateColor                           Text_Pressed;                                      // 0x330(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FSlateColor                           Text_Disabled;                                     // 0x358(0x28)(Edit, BlueprintVisible)
	class UMaterialInstance*                     Image_Normal;                                      // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     Image_Hovered;                                     // 0x388(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     Image_Pressed;                                     // 0x390(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     Image_Disabled;                                    // 0x398(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Orange;                                            // 0x3A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_DF0[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateColor                           Text_Orange_Normal;                                // 0x3A8(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FSlateColor                           Text_Orange_Hovered;                               // 0x3D0(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FSlateColor                           Text_Orange_Pressed;                               // 0x3F8(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FSlateColor                           Text_Orange_Disabled;                              // 0x420(0x28)(Edit, BlueprintVisible)
	class UTextBlock*                            ButtonTextRef;                                     // 0x448(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UButton*                               ImageButtonRef;                                    // 0x450(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                            Sound_OnClick;                                     // 0x458(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CachedTextColor;                                   // 0x460(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_ButtonBase_C* GetDefaultObj();

	void Update_Visuals();
	void GetImageButton(class UButton** ImageButton);
	void GetButtonText(class UTextBlock** ButtonText);
	void OnClicked(const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue);
	void OnReleased();
	void GetDisabledTextColour(struct FSlateColor* Colour);
	void GetPressedTextColour(struct FSlateColor* Colour);
	void GetHoveredTextColour(struct FSlateColor* Colour);
	void GetNormalTextColour(struct FSlateColor* Colour);
	void OnPressed();
	void OnUnhover();
	void OnHover(const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue);
	void UpdateTextColour(const struct FSlateColor& TextColour, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_IsPressed_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FSlateColor& CallFunc_GetHoveredTextColour_Colour, const struct FSlateColor& CallFunc_GetPressedTextColour_Colour, const struct FSlateColor& CallFunc_GetDisabledTextColour_Colour, const struct FSlateColor& CallFunc_GetNormalTextColour_Colour);
	void SetTextColours(const struct FSlateColor& Normal, const struct FSlateColor& Hover, const struct FSlateColor& Pressed, const struct FSlateColor& Disabled);
	void IsDisabled(bool* Disabled, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void SetDisabled(bool Disabled, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void SetTextStyle(bool Bold, bool Italic, class UObject* Font, bool CallFunc_IsValid_ReturnValue, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo);
	void SetButtonImages(class UMaterialInstance* Normal, class UMaterialInstance* Hovered, class UMaterialInstance* Pressed, class UMaterialInstance* Disabled, const struct FSlateBrush& DisabledBrush, const struct FSlateBrush& PressedBrush, const struct FSlateBrush& NormalBrush, const struct FSlateBrush& HoveredBrush, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_3, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_2, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_3, bool CallFunc_IsValid_ReturnValue_4, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle);
	void SetTextSize(int32 TextSize, bool CallFunc_IsValid_ReturnValue, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo);
	void SetText(class FText Text, class FText CallFunc_TextToUpper_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_UMG_ButtonBase(int32 EntryPoint, class UButton* CallFunc_GetImageButton_ImageButton, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_IsDesignTime, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class UTextBlock* CallFunc_GetButtonText_ButtonText);
	void Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button);
};

}


