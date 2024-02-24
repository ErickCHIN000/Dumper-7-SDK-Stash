#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Crafting_RecipeMold.WBP_Crafting_RecipeMold_C
// (None)

class UClass* UWBP_Crafting_RecipeMold_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Crafting_RecipeMold_C");

	return Clss;
}


// WBP_Crafting_RecipeMold_C WBP_Crafting_RecipeMold.Default__WBP_Crafting_RecipeMold_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Crafting_RecipeMold_C* UWBP_Crafting_RecipeMold_C::GetDefaultObj()
{
	static class UWBP_Crafting_RecipeMold_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Crafting_RecipeMold_C*>(UWBP_Crafting_RecipeMold_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Crafting_RecipeMold.WBP_Crafting_RecipeMold_C.IsIngredientListOpen
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               IsOpen                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Crafting_RecipeMold_C::IsIngredientListOpen(bool* IsOpen, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Crafting_RecipeMold_C", "IsIngredientListOpen");

	Params::UWBP_Crafting_RecipeMold_C_IsIngredientListOpen_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsOpen != nullptr)
		*IsOpen = Parms.IsOpen;

}


// Function WBP_Crafting_RecipeMold.WBP_Crafting_RecipeMold_C.onMoldSlotHovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             DisplayedInventoryItem                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FInventoryEntry             FilterInventoryItem                                              (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               IsHovering                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_ItemTooltip_C*          CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UOverlaySlot*                CallFunc_AddChildToOverlay_ReturnValue                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Crafting_RecipeMold_C::OnMoldSlotHovered(const struct FInventoryEntry& DisplayedInventoryItem, const struct FInventoryEntry& FilterInventoryItem, bool IsHovering, class UWBP_ItemTooltip_C* CallFunc_Create_ReturnValue, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Crafting_RecipeMold_C", "onMoldSlotHovered");

	Params::UWBP_Crafting_RecipeMold_C_OnMoldSlotHovered_Params Parms{};

	Parms.DisplayedInventoryItem = DisplayedInventoryItem;
	Parms.FilterInventoryItem = FilterInventoryItem;
	Parms.IsHovering = IsHovering;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChildToOverlay_ReturnValue = CallFunc_AddChildToOverlay_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Crafting_RecipeMold.WBP_Crafting_RecipeMold_C.OnIngredientListEntryHovered
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             InventoryEntry                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               IsHovered                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     LSlottedIngredients                                              (Edit, BlueprintVisible)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumberOfRecipeSlotsFilled_SlotsFilled                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumberOfRecipeSlotsFilled_RecipeSlots                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGetResult              CallFunc_GetNumberOfRecipeSlotsFilled_Branches                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGetResult              CallFunc_TryGenerateCraftingPreview_Branches                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     CallFunc_TryGenerateCraftingPreview_ReturnValue                  (ReferenceParm)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Crafting_RecipeMold_C::OnIngredientListEntryHovered(const struct FInventoryEntry& InventoryEntry, bool IsHovered, const TArray<struct FInventoryEntry>& LSlottedIngredients, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, int32 CallFunc_GetNumberOfRecipeSlotsFilled_SlotsFilled, int32 CallFunc_GetNumberOfRecipeSlotsFilled_RecipeSlots, enum class EGetResult CallFunc_GetNumberOfRecipeSlotsFilled_Branches, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_GreaterEqual_IntInt_ReturnValue, enum class EGetResult CallFunc_TryGenerateCraftingPreview_Branches, TArray<struct FInventoryEntry>& CallFunc_TryGenerateCraftingPreview_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FInventoryEntry& CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Crafting_RecipeMold_C", "OnIngredientListEntryHovered");

	Params::UWBP_Crafting_RecipeMold_C_OnIngredientListEntryHovered_Params Parms{};

	Parms.InventoryEntry = InventoryEntry;
	Parms.IsHovered = IsHovered;
	Parms.LSlottedIngredients = LSlottedIngredients;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_GetNumberOfRecipeSlotsFilled_SlotsFilled = CallFunc_GetNumberOfRecipeSlotsFilled_SlotsFilled;
	Parms.CallFunc_GetNumberOfRecipeSlotsFilled_RecipeSlots = CallFunc_GetNumberOfRecipeSlotsFilled_RecipeSlots;
	Parms.CallFunc_GetNumberOfRecipeSlotsFilled_Branches = CallFunc_GetNumberOfRecipeSlotsFilled_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_TryGenerateCraftingPreview_Branches = CallFunc_TryGenerateCraftingPreview_Branches;
	Parms.CallFunc_TryGenerateCraftingPreview_ReturnValue = CallFunc_TryGenerateCraftingPreview_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Crafting_RecipeMold.WBP_Crafting_RecipeMold_C.UpdateConstraintSatisfiedWidgets
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<int32>                      LUnmetSlots                                                      (Edit, BlueprintVisible)
// class UBP_MenuDataEntry_Crafting_C*LMenuDataEnty                                                    (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCraftingRecipe             CallFunc_GetCraftingRecipeData_ReturnValue                       (ContainsInstancedReference)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCraftingRecipe             CallFunc_GetCraftingRecipeData_ReturnValue_1                     (ContainsInstancedReference)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Crafting_RecipeMoldSlot_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Crafting_RecipeMoldSlot_C*CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_MenuDataEntry_Crafting_C*K2Node_DynamicCast_AsBP_Menu_Data_Entry_Crafting                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CalculateMissingSlots_bAllMet                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      CallFunc_CalculateMissingSlots_OutUnmetSlots                     (ReferenceParm)

void UWBP_Crafting_RecipeMold_C::UpdateConstraintSatisfiedWidgets(const TArray<int32>& LUnmetSlots, class UBP_MenuDataEntry_Crafting_C* LMenuDataEnty, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_Array_Contains_ReturnValue, const struct FCraftingRecipe& CallFunc_GetCraftingRecipeData_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, const struct FCraftingRecipe& CallFunc_GetCraftingRecipeData_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_Crafting_RecipeMoldSlot_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, class UWBP_Crafting_RecipeMoldSlot_C* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, class UBP_MenuDataEntry_Crafting_C* K2Node_DynamicCast_AsBP_Menu_Data_Entry_Crafting, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CalculateMissingSlots_bAllMet, TArray<int32>& CallFunc_CalculateMissingSlots_OutUnmetSlots)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Crafting_RecipeMold_C", "UpdateConstraintSatisfiedWidgets");

	Params::UWBP_Crafting_RecipeMold_C_UpdateConstraintSatisfiedWidgets_Params Parms{};

	Parms.LUnmetSlots = LUnmetSlots;
	Parms.LMenuDataEnty = LMenuDataEnty;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_GetCraftingRecipeData_ReturnValue = CallFunc_GetCraftingRecipeData_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.CallFunc_GetCraftingRecipeData_ReturnValue_1 = CallFunc_GetCraftingRecipeData_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBP_Menu_Data_Entry_Crafting = K2Node_DynamicCast_AsBP_Menu_Data_Entry_Crafting;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_CalculateMissingSlots_bAllMet = CallFunc_CalculateMissingSlots_bAllMet;
	Parms.CallFunc_CalculateMissingSlots_OutUnmetSlots = CallFunc_CalculateMissingSlots_OutUnmetSlots;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Crafting_RecipeMold.WBP_Crafting_RecipeMold_C.SetDetailSwitcher
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bShow                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CraftingCreationComponent_C*CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class ECraftingScreenState    CallFunc_GetCraftingScreenState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Crafting_RecipeMold_C::SetDetailSwitcher(bool bShow, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UBP_CraftingCreationComponent_C* CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent, enum class ECraftingScreenState CallFunc_GetCraftingScreenState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Crafting_RecipeMold_C", "SetDetailSwitcher");

	Params::UWBP_Crafting_RecipeMold_C_SetDetailSwitcher_Params Parms{};

	Parms.bShow = bShow;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent = CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent;
	Parms.CallFunc_GetCraftingScreenState_ReturnValue = CallFunc_GetCraftingScreenState_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Crafting_RecipeMold.WBP_Crafting_RecipeMold_C.ValidateUpgradeSlots
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SlotIndexRestored                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentSlotIndex                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_LastIndex_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Crafting_RecipeMoldSlot_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_GetDisplayedIngredient_Ingredient                       (None)
// bool                               CallFunc_CompareItemCharacteristics_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Crafting_RecipeMold_C::ValidateUpgradeSlots(int32 SlotIndexRestored, int32 CurrentSlotIndex, int32 CallFunc_Array_LastIndex_ReturnValue, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UWBP_Crafting_RecipeMoldSlot_C* CallFunc_Array_Get_Item, const struct FInventoryEntry& CallFunc_GetDisplayedIngredient_Ingredient, bool CallFunc_CompareItemCharacteristics_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Crafting_RecipeMold_C", "ValidateUpgradeSlots");

	Params::UWBP_Crafting_RecipeMold_C_ValidateUpgradeSlots_Params Parms{};

	Parms.SlotIndexRestored = SlotIndexRestored;
	Parms.CurrentSlotIndex = CurrentSlotIndex;
	Parms.CallFunc_Array_LastIndex_ReturnValue = CallFunc_Array_LastIndex_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetDisplayedIngredient_Ingredient = CallFunc_GetDisplayedIngredient_Ingredient;
	Parms.CallFunc_CompareItemCharacteristics_ReturnValue = CallFunc_CompareItemCharacteristics_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Crafting_RecipeMold.WBP_Crafting_RecipeMold_C.Update Preview Without Comparison
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumberOfRecipeSlotsFilled_SlotsFilled                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumberOfRecipeSlotsFilled_RecipeSlots                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGetResult              CallFunc_GetNumberOfRecipeSlotsFilled_Branches                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGetResult              CallFunc_TryGenerateCraftingPreview_Branches                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     CallFunc_TryGenerateCraftingPreview_ReturnValue                  (ReferenceParm)
// struct FInventoryEntry             CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Crafting_RecipeMold_C::Update_Preview_Without_Comparison(class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, int32 CallFunc_GetNumberOfRecipeSlotsFilled_SlotsFilled, int32 CallFunc_GetNumberOfRecipeSlotsFilled_RecipeSlots, enum class EGetResult CallFunc_GetNumberOfRecipeSlotsFilled_Branches, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, enum class EGetResult CallFunc_TryGenerateCraftingPreview_Branches, TArray<struct FInventoryEntry>& CallFunc_TryGenerateCraftingPreview_ReturnValue, const struct FInventoryEntry& CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Crafting_RecipeMold_C", "Update Preview Without Comparison");

	Params::UWBP_Crafting_RecipeMold_C_Update_Preview_Without_Comparison_Params Parms{};

	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_GetNumberOfRecipeSlotsFilled_SlotsFilled = CallFunc_GetNumberOfRecipeSlotsFilled_SlotsFilled;
	Parms.CallFunc_GetNumberOfRecipeSlotsFilled_RecipeSlots = CallFunc_GetNumberOfRecipeSlotsFilled_RecipeSlots;
	Parms.CallFunc_GetNumberOfRecipeSlotsFilled_Branches = CallFunc_GetNumberOfRecipeSlotsFilled_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_TryGenerateCraftingPreview_Branches = CallFunc_TryGenerateCraftingPreview_Branches;
	Parms.CallFunc_TryGenerateCraftingPreview_ReturnValue = CallFunc_TryGenerateCraftingPreview_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Crafting_RecipeMold.WBP_Crafting_RecipeMold_C.UpdateDetails
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             Entry                                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Compare_Previous                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     CallFunc_GetDisplayedIngredients_DisplayedIngredients            (ReferenceParm)
// class UBP_CraftingCreationComponent_C*CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class ECraftingScreenState    CallFunc_GetCraftingScreenState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Crafting_RecipeMold_C::UpdateDetails(const struct FInventoryEntry& Entry, bool Compare_Previous, TArray<struct FInventoryEntry>& CallFunc_GetDisplayedIngredients_DisplayedIngredients, class UBP_CraftingCreationComponent_C* CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent, enum class ECraftingScreenState CallFunc_GetCraftingScreenState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Crafting_RecipeMold_C", "UpdateDetails");

	Params::UWBP_Crafting_RecipeMold_C_UpdateDetails_Params Parms{};

	Parms.Entry = Entry;
	Parms.Compare_Previous = Compare_Previous;
	Parms.CallFunc_GetDisplayedIngredients_DisplayedIngredients = CallFunc_GetDisplayedIngredients_DisplayedIngredients;
	Parms.CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent = CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent;
	Parms.CallFunc_GetCraftingScreenState_ReturnValue = CallFunc_GetCraftingScreenState_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Crafting_RecipeMold.WBP_Crafting_RecipeMold_C.On Screen State Updated
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECraftingScreenState    NewScreenState                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Crafting_RecipeMold_C::On_Screen_State_Updated(enum class ECraftingScreenState NewScreenState, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Crafting_RecipeMold_C", "On Screen State Updated");

	Params::UWBP_Crafting_RecipeMold_C_On_Screen_State_Updated_Params Parms{};

	Parms.NewScreenState = NewScreenState;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Crafting_RecipeMold.WBP_Crafting_RecipeMold_C.OnMoldAnimationFinished
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsInAnySelectionState_IsInAnySelectionState             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Crafting_RecipeMold_C::OnMoldAnimationFinished(bool CallFunc_IsInAnySelectionState_IsInAnySelectionState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Crafting_RecipeMold_C", "OnMoldAnimationFinished");

	Params::UWBP_Crafting_RecipeMold_C_OnMoldAnimationFinished_Params Parms{};

	Parms.CallFunc_IsInAnySelectionState_IsInAnySelectionState = CallFunc_IsInAnySelectionState_IsInAnySelectionState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Crafting_RecipeMold.WBP_Crafting_RecipeMold_C.InitializeDefaultSlotIndex
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Crafting_RecipeMoldSlot_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsVisible_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CraftingCreationComponent_C*CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECraftingScreenState    CallFunc_GetCraftingScreenState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Crafting_RecipeMold_C::InitializeDefaultSlotIndex(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWBP_Crafting_RecipeMoldSlot_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, class UBP_CraftingCreationComponent_C* CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent, bool CallFunc_BooleanAND_ReturnValue, enum class ECraftingScreenState CallFunc_GetCraftingScreenState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Crafting_RecipeMold_C", "InitializeDefaultSlotIndex");

	Params::UWBP_Crafting_RecipeMold_C_InitializeDefaultSlotIndex_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsVisible_ReturnValue = CallFunc_IsVisible_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetVisibility_ReturnValue = CallFunc_GetVisibility_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent = CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetCraftingScreenState_ReturnValue = CallFunc_GetCraftingScreenState_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Crafting_RecipeMold.WBP_Crafting_RecipeMold_C.OnIngredientListClosed
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetDefaultFocusWidget_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumberOfRecipeSlotsFilled_SlotsFilled                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumberOfRecipeSlotsFilled_RecipeSlots                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGetResult              CallFunc_GetNumberOfRecipeSlotsFilled_Branches                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Crafting_RecipeMoldSlot_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Crafting_RecipeMold_C::OnIngredientListClosed(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UWidget* CallFunc_GetDefaultFocusWidget_ReturnValue, int32 CallFunc_GetNumberOfRecipeSlotsFilled_SlotsFilled, int32 CallFunc_GetNumberOfRecipeSlotsFilled_RecipeSlots, enum class EGetResult CallFunc_GetNumberOfRecipeSlotsFilled_Branches, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UWBP_Crafting_RecipeMoldSlot_C* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Crafting_RecipeMold_C", "OnIngredientListClosed");

	Params::UWBP_Crafting_RecipeMold_C_OnIngredientListClosed_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetDefaultFocusWidget_ReturnValue = CallFunc_GetDefaultFocusWidget_ReturnValue;
	Parms.CallFunc_GetNumberOfRecipeSlotsFilled_SlotsFilled = CallFunc_GetNumberOfRecipeSlotsFilled_SlotsFilled;
	Parms.CallFunc_GetNumberOfRecipeSlotsFilled_RecipeSlots = CallFunc_GetNumberOfRecipeSlotsFilled_RecipeSlots;
	Parms.CallFunc_GetNumberOfRecipeSlotsFilled_Branches = CallFunc_GetNumberOfRecipeSlotsFilled_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Crafting_RecipeMold.WBP_Crafting_RecipeMold_C.UnbindFromIngredientListEvents
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Crafting_RecipeMold_C::UnbindFromIngredientListEvents(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Crafting_RecipeMold_C", "UnbindFromIngredientListEvents");

	Params::UWBP_Crafting_RecipeMold_C_UnbindFromIngredientListEvents_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Crafting_RecipeMold.WBP_Crafting_RecipeMold_C.OnIngredientFocusReceived
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             InventoryEntry                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Crafting_RecipeMold_C::OnIngredientFocusReceived(const struct FInventoryEntry& InventoryEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Crafting_RecipeMold_C", "OnIngredientFocusReceived");

	Params::UWBP_Crafting_RecipeMold_C_OnIngredientFocusReceived_Params Parms{};

	Parms.InventoryEntry = InventoryEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Crafting_RecipeMold.WBP_Crafting_RecipeMold_C.OnIngredientListEntrySelected
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             InventoryEntry                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Crafting_RecipeMold_C::OnIngredientListEntrySelected(const struct FInventoryEntry& InventoryEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Crafting_RecipeMold_C", "OnIngredientListEntrySelected");

	Params::UWBP_Crafting_RecipeMold_C_OnIngredientListEntrySelected_Params Parms{};

	Parms.InventoryEntry = InventoryEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Crafting_RecipeMold.WBP_Crafting_RecipeMold_C.IsItemImprovementSlot
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              Slot                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsImprovementSlot                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CraftingCreationComponent_C*CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class ECraftingScreenState    CallFunc_GetCraftingScreenState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Crafting_RecipeMold_C::IsItemImprovementSlot(int32 Slot, bool* IsImprovementSlot, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UBP_CraftingCreationComponent_C* CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent, enum class ECraftingScreenState CallFunc_GetCraftingScreenState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Crafting_RecipeMold_C", "IsItemImprovementSlot");

	Params::UWBP_Crafting_RecipeMold_C_IsItemImprovementSlot_Params Parms{};

	Parms.Slot = Slot;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent = CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent;
	Parms.CallFunc_GetCraftingScreenState_ReturnValue = CallFunc_GetCraftingScreenState_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (IsImprovementSlot != nullptr)
		*IsImprovementSlot = Parms.IsImprovementSlot;

}


// Function WBP_Crafting_RecipeMold.WBP_Crafting_RecipeMold_C.OnItemAddedOrRemoved
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IItemContainer>Source                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FInventoryEntry             Item                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              Quantity                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CraftingCreationComponent_C*CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class ECraftingScreenState    CallFunc_GetCraftingScreenState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Crafting_RecipeMold_C::OnItemAddedOrRemoved(TScriptInterface<class IItemContainer>& Source, struct FInventoryEntry& Item, int32 Quantity, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UBP_CraftingCreationComponent_C* CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent, enum class ECraftingScreenState CallFunc_GetCraftingScreenState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Crafting_RecipeMold_C", "OnItemAddedOrRemoved");

	Params::UWBP_Crafting_RecipeMold_C_OnItemAddedOrRemoved_Params Parms{};

	Parms.Source = Source;
	Parms.Item = Item;
	Parms.Quantity = Quantity;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent = CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent;
	Parms.CallFunc_GetCraftingScreenState_ReturnValue = CallFunc_GetCraftingScreenState_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Crafting_RecipeMold.WBP_Crafting_RecipeMold_C.DeinitializeBindings
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_CraftingCreationComponent_C*CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_InventoryComponent_C*    CallFunc_GetLocalPlayerInventoryComponent_BPInventoryComponent   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_InventoryComponent_C*    CallFunc_GetLocalPlayerInventoryComponent_BPInventoryComponent_1 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_GetBackpack_Container                                   (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_GetBackpack_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Crafting_RecipeMold_C::DeinitializeBindings(class UBP_CraftingCreationComponent_C* CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UBP_InventoryComponent_C* CallFunc_GetLocalPlayerInventoryComponent_BPInventoryComponent, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UBP_InventoryComponent_C* CallFunc_GetLocalPlayerInventoryComponent_BPInventoryComponent_1, TScriptInterface<class IItemContainer> CallFunc_GetBackpack_Container, bool CallFunc_GetBackpack_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Crafting_RecipeMold_C", "DeinitializeBindings");

	Params::UWBP_Crafting_RecipeMold_C_DeinitializeBindings_Params Parms{};

	Parms.CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent = CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetLocalPlayerInventoryComponent_BPInventoryComponent = CallFunc_GetLocalPlayerInventoryComponent_BPInventoryComponent;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetLocalPlayerInventoryComponent_BPInventoryComponent_1 = CallFunc_GetLocalPlayerInventoryComponent_BPInventoryComponent_1;
	Parms.CallFunc_GetBackpack_Container = CallFunc_GetBackpack_Container;
	Parms.CallFunc_GetBackpack_ReturnValue = CallFunc_GetBackpack_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Crafting_RecipeMold.WBP_Crafting_RecipeMold_C.InitializeBindings
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBP_CraftingCreationComponent_C*CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_InventoryComponent_C*    CallFunc_GetLocalPlayerInventoryComponent_BPInventoryComponent   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_InventoryComponent_C*    CallFunc_GetLocalPlayerInventoryComponent_BPInventoryComponent_1 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IItemContainer>CallFunc_GetBackpack_Container                                   (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_GetBackpack_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Crafting_RecipeMold_C::InitializeBindings(class UBP_CraftingCreationComponent_C* CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UBP_InventoryComponent_C* CallFunc_GetLocalPlayerInventoryComponent_BPInventoryComponent, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UBP_InventoryComponent_C* CallFunc_GetLocalPlayerInventoryComponent_BPInventoryComponent_1, TScriptInterface<class IItemContainer> CallFunc_GetBackpack_Container, bool CallFunc_GetBackpack_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Crafting_RecipeMold_C", "InitializeBindings");

	Params::UWBP_Crafting_RecipeMold_C_InitializeBindings_Params Parms{};

	Parms.CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent = CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetLocalPlayerInventoryComponent_BPInventoryComponent = CallFunc_GetLocalPlayerInventoryComponent_BPInventoryComponent;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetLocalPlayerInventoryComponent_BPInventoryComponent_1 = CallFunc_GetLocalPlayerInventoryComponent_BPInventoryComponent_1;
	Parms.CallFunc_GetBackpack_Container = CallFunc_GetBackpack_Container;
	Parms.CallFunc_GetBackpack_ReturnValue = CallFunc_GetBackpack_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Crafting_RecipeMold.WBP_Crafting_RecipeMold_C.TryFillSlotWithItemEntry
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              SlotIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsSlotUpdated                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsItemImprovementSlot_IsImprovementSlot                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Crafting_RecipeMoldSlot_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNWXMenuDataEntryItem*       K2Node_DynamicCast_AsNWXMenu_Data_Entry_Item                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_GetInventoryEntry_ReturnValue                           (ConstParm)

void UWBP_Crafting_RecipeMold_C::TryFillSlotWithItemEntry(int32 SlotIndex, bool* IsSlotUpdated, bool CallFunc_IsItemImprovementSlot_IsImprovementSlot, class UWBP_Crafting_RecipeMoldSlot_C* CallFunc_Array_Get_Item, class UNWXMenuDataEntryItem* K2Node_DynamicCast_AsNWXMenu_Data_Entry_Item, bool K2Node_DynamicCast_bSuccess, const struct FInventoryEntry& CallFunc_GetInventoryEntry_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Crafting_RecipeMold_C", "TryFillSlotWithItemEntry");

	Params::UWBP_Crafting_RecipeMold_C_TryFillSlotWithItemEntry_Params Parms{};

	Parms.SlotIndex = SlotIndex;
	Parms.CallFunc_IsItemImprovementSlot_IsImprovementSlot = CallFunc_IsItemImprovementSlot_IsImprovementSlot;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsNWXMenu_Data_Entry_Item = K2Node_DynamicCast_AsNWXMenu_Data_Entry_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetInventoryEntry_ReturnValue = CallFunc_GetInventoryEntry_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsSlotUpdated != nullptr)
		*IsSlotUpdated = Parms.IsSlotUpdated;

}


// Function WBP_Crafting_RecipeMold.WBP_Crafting_RecipeMold_C.RemoveSlotBindings
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Crafting_RecipeMoldSlot_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Crafting_RecipeMold_C::RemoveSlotBindings(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Array_Length_ReturnValue, class UWBP_Crafting_RecipeMoldSlot_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Crafting_RecipeMold_C", "RemoveSlotBindings");

	Params::UWBP_Crafting_RecipeMold_C_RemoveSlotBindings_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Crafting_RecipeMold.WBP_Crafting_RecipeMold_C.GetDefaultFocusWidget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UWBP_Crafting_RecipeMoldSlot_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_Crafting_RecipeMold_C::GetDefaultFocusWidget(class UWBP_Crafting_RecipeMoldSlot_C* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Crafting_RecipeMold_C", "GetDefaultFocusWidget");

	Params::UWBP_Crafting_RecipeMold_C_GetDefaultFocusWidget_Params Parms{};

	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_Crafting_RecipeMold.WBP_Crafting_RecipeMold_C.IsInAnySelectionState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               IsInAnySelectionState                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Crafting_RecipeMold_C::IsInAnySelectionState(bool* IsInAnySelectionState, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Crafting_RecipeMold_C", "IsInAnySelectionState");

	Params::UWBP_Crafting_RecipeMold_C_IsInAnySelectionState_Params Parms{};

	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsInAnySelectionState != nullptr)
		*IsInAnySelectionState = Parms.IsInAnySelectionState;

}


// Function WBP_Crafting_RecipeMold.WBP_Crafting_RecipeMold_C.GetState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class E_Crafting_MoldSteps    State                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Crafting_RecipeMold_C::GetState(enum class E_Crafting_MoldSteps* State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Crafting_RecipeMold_C", "GetState");

	Params::UWBP_Crafting_RecipeMold_C_GetState_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (State != nullptr)
		*State = Parms.State;

}


// Function WBP_Crafting_RecipeMold.WBP_Crafting_RecipeMold_C.SetState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_Crafting_MoldSteps    NewState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CraftingCreationComponent_C*CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class ECraftingScreenState    CallFunc_GetCraftingScreenState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Crafting_RecipeMold_C::SetState(enum class E_Crafting_MoldSteps NewState, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, class UBP_CraftingCreationComponent_C* CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent, enum class ECraftingScreenState CallFunc_GetCraftingScreenState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_NotEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Crafting_RecipeMold_C", "SetState");

	Params::UWBP_Crafting_RecipeMold_C_SetState_Params Parms{};

	Parms.NewState = NewState;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent = CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent;
	Parms.CallFunc_GetCraftingScreenState_ReturnValue = CallFunc_GetCraftingScreenState_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Crafting_RecipeMold.WBP_Crafting_RecipeMold_C.SetupSlotBindings
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UWBP_Crafting_RecipeMoldSlot_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UWBP_Crafting_RecipeMoldSlot_C*>K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)

void UWBP_Crafting_RecipeMold_C::SetupSlotBindings(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UWBP_Crafting_RecipeMoldSlot_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TArray<class UWBP_Crafting_RecipeMoldSlot_C*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Crafting_RecipeMold_C", "SetupSlotBindings");

	Params::UWBP_Crafting_RecipeMold_C_SetupSlotBindings_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Crafting_RecipeMold.WBP_Crafting_RecipeMold_C.FillSlot
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              SlotIndex                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               FillWithNotify                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Crafting_RecipeMoldSlot_C*ChangedSlot                                                      (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesMatchPreviousIngredient_bMatches                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Crafting_RecipeMoldSlot_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Crafting_RecipeMold_C::FillSlot(const struct FInventoryEntry& Item, int32& SlotIndex, bool FillWithNotify, class UWBP_Crafting_RecipeMoldSlot_C* ChangedSlot, bool CallFunc_IsValid_ReturnValue, bool CallFunc_DoesMatchPreviousIngredient_bMatches, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, class UWBP_Crafting_RecipeMoldSlot_C* CallFunc_Array_Get_Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Crafting_RecipeMold_C", "FillSlot");

	Params::UWBP_Crafting_RecipeMold_C_FillSlot_Params Parms{};

	Parms.Item = Item;
	Parms.SlotIndex = SlotIndex;
	Parms.FillWithNotify = FillWithNotify;
	Parms.ChangedSlot = ChangedSlot;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_DoesMatchPreviousIngredient_bMatches = CallFunc_DoesMatchPreviousIngredient_bMatches;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Crafting_RecipeMold.WBP_Crafting_RecipeMold_C.IngredientSelection
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SlotIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Crafting_RecipeMoldSlot_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Crafting_RecipeMold_C::IngredientSelection(int32 SlotIndex, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWBP_Crafting_RecipeMoldSlot_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Crafting_RecipeMold_C", "IngredientSelection");

	Params::UWBP_Crafting_RecipeMold_C_IngredientSelection_Params Parms{};

	Parms.SlotIndex = SlotIndex;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Crafting_RecipeMold.WBP_Crafting_RecipeMold_C.UpdateCosmetics
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Crafting_RecipeMold_C::UpdateCosmetics()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Crafting_RecipeMold_C", "UpdateCosmetics");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Crafting_RecipeMold.WBP_Crafting_RecipeMold_C.UpdateCraftingPreview
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ComparePrevious                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue_1                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CraftingComponent_C*     CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CraftingStationComponent_C*CallFunc_GetActiveCraftingStation_ActiveCraftingStation          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EGetResult              CallFunc_TryGenerateCraftingPreview_Branches                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     CallFunc_TryGenerateCraftingPreview_ReturnValue                  (ReferenceParm)
// int32                              CallFunc_GetNumberOfRecipeSlotsFilled_SlotsFilled                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumberOfRecipeSlotsFilled_RecipeSlots                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGetResult              CallFunc_GetNumberOfRecipeSlotsFilled_Branches                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_Array_Get_Item                                          (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Crafting_RecipeMold_C::UpdateCraftingPreview(bool ComparePrevious, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class UBP_CraftingComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UBP_CraftingStationComponent_C* CallFunc_GetActiveCraftingStation_ActiveCraftingStation, bool CallFunc_IsValid_ReturnValue_2, class AActor* CallFunc_GetOwner_ReturnValue, enum class EGetResult CallFunc_TryGenerateCraftingPreview_Branches, TArray<struct FInventoryEntry>& CallFunc_TryGenerateCraftingPreview_ReturnValue, int32 CallFunc_GetNumberOfRecipeSlotsFilled_SlotsFilled, int32 CallFunc_GetNumberOfRecipeSlotsFilled_RecipeSlots, enum class EGetResult CallFunc_GetNumberOfRecipeSlotsFilled_Branches, const struct FInventoryEntry& CallFunc_Array_Get_Item, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Crafting_RecipeMold_C", "UpdateCraftingPreview");

	Params::UWBP_Crafting_RecipeMold_C_UpdateCraftingPreview_Params Parms{};

	Parms.ComparePrevious = ComparePrevious;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue_1 = CallFunc_GetOwningPlayerController_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetActiveCraftingStation_ActiveCraftingStation = CallFunc_GetActiveCraftingStation_ActiveCraftingStation;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_TryGenerateCraftingPreview_Branches = CallFunc_TryGenerateCraftingPreview_Branches;
	Parms.CallFunc_TryGenerateCraftingPreview_ReturnValue = CallFunc_TryGenerateCraftingPreview_ReturnValue;
	Parms.CallFunc_GetNumberOfRecipeSlotsFilled_SlotsFilled = CallFunc_GetNumberOfRecipeSlotsFilled_SlotsFilled;
	Parms.CallFunc_GetNumberOfRecipeSlotsFilled_RecipeSlots = CallFunc_GetNumberOfRecipeSlotsFilled_RecipeSlots;
	Parms.CallFunc_GetNumberOfRecipeSlotsFilled_Branches = CallFunc_GetNumberOfRecipeSlotsFilled_Branches;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Crafting_RecipeMold.WBP_Crafting_RecipeMold_C.Refresh
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Crafting_RecipeMold_C::Refresh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Crafting_RecipeMold_C", "Refresh");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Crafting_RecipeMold.WBP_Crafting_RecipeMold_C.CancelSelection
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class E_Crafting_MoldSteps    NewState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInAnySelectionState_IsInAnySelectionState             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Crafting_RecipeMold_C::CancelSelection(enum class E_Crafting_MoldSteps NewState, bool CallFunc_IsInAnySelectionState_IsInAnySelectionState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Crafting_RecipeMold_C", "CancelSelection");

	Params::UWBP_Crafting_RecipeMold_C_CancelSelection_Params Parms{};

	Parms.NewState = NewState;
	Parms.CallFunc_IsInAnySelectionState_IsInAnySelectionState = CallFunc_IsInAnySelectionState_IsInAnySelectionState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Crafting_RecipeMold.WBP_Crafting_RecipeMold_C.UpdateDesiredQuantity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewQuantity                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Crafting_RecipeMoldSlot_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Crafting_RecipeMold_C::UpdateDesiredQuantity(int32 NewQuantity, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWBP_Crafting_RecipeMoldSlot_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Crafting_RecipeMold_C", "UpdateDesiredQuantity");

	Params::UWBP_Crafting_RecipeMold_C_UpdateDesiredQuantity_Params Parms{};

	Parms.NewQuantity = NewQuantity;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Crafting_RecipeMold.WBP_Crafting_RecipeMold_C.Refresh Slots for Active Recipe
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNWXMenuDataEntryCrafting*   LCraftingCreationComponent                                       (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXMenuDataEntryCrafting*   ActiveCraftingEntry                                              (Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_CraftingCreationComponent_C*CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNWXMenuDataEntryCrafting*   CallFunc_GetStateDependantCraftingEntry_ReturnValue              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCraftingRecipe             CallFunc_GetCraftingRecipeData_ReturnValue                       (ContainsInstancedReference)

void UWBP_Crafting_RecipeMold_C::Refresh_Slots_for_Active_Recipe(class UNWXMenuDataEntryCrafting* LCraftingCreationComponent, class UNWXMenuDataEntryCrafting* ActiveCraftingEntry, class UBP_CraftingCreationComponent_C* CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent, class UNWXMenuDataEntryCrafting* CallFunc_GetStateDependantCraftingEntry_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FCraftingRecipe& CallFunc_GetCraftingRecipeData_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Crafting_RecipeMold_C", "Refresh Slots for Active Recipe");

	Params::UWBP_Crafting_RecipeMold_C_Refresh_Slots_for_Active_Recipe_Params Parms{};

	Parms.LCraftingCreationComponent = LCraftingCreationComponent;
	Parms.ActiveCraftingEntry = ActiveCraftingEntry;
	Parms.CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent = CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent;
	Parms.CallFunc_GetStateDependantCraftingEntry_ReturnValue = CallFunc_GetStateDependantCraftingEntry_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetCraftingRecipeData_ReturnValue = CallFunc_GetCraftingRecipeData_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Crafting_RecipeMold.WBP_Crafting_RecipeMold_C.RefreshSlotsTypeAndConstraints
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Crafting_RecipeMoldSlot_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Crafting_RecipeMold_C::RefreshSlotsTypeAndConstraints(int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, class UWBP_Crafting_RecipeMoldSlot_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Crafting_RecipeMold_C", "RefreshSlotsTypeAndConstraints");

	Params::UWBP_Crafting_RecipeMold_C_RefreshSlotsTypeAndConstraints_Params Parms{};

	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Crafting_RecipeMold.WBP_Crafting_RecipeMold_C.FillUpgradeSlots
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FInstancedItemAttributeModifier>Modifiers                                                        (Edit, BlueprintVisible)
// struct FInventoryEntry             SlottedIngredient                                                (Edit, BlueprintVisible)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Crafting_RecipeMoldSlot_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNWXMenuDataEntryItem*       K2Node_DynamicCast_AsNWXMenu_Data_Entry_Item                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_GetInventoryEntry_ReturnValue                           (ConstParm)

void UWBP_Crafting_RecipeMold_C::FillUpgradeSlots(const TArray<struct FInstancedItemAttributeModifier>& Modifiers, const struct FInventoryEntry& SlottedIngredient, int32 Temp_int_Variable, class UWBP_Crafting_RecipeMoldSlot_C* CallFunc_Array_Get_Item, bool CallFunc_GetIsEnabled_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue, class UNWXMenuDataEntryItem* K2Node_DynamicCast_AsNWXMenu_Data_Entry_Item, bool K2Node_DynamicCast_bSuccess, const struct FInventoryEntry& CallFunc_GetInventoryEntry_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Crafting_RecipeMold_C", "FillUpgradeSlots");

	Params::UWBP_Crafting_RecipeMold_C_FillUpgradeSlots_Params Parms{};

	Parms.Modifiers = Modifiers;
	Parms.SlottedIngredient = SlottedIngredient;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetIsEnabled_ReturnValue = CallFunc_GetIsEnabled_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsNWXMenu_Data_Entry_Item = K2Node_DynamicCast_AsNWXMenu_Data_Entry_Item;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetInventoryEntry_ReturnValue = CallFunc_GetInventoryEntry_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Crafting_RecipeMold.WBP_Crafting_RecipeMold_C.FillSlotWithLargestStack
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCraftingConstraintSlot     SlotConstraints                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// int32                              SlotIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             L_IngToSlot                                                      (Edit, BlueprintVisible)
// int32                              L_StackCount                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInventoryEntry>     CallFunc_CraftingMenu_FilterInventoryBySlotAndConstraints_EntriesMatchingConstraints(ReferenceParm)
// TArray<struct FInventoryEntry>     CallFunc_CraftingMenu_FilterInventoryBySlotAndConstraints_EntriesMatchingSlotType(ReferenceParm)
// struct FInventoryEntry             CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_GetItemConstraintQuantityRequired_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Crafting_RecipeMold_C::FillSlotWithLargestStack(const struct FCraftingConstraintSlot& SlotConstraints, int32 SlotIndex, const struct FInventoryEntry& L_IngToSlot, int32 L_StackCount, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FInventoryEntry>& CallFunc_CraftingMenu_FilterInventoryBySlotAndConstraints_EntriesMatchingConstraints, TArray<struct FInventoryEntry>& CallFunc_CraftingMenu_FilterInventoryBySlotAndConstraints_EntriesMatchingSlotType, const struct FInventoryEntry& CallFunc_Array_Get_Item, int32 CallFunc_GetItemConstraintQuantityRequired_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Crafting_RecipeMold_C", "FillSlotWithLargestStack");

	Params::UWBP_Crafting_RecipeMold_C_FillSlotWithLargestStack_Params Parms{};

	Parms.SlotConstraints = SlotConstraints;
	Parms.SlotIndex = SlotIndex;
	Parms.L_IngToSlot = L_IngToSlot;
	Parms.L_StackCount = L_StackCount;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_CraftingMenu_FilterInventoryBySlotAndConstraints_EntriesMatchingConstraints = CallFunc_CraftingMenu_FilterInventoryBySlotAndConstraints_EntriesMatchingConstraints;
	Parms.CallFunc_CraftingMenu_FilterInventoryBySlotAndConstraints_EntriesMatchingSlotType = CallFunc_CraftingMenu_FilterInventoryBySlotAndConstraints_EntriesMatchingSlotType;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetItemConstraintQuantityRequired_ReturnValue = CallFunc_GetItemConstraintQuantityRequired_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Crafting_RecipeMold.WBP_Crafting_RecipeMold_C.AutoFillSlots
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryFillSlotWithItemEntry_IsSlotUpdated                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryFillSlotWithItemEntry_IsSlotUpdated_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CraftingCreationComponent_C*CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class ECraftingScreenState    CallFunc_GetCraftingScreenState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCraftingRecipe             CallFunc_TryGetCraftingRecipe_CraftingRecipe                     (ContainsInstancedReference)
// enum class EGetResult              CallFunc_TryGetCraftingRecipe_Branches                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCraftingConstraintSlot     CallFunc_Array_Get_Item                                          (ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Crafting_RecipeMold_C::AutoFillSlots(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_TryFillSlotWithItemEntry_IsSlotUpdated, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_TryFillSlotWithItemEntry_IsSlotUpdated_1, class UBP_CraftingCreationComponent_C* CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent, enum class ECraftingScreenState CallFunc_GetCraftingScreenState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FCraftingRecipe& CallFunc_TryGetCraftingRecipe_CraftingRecipe, enum class EGetResult CallFunc_TryGetCraftingRecipe_Branches, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FCraftingConstraintSlot& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Crafting_RecipeMold_C", "AutoFillSlots");

	Params::UWBP_Crafting_RecipeMold_C_AutoFillSlots_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_TryFillSlotWithItemEntry_IsSlotUpdated = CallFunc_TryFillSlotWithItemEntry_IsSlotUpdated;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_TryFillSlotWithItemEntry_IsSlotUpdated_1 = CallFunc_TryFillSlotWithItemEntry_IsSlotUpdated_1;
	Parms.CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent = CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent;
	Parms.CallFunc_GetCraftingScreenState_ReturnValue = CallFunc_GetCraftingScreenState_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_TryGetCraftingRecipe_CraftingRecipe = CallFunc_TryGetCraftingRecipe_CraftingRecipe;
	Parms.CallFunc_TryGetCraftingRecipe_Branches = CallFunc_TryGetCraftingRecipe_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Crafting_RecipeMold.WBP_Crafting_RecipeMold_C.BuildTooltipFromItemEntry
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             ItemEntry                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Crafting_RecipeMold_C::BuildTooltipFromItemEntry(const struct FInventoryEntry& ItemEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Crafting_RecipeMold_C", "BuildTooltipFromItemEntry");

	Params::UWBP_Crafting_RecipeMold_C_BuildTooltipFromItemEntry_Params Parms{};

	Parms.ItemEntry = ItemEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Crafting_RecipeMold.WBP_Crafting_RecipeMold_C.PlayScaleAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EUMGSequencePlayMode    PlayMode                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Crafting_RecipeMold_C::PlayScaleAnimation(enum class EUMGSequencePlayMode PlayMode, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Crafting_RecipeMold_C", "PlayScaleAnimation");

	Params::UWBP_Crafting_RecipeMold_C_PlayScaleAnimation_Params Parms{};

	Parms.PlayMode = PlayMode;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Crafting_RecipeMold.WBP_Crafting_RecipeMold_C.CheckSlots
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               SlotsFull                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Failed                                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Crafting_RecipeMoldSlot_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsConstraintMet_IsConstraintMet                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Crafting_RecipeMold_C::CheckSlots(bool* SlotsFull, bool Failed, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWBP_Crafting_RecipeMoldSlot_C* CallFunc_Array_Get_Item, bool CallFunc_IsConstraintMet_IsConstraintMet, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Crafting_RecipeMold_C", "CheckSlots");

	Params::UWBP_Crafting_RecipeMold_C_CheckSlots_Params Parms{};

	Parms.Failed = Failed;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsConstraintMet_IsConstraintMet = CallFunc_IsConstraintMet_IsConstraintMet;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (SlotsFull != nullptr)
		*SlotsFull = Parms.SlotsFull;

}


// Function WBP_Crafting_RecipeMold.WBP_Crafting_RecipeMold_C.OnSlotClicked
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FCraftingConstraintSlot     SlotConstraints                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// int32                              SlotIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Crafting_IngredientList_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UOverlay*                    K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UOverlaySlot*                CallFunc_AddChildToOverlay_ReturnValue                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Crafting_RecipeMold_C::OnSlotClicked(const struct FCraftingConstraintSlot& SlotConstraints, int32 SlotIndex, int32 Temp_int_Variable, class UWBP_Crafting_IngredientList_C* CallFunc_Create_ReturnValue, class UOverlay* K2Node_Select_Default, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Crafting_RecipeMold_C", "OnSlotClicked");

	Params::UWBP_Crafting_RecipeMold_C_OnSlotClicked_Params Parms{};

	Parms.SlotConstraints = SlotConstraints;
	Parms.SlotIndex = SlotIndex;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_AddChildToOverlay_ReturnValue = CallFunc_AddChildToOverlay_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Crafting_RecipeMold.WBP_Crafting_RecipeMold_C.ClearAllSlots
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Crafting_RecipeMoldSlot_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Crafting_RecipeMold_C::ClearAllSlots(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWBP_Crafting_RecipeMoldSlot_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Crafting_RecipeMold_C", "ClearAllSlots");

	Params::UWBP_Crafting_RecipeMold_C_ClearAllSlots_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Crafting_RecipeMold.WBP_Crafting_RecipeMold_C.EnableAllSlots
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Crafting_RecipeMoldSlot_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Crafting_RecipeMold_C::EnableAllSlots(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWBP_Crafting_RecipeMoldSlot_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Crafting_RecipeMold_C", "EnableAllSlots");

	Params::UWBP_Crafting_RecipeMold_C_EnableAllSlots_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Crafting_RecipeMold.WBP_Crafting_RecipeMold_C.GetDisplayedIngredients
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<struct FInventoryEntry>     DisplayedIngredients                                             (Parm, OutParm)
// TArray<struct FInventoryEntry>     Ingredients                                                      (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Crafting_RecipeMoldSlot_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInventoryEntry             CallFunc_GetDisplayedIngredient_Ingredient                       (None)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Crafting_RecipeMold_C::GetDisplayedIngredients(TArray<struct FInventoryEntry>* DisplayedIngredients, const TArray<struct FInventoryEntry>& Ingredients, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UWBP_Crafting_RecipeMoldSlot_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FInventoryEntry& CallFunc_GetDisplayedIngredient_Ingredient, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Crafting_RecipeMold_C", "GetDisplayedIngredients");

	Params::UWBP_Crafting_RecipeMold_C_GetDisplayedIngredients_Params Parms{};

	Parms.Ingredients = Ingredients;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDisplayedIngredient_Ingredient = CallFunc_GetDisplayedIngredient_Ingredient;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (DisplayedIngredients != nullptr)
		*DisplayedIngredients = std::move(Parms.DisplayedIngredients);

}


// Function WBP_Crafting_RecipeMold.WBP_Crafting_RecipeMold_C.GetSlottedIngredients
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<struct FInventoryEntry>     SlottedItems                                                     (Parm, OutParm)
// TArray<struct FInventoryEntry>     ReturnArray                                                      (Edit, BlueprintVisible)

void UWBP_Crafting_RecipeMold_C::GetSlottedIngredients(TArray<struct FInventoryEntry>* SlottedItems, const TArray<struct FInventoryEntry>& ReturnArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Crafting_RecipeMold_C", "GetSlottedIngredients");

	Params::UWBP_Crafting_RecipeMold_C_GetSlottedIngredients_Params Parms{};

	Parms.ReturnArray = ReturnArray;

	UObject::ProcessEvent(Func, &Parms);

	if (SlottedItems != nullptr)
		*SlottedItems = std::move(Parms.SlottedItems);

}


// Function WBP_Crafting_RecipeMold.WBP_Crafting_RecipeMold_C.UpdateDisplayedEntry
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNWXMenuDataEntry*           Entry                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_CraftingCreationComponent_C*CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class ECraftingScreenState    CallFunc_GetCraftingScreenState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBP_CraftingCreationComponent_C*CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent_1(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNWXMenuDataEntryCrafting*   CallFunc_GetStateDependantCraftingEntry_ReturnValue              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCraftingRecipeReference    CallFunc_GetCraftingRecipeAssetReference_ReturnValue             (ConstParm, HasGetValueTypeHash)

void UWBP_Crafting_RecipeMold_C::UpdateDisplayedEntry(class UNWXMenuDataEntry* Entry, class UBP_CraftingCreationComponent_C* CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent, enum class ECraftingScreenState CallFunc_GetCraftingScreenState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UBP_CraftingCreationComponent_C* CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent_1, class UNWXMenuDataEntryCrafting* CallFunc_GetStateDependantCraftingEntry_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FCraftingRecipeReference& CallFunc_GetCraftingRecipeAssetReference_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Crafting_RecipeMold_C", "UpdateDisplayedEntry");

	Params::UWBP_Crafting_RecipeMold_C_UpdateDisplayedEntry_Params Parms{};

	Parms.Entry = Entry;
	Parms.CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent = CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent;
	Parms.CallFunc_GetCraftingScreenState_ReturnValue = CallFunc_GetCraftingScreenState_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent_1 = CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent_1;
	Parms.CallFunc_GetStateDependantCraftingEntry_ReturnValue = CallFunc_GetStateDependantCraftingEntry_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCraftingRecipeAssetReference_ReturnValue = CallFunc_GetCraftingRecipeAssetReference_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Crafting_RecipeMold.WBP_Crafting_RecipeMold_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Crafting_RecipeMold_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Crafting_RecipeMold_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Crafting_RecipeMold.WBP_Crafting_RecipeMold_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Crafting_RecipeMold_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Crafting_RecipeMold_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Crafting_RecipeMold.WBP_Crafting_RecipeMold_C.BndEvt__WBP_Crafting_RecipeMold_CBU_AutofillSlots_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Crafting_RecipeMold_C::BndEvt__WBP_Crafting_RecipeMold_CBU_AutofillSlots_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Crafting_RecipeMold_C", "BndEvt__WBP_Crafting_RecipeMold_CBU_AutofillSlots_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_Crafting_RecipeMold_C_BndEvt__WBP_Crafting_RecipeMold_CBU_AutofillSlots_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Crafting_RecipeMold.WBP_Crafting_RecipeMold_C.OnUsingGamepadChanged_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bUsingGamepad                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Crafting_RecipeMold_C::OnUsingGamepadChanged_1(bool bUsingGamepad)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Crafting_RecipeMold_C", "OnUsingGamepadChanged_1");

	Params::UWBP_Crafting_RecipeMold_C_OnUsingGamepadChanged_1_Params Parms{};

	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Crafting_RecipeMold.WBP_Crafting_RecipeMold_C.ExecuteUbergraph_WBP_Crafting_RecipeMold
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UBP_CraftingCreationComponent_C*CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class ECraftingScreenState    CallFunc_GetCraftingScreenState_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumberOfRecipeSlotsFilled_SlotsFilled                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumberOfRecipeSlotsFilled_RecipeSlots                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGetResult              CallFunc_GetNumberOfRecipeSlotsFilled_Branches                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bUsingGamepad                                       (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Crafting_RecipeMold_C::ExecuteUbergraph_WBP_Crafting_RecipeMold(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UBP_CraftingCreationComponent_C* CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent, enum class ECraftingScreenState CallFunc_GetCraftingScreenState_ReturnValue, int32 CallFunc_GetNumberOfRecipeSlotsFilled_SlotsFilled, int32 CallFunc_GetNumberOfRecipeSlotsFilled_RecipeSlots, enum class EGetResult CallFunc_GetNumberOfRecipeSlotsFilled_Branches, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_Event_bUsingGamepad, bool CallFunc_Not_PreBool_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Crafting_RecipeMold_C", "ExecuteUbergraph_WBP_Crafting_RecipeMold");

	Params::UWBP_Crafting_RecipeMold_C_ExecuteUbergraph_WBP_Crafting_RecipeMold_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent = CallFunc_GetLocalPlayerCraftingCreationComponent_CraftingCreationComponent;
	Parms.CallFunc_GetCraftingScreenState_ReturnValue = CallFunc_GetCraftingScreenState_ReturnValue;
	Parms.CallFunc_GetNumberOfRecipeSlotsFilled_SlotsFilled = CallFunc_GetNumberOfRecipeSlotsFilled_SlotsFilled;
	Parms.CallFunc_GetNumberOfRecipeSlotsFilled_RecipeSlots = CallFunc_GetNumberOfRecipeSlotsFilled_RecipeSlots;
	Parms.CallFunc_GetNumberOfRecipeSlotsFilled_Branches = CallFunc_GetNumberOfRecipeSlotsFilled_Branches;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Event_bUsingGamepad = K2Node_Event_bUsingGamepad;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Crafting_RecipeMold.WBP_Crafting_RecipeMold_C.OnMoldIngredientSlotted__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Crafting_RecipeMold_C::OnMoldIngredientSlotted__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Crafting_RecipeMold_C", "OnMoldIngredientSlotted__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Crafting_RecipeMold.WBP_Crafting_RecipeMold_C.OnMoldIngredientListShown__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Shown                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Crafting_RecipeMold_C::OnMoldIngredientListShown__DelegateSignature(bool Shown)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Crafting_RecipeMold_C", "OnMoldIngredientListShown__DelegateSignature");

	Params::UWBP_Crafting_RecipeMold_C_OnMoldIngredientListShown__DelegateSignature_Params Parms{};

	Parms.Shown = Shown;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Crafting_RecipeMold.WBP_Crafting_RecipeMold_C.OnMoldUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Crafting_RecipeMold_C::OnMoldUpdated__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Crafting_RecipeMold_C", "OnMoldUpdated__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


