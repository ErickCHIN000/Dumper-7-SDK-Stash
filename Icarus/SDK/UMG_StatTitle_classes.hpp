#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x31 (0x291 - 0x260)
// WidgetBlueprintGeneratedClass UMG_StatTitle.UMG_StatTitle_C
class UUMG_StatTitle_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            StatValue;                                         // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                TitleIcon;                                         // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TitleText;                                         // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FStatsEnum                            Stat;                                              // 0x280(0x10)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         ShouldShowIcon;                                    // 0x290(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UUMG_StatTitle_C* GetDefaultObj();

	void OnLoaded_912710A14DB31FBA83B4ABB47E06B80D(class UObject* Loaded);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void UpdateStatValue(class AActor* TargetOverride);
	void StatValueOverride(int32 Value);
	void ExecuteUbergraph_UMG_StatTitle(int32 EntryPoint, bool Temp_bool_Variable, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_2, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, class FText Temp_text_Variable, class FText Temp_text_Variable_1, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue, class UObject* Temp_object_Variable, bool Temp_bool_Variable_5, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, class UObject* K2Node_CustomEvent_Loaded, bool CallFunc_IsValid_ReturnValue, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class FText Temp_text_Variable_2, bool Temp_bool_Variable_6, class AActor* Temp_wildcard_Variable, bool CallFunc_IsValid_ReturnValue_2, class UIcarusStatContainer* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool K2Node_Event_IsDesignTime, const struct FStatsRowHandle& CallFunc_StructToRowHandle_ReturnValue, const struct FIcarusStatDescription& CallFunc_GetStatsStruct_Stats, enum class EValid CallFunc_GetStatsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, bool CallFunc_IsValidSoftObjectReference_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, class AActor* K2Node_CustomEvent_TargetOverride, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, bool Temp_bool_Variable_7, int32 CallFunc_GetStat_ReturnValue, class FText K2Node_Select_Default, class FText CallFunc_GetStatTitleBP_TitleDescription, enum class EFunctionOutcome CallFunc_GetStatTitleBP_Outcome, bool K2Node_SwitchEnum_CmpSuccess_1, int32 K2Node_CustomEvent_Value, bool CallFunc_Greater_IntInt_ReturnValue, class FText K2Node_Select_Default_1, const struct FStatsRowHandle& CallFunc_StructToRowHandle_ReturnValue_1, class FText CallFunc_GetStatTitleBP_TitleDescription_1, enum class EFunctionOutcome CallFunc_GetStatTitleBP_Outcome_1, bool K2Node_SwitchEnum_CmpSuccess_2, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Split_LeftS, const class FString& CallFunc_Split_RightS, bool CallFunc_Split_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, class FText K2Node_Select_Default_2, const struct FIcarusStatDescription& CallFunc_GetStatsStruct_Stats_1, enum class EValid CallFunc_GetStatsStruct_Paths_1, bool K2Node_SwitchEnum_CmpSuccess_3, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_1, bool K2Node_DynamicCast_bSuccess_1, const struct FSlateBrush& K2Node_Select_Default_3, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_2, bool CallFunc_IsValid_ReturnValue_5, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue_2, const struct FSlateBrush& K2Node_Select_Default_4, const struct FSlateBrush& K2Node_Select_Default_5, enum class ESlateVisibility K2Node_Select_Default_6, enum class ESlateVisibility K2Node_Select_Default_7);
};

}


