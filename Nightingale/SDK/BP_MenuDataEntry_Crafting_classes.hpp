#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x110 - 0x110)
// BlueprintGeneratedClass BP_MenuDataEntry_Crafting.BP_MenuDataEntry_Crafting_C
class UBP_MenuDataEntry_Crafting_C : public UNWXMenuDataEntryCrafting
{
public:

	static class UClass* StaticClass();
	static class UBP_MenuDataEntry_Crafting_C* GetDefaultObj();

	void TogglePinnedState(bool CallFunc_IsPinned_ReturnValue, bool CallFunc_IsUnlocked_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UBP_HUDGoalTrackingComponent_C* CallFunc_Get_HUD_Goal_Tracking_Manager_BP_UIGoalTrackingComponent, const struct FCraftingRecipeReference& CallFunc_GetCraftingRecipeAssetReference_ReturnValue, TScriptInterface<class IBPI_UI_GoalTracking_C> CallFunc_TrackCraftingEntity_self_CastInput);
	bool IsPinned(const struct FGuid& CallFunc_GetID_ReturnValue, class UBP_HUDGoalTrackingComponent_C* CallFunc_Get_HUD_Goal_Tracking_Manager_BP_UIGoalTrackingComponent, const class FString& CallFunc_Conv_GuidToString_ReturnValue, TScriptInterface<class IBPI_UI_GoalTracking_C> K2Node_DynamicCast_AsBPI_UI_Goal_Tracking, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_Conv_StringToName_ReturnValue, bool CallFunc_IsEntityPinned_IsPinned);
	class UWidget* GetTooltipWidget(class UWBP_Tooltip_CraftingEntry_C* CallFunc_Create_ReturnValue);
	bool IsCraftable(class UBP_CraftingCreationComponent_C* CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent, bool CallFunc_IsCraftable_ReturnValue, enum class ECraftingScreenState CallFunc_GetCraftingScreenState_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, const struct FCraftingRecipe& CallFunc_GetCraftingRecipeData_ReturnValue, bool CallFunc_CraftingMenu_AllSlotsSatisfied_bAllMet, TArray<int32>& CallFunc_CraftingMenu_AllSlotsSatisfied_OutUnmetSlots);
	void CalculateMissingSlots(bool* bAllMet, TArray<int32>* OutUnmetSlots, const struct FCraftingRecipe& CallFunc_GetCraftingRecipeData_ReturnValue, bool CallFunc_CraftingMenu_AllSlotsSatisfied_bAllMet, TArray<int32>& CallFunc_CraftingMenu_AllSlotsSatisfied_OutUnmetSlots);
};

}


