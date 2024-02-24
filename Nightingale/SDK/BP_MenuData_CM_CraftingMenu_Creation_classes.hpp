#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x168 - 0x168)
// BlueprintGeneratedClass BP_MenuData_CM_CraftingMenu_Creation.BP_MenuData_CM_CraftingMenu_Creation_C
class UBP_MenuData_CM_CraftingMenu_Creation_C : public UNWXMenuDataCategoryManager
{
public:

	static class UClass* StaticClass();
	static class UBP_MenuData_CM_CraftingMenu_Creation_C* GetDefaultObj();

	void OnRecipeAdded(TArray<struct FCraftingRecipeReference>& UpdatedCraftingRecipes, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FCraftingRecipeReference& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void CreateAndQuickAddEntry(const struct FCraftingRecipeReference& CraftingRecipeReference, class UNWXMenuDataEntry* CallFunc_CreateEntry_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UNWXMenuDataEntryCrafting* K2Node_DynamicCast_AsNWXMenu_Data_Entry_Crafting, bool K2Node_DynamicCast_bSuccess);
	void PostInitialize(class UBP_CraftingCreationComponent_C* CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UBP_CraftingCreationComponent_C* CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent_1, bool CallFunc_IsValid_ReturnValue, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState, bool CallFunc_IsValid_ReturnValue_1);
};

}


