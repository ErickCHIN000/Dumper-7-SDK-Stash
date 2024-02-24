#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_sw_CraftingApp_02.wid_sw_CraftingApp_02_C
// (None)

class UClass* UWid_sw_CraftingApp_02_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_sw_CraftingApp_02_C");

	return Clss;
}


// wid_sw_CraftingApp_02_C wid_sw_CraftingApp_02.Default__wid_sw_CraftingApp_02_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_sw_CraftingApp_02_C* UWid_sw_CraftingApp_02_C::GetDefaultObj()
{
	static class UWid_sw_CraftingApp_02_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_sw_CraftingApp_02_C*>(UWid_sw_CraftingApp_02_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_sw_CraftingApp_02.wid_sw_CraftingApp_02_C.IsCraftingMinigameInProgress
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               InProgress                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_sw_CraftingApp_02_C::IsCraftingMinigameInProgress(bool* InProgress, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_CraftingApp_02_C", "IsCraftingMinigameInProgress");

	Params::UWid_sw_CraftingApp_02_C_IsCraftingMinigameInProgress_Params Parms{};

	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (InProgress != nullptr)
		*InProgress = Parms.InProgress;

}


// Function wid_sw_CraftingApp_02.wid_sw_CraftingApp_02_C.UpdateCanBeCraftedAreas
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        RecipeName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECraftingResult         CallFunc_CanCraftFromRecipe_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_sw_CraftingApp_02_C::UpdateCanBeCraftedAreas(class FName RecipeName, enum class ECraftingResult CallFunc_CanCraftFromRecipe_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_CraftingApp_02_C", "UpdateCanBeCraftedAreas");

	Params::UWid_sw_CraftingApp_02_C_UpdateCanBeCraftedAreas_Params Parms{};

	Parms.RecipeName = RecipeName;
	Parms.CallFunc_CanCraftFromRecipe_ReturnValue = CallFunc_CanCraftFromRecipe_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_sw_CraftingApp_02.wid_sw_CraftingApp_02_C.GetPlayerIngredientCount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        Ingredient                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              FilledSlots                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Count_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_sw_CraftingApp_02_C::GetPlayerIngredientCount(class FName Ingredient, int32* FilledSlots, float CallFunc_Count_ReturnValue, int32 CallFunc_FTrunc_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_CraftingApp_02_C", "GetPlayerIngredientCount");

	Params::UWid_sw_CraftingApp_02_C_GetPlayerIngredientCount_Params Parms{};

	Parms.Ingredient = Ingredient;
	Parms.CallFunc_Count_ReturnValue = CallFunc_Count_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (FilledSlots != nullptr)
		*FilledSlots = Parms.FilledSlots;

}


// Function wid_sw_CraftingApp_02.wid_sw_CraftingApp_02_C.UpdateItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        RecipeName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCraftingRecipe             CallFunc_GetCraftingRecipe_Recipe                                (None)
// struct FItemEntry                  CallFunc_GetItemData_Data                                        (None)

void UWid_sw_CraftingApp_02_C::UpdateItem(class FName RecipeName, const struct FCraftingRecipe& CallFunc_GetCraftingRecipe_Recipe, const struct FItemEntry& CallFunc_GetItemData_Data)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_CraftingApp_02_C", "UpdateItem");

	Params::UWid_sw_CraftingApp_02_C_UpdateItem_Params Parms{};

	Parms.RecipeName = RecipeName;
	Parms.CallFunc_GetCraftingRecipe_Recipe = CallFunc_GetCraftingRecipe_Recipe;
	Parms.CallFunc_GetItemData_Data = CallFunc_GetItemData_Data;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_sw_CraftingApp_02.wid_sw_CraftingApp_02_C.UpdateProgressBarInterpolationTarget_
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CurrentStepPercentCompletion                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_sw_CraftingApp_02_C::UpdateProgressBarInterpolationTarget_(float CurrentStepPercentCompletion, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_CraftingApp_02_C", "UpdateProgressBarInterpolationTarget_");

	Params::UWid_sw_CraftingApp_02_C_UpdateProgressBarInterpolationTarget__Params Parms{};

	Parms.CurrentStepPercentCompletion = CurrentStepPercentCompletion;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_sw_CraftingApp_02.wid_sw_CraftingApp_02_C.SetSelectedIngredients
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TMap<class FName, int32>           Ingredients                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// TArray<class FName>                IngredientTypes                                                  (Edit, BlueprintVisible)
// TArray<class FName>                CallFunc_Map_Keys_Keys                                           (ReferenceParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPlayerIngredientCount_FilledSlots                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Map_Find_Value_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemEntry                  CallFunc_GetItemData_Data                                        (None)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetPlayerIngredientCount_FilledSlots_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UWid_CraftingIngredient_C*>K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// class UWid_CraftingIngredient_C*   CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWid_CraftingResource_C*>CallFunc_Map_Values_Values                                       (ReferenceParm, ContainsInstancedReference)
// class UWid_CraftingResource_C*     CallFunc_Array_Get_Item_3                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_CraftingResource_C*     CallFunc_Map_Find_Value_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_sw_CraftingApp_02_C::SetSelectedIngredients(TMap<class FName, int32> Ingredients, const TArray<class FName>& IngredientTypes, TArray<class FName>& CallFunc_Map_Keys_Keys, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_GetPlayerIngredientCount_FilledSlots, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, class FName CallFunc_Array_Get_Item_1, int32 CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, const struct FItemEntry& CallFunc_GetItemData_Data, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_GetPlayerIngredientCount_FilledSlots_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, TArray<class UWid_CraftingIngredient_C*>& K2Node_MakeArray_Array, class UWid_CraftingIngredient_C* CallFunc_Array_Get_Item_2, TArray<class UWid_CraftingResource_C*>& CallFunc_Map_Values_Values, class UWid_CraftingResource_C* CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_3, class UWid_CraftingResource_C* CallFunc_Map_Find_Value_2, bool CallFunc_Map_Find_ReturnValue_2, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_CraftingApp_02_C", "SetSelectedIngredients");

	Params::UWid_sw_CraftingApp_02_C_SetSelectedIngredients_Params Parms{};

	Parms.Ingredients = Ingredients;
	Parms.IngredientTypes = IngredientTypes;
	Parms.CallFunc_Map_Keys_Keys = CallFunc_Map_Keys_Keys;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetPlayerIngredientCount_FilledSlots = CallFunc_GetPlayerIngredientCount_FilledSlots;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Map_Find_Value_1 = CallFunc_Map_Find_Value_1;
	Parms.CallFunc_Map_Find_ReturnValue_1 = CallFunc_Map_Find_ReturnValue_1;
	Parms.CallFunc_GetItemData_Data = CallFunc_GetItemData_Data;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_GetPlayerIngredientCount_FilledSlots_1 = CallFunc_GetPlayerIngredientCount_FilledSlots_1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Map_Values_Values = CallFunc_Map_Values_Values;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_Map_Find_Value_2 = CallFunc_Map_Find_Value_2;
	Parms.CallFunc_Map_Find_ReturnValue_2 = CallFunc_Map_Find_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_sw_CraftingApp_02.wid_sw_CraftingApp_02_C.Create tab from index
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Tab_index                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_CraftingPage_04_C*      Crafting_tab                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_sw_CraftingApp_02_C::Create_tab_from_index(int32 Tab_index, class UWid_CraftingPage_04_C** Crafting_tab)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_CraftingApp_02_C", "Create tab from index");

	Params::UWid_sw_CraftingApp_02_C_Create_tab_from_index_Params Parms{};

	Parms.Tab_index = Tab_index;

	UObject::ProcessEvent(Func, &Parms);

	if (Crafting_tab != nullptr)
		*Crafting_tab = Parms.Crafting_tab;

}


// Function wid_sw_CraftingApp_02.wid_sw_CraftingApp_02_C.GetCurrentRecipe
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        Recipe                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetContent_Content                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_CraftingPage_04_C*      K2Node_DynamicCast_AsWid_Crafting_Page_04                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetCurrentRecipe_RecipeName                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_sw_CraftingApp_02_C::GetCurrentRecipe(class FName* Recipe, class UWidget* CallFunc_GetContent_Content, class UWid_CraftingPage_04_C* K2Node_DynamicCast_AsWid_Crafting_Page_04, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_GetCurrentRecipe_RecipeName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_CraftingApp_02_C", "GetCurrentRecipe");

	Params::UWid_sw_CraftingApp_02_C_GetCurrentRecipe_Params Parms{};

	Parms.CallFunc_GetContent_Content = CallFunc_GetContent_Content;
	Parms.K2Node_DynamicCast_AsWid_Crafting_Page_04 = K2Node_DynamicCast_AsWid_Crafting_Page_04;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCurrentRecipe_RecipeName = CallFunc_GetCurrentRecipe_RecipeName;

	UObject::ProcessEvent(Func, &Parms);

	if (Recipe != nullptr)
		*Recipe = Parms.Recipe;

}


// Function wid_sw_CraftingApp_02.wid_sw_CraftingApp_02_C.UpdateIngredients_Impl
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Recipe                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCraftingRecipe             CallFunc_GetCraftingRecipe_Recipe                                (None)

void UWid_sw_CraftingApp_02_C::UpdateIngredients_Impl(class FName Recipe, const struct FCraftingRecipe& CallFunc_GetCraftingRecipe_Recipe)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_CraftingApp_02_C", "UpdateIngredients_Impl");

	Params::UWid_sw_CraftingApp_02_C_UpdateIngredients_Impl_Params Parms{};

	Parms.Recipe = Recipe;
	Parms.CallFunc_GetCraftingRecipe_Recipe = CallFunc_GetCraftingRecipe_Recipe;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_sw_CraftingApp_02.wid_sw_CraftingApp_02_C.GetKnownTabs
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<struct FDataTableRowHandle> KnownTabs                                                        (Parm, OutParm)
// TArray<struct FDataTableRowHandle> KnownCategories                                                  (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetKnownRecipes_KnownRecipes                            (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCraftingRecipe             CallFunc_GetCraftingRecipe_Recipe                                (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_sw_CraftingApp_02_C::GetKnownTabs(TArray<struct FDataTableRowHandle>* KnownTabs, const TArray<struct FDataTableRowHandle>& KnownCategories, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, TArray<class FName>& CallFunc_GetKnownRecipes_KnownRecipes, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FCraftingRecipe& CallFunc_GetCraftingRecipe_Recipe, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_CraftingApp_02_C", "GetKnownTabs");

	Params::UWid_sw_CraftingApp_02_C_GetKnownTabs_Params Parms{};

	Parms.KnownCategories = KnownCategories;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetKnownRecipes_KnownRecipes = CallFunc_GetKnownRecipes_KnownRecipes;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetCraftingRecipe_Recipe = CallFunc_GetCraftingRecipe_Recipe;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (KnownTabs != nullptr)
		*KnownTabs = std::move(Parms.KnownTabs);

}


// Function wid_sw_CraftingApp_02.wid_sw_CraftingApp_02_C.Completed_4917EDBA45C0AD98A39F2DBA9EC9C691
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CompletionPercent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              BufferValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBufforedQuickTimeEventNode* BufforedQuickTimeEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_sw_CraftingApp_02_C::Completed_4917EDBA45C0AD98A39F2DBA9EC9C691(float CompletionPercent, float BufferValue, class UBufforedQuickTimeEventNode* BufforedQuickTimeEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_CraftingApp_02_C", "Completed_4917EDBA45C0AD98A39F2DBA9EC9C691");

	Params::UWid_sw_CraftingApp_02_C_Completed_4917EDBA45C0AD98A39F2DBA9EC9C691_Params Parms{};

	Parms.CompletionPercent = CompletionPercent;
	Parms.BufferValue = BufferValue;
	Parms.BufforedQuickTimeEvent = BufforedQuickTimeEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_sw_CraftingApp_02.wid_sw_CraftingApp_02_C.BufferClosed_4917EDBA45C0AD98A39F2DBA9EC9C691
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CompletionPercent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              BufferValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBufforedQuickTimeEventNode* BufforedQuickTimeEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_sw_CraftingApp_02_C::BufferClosed_4917EDBA45C0AD98A39F2DBA9EC9C691(float CompletionPercent, float BufferValue, class UBufforedQuickTimeEventNode* BufforedQuickTimeEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_CraftingApp_02_C", "BufferClosed_4917EDBA45C0AD98A39F2DBA9EC9C691");

	Params::UWid_sw_CraftingApp_02_C_BufferClosed_4917EDBA45C0AD98A39F2DBA9EC9C691_Params Parms{};

	Parms.CompletionPercent = CompletionPercent;
	Parms.BufferValue = BufferValue;
	Parms.BufforedQuickTimeEvent = BufforedQuickTimeEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_sw_CraftingApp_02.wid_sw_CraftingApp_02_C.BufferOpened_4917EDBA45C0AD98A39F2DBA9EC9C691
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CompletionPercent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              BufferValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBufforedQuickTimeEventNode* BufforedQuickTimeEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_sw_CraftingApp_02_C::BufferOpened_4917EDBA45C0AD98A39F2DBA9EC9C691(float CompletionPercent, float BufferValue, class UBufforedQuickTimeEventNode* BufforedQuickTimeEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_CraftingApp_02_C", "BufferOpened_4917EDBA45C0AD98A39F2DBA9EC9C691");

	Params::UWid_sw_CraftingApp_02_C_BufferOpened_4917EDBA45C0AD98A39F2DBA9EC9C691_Params Parms{};

	Parms.CompletionPercent = CompletionPercent;
	Parms.BufferValue = BufferValue;
	Parms.BufforedQuickTimeEvent = BufforedQuickTimeEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_sw_CraftingApp_02.wid_sw_CraftingApp_02_C.Update_4917EDBA45C0AD98A39F2DBA9EC9C691
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CompletionPercent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              BufferValue                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBufforedQuickTimeEventNode* BufforedQuickTimeEvent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_sw_CraftingApp_02_C::Update_4917EDBA45C0AD98A39F2DBA9EC9C691(float CompletionPercent, float BufferValue, class UBufforedQuickTimeEventNode* BufforedQuickTimeEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_CraftingApp_02_C", "Update_4917EDBA45C0AD98A39F2DBA9EC9C691");

	Params::UWid_sw_CraftingApp_02_C_Update_4917EDBA45C0AD98A39F2DBA9EC9C691_Params Parms{};

	Parms.CompletionPercent = CompletionPercent;
	Parms.BufferValue = BufferValue;
	Parms.BufforedQuickTimeEvent = BufforedQuickTimeEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_sw_CraftingApp_02.wid_sw_CraftingApp_02_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_sw_CraftingApp_02_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_CraftingApp_02_C", "PreConstruct");

	Params::UWid_sw_CraftingApp_02_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_sw_CraftingApp_02.wid_sw_CraftingApp_02_C.Open
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_sw_CraftingApp_02_C::Open()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_CraftingApp_02_C", "Open");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_sw_CraftingApp_02.wid_sw_CraftingApp_02_C.Press Left
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_sw_CraftingApp_02_C::Press_Left()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_CraftingApp_02_C", "Press Left");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_sw_CraftingApp_02.wid_sw_CraftingApp_02_C.Press Right
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_sw_CraftingApp_02_C::Press_Right()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_CraftingApp_02_C", "Press Right");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_sw_CraftingApp_02.wid_sw_CraftingApp_02_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_sw_CraftingApp_02_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_CraftingApp_02_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_sw_CraftingApp_02.wid_sw_CraftingApp_02_C.Press Down
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_sw_CraftingApp_02_C::Press_Down()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_CraftingApp_02_C", "Press Down");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_sw_CraftingApp_02.wid_sw_CraftingApp_02_C.Press Up
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_sw_CraftingApp_02_C::Press_Up()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_CraftingApp_02_C", "Press Up");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_sw_CraftingApp_02.wid_sw_CraftingApp_02_C.UpdateOnSelectedRecipeChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NewRecipe                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECraftingResult         CanBeCrafted                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_sw_CraftingApp_02_C::UpdateOnSelectedRecipeChanged(class FName NewRecipe, enum class ECraftingResult CanBeCrafted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_CraftingApp_02_C", "UpdateOnSelectedRecipeChanged");

	Params::UWid_sw_CraftingApp_02_C_UpdateOnSelectedRecipeChanged_Params Parms{};

	Parms.NewRecipe = NewRecipe;
	Parms.CanBeCrafted = CanBeCrafted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_sw_CraftingApp_02.wid_sw_CraftingApp_02_C.CraftingPressed
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_sw_CraftingApp_02_C::CraftingPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_CraftingApp_02_C", "CraftingPressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_sw_CraftingApp_02.wid_sw_CraftingApp_02_C.CraftingReleased
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_sw_CraftingApp_02_C::CraftingReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_CraftingApp_02_C", "CraftingReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_sw_CraftingApp_02.wid_sw_CraftingApp_02_C.UpdateTabs
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_sw_CraftingApp_02_C::UpdateTabs()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_CraftingApp_02_C", "UpdateTabs");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_sw_CraftingApp_02.wid_sw_CraftingApp_02_C.StartCraftingMinigame
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Recipe                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_sw_CraftingApp_02_C::StartCraftingMinigame(class FName Recipe)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_CraftingApp_02_C", "StartCraftingMinigame");

	Params::UWid_sw_CraftingApp_02_C_StartCraftingMinigame_Params Parms{};

	Parms.Recipe = Recipe;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_sw_CraftingApp_02.wid_sw_CraftingApp_02_C.UpdateMovie
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        RecipeName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_sw_CraftingApp_02_C::UpdateMovie(class FName RecipeName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_CraftingApp_02_C", "UpdateMovie");

	Params::UWid_sw_CraftingApp_02_C_UpdateMovie_Params Parms{};

	Parms.RecipeName = RecipeName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_sw_CraftingApp_02.wid_sw_CraftingApp_02_C.UpdateIngredients
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_sw_CraftingApp_02_C::UpdateIngredients()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_CraftingApp_02_C", "UpdateIngredients");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_sw_CraftingApp_02.wid_sw_CraftingApp_02_C.BndEvt__HoldAtoCreate_K2Node_ComponentBoundEvent_3_Filled__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_sw_CraftingApp_02_C::BndEvt__HoldAtoCreate_K2Node_ComponentBoundEvent_3_Filled__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_CraftingApp_02_C", "BndEvt__HoldAtoCreate_K2Node_ComponentBoundEvent_3_Filled__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_sw_CraftingApp_02.wid_sw_CraftingApp_02_C.CancelCrafting
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_sw_CraftingApp_02_C::CancelCrafting()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_CraftingApp_02_C", "CancelCrafting");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_sw_CraftingApp_02.wid_sw_CraftingApp_02_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_sw_CraftingApp_02_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_CraftingApp_02_C", "Tick");

	Params::UWid_sw_CraftingApp_02_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_sw_CraftingApp_02.wid_sw_CraftingApp_02_C.DescriptionScrollUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_sw_CraftingApp_02_C::DescriptionScrollUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_CraftingApp_02_C", "DescriptionScrollUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_sw_CraftingApp_02.wid_sw_CraftingApp_02_C.DescriptionScrollDown
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_sw_CraftingApp_02_C::DescriptionScrollDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_CraftingApp_02_C", "DescriptionScrollDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_sw_CraftingApp_02.wid_sw_CraftingApp_02_C.PlayCraftingSound
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_sw_CraftingApp_02_C::PlayCraftingSound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_CraftingApp_02_C", "PlayCraftingSound");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_sw_CraftingApp_02.wid_sw_CraftingApp_02_C.ReenableCraftingSound
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_sw_CraftingApp_02_C::ReenableCraftingSound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_CraftingApp_02_C", "ReenableCraftingSound");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_sw_CraftingApp_02.wid_sw_CraftingApp_02_C.ProceedToNextStep
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_sw_CraftingApp_02_C::ProceedToNextStep()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_CraftingApp_02_C", "ProceedToNextStep");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_sw_CraftingApp_02.wid_sw_CraftingApp_02_C.EnableCraftingLoop
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_sw_CraftingApp_02_C::EnableCraftingLoop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_CraftingApp_02_C", "EnableCraftingLoop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_sw_CraftingApp_02.wid_sw_CraftingApp_02_C.SetMainLoop
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_sw_CraftingApp_02_C::SetMainLoop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_CraftingApp_02_C", "SetMainLoop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_sw_CraftingApp_02.wid_sw_CraftingApp_02_C.EndLoop
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_sw_CraftingApp_02_C::EndLoop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_CraftingApp_02_C", "EndLoop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_sw_CraftingApp_02.wid_sw_CraftingApp_02_C.TimedInputDisable
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Time                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_sw_CraftingApp_02_C::TimedInputDisable(float Time)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_CraftingApp_02_C", "TimedInputDisable");

	Params::UWid_sw_CraftingApp_02_C_TimedInputDisable_Params Parms{};

	Parms.Time = Time;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_sw_CraftingApp_02.wid_sw_CraftingApp_02_C.BndEvt__wid_Util_MovieLoop_K2Node_ComponentBoundEvent_6_LoopEnded__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWid_sw_CraftingApp_02_C::BndEvt__wid_Util_MovieLoop_K2Node_ComponentBoundEvent_6_LoopEnded__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_CraftingApp_02_C", "BndEvt__wid_Util_MovieLoop_K2Node_ComponentBoundEvent_6_LoopEnded__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_sw_CraftingApp_02.wid_sw_CraftingApp_02_C.UpdateIngredientsDelegate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             OldEntry                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FInventoryEntry             NewEntry                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UWid_sw_CraftingApp_02_C::UpdateIngredientsDelegate(const struct FInventoryEntry& OldEntry, const struct FInventoryEntry& NewEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_CraftingApp_02_C", "UpdateIngredientsDelegate");

	Params::UWid_sw_CraftingApp_02_C_UpdateIngredientsDelegate_Params Parms{};

	Parms.OldEntry = OldEntry;
	Parms.NewEntry = NewEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_sw_CraftingApp_02.wid_sw_CraftingApp_02_C.UpdateTabsDelegate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInventoryEntry             OldEntry                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FInventoryEntry             NewEntry                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UWid_sw_CraftingApp_02_C::UpdateTabsDelegate(const struct FInventoryEntry& OldEntry, const struct FInventoryEntry& NewEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_CraftingApp_02_C", "UpdateTabsDelegate");

	Params::UWid_sw_CraftingApp_02_C_UpdateTabsDelegate_Params Parms{};

	Parms.OldEntry = OldEntry;
	Parms.NewEntry = NewEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_sw_CraftingApp_02.wid_sw_CraftingApp_02_C.InventoryUpdatedDelegate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_sw_CraftingApp_02_C::InventoryUpdatedDelegate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_CraftingApp_02_C", "InventoryUpdatedDelegate");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_sw_CraftingApp_02.wid_sw_CraftingApp_02_C.WidgetAnimationEvt_SuccessPopupAnimation_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)
// Parameters:

void UWid_sw_CraftingApp_02_C::WidgetAnimationEvt_SuccessPopupAnimation_K2Node_WidgetAnimationEvent_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_CraftingApp_02_C", "WidgetAnimationEvt_SuccessPopupAnimation_K2Node_WidgetAnimationEvent_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_sw_CraftingApp_02.wid_sw_CraftingApp_02_C.ExecuteUbergraph_wid_sw_CraftingApp_02
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAkExternalSourceInfo>Temp_struct_Variable                                             (ConstParm, ReferenceParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FDataTableRowHandle> CallFunc_GetKnownTabs_KnownTabs                                  (ReferenceParm)
// class ACh_Hero_00_C*               K2Node_DynamicCast_AsCh_Hero_00                                  (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_NewRecipe                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECraftingResult         K2Node_CustomEvent_CanBeCrafted                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCurrentRecipe_Recipe                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCurrentRecipe_Recipe_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCurrentRecipe_Recipe_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_CompletionPercent_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_BufferValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBufforedQuickTimeEventNode* K2Node_CustomEvent_BufforedQuickTimeEvent_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetContent_Content                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetContent_Content_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_CraftingPage_04_C*      K2Node_DynamicCast_AsWid_Crafting_Page_04                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_CraftingPage_04_C*      K2Node_DynamicCast_AsWid_Crafting_Page_04_1                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_CraftingPage_04_C*      K2Node_DynamicCast_AsWid_Crafting_Page_04_2                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetCurrentRecipe_Recipe_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_CraftingPage_04_C*      CallFunc_Create_tab_from_index_Crafting_tab                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPlatformName_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FName                        K2Node_CustomEvent_Recipe                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCraftingRecipe             CallFunc_GetCraftingRecipe_Recipe                                (None)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_RecipeName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSt_SmartphoneText          CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCraftingRecipe             CallFunc_GetCraftingRecipe_Recipe_1                              (None)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UWid_CraftingPage_04_C*      CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSt_SmartphoneText          CallFunc_GetDataTableRowFromName_OutRow_1                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UWid_CraftingResource_C*>K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCurrentRecipe_Recipe_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCraftingMinigameInProgress_InProgress                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCraftingMinigameInProgress_InProgress_1               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCraftingMinigameInProgress_InProgress_2               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsCraftingMinigameInProgress_InProgress_3               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetCurrentRecipe_Recipe_5                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsCraftingMinigameInProgress_InProgress_4               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FInterpTo_Constant_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_CompletionPercent_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_BufferValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBufforedQuickTimeEventNode* K2Node_CustomEvent_BufforedQuickTimeEvent_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class UBufforedQuickTimeEventNode* Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSt_SmartphoneText          CallFunc_GetDataTableRowFromName_OutRow_2                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_CraftingResource_C*     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCurrentRecipe_Recipe_6                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_IsValidTimerHandle_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetCurrentRecipe_Recipe_7                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCraftingRecipe             CallFunc_GetCraftingRecipe_Recipe_2                              (None)
// bool                               CallFunc_K2_IsValidTimerHandle_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Time                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_IsValidTimerHandle_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_CompletionPercent                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_BufferValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBufforedQuickTimeEventNode* K2Node_CustomEvent_BufforedQuickTimeEvent                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSt_SmartphoneText          CallFunc_GetDataTableRowFromName_OutRow_3                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetCurrentRecipe_Recipe_8                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCraftingRecipe             CallFunc_GetCraftingRecipe_Recipe_3                              (None)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// struct FItemEntry                  CallFunc_GetItemData_Data                                        (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// struct FInventoryEntry             K2Node_CustomEvent_OldEntry_1                                    (None)
// struct FInventoryEntry             K2Node_CustomEvent_NewEntry_1                                    (None)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// struct FInventoryEntry             K2Node_CustomEvent_OldEntry                                      (None)
// struct FInventoryEntry             K2Node_CustomEvent_NewEntry                                      (None)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_CraftingPage_04_C*      CallFunc_Create_tab_from_index_Crafting_tab_1                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Count_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMod_Remainder                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FMod_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (None)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class UWid_CraftingResource_C*     CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_CraftingPage_04_C*      CallFunc_Create_tab_from_index_Crafting_tab_2                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_3                         (None)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGMovementState*            CallFunc_SetNewMovementState_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGMovementState*            CallFunc_SetNewMovementState_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LastInputWasFromGamepad_Gamepad                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor, UObjectWrapper)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle_1                           (NoDestructor, UObjectWrapper)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle_2                           (NoDestructor, UObjectWrapper)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FDataTableRowHandle> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// int32                              CallFunc_PostEvent_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSt_SmartphoneText          CallFunc_GetDataTableRowFromName_OutRow_4                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_4                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSt_SmartphoneText          CallFunc_GetDataTableRowFromName_OutRow_5                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_5                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_QTE_C*                  CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSt_SmartphoneText          CallFunc_GetDataTableRowFromName_OutRow_6                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_6                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSt_SmartphoneText          CallFunc_GetDataTableRowFromName_OutRow_7                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_7                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSt_SmartphoneText          CallFunc_GetDataTableRowFromName_OutRow_8                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_8                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBufforedQuickTimeEventNode* CallFunc_PlayBufforedQuickTimeEvent_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 CallFunc_GetCurrentPlatformBrush_Raw_OutBrush                    (None)
// float                              K2Node_CustomEvent_CompletionPercent_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_BufferValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBufforedQuickTimeEventNode* K2Node_CustomEvent_BufforedQuickTimeEvent_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_SetContent_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// struct FSt_SmartphoneText          CallFunc_GetDataTableRowFromName_OutRow_9                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_9                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue_2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_sw_CraftingApp_02_C::ExecuteUbergraph_wid_sw_CraftingApp_02(int32 EntryPoint, int32 CallFunc_Array_Length_ReturnValue, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ Temp_delegate_Variable, bool K2Node_Event_IsDesignTime, class APawn* CallFunc_GetPlayerPawn_ReturnValue, TArray<struct FDataTableRowHandle>& CallFunc_GetKnownTabs_KnownTabs, class ACh_Hero_00_C* K2Node_DynamicCast_AsCh_Hero_00, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Clamp_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 CallFunc_SelectInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_Percent_IntInt_ReturnValue_1, class FName K2Node_CustomEvent_NewRecipe, enum class ECraftingResult K2Node_CustomEvent_CanBeCrafted, int32 CallFunc_SelectInt_ReturnValue_1, class FName CallFunc_GetCurrentRecipe_Recipe, class FName CallFunc_GetCurrentRecipe_Recipe_1, class FName CallFunc_GetCurrentRecipe_Recipe_2, float K2Node_CustomEvent_CompletionPercent_2, float K2Node_CustomEvent_BufferValue_2, class UBufforedQuickTimeEventNode* K2Node_CustomEvent_BufforedQuickTimeEvent_2, class UWidget* CallFunc_GetContent_Content, class UWidget* CallFunc_GetContent_Content_1, class UWid_CraftingPage_04_C* K2Node_DynamicCast_AsWid_Crafting_Page_04, bool K2Node_DynamicCast_bSuccess_1, class UWid_CraftingPage_04_C* K2Node_DynamicCast_AsWid_Crafting_Page_04_1, bool K2Node_DynamicCast_bSuccess_2, class UWid_CraftingPage_04_C* K2Node_DynamicCast_AsWid_Crafting_Page_04_2, bool K2Node_DynamicCast_bSuccess_3, class FName CallFunc_GetCurrentRecipe_Recipe_3, class UWid_CraftingPage_04_C* CallFunc_Create_tab_from_index_Crafting_tab, const class FString& CallFunc_GetPlatformName_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, bool K2Node_SwitchString_CmpSuccess, class FText CallFunc_Conv_StringToText_ReturnValue, class FName K2Node_CustomEvent_Recipe, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FCraftingRecipe& CallFunc_GetCraftingRecipe_Recipe, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue_4, class FName K2Node_CustomEvent_RecipeName, const struct FSt_SmartphoneText& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FCraftingRecipe& CallFunc_GetCraftingRecipe_Recipe_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UWid_CraftingPage_04_C* CallFunc_Create_ReturnValue, const struct FSt_SmartphoneText& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, TArray<class UWid_CraftingResource_C*>& K2Node_MakeArray_Array, int32 CallFunc_Array_Length_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class FName CallFunc_GetCurrentRecipe_Recipe_4, bool CallFunc_IsCraftingMinigameInProgress_InProgress, bool CallFunc_IsCraftingMinigameInProgress_InProgress_1, bool CallFunc_IsCraftingMinigameInProgress_InProgress_2, bool CallFunc_IsCraftingMinigameInProgress_InProgress_3, class FName CallFunc_GetCurrentRecipe_Recipe_5, bool CallFunc_IsCraftingMinigameInProgress_InProgress_4, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_FInterpTo_Constant_ReturnValue, int32 Temp_int_Array_Index_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float K2Node_CustomEvent_CompletionPercent_3, float K2Node_CustomEvent_BufferValue_3, class UBufforedQuickTimeEventNode* K2Node_CustomEvent_BufforedQuickTimeEvent_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UBufforedQuickTimeEventNode* Temp_object_Variable, const struct FSt_SmartphoneText& CallFunc_GetDataTableRowFromName_OutRow_2, bool CallFunc_GetDataTableRowFromName_ReturnValue_2, int32 Temp_int_Array_Index_Variable_1, class UWid_CraftingResource_C* CallFunc_Array_Get_Item, class FName CallFunc_GetCurrentRecipe_Recipe_6, bool CallFunc_IsValid_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, class FName CallFunc_GetCurrentRecipe_Recipe_7, const struct FCraftingRecipe& CallFunc_GetCraftingRecipe_Recipe_2, bool CallFunc_K2_IsValidTimerHandle_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, float K2Node_CustomEvent_Time, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue_2, float K2Node_CustomEvent_CompletionPercent, float K2Node_CustomEvent_BufferValue, class UBufforedQuickTimeEventNode* K2Node_CustomEvent_BufforedQuickTimeEvent, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const struct FSt_SmartphoneText& CallFunc_GetDataTableRowFromName_OutRow_3, bool CallFunc_GetDataTableRowFromName_ReturnValue_3, class FName CallFunc_GetCurrentRecipe_Recipe_8, const struct FCraftingRecipe& CallFunc_GetCraftingRecipe_Recipe_3, const class FString& CallFunc_Conv_IntToString_ReturnValue, const struct FItemEntry& CallFunc_GetItemData_Data, const class FString& CallFunc_Conv_TextToString_ReturnValue, const struct FInventoryEntry& K2Node_CustomEvent_OldEntry_1, const struct FInventoryEntry& K2Node_CustomEvent_NewEntry_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const struct FInventoryEntry& K2Node_CustomEvent_OldEntry, const struct FInventoryEntry& K2Node_CustomEvent_NewEntry, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_5, class FName CallFunc_Array_Get_Item_1, class UWid_CraftingPage_04_C* CallFunc_Create_tab_from_index_Crafting_tab_1, float CallFunc_Count_ReturnValue, float CallFunc_FMod_Remainder, int32 CallFunc_FMod_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_2, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class UWid_CraftingResource_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_1, class UWid_CraftingPage_04_C* CallFunc_Create_tab_from_index_Crafting_tab_2, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_1, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue_3, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, class ACGMovementState* CallFunc_SetNewMovementState_ReturnValue, class ACGMovementState* CallFunc_SetNewMovementState_ReturnValue_1, bool Temp_bool_IsClosed_Variable, bool CallFunc_LastInputWasFromGamepad_Gamepad, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_1, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, TArray<struct FDataTableRowHandle>& K2Node_MakeArray_Array_1, int32 CallFunc_PostEvent_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class APawn* CallFunc_GetPlayerPawn_ReturnValue_1, const struct FSt_SmartphoneText& CallFunc_GetDataTableRowFromName_OutRow_4, bool CallFunc_GetDataTableRowFromName_ReturnValue_4, class APlayerController* CallFunc_GetPlayerController_ReturnValue_3, class APawn* CallFunc_GetPlayerPawn_ReturnValue_2, const struct FSt_SmartphoneText& CallFunc_GetDataTableRowFromName_OutRow_5, bool CallFunc_GetDataTableRowFromName_ReturnValue_5, int32 CallFunc_Array_Length_ReturnValue_4, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, class UWid_QTE_C* CallFunc_Create_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, const struct FSt_SmartphoneText& CallFunc_GetDataTableRowFromName_OutRow_6, bool CallFunc_GetDataTableRowFromName_ReturnValue_6, const struct FSt_SmartphoneText& CallFunc_GetDataTableRowFromName_OutRow_7, bool CallFunc_GetDataTableRowFromName_ReturnValue_7, const struct FSt_SmartphoneText& CallFunc_GetDataTableRowFromName_OutRow_8, bool CallFunc_GetDataTableRowFromName_ReturnValue_8, class UBufforedQuickTimeEventNode* CallFunc_PlayBufforedQuickTimeEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, const struct FSlateBrush& CallFunc_GetCurrentPlatformBrush_Raw_OutBrush, float K2Node_CustomEvent_CompletionPercent_1, float K2Node_CustomEvent_BufferValue_1, class UBufforedQuickTimeEventNode* K2Node_CustomEvent_BufforedQuickTimeEvent_1, class UPanelSlot* CallFunc_SetContent_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FSt_SmartphoneText& CallFunc_GetDataTableRowFromName_OutRow_9, bool CallFunc_GetDataTableRowFromName_ReturnValue_9, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue_6, int32 CallFunc_Clamp_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_CraftingApp_02_C", "ExecuteUbergraph_wid_sw_CraftingApp_02");

	Params::UWid_sw_CraftingApp_02_C_ExecuteUbergraph_wid_sw_CraftingApp_02_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetPlayerPawn_ReturnValue = CallFunc_GetPlayerPawn_ReturnValue;
	Parms.CallFunc_GetKnownTabs_KnownTabs = CallFunc_GetKnownTabs_KnownTabs;
	Parms.K2Node_DynamicCast_AsCh_Hero_00 = K2Node_DynamicCast_AsCh_Hero_00;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue_1 = CallFunc_Clamp_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_Percent_IntInt_ReturnValue_1 = CallFunc_Percent_IntInt_ReturnValue_1;
	Parms.K2Node_CustomEvent_NewRecipe = K2Node_CustomEvent_NewRecipe;
	Parms.K2Node_CustomEvent_CanBeCrafted = K2Node_CustomEvent_CanBeCrafted;
	Parms.CallFunc_SelectInt_ReturnValue_1 = CallFunc_SelectInt_ReturnValue_1;
	Parms.CallFunc_GetCurrentRecipe_Recipe = CallFunc_GetCurrentRecipe_Recipe;
	Parms.CallFunc_GetCurrentRecipe_Recipe_1 = CallFunc_GetCurrentRecipe_Recipe_1;
	Parms.CallFunc_GetCurrentRecipe_Recipe_2 = CallFunc_GetCurrentRecipe_Recipe_2;
	Parms.K2Node_CustomEvent_CompletionPercent_2 = K2Node_CustomEvent_CompletionPercent_2;
	Parms.K2Node_CustomEvent_BufferValue_2 = K2Node_CustomEvent_BufferValue_2;
	Parms.K2Node_CustomEvent_BufforedQuickTimeEvent_2 = K2Node_CustomEvent_BufforedQuickTimeEvent_2;
	Parms.CallFunc_GetContent_Content = CallFunc_GetContent_Content;
	Parms.CallFunc_GetContent_Content_1 = CallFunc_GetContent_Content_1;
	Parms.K2Node_DynamicCast_AsWid_Crafting_Page_04 = K2Node_DynamicCast_AsWid_Crafting_Page_04;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsWid_Crafting_Page_04_1 = K2Node_DynamicCast_AsWid_Crafting_Page_04_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsWid_Crafting_Page_04_2 = K2Node_DynamicCast_AsWid_Crafting_Page_04_2;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetCurrentRecipe_Recipe_3 = CallFunc_GetCurrentRecipe_Recipe_3;
	Parms.CallFunc_Create_tab_from_index_Crafting_tab = CallFunc_Create_tab_from_index_Crafting_tab;
	Parms.CallFunc_GetPlatformName_ReturnValue = CallFunc_GetPlatformName_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_CustomEvent_Recipe = K2Node_CustomEvent_Recipe;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetCraftingRecipe_Recipe = CallFunc_GetCraftingRecipe_Recipe;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.K2Node_CustomEvent_RecipeName = K2Node_CustomEvent_RecipeName;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_GetCraftingRecipe_Recipe_1 = CallFunc_GetCraftingRecipe_Recipe_1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_GetCurrentRecipe_Recipe_4 = CallFunc_GetCurrentRecipe_Recipe_4;
	Parms.CallFunc_IsCraftingMinigameInProgress_InProgress = CallFunc_IsCraftingMinigameInProgress_InProgress;
	Parms.CallFunc_IsCraftingMinigameInProgress_InProgress_1 = CallFunc_IsCraftingMinigameInProgress_InProgress_1;
	Parms.CallFunc_IsCraftingMinigameInProgress_InProgress_2 = CallFunc_IsCraftingMinigameInProgress_InProgress_2;
	Parms.CallFunc_IsCraftingMinigameInProgress_InProgress_3 = CallFunc_IsCraftingMinigameInProgress_InProgress_3;
	Parms.CallFunc_GetCurrentRecipe_Recipe_5 = CallFunc_GetCurrentRecipe_Recipe_5;
	Parms.CallFunc_IsCraftingMinigameInProgress_InProgress_4 = CallFunc_IsCraftingMinigameInProgress_InProgress_4;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_FInterpTo_Constant_ReturnValue = CallFunc_FInterpTo_Constant_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.K2Node_CustomEvent_CompletionPercent_3 = K2Node_CustomEvent_CompletionPercent_3;
	Parms.K2Node_CustomEvent_BufferValue_3 = K2Node_CustomEvent_BufferValue_3;
	Parms.K2Node_CustomEvent_BufforedQuickTimeEvent_3 = K2Node_CustomEvent_BufforedQuickTimeEvent_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_2 = CallFunc_GetDataTableRowFromName_OutRow_2;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_2 = CallFunc_GetDataTableRowFromName_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetCurrentRecipe_Recipe_6 = CallFunc_GetCurrentRecipe_Recipe_6;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_IsValidTimerHandle_ReturnValue = CallFunc_K2_IsValidTimerHandle_ReturnValue;
	Parms.CallFunc_GetCurrentRecipe_Recipe_7 = CallFunc_GetCurrentRecipe_Recipe_7;
	Parms.CallFunc_GetCraftingRecipe_Recipe_2 = CallFunc_GetCraftingRecipe_Recipe_2;
	Parms.CallFunc_K2_IsValidTimerHandle_ReturnValue_1 = CallFunc_K2_IsValidTimerHandle_ReturnValue_1;
	Parms.CallFunc_GetPlayerController_ReturnValue_1 = CallFunc_GetPlayerController_ReturnValue_1;
	Parms.K2Node_CustomEvent_Time = K2Node_CustomEvent_Time;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_K2_IsValidTimerHandle_ReturnValue_2 = CallFunc_K2_IsValidTimerHandle_ReturnValue_2;
	Parms.K2Node_CustomEvent_CompletionPercent = K2Node_CustomEvent_CompletionPercent;
	Parms.K2Node_CustomEvent_BufferValue = K2Node_CustomEvent_BufferValue;
	Parms.K2Node_CustomEvent_BufforedQuickTimeEvent = K2Node_CustomEvent_BufforedQuickTimeEvent;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_1 = CallFunc_Subtract_FloatFloat_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_3 = CallFunc_GetDataTableRowFromName_OutRow_3;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_3 = CallFunc_GetDataTableRowFromName_ReturnValue_3;
	Parms.CallFunc_GetCurrentRecipe_Recipe_8 = CallFunc_GetCurrentRecipe_Recipe_8;
	Parms.CallFunc_GetCraftingRecipe_Recipe_3 = CallFunc_GetCraftingRecipe_Recipe_3;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_GetItemData_Data = CallFunc_GetItemData_Data;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.K2Node_CustomEvent_OldEntry_1 = K2Node_CustomEvent_OldEntry_1;
	Parms.K2Node_CustomEvent_NewEntry_1 = K2Node_CustomEvent_NewEntry_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.K2Node_CustomEvent_OldEntry = K2Node_CustomEvent_OldEntry;
	Parms.K2Node_CustomEvent_NewEntry = K2Node_CustomEvent_NewEntry;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Create_tab_from_index_Crafting_tab_1 = CallFunc_Create_tab_from_index_Crafting_tab_1;
	Parms.CallFunc_Count_ReturnValue = CallFunc_Count_ReturnValue;
	Parms.CallFunc_FMod_Remainder = CallFunc_FMod_Remainder;
	Parms.CallFunc_FMod_ReturnValue = CallFunc_FMod_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1 = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Create_tab_from_index_Crafting_tab_2 = CallFunc_Create_tab_from_index_Crafting_tab_2;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2 = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2;
	Parms.CallFunc_Conv_StringToText_ReturnValue_3 = CallFunc_Conv_StringToText_ReturnValue_3;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1;
	Parms.CallFunc_SetNewMovementState_ReturnValue = CallFunc_SetNewMovementState_ReturnValue;
	Parms.CallFunc_SetNewMovementState_ReturnValue_1 = CallFunc_SetNewMovementState_ReturnValue_1;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_LastInputWasFromGamepad_Gamepad = CallFunc_LastInputWasFromGamepad_Gamepad;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.K2Node_MakeStruct_DataTableRowHandle_1 = K2Node_MakeStruct_DataTableRowHandle_1;
	Parms.K2Node_MakeStruct_DataTableRowHandle_2 = K2Node_MakeStruct_DataTableRowHandle_2;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_PostEvent_ReturnValue = CallFunc_PostEvent_ReturnValue;
	Parms.CallFunc_GetPlayerController_ReturnValue_2 = CallFunc_GetPlayerController_ReturnValue_2;
	Parms.CallFunc_GetPlayerPawn_ReturnValue_1 = CallFunc_GetPlayerPawn_ReturnValue_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_4 = CallFunc_GetDataTableRowFromName_OutRow_4;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_4 = CallFunc_GetDataTableRowFromName_ReturnValue_4;
	Parms.CallFunc_GetPlayerController_ReturnValue_3 = CallFunc_GetPlayerController_ReturnValue_3;
	Parms.CallFunc_GetPlayerPawn_ReturnValue_2 = CallFunc_GetPlayerPawn_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_5 = CallFunc_GetDataTableRowFromName_OutRow_5;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_5 = CallFunc_GetDataTableRowFromName_ReturnValue_5;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_1 = CallFunc_GetOwningPlayer_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_6 = CallFunc_GetDataTableRowFromName_OutRow_6;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_6 = CallFunc_GetDataTableRowFromName_ReturnValue_6;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_7 = CallFunc_GetDataTableRowFromName_OutRow_7;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_7 = CallFunc_GetDataTableRowFromName_ReturnValue_7;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_8 = CallFunc_GetDataTableRowFromName_OutRow_8;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_8 = CallFunc_GetDataTableRowFromName_ReturnValue_8;
	Parms.CallFunc_PlayBufforedQuickTimeEvent_ReturnValue = CallFunc_PlayBufforedQuickTimeEvent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetCurrentPlatformBrush_Raw_OutBrush = CallFunc_GetCurrentPlatformBrush_Raw_OutBrush;
	Parms.K2Node_CustomEvent_CompletionPercent_1 = K2Node_CustomEvent_CompletionPercent_1;
	Parms.K2Node_CustomEvent_BufferValue_1 = K2Node_CustomEvent_BufferValue_1;
	Parms.K2Node_CustomEvent_BufforedQuickTimeEvent_1 = K2Node_CustomEvent_BufforedQuickTimeEvent_1;
	Parms.CallFunc_SetContent_ReturnValue = CallFunc_SetContent_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_9 = CallFunc_GetDataTableRowFromName_OutRow_9;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_9 = CallFunc_GetDataTableRowFromName_ReturnValue_9;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue_6 = CallFunc_Add_IntInt_ReturnValue_6;
	Parms.CallFunc_Clamp_ReturnValue_2 = CallFunc_Clamp_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

}

}


