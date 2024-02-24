#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x850 - 0x7D0)
// WidgetBlueprintGeneratedClass WBP_Popup_InvItemSplitter.WBP_Popup_InvItemSplitter_C
class UWBP_Popup_InvItemSplitter_C : public UNWXItemSplitterPopup
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Exit_Confirm;                                      // 0x7D8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                               B_Details;                                         // 0x7E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             CBU_Cancel;                                        // 0x7E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             CBU_Confirm;                                       // 0x7F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               ItemIcon;                                          // 0x7F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USlider*                               Slider;                                            // 0x800(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_MeasurementCounter;                            // 0x808(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_MeasurementTitle;                              // 0x810(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_QuantityCounter;                               // 0x818(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TXT_Title;                                         // 0x820(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  ActionText;                                        // 0x828(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	double                                       SliderPreviousValue;                               // 0x840(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkComponent*                          AkComponent;                                       // 0x848(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_Popup_InvItemSplitter_C* GetDefaultObj();

	void OnValueChangedSFX(double Value, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, FDelegateProperty_ Temp_delegate_Variable, double CallFunc_MapRangeClamped_ReturnValue, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, float CallFunc_RoundFloatToSingleDecimal_ReturnValue, int32 CallFunc_PostAkEvent_ReturnValue, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, class UAkComponent* CallFunc_SpawnAkComponentAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, double CallFunc_Less_DoubleDouble_B_ImplicitCast, double CallFunc_Greater_DoubleDouble_B_ImplicitCast, double CallFunc_MapRangeClamped_InRangeA_ImplicitCast, double CallFunc_MapRangeClamped_InRangeB_ImplicitCast, float CallFunc_RoundFloatToSingleDecimal_ValueToRound_ImplicitCast, double K2Node_VariableSet_SliderPreviousValue_ImplicitCast, double CallFunc_NotEqual_DoubleDouble_A_ImplicitCast);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue_1, bool CallFunc_IsHovered_ReturnValue);
	class UWidget* BP_GetDesiredFocusTarget();
	void InitializeMeasurementTitle(enum class ESplittingUnits Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText K2Node_Select_Default);
	void SetStepSize(bool CallFunc_Greater_IntInt_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, float CallFunc_SetStepSize_InValue_ImplicitCast);
	struct FEventReply OnInputConfirm(const struct FEventReply& CallFunc_Handled_ReturnValue);
	void UpdateMeasurementCounter(int32 LExtractionYield, enum class ESplittingUnits Temp_byte_Variable, class FText CallFunc_Conv_IntToText_ReturnValue, int32 CallFunc_GetEssenceCountYieldForExtraction_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float CallFunc_GetTotalUnits_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const class FString& CallFunc_GetHMSFormattedTime_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, float CallFunc_GetTotalUnits_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class FText K2Node_Select_Default);
	void UpdateAmountCounter(int64 CallFunc_Conv_IntToInt64_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	class UWidgetAnimation* GetCloseAnimation();
	void RefreshDetails();
	void BndEvt__Slider_0_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void BndEvt__WBP_Popup_InvItemSplitter_BU_Confirm_K2Node_ComponentBoundEvent_3_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BndEvt__WBP_Popup_InvItemSplitter_CBU_Cancel_K2Node_ComponentBoundEvent_4_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void BP_OnActivated();
	void BP_OnDeactivated();
	void ExecuteUbergraph_WBP_Popup_InvItemSplitter(int32 EntryPoint, float K2Node_ComponentBoundEvent_Value, double CallFunc_GridSnap_Float_ReturnValue, class UWBP_sw_GridEntryItem_C* CallFunc_Create_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, double CallFunc_GridSnap_Float_GridSize_ImplicitCast, double CallFunc_GridSnap_Float_Location_ImplicitCast, float CallFunc_SetValue_InValue_ImplicitCast);
};

}


