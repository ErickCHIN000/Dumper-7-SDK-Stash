#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x3C0 - 0x398)
// WidgetBlueprintGeneratedClass WBP_Tooltip_Health.WBP_Tooltip_Health_C
class UWBP_Tooltip_Health_C : public UNWXCoreStatCounterWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x398(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            Txt_BaseHealth;                                    // 0x3A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_health_value;                                  // 0x3A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_regenRate;                                     // 0x3B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNWXAttributeSet*                      Attribute_Set;                                     // 0x3B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_Tooltip_Health_C* GetDefaultObj();

	void InitializeDesignerPreview();
	void UpdateHealthCounters(bool Temp_bool_Variable, bool Temp_bool_Variable_1, class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool Temp_bool_Variable_2, class FText Temp_text_Variable_2, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetValue_ReturnValue, int32 CallFunc_FCeil_ReturnValue, int64 CallFunc_Conv_IntToInt64_ReturnValue, bool Temp_bool_Variable_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, int32 CallFunc_Round_ReturnValue, int32 CallFunc_Round_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, int32 CallFunc_Round_ReturnValue_2, int32 K2Node_Select_Default, class FText K2Node_Select_Default_1, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, int32 K2Node_Select_Default_2, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, int32 CallFunc_FCeil_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, int64 CallFunc_Conv_IntToInt64_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, class FText K2Node_Select_Default_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, class FText CallFunc_Format_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, double CallFunc_FCeil_A_ImplicitCast, double CallFunc_Greater_DoubleDouble_B_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast_1, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1, double CallFunc_Round_A_ImplicitCast, double CallFunc_Greater_DoubleDouble_B_ImplicitCast_1, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast_1, double CallFunc_FCeil_A_ImplicitCast_1);
	void FormatRegenRate(bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast, double CallFunc_Conv_DoubleToText_Value_ImplicitCast);
	void OnMaxHealthChanged(float Delta);
	void Refresh(bool CallFunc_IsValid_ReturnValue);
	void BP_HandleAttributeChanged(float NewValue, float Delta);
	void Initialize(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class ANWXCharacter* K2Node_DynamicCast_AsNWXCharacter, bool K2Node_DynamicCast_bSuccess);
	void Construct();
	void Destruct();
	void ExecuteUbergraph_WBP_Tooltip_Health(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
};

}


