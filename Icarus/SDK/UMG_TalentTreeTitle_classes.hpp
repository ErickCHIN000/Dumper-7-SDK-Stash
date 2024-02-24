#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x2C0 - 0x260)
// WidgetBlueprintGeneratedClass UMG_TalentTreeTitle.UMG_TalentTreeTitle_C
class UUMG_TalentTreeTitle_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                CurrentRankTitle;                                  // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                          Desaturator;                                       // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                NextRank;                                          // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              RankBox;                                           // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_ProgressBar_C*                    RankProgress;                                      // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          RankProgressPreview;                               // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Title;                                             // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTalentTreesRowHandle                 TalentTree;                                        // 0x2A0(0x18)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UTalentModelInterface_Const*           Model;                                             // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_TalentTreeTitle_C* GetDefaultObj();

	void RefreshRankBar(class UTalentModelInterface_Const* Model, float CallFunc_GetCurrent_Current, const struct FTalentTree& CallFunc_GetTalentTreesStruct_TalentTrees, enum class EValid CallFunc_GetTalentTreesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_GetSpentPointsForTree_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, enum class EValid CallFunc_GetTalentRank_Paths, const struct FTalentRank& CallFunc_GetTalentRank_ReturnValue, const struct FTalentRank& CallFunc_GetTalentRanksStruct_TalentRanks, enum class EValid CallFunc_GetTalentRanksStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FTalentRank& CallFunc_GetTalentRanksStruct_TalentRanks_1, enum class EValid CallFunc_GetTalentRanksStruct_Paths_1, float CallFunc_Conv_IntToFloat_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_2, bool CallFunc_IsValidSoftObjectReference_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_2, float K2Node_MathExpression_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_3, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_3, float K2Node_MathExpression_ReturnValue_1);
	void Construct();
	void Talent_Hovered(class UUMG_Talent_Base_C* Talent);
	void Talent_Unhovered();
	void CreateTooltips();
	void ExecuteUbergraph_UMG_TalentTreeTitle(int32 EntryPoint, class FText Temp_text_Variable, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UUMG_UnlockTooltip_C* CallFunc_Create_ReturnValue, class UUMG_UnlockTooltip_C* CallFunc_Create_ReturnValue_1, const struct FTalentTree& CallFunc_GetTalentTreesStruct_TalentTrees, enum class EValid CallFunc_GetTalentTreesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, class UUMG_Talent_Base_C* K2Node_CustomEvent_Talent, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_CanUnlock_Result, enum class ESlateVisibility K2Node_Select_Default, class FText Temp_text_Variable_1);
};

}


