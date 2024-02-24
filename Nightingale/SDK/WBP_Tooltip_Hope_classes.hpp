#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x3C8 - 0x398)
// WidgetBlueprintGeneratedClass WBP_Tooltip_Hope.WBP_Tooltip_Hope_C
class UWBP_Tooltip_Hope_C : public UNWXCoreStatCounterWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x398(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class URichTextBlock*                        Txt_description_MaxHope;                           // 0x3A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Txt_Value;                                         // 0x3A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        Loadout_Score;                                     // 0x3B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Estate_Score;                                      // 0x3B4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Deeds_Score;                                       // 0x3B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4C68[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UNWXAttributeSet*                      Attribute_Set;                                     // 0x3C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_Tooltip_Hope_C* GetDefaultObj();

	void InitializeDesignerPreview(TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void GetAttributeValue(const struct FGameplayAttribute& GameplayAttribute, double* Value, class APawn* LPawn, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, bool CallFunc_IsValid_ReturnValue, double K2Node_FunctionResult_Value_ImplicitCast);
	void BP_HandleAttributeChanged(float NewValue, float Delta);
	void Refresh(double LMaxHope, float CallFunc_GetValue_ReturnValue, double CallFunc_GetAttributeValue_Value, int32 CallFunc_FCeil_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, double CallFunc_GetAttributeValue_Value_1, double CallFunc_GetAttributeValue_Value_2, double CallFunc_FMax_ReturnValue, int32 CallFunc_FCeil_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue_1, int64 CallFunc_Conv_IntToInt64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int64 CallFunc_Conv_IntToInt64_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, int64 CallFunc_Conv_IntToInt64_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, double CallFunc_FCeil_A_ImplicitCast);
	void Construct();
	void ExecuteUbergraph_WBP_Tooltip_Hope(int32 EntryPoint);
};

}


