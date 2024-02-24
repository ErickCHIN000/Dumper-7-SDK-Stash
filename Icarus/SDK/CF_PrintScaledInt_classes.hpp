#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x318 - 0x30C)
// WidgetBlueprintGeneratedClass CF_PrintScaledInt.CF_PrintScaledInt_C
class UCF_PrintScaledInt_C : public UCF_BaseComboInteger_C
{
public:
	uint8                                        Pad_856[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x310(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UCF_PrintScaledInt_C* GetDefaultObj();

	void Construct();
	void Handle_Execute(class UUserWidget* Widget, int32 Amount);
	void ExecuteUbergraph_CF_PrintScaledInt(int32 EntryPoint, int32 CallFunc_NumRows_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable_1, const struct FScalingRulesEnum& CallFunc_IntToStruct_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class FName CallFunc_BreakScalingRulesEnum_Name, int32 CallFunc_BreakScalingRulesEnum_Index, const class FString& CallFunc_Conv_NameToString_ReturnValue, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, const struct FScalingRulesEnum& CallFunc_IntToStruct_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class FName CallFunc_BreakScalingRulesEnum_Name_1, int32 CallFunc_BreakScalingRulesEnum_Index_1, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, class UUserWidget* K2Node_Event_Widget, int32 K2Node_Event_Amount, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class UStringRow_C* K2Node_DynamicCast_AsString_Row, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_NumRows_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, bool CallFunc_EqualEqual_StrStr_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, int32 CallFunc_GetScaledIntValue_ReturnValue, class UStringRow_C* CallFunc_Create_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue);
};

}


