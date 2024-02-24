#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x528 - 0x4C8)
// WidgetBlueprintGeneratedClass WBP_DB_Progression_Crafting.WBP_DB_Progression_Crafting_C
class UWBP_DB_Progression_Crafting_C : public UWBP_NonShippableWindow_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4C8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                        HB_ProgressionLists;                               // 0x4D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<int32, struct FResourceDistributionList> Out_Resource_Distribution;                         // 0x4D8(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UWBP_DB_Progression_Crafting_C* GetDefaultObj();

	void Construct();
	void ExecuteUbergraph_WBP_DB_Progression_Crafting(int32 EntryPoint, int32 Temp_int_Variable, const struct FResourceDistributionList& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class ANWXPlayerController* K2Node_DynamicCast_AsNWXPlayer_Controller, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class UWBP_DB_Progression_List_C* CallFunc_Create_ReturnValue, class UNWXCheatManager* K2Node_DynamicCast_AsNWXCheat_Manager, bool K2Node_DynamicCast_bSuccess_1, class UCraftingCheats* CallFunc_GetCraftingCheatManager_ReturnValue, TMap<int32, struct FResourceDistributionList> CallFunc_GetResourceDistributionForCrafting_OutResourceDistribution, class UPanelSlot* CallFunc_AddChild_ReturnValue);
};

}


