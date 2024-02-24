#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2C (0x28C - 0x260)
// WidgetBlueprintGeneratedClass UMG_StatTitleSmall.UMG_StatTitleSmall_C
class UUMG_StatTitleSmall_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            StatValue;                                         // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                TitleIcon;                                         // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FStatsEnum                            Stat;                                              // 0x278(0x10)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        CurrentValue;                                      // 0x288(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_StatTitleSmall_C* GetDefaultObj();

	void OnLoaded_46C6B22141961101A41777A9059B59B1(class UObject* Loaded);
	void UpdateStatValue();
	void StatValueOverride(int32 Value);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_UMG_StatTitleSmall(int32 EntryPoint, class UObject* Temp_object_Variable, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, bool Temp_bool_Variable, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue, class UObject* K2Node_CustomEvent_Loaded, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool Temp_bool_Variable_1, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UIcarusStatContainer* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, int32 CallFunc_GetStat_ReturnValue, class FText CallFunc_GetStatTitleBP_TitleDescription, enum class EFunctionOutcome CallFunc_GetStatTitleBP_Outcome, bool K2Node_SwitchEnum_CmpSuccess, int32 K2Node_CustomEvent_Value, bool Temp_bool_Variable_2, class FText CallFunc_GetStatTitleBP_TitleDescription_1, enum class EFunctionOutcome CallFunc_GetStatTitleBP_Outcome_1, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FSlateBrush& K2Node_Select_Default, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, const struct FStatsRowHandle& CallFunc_StructToRowHandle_ReturnValue, const struct FIcarusStatDescription& CallFunc_GetStatsStruct_Stats, enum class EValid CallFunc_GetStatsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_2, bool CallFunc_IsValidSoftObjectReference_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FSlateBrush& K2Node_Select_Default_1, const struct FIcarusStatDescription& CallFunc_GetStatsStruct_Stats_1, enum class EValid CallFunc_GetStatsStruct_Paths_1, bool K2Node_SwitchEnum_CmpSuccess_3, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_4, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_2, const struct FSlateBrush& K2Node_Select_Default_2);
};

}


