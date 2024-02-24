#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_CraftingPage_04.wid_CraftingPage_04_C
// (None)

class UClass* UWid_CraftingPage_04_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_CraftingPage_04_C");

	return Clss;
}


// wid_CraftingPage_04_C wid_CraftingPage_04.Default__wid_CraftingPage_04_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_CraftingPage_04_C* UWid_CraftingPage_04_C::GetDefaultObj()
{
	static class UWid_CraftingPage_04_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_CraftingPage_04_C*>(UWid_CraftingPage_04_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_CraftingPage_04.wid_CraftingPage_04_C.GetCurrentRecipe
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FName                        RecipeName                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetSelectedWidget_Widget                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_CraftingMenuEntry_03_C* K2Node_DynamicCast_AsWid_Crafting_Menu_Entry_03                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_CraftingPage_04_C::GetCurrentRecipe(class FName* RecipeName, class UWidget* CallFunc_GetSelectedWidget_Widget, class UWid_CraftingMenuEntry_03_C* K2Node_DynamicCast_AsWid_Crafting_Menu_Entry_03, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CraftingPage_04_C", "GetCurrentRecipe");

	Params::UWid_CraftingPage_04_C_GetCurrentRecipe_Params Parms{};

	Parms.CallFunc_GetSelectedWidget_Widget = CallFunc_GetSelectedWidget_Widget;
	Parms.K2Node_DynamicCast_AsWid_Crafting_Menu_Entry_03 = K2Node_DynamicCast_AsWid_Crafting_Menu_Entry_03;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (RecipeName != nullptr)
		*RecipeName = Parms.RecipeName;

}


// Function wid_CraftingPage_04.wid_CraftingPage_04_C.GetKnownRecipesByTab
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECraftingCategory       Tab                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                Recipes                                                          (Parm, OutParm)
// TArray<class FName>                Result                                                           (Edit, BlueprintVisible)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCGGameInstance_C*           CallFunc_GetCGGameInstance_AsCGGame_Instance_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetKnownRecipes_KnownRecipes                            (ReferenceParm)
// TArray<class FName>                CallFunc_GetKnownRecipes_KnownRecipes_1                          (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCraftingRecipe             CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCraftingRecipe             CallFunc_GetDataTableRowFromName_OutRow_1                        (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetDataTableRowNames_OutRowNames                        (ReferenceParm)
// class FName                        CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCraftingRecipe             CallFunc_GetCraftingRecipe_Recipe                                (None)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_CraftingPage_04_C::GetKnownRecipesByTab(enum class ECraftingCategory Tab, TArray<class FName>* Recipes, const TArray<class FName>& Result, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, TArray<class FName>& CallFunc_GetKnownRecipes_KnownRecipes, TArray<class FName>& CallFunc_GetKnownRecipes_KnownRecipes_1, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, const struct FCraftingRecipe& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_2, class FName CallFunc_Array_Get_Item_1, const struct FCraftingRecipe& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, class FName CallFunc_Array_Get_Item_2, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, const struct FCraftingRecipe& CallFunc_GetCraftingRecipe_Recipe, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Array_AddUnique_ReturnValue_1, int32 CallFunc_Array_AddUnique_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CraftingPage_04_C", "GetKnownRecipesByTab");

	Params::UWid_CraftingPage_04_C_GetKnownRecipesByTab_Params Parms{};

	Parms.Tab = Tab;
	Parms.Result = Result;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance = CallFunc_GetCGGameInstance_AsCGGame_Instance;
	Parms.CallFunc_GetCGGameInstance_AsCGGame_Instance_1 = CallFunc_GetCGGameInstance_AsCGGame_Instance_1;
	Parms.CallFunc_GetKnownRecipes_KnownRecipes = CallFunc_GetKnownRecipes_KnownRecipes;
	Parms.CallFunc_GetKnownRecipes_KnownRecipes_1 = CallFunc_GetKnownRecipes_KnownRecipes_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowNames_OutRowNames = CallFunc_GetDataTableRowNames_OutRowNames;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_GetCraftingRecipe_Recipe = CallFunc_GetCraftingRecipe_Recipe;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_AddUnique_ReturnValue_1 = CallFunc_Array_AddUnique_ReturnValue_1;
	Parms.CallFunc_Array_AddUnique_ReturnValue_2 = CallFunc_Array_AddUnique_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Recipes != nullptr)
		*Recipes = std::move(Parms.Recipes);

}


// Function wid_CraftingPage_04.wid_CraftingPage_04_C.CreateRecipes
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ItemCount                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CanBeCrafted                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_CraftingMenuEntry_03_C* CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECraftingResult         CallFunc_CanCraftFromRecipe_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetKnownRecipesByTab_Recipes                            (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCraftingRecipe             CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECraftingResult         CallFunc_CanCraftFromRecipe_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Count_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_CraftingPage_04_C::CreateRecipes(int32 ItemCount, bool CanBeCrafted, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UWid_CraftingMenuEntry_03_C* CallFunc_Create_ReturnValue, enum class ECraftingResult CallFunc_CanCraftFromRecipe_ReturnValue, TArray<class FName>& CallFunc_GetKnownRecipesByTab_Recipes, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FCraftingRecipe& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, enum class ECraftingResult CallFunc_CanCraftFromRecipe_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, float CallFunc_Count_ReturnValue, int32 CallFunc_FTrunc_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CraftingPage_04_C", "CreateRecipes");

	Params::UWid_CraftingPage_04_C_CreateRecipes_Params Parms{};

	Parms.ItemCount = ItemCount;
	Parms.CanBeCrafted = CanBeCrafted;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_CanCraftFromRecipe_ReturnValue = CallFunc_CanCraftFromRecipe_ReturnValue;
	Parms.CallFunc_GetKnownRecipesByTab_Recipes = CallFunc_GetKnownRecipesByTab_Recipes;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_CanCraftFromRecipe_ReturnValue_1 = CallFunc_CanCraftFromRecipe_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Count_ReturnValue = CallFunc_Count_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CraftingPage_04.wid_CraftingPage_04_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_CraftingPage_04_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CraftingPage_04_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_CraftingPage_04.wid_CraftingPage_04_C.Next
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_CraftingPage_04_C::Next()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CraftingPage_04_C", "Next");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_CraftingPage_04.wid_CraftingPage_04_C.Previous
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_CraftingPage_04_C::Previous()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CraftingPage_04_C", "Previous");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_CraftingPage_04.wid_CraftingPage_04_C.Craft current
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_CraftingPage_04_C::Craft_current()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CraftingPage_04_C", "Craft current");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_CraftingPage_04.wid_CraftingPage_04_C.UpdateRecipes
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_CraftingPage_04_C::UpdateRecipes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CraftingPage_04_C", "UpdateRecipes");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_CraftingPage_04.wid_CraftingPage_04_C.StartCraftingMinigame
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_CraftingPage_04_C::StartCraftingMinigame()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CraftingPage_04_C", "StartCraftingMinigame");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_CraftingPage_04.wid_CraftingPage_04_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_CraftingPage_04_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CraftingPage_04_C", "PreConstruct");

	Params::UWid_CraftingPage_04_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CraftingPage_04.wid_CraftingPage_04_C.RecipeDeselected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_CraftingPage_04_C::RecipeDeselected(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CraftingPage_04_C", "RecipeDeselected");

	Params::UWid_CraftingPage_04_C_RecipeDeselected_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CraftingPage_04.wid_CraftingPage_04_C.RecipeSelected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_CraftingPage_04_C::RecipeSelected(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CraftingPage_04_C", "RecipeSelected");

	Params::UWid_CraftingPage_04_C_RecipeSelected_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CraftingPage_04.wid_CraftingPage_04_C.BndEvt__ScrollingList_K2Node_ComponentBoundEvent_12_Selected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_CraftingPage_04_C::BndEvt__ScrollingList_K2Node_ComponentBoundEvent_12_Selected__DelegateSignature(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CraftingPage_04_C", "BndEvt__ScrollingList_K2Node_ComponentBoundEvent_12_Selected__DelegateSignature");

	Params::UWid_CraftingPage_04_C_BndEvt__ScrollingList_K2Node_ComponentBoundEvent_12_Selected__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CraftingPage_04.wid_CraftingPage_04_C.BndEvt__ScrollingList_K2Node_ComponentBoundEvent_16_Deselected__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_CraftingPage_04_C::BndEvt__ScrollingList_K2Node_ComponentBoundEvent_16_Deselected__DelegateSignature(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CraftingPage_04_C", "BndEvt__ScrollingList_K2Node_ComponentBoundEvent_16_Deselected__DelegateSignature");

	Params::UWid_CraftingPage_04_C_BndEvt__ScrollingList_K2Node_ComponentBoundEvent_16_Deselected__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CraftingPage_04.wid_CraftingPage_04_C.ExecuteUbergraph_wid_CraftingPage_04
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetPlayerPawn_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               K2Node_DynamicCast_AsCh_Hero_00                                  (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     K2Node_CustomEvent_Widget_1                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_CustomEvent_Widget                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCurrentRecipe_RecipeName                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCurrentRecipe_RecipeName_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECraftingResult         CallFunc_CanCraftFromRecipe_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetCurrentRecipe_RecipeName_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECraftingResult         CallFunc_CanCraftFromRecipe_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UWidget*>             CallFunc_GetChildren_Children                                    (ReferenceParm, ContainsInstancedReference)
// class UWidget*                     K2Node_ComponentBoundEvent_Widget_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_CraftingMenuEntry_03_C* K2Node_DynamicCast_AsWid_Crafting_Menu_Entry_03                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWid_CraftingMenuEntry_03_C* K2Node_DynamicCast_AsWid_Crafting_Menu_Entry_03_1                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECraftingResult         CallFunc_CanCraftFromRecipe_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     K2Node_ComponentBoundEvent_Widget                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_CraftingMenuEntry_03_C* K2Node_DynamicCast_AsWid_Crafting_Menu_Entry_03_2                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECraftingResult         CallFunc_CanCraftFromRecipe_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_CraftingPage_04_C::ExecuteUbergraph_wid_CraftingPage_04(int32 EntryPoint, class APawn* CallFunc_GetPlayerPawn_ReturnValue, class ACh_Hero_00_C* K2Node_DynamicCast_AsCh_Hero_00, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_IsDesignTime, class UWidget* K2Node_CustomEvent_Widget_1, class UWidget* K2Node_CustomEvent_Widget, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class FName CallFunc_GetCurrentRecipe_RecipeName, class FName CallFunc_GetCurrentRecipe_RecipeName_1, enum class ECraftingResult CallFunc_CanCraftFromRecipe_ReturnValue, class FName CallFunc_GetCurrentRecipe_RecipeName_2, enum class ECraftingResult CallFunc_CanCraftFromRecipe_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TArray<class UWidget*>& CallFunc_GetChildren_Children, class UWidget* K2Node_ComponentBoundEvent_Widget_1, class UWidget* CallFunc_Array_Get_Item, class UWid_CraftingMenuEntry_03_C* K2Node_DynamicCast_AsWid_Crafting_Menu_Entry_03, bool K2Node_DynamicCast_bSuccess_1, class UWid_CraftingMenuEntry_03_C* K2Node_DynamicCast_AsWid_Crafting_Menu_Entry_03_1, bool K2Node_DynamicCast_bSuccess_2, enum class ECraftingResult CallFunc_CanCraftFromRecipe_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UWidget* K2Node_ComponentBoundEvent_Widget, class UWid_CraftingMenuEntry_03_C* K2Node_DynamicCast_AsWid_Crafting_Menu_Entry_03_2, bool K2Node_DynamicCast_bSuccess_3, enum class ECraftingResult CallFunc_CanCraftFromRecipe_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CraftingPage_04_C", "ExecuteUbergraph_wid_CraftingPage_04");

	Params::UWid_CraftingPage_04_C_ExecuteUbergraph_wid_CraftingPage_04_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPlayerPawn_ReturnValue = CallFunc_GetPlayerPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsCh_Hero_00 = K2Node_DynamicCast_AsCh_Hero_00;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_Widget_1 = K2Node_CustomEvent_Widget_1;
	Parms.K2Node_CustomEvent_Widget = K2Node_CustomEvent_Widget;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetCurrentRecipe_RecipeName = CallFunc_GetCurrentRecipe_RecipeName;
	Parms.CallFunc_GetCurrentRecipe_RecipeName_1 = CallFunc_GetCurrentRecipe_RecipeName_1;
	Parms.CallFunc_CanCraftFromRecipe_ReturnValue = CallFunc_CanCraftFromRecipe_ReturnValue;
	Parms.CallFunc_GetCurrentRecipe_RecipeName_2 = CallFunc_GetCurrentRecipe_RecipeName_2;
	Parms.CallFunc_CanCraftFromRecipe_ReturnValue_1 = CallFunc_CanCraftFromRecipe_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetChildren_Children = CallFunc_GetChildren_Children;
	Parms.K2Node_ComponentBoundEvent_Widget_1 = K2Node_ComponentBoundEvent_Widget_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_DynamicCast_AsWid_Crafting_Menu_Entry_03 = K2Node_DynamicCast_AsWid_Crafting_Menu_Entry_03;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsWid_Crafting_Menu_Entry_03_1 = K2Node_DynamicCast_AsWid_Crafting_Menu_Entry_03_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_CanCraftFromRecipe_ReturnValue_2 = CallFunc_CanCraftFromRecipe_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Widget = K2Node_ComponentBoundEvent_Widget;
	Parms.K2Node_DynamicCast_AsWid_Crafting_Menu_Entry_03_2 = K2Node_DynamicCast_AsWid_Crafting_Menu_Entry_03_2;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_CanCraftFromRecipe_ReturnValue_3 = CallFunc_CanCraftFromRecipe_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_CraftingPage_04.wid_CraftingPage_04_C.ChangedSelection__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NewRecipe                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECraftingResult         CanBeCrafted_                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_CraftingPage_04_C::ChangedSelection__DelegateSignature(class FName NewRecipe, enum class ECraftingResult CanBeCrafted_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_CraftingPage_04_C", "ChangedSelection__DelegateSignature");

	Params::UWid_CraftingPage_04_C_ChangedSelection__DelegateSignature_Params Parms{};

	Parms.NewRecipe = NewRecipe;
	Parms.CanBeCrafted_ = CanBeCrafted_;

	UObject::ProcessEvent(Func, &Parms);

}

}


