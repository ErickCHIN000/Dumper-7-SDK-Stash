#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x121 (0x469 - 0x348)
// WidgetBlueprintGeneratedClass WBP_CC_SubWidget_Button.WBP_CC_SubWidget_Button_C
class UWBP_CC_SubWidget_Button_C : public UNWXCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_OpenStateArrow;                               // 0x350(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_fadeArt_Out;                                  // 0x358(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_fadeArt_In;                                   // 0x360(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                               OnedSliderPercent;                                 // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USynth2DSlider*                        TwodSlider;                                        // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Border_Active2dSlider;                             // 0x378(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Border_OpenState;                                  // 0x380(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_No_Text_C*          CBU_Button;                                        // 0x388(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       ContentTypeSwitcher;                               // 0x390(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_BottomDecor;                                   // 0x398(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_FocusHighlight;                                // 0x3A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_inkWash_HOVER;                                 // 0x3A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_openStateArrow;                                // 0x3B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_selectedContent;                               // 0x3B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               IMG_SelectedContentBorder;                         // 0x3C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_TopDecor;                                      // 0x3C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_0;                                         // 0x3D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_catLabel_1;                                    // 0x3D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Horizontal_AutoScrollingText_C*   WBP_Horizontal_AutoScrollingText;                  // 0x3E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            CategoryButtonClicked;                             // 0x3E8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FLinearColor                          Hovered_Color;                                     // 0x3F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          UnHovered_Color;                                   // 0x408(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Label;                                             // 0x418(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                   SelectedEntry;                                     // 0x430(0x10)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsExpandedCached;                                 // 0x440(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class E_CategorySubType                 SubCategoryType;                                   // 0x441(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class ESlateVisibility                  HeaderBarButtonVisibility;                         // 0x442(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_B56[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Index_ContentStyle;                                // 0x444(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             TwodSlider_Value;                                  // 0x448(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnCategoryButtonExpansionSet;                      // 0x458(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         HasFocus;                                          // 0x468(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_CC_SubWidget_Button_C* GetDefaultObj();

	void SetIsHeaderExpanded(bool bIsExpanded);
	void ToggleHeader(const struct FGameplayTag& CallFunc_SelectedLeftEventTag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void GetIsExpandedCached(bool* IsExpanded);
	void OnInputMethodChanged(enum class ECommonInputType CurrentInputType, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Not_PreBool_ReturnValue);
	class UWidget* BP_GetDesiredFocusTarget();
	void UpdateLabelText(class FText Label);
	void Update2dValue(const struct FVector2D& TwodSlider_Value);
	void Set_SelectedContentValue_1dText(int32 Value, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void UpdateSelectedContentImage(bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_DoesDataTableRowExist_ReturnValue, const struct FPresetEyeSettings& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FCharacterAppearance_Preset& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, const struct FCustomization_ColorSample& CallFunc_GetDataTableRowFromName_OutRow_2, bool CallFunc_GetDataTableRowFromName_ReturnValue_2, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, const struct FLinearColor& K2Node_MakeStruct_LinearColor);
	enum class EHairAssetType HairTypeSwitch(enum class E_CategorySubType Temp_byte_Variable, enum class EHairAssetType Temp_byte_Variable_1, enum class EHairAssetType Temp_byte_Variable_2, enum class EHairAssetType Temp_byte_Variable_3, enum class EHairAssetType Temp_byte_Variable_4, enum class EHairAssetType Temp_byte_Variable_5, enum class EHairAssetType Temp_byte_Variable_6, enum class EHairAssetType Temp_byte_Variable_7, enum class EHairAssetType Temp_byte_Variable_8, enum class EHairAssetType Temp_byte_Variable_9, enum class EHairAssetType K2Node_Select_Default);
	void SetActiveImageInactive();
	void RefreshSelectedContent(bool CallFunc_DoesDataTableRowExist_ReturnValue);
	void RefreshAnimState(enum class EUMGSequencePlayMode Temp_byte_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable_1, bool Temp_bool_Variable, float Temp_real_Variable, bool Temp_bool_Variable_1, float CallFunc_GetAnimationCurrentTime_ReturnValue, enum class EUMGSequencePlayMode K2Node_Select_Default, bool CallFunc_IsAnimationPlaying_ReturnValue, float K2Node_Select_Default_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void RefreshButton(enum class ESlateBrushDrawType Temp_byte_Variable, enum class ESlateBrushDrawType Temp_byte_Variable_1, enum class ESlateBrushDrawType Temp_byte_Variable_2, enum class ESlateBrushDrawType Temp_byte_Variable_3, enum class ESlateBrushDrawType Temp_byte_Variable_4, enum class ESlateBrushDrawType Temp_byte_Variable_5, enum class ESlateBrushDrawType Temp_byte_Variable_6, enum class ESlateBrushDrawType Temp_byte_Variable_7, enum class ESlateBrushDrawType Temp_byte_Variable_8, enum class E_CategorySubType Temp_byte_Variable_9, enum class ESlateBrushDrawType K2Node_Select_Default, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush);
	void Refresh_Open_SelectedStates(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
	void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
	void BndEvt__WBP_CC_SubWidget_Button_CBU_Button_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_CC_SubWidget_Button_CBU_Button_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_CC_SubWidget_Button_CBU_Button_K2Node_ComponentBoundEvent_6_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void ExecuteUbergraph_WBP_CC_SubWidget_Button(int32 EntryPoint, float Temp_real_Variable, float Temp_real_Variable_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool K2Node_Event_IsDesignTime, const struct FGameplayTag& CallFunc_HoverStartEventTag_ReturnValue, const struct FFocusEvent& K2Node_Event_InFocusEvent_1, const struct FFocusEvent& K2Node_Event_InFocusEvent, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_2, bool CallFunc_HasUserFocus_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, bool CallFunc_IsUsingGamepad_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsUsingGamepad_ReturnValue_1, bool CallFunc_IsUsingGamepad_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_1, bool Temp_bool_Variable, float K2Node_Select_Default);
	void OnCategoryButtonExpansionSet__DelegateSignature(bool IsExpanded);
	void CategoryButtonClicked__DelegateSignature();
};

}


