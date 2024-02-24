#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x298 - 0x260)
// WidgetBlueprintGeneratedClass UMG_GOAPWorldStats_Entry.UMG_GOAPWorldStats_Entry_C
class UUMG_GOAPWorldStats_Entry_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            Text_Count;                                        // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Name;                                         // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                CharacterBP;                                       // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FAISetupRowHandle                     RowHandle;                                         // 0x280(0x18)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_GOAPWorldStats_Entry_C* GetDefaultObj();

	void UpdateName(bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, bool Temp_bool_Variable_1, class FText Temp_text_Variable, const struct FAISetupRowHandle& CallFunc_MakeLiteralAISetup_ReturnValue, bool CallFunc_EqualEqual_FRowHandleFRowHandle_ReturnValue, const struct FAISetupEnum& CallFunc_RowHandleToStruct_ReturnValue, class FName CallFunc_BreakAISetupEnum_Name, int32 CallFunc_BreakAISetupEnum_Index, const struct FLinearColor& K2Node_Select_Default, class FText CallFunc_Conv_NameToText_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class FText K2Node_Select_Default_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void UpdateCount();
	void Construct();
	void ExecuteUbergraph_UMG_GOAPWorldStats_Entry(int32 EntryPoint, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ESlateVisibility Temp_byte_Variable, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, TArray<class AIcarusNPCGOAPCharacter*>& CallFunc_GetAllActorsOfClass_OutActors, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
};

}


