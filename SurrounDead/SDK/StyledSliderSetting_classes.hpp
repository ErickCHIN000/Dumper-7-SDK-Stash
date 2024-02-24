#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1C (0x344 - 0x328)
// WidgetBlueprintGeneratedClass StyledSliderSetting.StyledSliderSetting_C
class UStyledSliderSetting_C : public UNativeSliderSetting
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x328(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UEditableTextBox*                      TextBox;                                           // 0x330(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                       LabelMultiplier;                                   // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        LabelFractionalDigits;                             // 0x340(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UStyledSliderSetting_C* GetDefaultObj();

	void OnSliderValueUpdated(float NormalizedValue, float RawValue);
	void Construct();
	void TextCommitted(class FText& Text, enum class ETextCommit CommitMethod);
	void ExecuteUbergraph_StyledSliderSetting(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_Event_NormalizedValue, float K2Node_Event_RawValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue, class FText K2Node_CustomEvent_Text, enum class ETextCommit K2Node_CustomEvent_CommitMethod, const class FString& CallFunc_Conv_TextToString_ReturnValue, double CallFunc_Conv_StringToDouble_ReturnValue, bool CallFunc_IsNumeric_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, float CallFunc_ClampRawValue_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, float CallFunc_RawValueToNormalized_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, float CallFunc_ClampRawValue_RawValue_ImplicitCast, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast);
};

}


