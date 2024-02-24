#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x310 - 0x2C8)
// WidgetBlueprintGeneratedClass StyledSliderSetting.StyledSliderSetting_C
class UStyledSliderSetting_C : public UNativeSliderSetting
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               ColorControlBorder;                                // 0x2D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                      TextBox;                                           // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        LabelMultiplier;                                   // 0x2E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        LabelFractionalDigits;                             // 0x2E4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         HoverParent;                                       // 0x2E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_860[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          TextColor;                                         // 0x2EC(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ClampValueToFractionalDigits;                      // 0x2FC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         DoFieldOfViewSliderHack;                           // 0x2FD(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_867[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Display_Value;                                     // 0x300(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TempSettingValue;                                  // 0x304(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bLogScaling;                                       // 0x308(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_86F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LogBase;                                           // 0x30C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UStyledSliderSetting_C* GetDefaultObj();

	float Horizontal_to_Vertical_Field_of_View(float InValue, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_DegTan_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_DegAtan_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1);
	float Vertical_to_Horizontal_Field_of_View(float InValue, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_DegTan_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_DegAtan_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1);
	void Clamp_Float_To_Fractional_Digits(float InFloat, int32 Fractional_Digits, float* Clamped_Float, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_Round_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue);
	void OnSliderValueUpdated(float NormalizedValue, float RawValue);
	void Construct();
	void TextCommitted(class FText& Text, enum class ETextCommit CommitMethod);
	void OnHoverColor(bool HoverColor);
	void Update_Field_Of_View_for_New_Aspect_Ratio();
	void ExecuteUbergraph_StyledSliderSetting(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, float CallFunc_Vertical_to_Horizontal_Field_of_View_ReturnValue, float K2Node_Event_NormalizedValue, float K2Node_Event_RawValue, class FText K2Node_CustomEvent_Text, enum class ETextCommit K2Node_CustomEvent_CommitMethod, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_IsNumeric_ReturnValue, float CallFunc_Conv_StringToFloat_ReturnValue, float CallFunc_Log_ReturnValue, bool K2Node_Event_hoverColor, float CallFunc_Clamp_Float_To_Fractional_Digits_Clamped_Float, float CallFunc_RawValueToNormalized_ReturnValue, float CallFunc_GetFloatCVar_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, float CallFunc_Vertical_to_Horizontal_Field_of_View_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue, float CallFunc_Horizontal_to_Vertical_Field_of_View_ReturnValue, float CallFunc_ClampRawValue_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue_1, float CallFunc_RawValueToNormalized_ReturnValue_1, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, class FText CallFunc_Conv_FloatToText_ReturnValue_1);
};

}


