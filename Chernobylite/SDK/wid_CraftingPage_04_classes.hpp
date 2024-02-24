#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x298 - 0x260)
// WidgetBlueprintGeneratedClass wid_CraftingPage_04.wid_CraftingPage_04_C
class UWid_CraftingPage_04_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWid_sw_ScrollingList1_C*              ScrollingList;                                     // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCrafting*                             CraftingInventory;                                 // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class ECraftingCategory                 CraftingTab;                                       // 0x278(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_A70[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UInventoryComponent2*                  ItemsInventory;                                    // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            ChangedSelection;                                  // 0x288(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWid_CraftingPage_04_C* GetDefaultObj();

	void GetCurrentRecipe(class FName* RecipeName, class UWidget* CallFunc_GetSelectedWidget_Widget, class UWid_CraftingMenuEntry_03_C* K2Node_DynamicCast_AsWid_Crafting_Menu_Entry_03, bool K2Node_DynamicCast_bSuccess);
	void GetKnownRecipesByTab(enum class ECraftingCategory Tab, TArray<class FName>* Recipes, const TArray<class FName>& Result, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, TArray<class FName>& CallFunc_GetKnownRecipes_KnownRecipes, TArray<class FName>& CallFunc_GetKnownRecipes_KnownRecipes_1, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, const struct FCraftingRecipe& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_2, class FName CallFunc_Array_Get_Item_1, const struct FCraftingRecipe& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Get_Item_2, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, const struct FCraftingRecipe& CallFunc_GetCraftingRecipe_Recipe, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Array_AddUnique_ReturnValue_1, int32 CallFunc_Array_AddUnique_ReturnValue_2);
	void CreateRecipes(int32 ItemCount, bool CanBeCrafted, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UWid_CraftingMenuEntry_03_C* CallFunc_Create_ReturnValue, enum class ECraftingResult CallFunc_CanCraftFromRecipe_ReturnValue, TArray<class FName>& CallFunc_GetKnownRecipesByTab_Recipes, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FCraftingRecipe& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, enum class ECraftingResult CallFunc_CanCraftFromRecipe_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float CallFunc_Count_ReturnValue, int32 CallFunc_FTrunc_ReturnValue);
	void Construct();
	void Next();
	void Previous();
	void Craft_current();
	void UpdateRecipes();
	void StartCraftingMinigame();
	void PreConstruct(bool IsDesignTime);
	void RecipeDeselected(class UWidget* Widget);
	void RecipeSelected(class UWidget* Widget);
	void BndEvt__ScrollingList_K2Node_ComponentBoundEvent_12_Selected__DelegateSignature(class UWidget* Widget);
	void BndEvt__ScrollingList_K2Node_ComponentBoundEvent_16_Deselected__DelegateSignature(class UWidget* Widget);
	void ExecuteUbergraph_wid_CraftingPage_04(int32 EntryPoint, class APawn* CallFunc_GetPlayerPawn_ReturnValue, class ACh_Hero_00_C* K2Node_DynamicCast_AsCh_Hero_00, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_IsDesignTime, class UWidget* K2Node_CustomEvent_Widget_1, class UWidget* K2Node_CustomEvent_Widget, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class FName CallFunc_GetCurrentRecipe_RecipeName, class FName CallFunc_GetCurrentRecipe_RecipeName_1, enum class ECraftingResult CallFunc_CanCraftFromRecipe_ReturnValue, class FName CallFunc_GetCurrentRecipe_RecipeName_2, enum class ECraftingResult CallFunc_CanCraftFromRecipe_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TArray<class UWidget*>& CallFunc_GetChildren_Children, class UWidget* K2Node_ComponentBoundEvent_Widget_1, class UWidget* CallFunc_Array_Get_Item, class UWid_CraftingMenuEntry_03_C* K2Node_DynamicCast_AsWid_Crafting_Menu_Entry_03, bool K2Node_DynamicCast_bSuccess_1, class UWid_CraftingMenuEntry_03_C* K2Node_DynamicCast_AsWid_Crafting_Menu_Entry_03_1, bool K2Node_DynamicCast_bSuccess_2, enum class ECraftingResult CallFunc_CanCraftFromRecipe_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UWidget* K2Node_ComponentBoundEvent_Widget, class UWid_CraftingMenuEntry_03_C* K2Node_DynamicCast_AsWid_Crafting_Menu_Entry_03_2, bool K2Node_DynamicCast_bSuccess_3, enum class ECraftingResult CallFunc_CanCraftFromRecipe_ReturnValue_3);
	void ChangedSelection__DelegateSignature(class FName NewRecipe, enum class ECraftingResult CanBeCrafted_);
};

}


