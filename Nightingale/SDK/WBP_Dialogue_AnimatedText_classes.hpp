#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x3D8 - 0x348)
// WidgetBlueprintGeneratedClass WBP_Dialogue_AnimatedText.WBP_Dialogue_AnimatedText_C
class UWBP_Dialogue_AnimatedText_C : public UNWXCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonHierarchicalScrollBox*          DialogueScrollBox;                                 // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        Txt_richDialogue;                                  // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        AppendedDialogueIndex;                             // 0x360(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DA6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                AppendedDialogue;                                  // 0x368(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FText                                  TextToAppendTo;                                    // 0x378(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UDialogue*                             InDialogue;                                        // 0x390(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         LineCompletedAnimating;                            // 0x398(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         InterruptLineAnimation;                            // 0x399(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DB4[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CompletedLine;                                     // 0x3A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	struct FSlateColor                           TextColor;                                         // 0x3B0(0x14)(Edit, BlueprintVisible)
	uint8                                        Pad_4DBC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            LineFinishedPrinting;                              // 0x3C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWBP_Dialogue_AnimatedText_C* GetDefaultObj();

	void AppendPlayerResponseToDialogue(const class FString& NewParam, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void FlushCurrentlyAnimatingLine(TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool Temp_bool_Variable, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_EqualEqual_TextText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue_1, class FText CallFunc_Format_ReturnValue_2, class FText K2Node_Select_Default);
	void Construct();
	void AnimateText(class FText Text, double Speed);
	void Destruct();
	void ExecuteUbergraph_WBP_Dialogue_AnimatedText(int32 EntryPoint, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, int32 Temp_int_Variable, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool Temp_bool_Variable_1, class FText CallFunc_Format_ReturnValue, bool Temp_bool_Variable_2, double Temp_real_Variable, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, bool Temp_bool_Variable_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, bool CallFunc_TextIsEmpty_ReturnValue, double Temp_real_Variable_1, class FText K2Node_Select_Default, bool Temp_bool_Variable_4, double Temp_real_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue, double Temp_real_Variable_3, class FText CallFunc_GetText_ReturnValue, class FText K2Node_CustomEvent_Text, double K2Node_CustomEvent_Speed, bool CallFunc_TextIsEmpty_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText K2Node_Select_Default_1, TArray<class FString>& CallFunc_GetCharacterArrayFromStringIncRichTextTags_ReturnValue, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_EqualEqual_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue, double K2Node_Select_Default_2, double K2Node_Select_Default_3, double K2Node_Select_Default_4, double CallFunc_Multiply_DoubleDouble_ReturnValue, float CallFunc_Delay_Duration_ImplicitCast);
	void LineFinishedPrinting__DelegateSignature();
};

}


