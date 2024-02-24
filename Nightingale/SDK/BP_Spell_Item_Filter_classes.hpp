#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x308 (0x340 - 0x38)
// BlueprintGeneratedClass BP_Spell_Item_Filter.BP_Spell_Item_Filter_C
class UBP_Spell_Item_Filter_C : public UWidgetInventoryEntryFilterStructureConstraints
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x38(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ANWXPlayerController*                  PlayerController;                                  // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UBP_LoadoutComponent_C*                LoadoutComponent;                                  // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FInventoryEntry                       SpellItem;                                         // 0x50(0x2F0)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UBP_Spell_Item_Filter_C* GetDefaultObj();

	bool ShouldShowEntry(struct FInventoryEntry& Entry, const TArray<TSoftObjectPtr<class UTechniqueDataAsset>>& LEntrySpellTechniques, bool CallFunc_CanSlotSpellOnItem_ReturnValue, bool CallFunc_CanSlotSpellOnItem_ReturnValue_1, int32 CallFunc_TryGetItemSpellTechniques_ActiveSpellIndex, TArray<TSoftObjectPtr<class UTechniqueDataAsset>>& CallFunc_TryGetItemSpellTechniques_SpellTechniques, enum class EGetResult CallFunc_TryGetItemSpellTechniques_Branches, int32 CallFunc_TryGetItemSpellTechniques_ActiveSpellIndex_1, TArray<TSoftObjectPtr<class UTechniqueDataAsset>>& CallFunc_TryGetItemSpellTechniques_SpellTechniques_1, enum class EGetResult CallFunc_TryGetItemSpellTechniques_Branches_1, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, TSoftObjectPtr<class UTechniqueDataAsset> CallFunc_Array_Get_Item, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void Initialize();
	void ExecuteUbergraph_BP_Spell_Item_Filter(int32 EntryPoint, TArray<struct FGameplayTag>& CallFunc_GetAllLayerTags_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UNWXCommonWindowWidget* CallFunc_FindWindowInLayers_ReturnValue, class UWBP_ActionSlots_Popup_C* K2Node_DynamicCast_AsWBP_Action_Slots_Popup, bool K2Node_DynamicCast_bSuccess);
};

}


