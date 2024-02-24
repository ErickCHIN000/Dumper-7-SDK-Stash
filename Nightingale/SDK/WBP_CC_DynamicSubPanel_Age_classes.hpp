#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x510 - 0x480)
// WidgetBlueprintGeneratedClass WBP_CC_DynamicSubPanel_Age.WBP_CC_DynamicSubPanel_Age_C
class UWBP_CC_DynamicSubPanel_Age_C : public UWBP_CC_DynamicSubPanel__Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x480(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USizeBox*                              SizeBox_0;                                         // 0x488(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URadialSlider*                         Slider_Age;                                        // 0x490(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          SubCategory_Age;                                   // 0x498(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_age;                                           // 0x4A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_age_dob;                                       // 0x4A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_cc_sw_PanelHeader_C*              WBP_cc_sw_PanelHeader;                             // 0x4B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_PanelConfigButtons_C*             WBP_PanelConfigButtons;                            // 0x4B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FName                                  Archetype_Blend;                                   // 0x4C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBodyType                         Body_Type;                                         // 0x4C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D12[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  ArchetypeRow;                                      // 0x4CC(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D1A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       CachedAge;                                         // 0x4D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       SliderMinValue;                                    // 0x4E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       SliderMaxValue;                                    // 0x4E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        PreviousValue;                                     // 0x4F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkComponent*                          AkComponent;                                       // 0x4F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         AudioCooldownActive;                               // 0x500(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1D24[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       AudioCooldownTime;                                 // 0x508(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_CC_DynamicSubPanel_Age_C* GetDefaultObj();

	class UWidget* BP_GetDesiredFocusTarget();
	void AudioCooldown();
	void OnValueChangedSFX(double Value, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, double CallFunc_MapRangeClamped_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int64 CallFunc_Round64_ReturnValue, FDelegateProperty_ Temp_delegate_Variable, bool CallFunc_NotEqual_Int64Int64_ReturnValue, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, int32 CallFunc_PostAkEvent_ReturnValue, class UAkComponent* CallFunc_SpawnAkComponentAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast);
	void CollectPanelValues(TMap<class FString, struct FCharacterCreateTelemetryValuePairs>* OutValues, class FString* OutPanelName, int64 CallFunc_FFloor64_ReturnValue, double CallFunc_GetAgeValue_OutAgeValue, const class FString& CallFunc_Conv_Int64ToString_ReturnValue, int64 CallFunc_FFloor64_ReturnValue_1, const class FString& CallFunc_Conv_Int64ToString_ReturnValue_1, const struct FCharacterCreateTelemetryValuePairs& K2Node_MakeStruct_CharacterCreateTelemetryValuePairs, TMap<class FString, struct FCharacterCreateTelemetryValuePairs> K2Node_MakeMap_Map);
	void CacheStartingPanelValues(double CallFunc_GetAgeValue_OutAgeValue);
	void Get_Age(class FText DateofBirthtext, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, class FText Temp_text_Variable_7, class FText Temp_text_Variable_8, class FText Temp_text_Variable_9, class FText Temp_text_Variable_10, class FText Temp_text_Variable_11, int32 Temp_int_Variable, double CallFunc_GetAgeValue_OutAgeValue, double CallFunc_MapRangeClamped_ReturnValue, double CallFunc_Fraction_ReturnValue, int32 CallFunc_Round_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Round_ReturnValue_1, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText K2Node_Select_Default, class FText CallFunc_Conv_IntToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, float CallFunc_SetValue_InValue_ImplicitCast);
	void Set_Age(class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, class FText Temp_text_Variable_7, class FText Temp_text_Variable_8, class FText Temp_text_Variable_9, class FText Temp_text_Variable_10, class FText Temp_text_Variable_11, int32 Temp_int_Variable, float CallFunc_GetValue_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue, int32 CallFunc_Round_ReturnValue, double CallFunc_Fraction_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, double CallFunc_MapRangeClamped_ReturnValue_1, class FText CallFunc_Conv_IntToText_ReturnValue, int32 CallFunc_Round_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_Conv_IntToText_ReturnValue_1, class FText K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, double CallFunc_SetAgeValueOverride_NewAgeValue_ImplicitCast, double CallFunc_MapRangeClamped_Value_ImplicitCast);
	void GetArchetypeBlendTarget(const struct FDataTableRowHandle& CallFunc_GetSelectedArchetype_SelectedArchetype, const struct FCharacterAppearance_Preset& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, TArray<class FName>& CallFunc_Map_Keys_Keys, class FName CallFunc_Array_Get_Item);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BndEvt__WBP_CC_DynamicSubPanel_Age_RadialSlider_318_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature(float Value);
	void RandomizePanelContent();
	void RefreshPanel();
	void ResetPanelContent();
	void BndEvt__WBP_CC_DynamicSubPanel_Age_WBP_RandomizeButton_K2Node_ComponentBoundEvent_4_OnRandomizeSelected__DelegateSignature();
	void BndEvt__WBP_CC_DynamicSubPanel_Age_WBP_RandomizeButton_K2Node_ComponentBoundEvent_0_OnResetSelected__DelegateSignature();
	void BP_OnActivated();
	void BP_OnDeactivated();
	void ExecuteUbergraph_WBP_CC_DynamicSubPanel_Age(int32 EntryPoint, double CallFunc_BreakVector2D_X, double CallFunc_BreakVector2D_Y, float K2Node_ComponentBoundEvent_Value, double CallFunc_RandomFloatInRange_ReturnValue, bool K2Node_Event_IsDesignTime, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast, double CallFunc_OnValueChangedSFX_Value_ImplicitCast, float CallFunc_SetValue_InValue_ImplicitCast);
};

}


