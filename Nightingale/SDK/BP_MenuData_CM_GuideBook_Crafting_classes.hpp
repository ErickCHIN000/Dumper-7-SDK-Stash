#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x168 - 0x168)
// BlueprintGeneratedClass BP_MenuData_CM_GuideBook_Crafting.BP_MenuData_CM_GuideBook_Crafting_C
class UBP_MenuData_CM_GuideBook_Crafting_C : public UNWXMenuDataCategoryManager
{
public:

	static class UClass* StaticClass();
	static class UBP_MenuData_CM_GuideBook_Crafting_C* GetDefaultObj();

	void PostInitialize(class UClass* LPermLockedEntriesFilter, int32 Temp_int_Array_Index_Variable, TArray<struct FCraftingRecipeReference>& CallFunc_GatherAllUnlockableRecipes_OutRecipeReferences, const struct FCraftingRecipeReference& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void OnRecipeSkillsUnlocked(TArray<struct FCraftingRecipeReference>& NewlyUnlockedRecipes, class UNWXMenuDataEntry* MenuDataEntry, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UNWXMenuDataEntryObservedStateTracker* CallFunc_GetStateTracker_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABP_PlayerState_C* CallFunc_GetLocalPlayerState_PlayerState, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, const struct FCraftingRecipeReference& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FGuid& CallFunc_GetID_ReturnValue, class UNWXMenuDataEntry* CallFunc_GetEntryFromID_ReturnValue);
	void CreateAndQuickAddEntry(const struct FCraftingRecipeReference& CraftingRecipeReference, class UNWXMenuDataEntry* CallFunc_CreateEntry_ReturnValue, class UNWXMenuDataEntryCrafting* K2Node_DynamicCast_AsNWXMenu_Data_Entry_Crafting, bool K2Node_DynamicCast_bSuccess);
};

}


