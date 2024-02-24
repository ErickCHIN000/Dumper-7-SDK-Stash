#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x118 (0x378 - 0x260)
// WidgetBlueprintGeneratedClass UMG_ButtonIcon.UMG_ButtonIcon_C
class UUMG_ButtonIcon_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Icon;                                              // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               ImageButton;                                       // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox;                                           // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            Clicked;                                           // 0x280(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UFont*                                 TextFont;                                          // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           Colour_Normal;                                     // 0x298(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FSlateColor                           Colour_Hovered;                                    // 0x2C0(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FSlateColor                           Colour_Disabled;                                   // 0x2E8(0x28)(Edit, BlueprintVisible)
	struct FSlateColor                           Colour_Pressed;                                    // 0x310(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UMaterialInstance*                     Image_Normal;                                      // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     Image_Pressed;                                     // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     Image_Hovered;                                     // 0x348(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     Image_Disabled;                                    // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            IconImage;                                         // 0x358(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Tooltip_Text_Field;                                // 0x360(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UUMG_ButtonIcon_C* GetDefaultObj();

	void SetDisabled(bool Disabled, bool CallFunc_Not_PreBool_ReturnValue);
	struct FSlateColor Get_ButtonText_ColorAndOpacity_0(bool CallFunc_IsPressed_ReturnValue, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue);
	void SetTextStyle(bool Bold, bool Italic, class UObject* Font);
	void SetButtonImages(class UMaterialInstance* Normal, class UMaterialInstance* Hovered, class UMaterialInstance* Pressed, class UMaterialInstance* Disabled, const struct FSlateBrush& DisabledBrush, const struct FSlateBrush& PressedBrush, const struct FSlateBrush& NormalBrush, const struct FSlateBrush& HoveredBrush, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_3, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_2, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_3, const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle);
	void UpdateTextColour(const struct FLinearColor& Colour);
	void SetTextSize(int32 TextSize);
	void SetText(class FText Text);
	void Construct();
	void BndEvt__ImageButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__ImageButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void PreConstruct(bool IsDesignTime);
	void Reinitialise();
	void ExecuteUbergraph_UMG_ButtonIcon(int32 EntryPoint, class UUMG_UnlockTooltip_C* CallFunc_Create_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue_1, bool K2Node_Event_IsDesignTime);
	void Clicked__DelegateSignature();
};

}


