#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x290 - 0x260)
// WidgetBlueprintGeneratedClass UMG_CropPlot_CultivationRow.UMG_CropPlot_CultivationRow_C
class UUMG_CropPlot_CultivationRow_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                        AvailableFuel;                                     // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Divider;                                           // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          GrowthProgressBar;                                 // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_ItemDisplay_C*                    UMG_ItemDisplay;                                   // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCultivation*                          Cultivation;                                       // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_CropPlot_CultivationRow_C* GetDefaultObj();

	void CalculateMaturityPercentage(float* PercentMature, float ElapsedGrowthTime, enum class EPlantGrowthStates Temp_byte_Variable, const struct FFarmingGrowthStatesRowHandle& Temp_struct_Variable, const struct FFarmingGrowthStatesRowHandle& Temp_struct_Variable_1, const struct FFarmingGrowthStatesRowHandle& Temp_struct_Variable_2, const struct FFarmingGrowthStatesRowHandle& Temp_struct_Variable_3, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FFarmingSeedData& CallFunc_GetFarmingSeedsStruct_FarmingSeeds, enum class EValid CallFunc_GetFarmingSeedsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FFarmingGrowthState& CallFunc_GetFarmingGrowthStatesStruct_FarmingGrowthStates, enum class EValid CallFunc_GetFarmingGrowthStatesStruct_Paths, const struct FFarmingGrowthStatesRowHandle& K2Node_Select_Default, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FFarmingGrowthState& CallFunc_GetFarmingGrowthStatesStruct_FarmingGrowthStates_1, enum class EValid CallFunc_GetFarmingGrowthStatesStruct_Paths_1, bool K2Node_SwitchEnum_CmpSuccess_2, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue);
	void SetupIcon(bool CallFunc_IsValid_ReturnValue, const struct FFarmingSeedData& CallFunc_GetFarmingSeedsStruct_FarmingSeeds, enum class EValid CallFunc_GetFarmingSeedsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemRewards& CallFunc_GetItemRewardsStruct_ItemRewards, enum class EValid CallFunc_GetItemRewardsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FItemRewardEntry& CallFunc_Array_Get_Item, const struct FItemData& CallFunc_GetItemTemplateStruct_ItemTemplate, enum class EValid CallFunc_GetItemTemplateStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_2);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_UMG_CropPlot_CultivationRow(int32 EntryPoint, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_CalculateMaturityPercentage_PercentMature, float CallFunc_FClamp_ReturnValue);
};

}


