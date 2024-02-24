#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_CraftingPreview.UMG_CraftingPreview_C
// (None)

class UClass* UUMG_CraftingPreview_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_CraftingPreview_C");

	return Clss;
}


// UMG_CraftingPreview_C UMG_CraftingPreview.Default__UMG_CraftingPreview_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_CraftingPreview_C* UUMG_CraftingPreview_C::GetDefaultObj()
{
	static class UUMG_CraftingPreview_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_CraftingPreview_C*>(UUMG_CraftingPreview_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_CraftingPreview.UMG_CraftingPreview_C.Recipe
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FProcessorRecipesRowHandle  Recipe                                                           (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void UUMG_CraftingPreview_C::Recipe(struct FProcessorRecipesRowHandle* Recipe)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CraftingPreview_C", "Recipe");

	Params::UUMG_CraftingPreview_C_Recipe_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Recipe != nullptr)
		*Recipe = std::move(Parms.Recipe);

}


// Function UMG_CraftingPreview.UMG_CraftingPreview_C.GetRecipe
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProcessorRecipesRowHandle  Recipe                                                           (Parm, OutParm, NoDestructor, HasGetValueTypeHash)

void UUMG_CraftingPreview_C::GetRecipe(struct FProcessorRecipesRowHandle* Recipe)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CraftingPreview_C", "GetRecipe");

	Params::UUMG_CraftingPreview_C_GetRecipe_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Recipe != nullptr)
		*Recipe = std::move(Parms.Recipe);

}


// Function UMG_CraftingPreview.UMG_CraftingPreview_C.Set Recipe
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProcessorRecipesRowHandle  Recipe                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FProcessorRecipe            CallFunc_GetProcessorRecipesStruct_ProcessorRecipes              (ContainsInstancedReference)
// enum class EValid                  CallFunc_GetProcessorRecipesStruct_Paths                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCraftingOutput             CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UIcarusDataTable*            CallFunc_GetDataTable_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_GetItemTemplateStruct_ItemTemplate                      (ContainsInstancedReference)
// enum class EValid                  CallFunc_GetItemTemplateStruct_Paths                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemableData               CallFunc_GetItemableData_ItemableData                            (None)
// enum class EDataValid              CallFunc_GetItemableData_Paths                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)

void UUMG_CraftingPreview_C::Set_Recipe(const struct FProcessorRecipesRowHandle& Recipe, const struct FProcessorRecipe& CallFunc_GetProcessorRecipesStruct_ProcessorRecipes, enum class EValid CallFunc_GetProcessorRecipesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FCraftingOutput& CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue_1, class UIcarusDataTable* CallFunc_GetDataTable_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FItemData& CallFunc_GetItemTemplateStruct_ItemTemplate, enum class EValid CallFunc_GetItemTemplateStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, const struct FItemableData& CallFunc_GetItemableData_ItemableData, enum class EDataValid CallFunc_GetItemableData_Paths, bool K2Node_SwitchEnum_CmpSuccess_2, class FText CallFunc_TextToUpper_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CraftingPreview_C", "Set Recipe");

	Params::UUMG_CraftingPreview_C_Set_Recipe_Params Parms{};

	Parms.Recipe = Recipe;
	Parms.CallFunc_GetProcessorRecipesStruct_ProcessorRecipes = CallFunc_GetProcessorRecipesStruct_ProcessorRecipes;
	Parms.CallFunc_GetProcessorRecipesStruct_Paths = CallFunc_GetProcessorRecipesStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_1 = CallFunc_Array_IsValidIndex_ReturnValue_1;
	Parms.CallFunc_GetDataTable_ReturnValue = CallFunc_GetDataTable_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetItemTemplateStruct_ItemTemplate = CallFunc_GetItemTemplateStruct_ItemTemplate;
	Parms.CallFunc_GetItemTemplateStruct_Paths = CallFunc_GetItemTemplateStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetItemableData_ItemableData = CallFunc_GetItemableData_ItemableData;
	Parms.CallFunc_GetItemableData_Paths = CallFunc_GetItemableData_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CraftingPreview.UMG_CraftingPreview_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_CraftingPreview_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CraftingPreview_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_CraftingPreview.UMG_CraftingPreview_C.RecipeClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FProcessorRecipesRowHandle  Recipe                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UUMG_CraftingPreview_C::RecipeClicked(const struct FProcessorRecipesRowHandle& Recipe)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CraftingPreview_C", "RecipeClicked");

	Params::UUMG_CraftingPreview_C_RecipeClicked_Params Parms{};

	Parms.Recipe = Recipe;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CraftingPreview.UMG_CraftingPreview_C.ExecuteUbergraph_UMG_CraftingPreview
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FProcessorRecipesRowHandle  K2Node_CustomEvent_Recipe                                        (NoDestructor, HasGetValueTypeHash)

void UUMG_CraftingPreview_C::ExecuteUbergraph_UMG_CraftingPreview(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FProcessorRecipesRowHandle& K2Node_CustomEvent_Recipe)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CraftingPreview_C", "ExecuteUbergraph_UMG_CraftingPreview");

	Params::UUMG_CraftingPreview_C_ExecuteUbergraph_UMG_CraftingPreview_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_Recipe = K2Node_CustomEvent_Recipe;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_CraftingPreview.UMG_CraftingPreview_C.Clicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_CraftingPreview_C::Clicked__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_CraftingPreview_C", "Clicked__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


