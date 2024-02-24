#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x11D (0x37D - 0x260)
// WidgetBlueprintGeneratedClass wid_MainMenu_Volume_Option.wid_MainMenu_Volume_Option_C
class UWid_MainMenu_Volume_Option_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UButton*                               DecrementButton;                                   // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                DecrementButtonImage;                              // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                DecrementButtonImageHighlight;                     // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            DescriptionText;                                   // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               IncrementButton;                                   // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                IncrementButtonImage;                              // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                IncrementButtonImageHighlight;                     // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              MainContainer;                                     // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               SelectionButton;                                   // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SelectionImage;                                    // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlider*                               Slider_0;                                          // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ValueText;                                         // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        MaxVal;                                            // 0x2C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MinVal;                                            // 0x2CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Title;                                             // 0x2D0(0x18)(Edit, BlueprintVisible)
	float                                        SliderValue;                                       // 0x2E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_88C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            ValChangedPlus;                                    // 0x2F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            ValChangedMinus;                                   // 0x300(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         IsSelected;                                        // 0x310(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_895[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UTexture2D*                            TexRightH;                                         // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            TexLeftH;                                          // 0x320(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            TexLeft;                                           // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTexture2D*                            TexRight;                                          // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnValueChanged;                                    // 0x338(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            OnMouseCaptureEnd;                                 // 0x348(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                        StepValue;                                         // 0x358(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        EntryIndex;                                        // 0x35C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TScriptInterface<class ISelectableEntryOwnerInterface_C> SelectableEntryOwner;                              // 0x360(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                        SliderSoundDelay;                                  // 0x370(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentValue;                                      // 0x374(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        PValue;                                            // 0x378(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PostSliderEvents;                                  // 0x37C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UWid_MainMenu_Volume_Option_C* GetDefaultObj();

	void GetEntryIndex(int32* EntryIndex);
	void UpdateSize(class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, const struct FVector2D& CallFunc_GetSize_ReturnValue, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1);
	void PlaySliderEffect(float NewValue, float PreviousValue, bool Temp_bool_Variable, class UAkAudioEvent* Temp_object_Variable, class UAkAudioEvent* Temp_object_Variable_1, bool Temp_bool_Variable_1, class UAkAudioEvent* Temp_object_Variable_2, class UAkAudioEvent* Temp_object_Variable_3, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_1, FDelegateProperty_ Temp_delegate_Variable_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, class UAkAudioEvent* K2Node_Select_Default, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class UAkAudioEvent* K2Node_Select_Default_1, int32 CallFunc_PostEvent_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, int32 CallFunc_PostEvent_ReturnValue_1);
	void SetImageState(class UImage* Image, bool IsDown, bool Temp_bool_Variable, float Temp_float_Variable, class UOverlaySlot* K2Node_DynamicCast_AsOverlay_Slot, bool K2Node_DynamicCast_bSuccess, float Temp_float_Variable_1, float K2Node_Select_Default, const struct FMargin& K2Node_MakeStruct_Margin);
	void Init(class FText CallFunc_TextToUpper_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_TrimTrailing_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void GetSelectableEntryOwner(class UPanelWidget* TempParent, TScriptInterface<class ISelectableEntryOwnerInterface_C> K2Node_DynamicCast_AsSelectable_Entry_Owner_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UPanelWidget* CallFunc_GetParent_ReturnValue, class UPanelWidget* CallFunc_GetParent_ReturnValue_1);
	float GetValueWithinMinMax(float CallFunc_GetValue_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue);
	void SetValueWithinMinMax(float Value, float CallFunc_ClampToMinMax_Output, float CallFunc_MapRangeClamped_ReturnValue);
	void ClampToMinMax(float Input, float* Output, float CallFunc_FClamp_ReturnValue);
	void MapSliderValueToMinMax(float* Result, float CallFunc_GetValue_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue);
	void DecrementByStepValue(TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, float CallFunc_MapSliderValueToMinMax_Result, int32 CallFunc_PostEvent_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_ClampToMinMax_Output);
	void IncrementByStepValue(TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, float CallFunc_MapSliderValueToMinMax_Result, int32 CallFunc_PostEvent_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_ClampToMinMax_Output);
	void IntegerWithinMinMaxToSliderValue(int32 Value, float* Result, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue);
	void SliderValueToIntegerWithinMinMax(float Value, int32* Result, float CallFunc_MapRangeClamped_ReturnValue, int32 CallFunc_Round_ReturnValue);
	void SetBoldFont(bool ToSetBold, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo_1, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo_2, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo_3);
	void GetValue();
	void SetValue(float Val, int32 CallFunc_SliderValueToIntegerWithinMinMax_Result, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, float CallFunc_IntegerWithinMinMaxToSliderValue_Result, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1);
	void SetSelected(bool IsSelected, bool PlaySoundEvent, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, enum class ESlateVisibility K2Node_Select_Default, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_1, enum class ESlateVisibility K2Node_Select_Default_2, FDelegateProperty_ Temp_delegate_Variable, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, int32 CallFunc_PostEvent_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__BtnM_K2Node_ComponentBoundEvent_3_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__BtnP_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature();
	void BndEvt__Slider_0_K2Node_ComponentBoundEvent_8_OnMouseCaptureEndEvent__DelegateSignature();
	void BndEvt__Slider_0_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void BndEvt__Button_1_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature();
	void SetSelectableEntryOwner(TScriptInterface<class ISelectableEntryOwnerInterface_C> Owner);
	void Select(bool IsSelected, bool PostSoundEvent);
	void SetEntryIndex(int32 EntryIndex);
	void IncrementValue();
	void DecrementValue();
	void BndEvt__SelectionButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__IncrementButton_K2Node_ComponentBoundEvent_0_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__DecrementButton_K2Node_ComponentBoundEvent_1_OnButtonReleasedEvent__DelegateSignature();
	void BndEvt__Slider_0_K2Node_ComponentBoundEvent_2_OnMouseCaptureBeginEvent__DelegateSignature();
	void IncrementValueRelesed();
	void BlockAuto();
	void DecrementValueReleased();
	void BlockAutoIncrement();
	void BlockAutoDecrement();
	void ExecuteUbergraph_wid_MainMenu_Volume_Option(int32 EntryPoint, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_2, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_3, bool Temp_bool_Has_Been_Initd_Variable_2, bool K2Node_Event_IsDesignTime, float K2Node_ComponentBoundEvent_Value, bool Temp_bool_IsClosed_Variable_1, TScriptInterface<class ISelectableEntryOwnerInterface_C> K2Node_Event_Owner, bool K2Node_Event_IsSelected, bool K2Node_Event_PostSoundEvent, int32 K2Node_Event_EntryIndex, bool Temp_bool_IsClosed_Variable_2, bool Temp_bool_IsClosed_Variable_3, bool Temp_bool_Has_Been_Initd_Variable_3);
	void OnMouseCaptureEnd__DelegateSignature();
	void OnValueChanged__DelegateSignature();
	void ValChangedMinus__DelegateSignature();
	void ValChangedPlus__DelegateSignature();
};

}


