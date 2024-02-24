#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x378 (0x3B0 - 0x38)
// BlueprintGeneratedClass BP_Perk_Item_Filter.BP_Perk_Item_Filter_C
class UBP_Perk_Item_Filter_C : public UWidgetInventoryEntryFilterStructureConstraints
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x38(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ANWXPlayerController*                  PlayerController;                                  // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UBP_LoadoutComponent_C*                LoadoutComponent;                                  // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FInventoryEntry                       Applying_Item;                                     // 0x50(0x2F0)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FCraftingRecipeReference              PerkRecipe;                                        // 0x340(0x70)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Perk_Item_Filter_C* GetDefaultObj();

	bool ShouldShowEntry(struct FInventoryEntry& Entry, bool CallFunc_CanSlotPerkOnItem_ReturnValue);
	void Initialize();
	void ExecuteUbergraph_BP_Perk_Item_Filter(int32 EntryPoint, TArray<struct FGameplayTag>& CallFunc_GetAllLayerTags_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UNWXCommonWindowWidget* CallFunc_FindWindowInLayers_ReturnValue, class UWBP_ActionSlots_Popup_C* K2Node_DynamicCast_AsWBP_Action_Slots_Popup, bool K2Node_DynamicCast_bSuccess);
};

}


