#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF4 (0x434 - 0x340)
// WidgetBlueprintGeneratedClass WBP_cc_sw_MakeupPicker.WBP_cc_sw_MakeupPicker_C
class UWBP_cc_sw_MakeupPicker_C : public UNWXUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_button_base_C*                    BU_Cancel;                                         // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_button_base_C*                    BU_Confirm;                                        // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CC_Appearance_CategoryButton_C*   ColorPicker;                                       // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               ColorPickerPanel;                                  // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlider*                               Slider_Intensity;                                  // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlider*                               Slider_Style;                                      // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          StylePicker;                                       // 0x378(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_Label_PickerName;                              // 0x380(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_Label_Style;                                   // 0x388(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                   Color_ID;                                          // 0x390(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            MakeupUpdate;                                      // 0x3A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FDataTableRowHandle                   Color_ID_Previous;                                 // 0x3B0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                            DataTable_Masks;                                   // 0x3C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UDataTable*                            DataTable_Colors;                                  // 0x3C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         EnableStylePicker;                                 // 0x3D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D46[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  LabelText_Default;                                 // 0x3D8(0x18)(Edit, BlueprintVisible)
	FMulticastInlineDelegateProperty_            ClearSetting;                                      // 0x3F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	double                                       SliderMinValue;                                    // 0x400(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       SliderMaxValue;                                    // 0x408(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        PreviousValue;                                     // 0x410(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkComponent*                          AkComponent;                                       // 0x418(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         AudioCooldownActive;                               // 0x420(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3D53[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       AudioCooldownTime;                                 // 0x428(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Wrap_Size;                                         // 0x430(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_cc_sw_MakeupPicker_C* GetDefaultObj();

	void SetupBasicFormatting(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	void AudioCooldown();
	void OnValueChangedSFX(double Value, bool CallFunc_IsValid_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int64 CallFunc_Round64_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_NotEqual_Int64Int64_ReturnValue, FDelegateProperty_ Temp_delegate_Variable, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, class UAkComponent* CallFunc_SpawnAkComponentAtLocation_ReturnValue, int32 CallFunc_PostAkEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast);
	void SetValues(const struct FDataTableRowHandle& NewColor, const struct FDataTableRowHandle& NewMask, double NewAlpha, TArray<struct FDataTableRowHandle>& CallFunc_GetDataTableRowHandles_RowHandles, int32 CallFunc_Array_Find_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, float CallFunc_SetValue_InValue_ImplicitCast, float CallFunc_SetValue_InValue_ImplicitCast_1);
	void RefreshData(float CallFunc_GetValue_ReturnValue, int32 CallFunc_Round_ReturnValue, TArray<struct FDataTableRowHandle>& CallFunc_GetDataTableRowHandles_RowHandles, const struct FDataTableRowHandle& CallFunc_Array_Get_Item, bool CallFunc_DoesDataTableRowExist_ReturnValue, const struct FCustomization_Mask& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue, double CallFunc_Round_A_ImplicitCast);
	void RefreshColorID(const struct FDataTableRowHandle& Color_ID);
	void BndEvt__WBP_cc_sw_MakeupPicker_WBP_button_base_2_K2Node_ComponentBoundEvent_6_BU_Click__DelegateSignature();
	void BndEvt__WBP_cc_sw_MakeupPicker_WBP_button_base_72_K2Node_ComponentBoundEvent_5_BU_Click__DelegateSignature();
	void BndEvt__WBP_cc_sw_MakeupPicker_Slider_Style_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void BndEvt__WBP_cc_sw_MakeupPicker_ColorPicker_K2Node_ComponentBoundEvent_1_CC_ColorSwatch_Selected__DelegateSignature(const struct FDataTableRowHandle& ColorID, int32 GridIndex, bool ColorSwatch_, bool RgbSwatch___Disable_tints);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void BndEvt__WBP_cc_sw_MakeupPicker_Slider_Intensity_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void ExecuteUbergraph_WBP_cc_sw_MakeupPicker(int32 EntryPoint, float K2Node_ComponentBoundEvent_Value_1, const struct FDataTableRowHandle& K2Node_ComponentBoundEvent_ColorID, int32 K2Node_ComponentBoundEvent_GridIndex, bool K2Node_ComponentBoundEvent_ColorSwatch_, bool K2Node_ComponentBoundEvent_RgbSwatch___Disable_tints, TArray<struct FDataTableRowHandle>& CallFunc_GetDataTableRowHandles_RowHandles, int32 CallFunc_Array_Length_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, bool K2Node_Event_IsDesignTime, float K2Node_ComponentBoundEvent_Value, float CallFunc_SetMaxValue_InValue_ImplicitCast, double CallFunc_OnValueChangedSFX_Value_ImplicitCast);
	void ClearSetting__DelegateSignature();
	void MakeupUpdate__DelegateSignature();
};

}


