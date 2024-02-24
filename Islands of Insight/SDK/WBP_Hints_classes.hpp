#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x458 - 0x450)
// WidgetBlueprintGeneratedClass WBP_Hints.WBP_Hints_C
class UWBP_Hints_C : public UHintWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x450(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UWBP_Hints_C* GetDefaultObj();

	void BP_SetHintText(class FText& AggregateHintText);
	void ExecuteUbergraph_WBP_Hints(int32 EntryPoint, class FText K2Node_Event_aggregateHintText, class FText CallFunc_MakeLiteralText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
};

}


