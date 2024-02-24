#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_RecipeElement.UMG_RecipeElement_C
// (None)

class UClass* UUMG_RecipeElement_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_RecipeElement_C");

	return Clss;
}


// UMG_RecipeElement_C UMG_RecipeElement.Default__UMG_RecipeElement_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_RecipeElement_C* UUMG_RecipeElement_C::GetDefaultObj()
{
	static class UUMG_RecipeElement_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_RecipeElement_C*>(UUMG_RecipeElement_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_RecipeElement.UMG_RecipeElement_C.Get Alteration Preview
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FItemData                   Item                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// bool                               Custom                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAlterationsEnum>    CallFunc_GetCraftingModificationAlterations_ReturnValue          (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_RecipeElement_C::Get_Alteration_Preview(const struct FItemData& Item, bool* Custom, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, TArray<struct FAlterationsEnum>& CallFunc_GetCraftingModificationAlterations_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RecipeElement_C", "Get Alteration Preview");

	Params::UUMG_RecipeElement_C_Get_Alteration_Preview_Params Parms{};

	Parms.Item = Item;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_GetCraftingModificationAlterations_ReturnValue = CallFunc_GetCraftingModificationAlterations_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Custom != nullptr)
		*Custom = Parms.Custom;

}


// Function UMG_RecipeElement.UMG_RecipeElement_C.GetOverlay
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOverlay*                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UOverlay* UUMG_RecipeElement_C::GetOverlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RecipeElement_C", "GetOverlay");

	Params::UUMG_RecipeElement_C_GetOverlay_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_RecipeElement.UMG_RecipeElement_C.GetHoverCornerWidget
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UOverlay*                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UOverlay* UUMG_RecipeElement_C::GetHoverCornerWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RecipeElement_C", "GetHoverCornerWidget");

	Params::UUMG_RecipeElement_C_GetHoverCornerWidget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_RecipeElement.UMG_RecipeElement_C.SetState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Valid                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_RecipeElement_C::SetState(bool Valid, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RecipeElement_C", "SetState");

	Params::UUMG_RecipeElement_C_SetState_Params Parms{};

	Parms.Valid = Valid;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_RecipeElement.UMG_RecipeElement_C.InitialiseIcons
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_wildcard_Variable                                           (HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   Temp_wildcard_Variable_1                                         (ContainsInstancedReference)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Get_Alteration_Preview_Custom                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemRanksEnum              CallFunc_IntToStruct_ReturnValue                                 (HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   CallFunc_Get_Custom_Item_Icon_Icon                               (HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   CallFunc_Get_Custom_Item_Icon_AlphaOverride                      (HasGetValueTypeHash)
// struct FItemRanksRowHandle         CallFunc_StructToRowHandle_ReturnValue                           (NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemRank                   CallFunc_GetItemRanksStruct_ItemRanks                            (None)
// enum class EValid                  CallFunc_GetItemRanksStruct_Paths                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ItemMatchesQuery_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_CreateOutputItem_Name                                   (None)
// TSoftObjectPtr<class UTexture2D>   CallFunc_CreateOutputItem_Icon                                   (HasGetValueTypeHash)
// struct FProcessorRecipesRowHandle  CallFunc_GetProcessorRecipe_ReturnValue                          (NoDestructor, HasGetValueTypeHash)
// struct FProcessorRecipe            CallFunc_GetProcessorRecipesStruct_ProcessorRecipes              (ContainsInstancedReference)
// enum class EValid                  CallFunc_GetProcessorRecipesStruct_Paths                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ItemMatchesQuery_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FItemData>           CallFunc_GetProcessorOutputs_ReturnValue                         (ReferenceParm, ContainsInstancedReference)
// struct FItemData                   CallFunc_Array_Get_Item                                          (ContainsInstancedReference)
// int32                              CallFunc_GetItemPropertyValue_IntValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDataValid              CallFunc_GetItemPropertyValue_Paths                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// int32                              CallFunc_NumRows_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FResourceItem>       CallFunc_GetResourceOutputs_ReturnValue                          (ReferenceParm)
// struct FResourceItem               CallFunc_Array_Get_Item_1                                        (NoDestructor)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetResourceImage_ReturnValue                            (HasGetValueTypeHash)
// struct FItemData                   Temp_wildcard_Variable_2                                         (ContainsInstancedReference)
// TArray<struct FItemData>           CallFunc_GetProcessorInputs_ReturnValue                          (ReferenceParm, ContainsInstancedReference)
// struct FItemData                   CallFunc_Array_Get_Item_2                                        (ContainsInstancedReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FItemData>           CallFunc_GetProcessorOutputs_ReturnValue_1                       (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_3                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_Array_Get_Item_3                                        (ContainsInstancedReference)

void UUMG_RecipeElement_C::InitialiseIcons(int32 Temp_int_Variable, TSoftObjectPtr<class UTexture2D> Temp_wildcard_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, const struct FItemData& Temp_wildcard_Variable_1, int32 Temp_int_Variable_1, bool CallFunc_Get_Alteration_Preview_Custom, const struct FItemRanksEnum& CallFunc_IntToStruct_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_Get_Custom_Item_Icon_Icon, TSoftObjectPtr<class UTexture2D> CallFunc_Get_Custom_Item_Icon_AlphaOverride, const struct FItemRanksRowHandle& CallFunc_StructToRowHandle_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_1, const struct FItemRank& CallFunc_GetItemRanksStruct_ItemRanks, enum class EValid CallFunc_GetItemRanksStruct_Paths, class UTexture2D* K2Node_DynamicCast_AsTexture_2D_1, bool K2Node_DynamicCast_bSuccess_1, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_ItemMatchesQuery_ReturnValue, float CallFunc_SelectFloat_ReturnValue, class FText CallFunc_CreateOutputItem_Name, TSoftObjectPtr<class UTexture2D> CallFunc_CreateOutputItem_Icon, const struct FProcessorRecipesRowHandle& CallFunc_GetProcessorRecipe_ReturnValue, const struct FProcessorRecipe& CallFunc_GetProcessorRecipesStruct_ProcessorRecipes, enum class EValid CallFunc_GetProcessorRecipesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_ItemMatchesQuery_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, TArray<struct FItemData>& CallFunc_GetProcessorOutputs_ReturnValue, const struct FItemData& CallFunc_Array_Get_Item, int32 CallFunc_GetItemPropertyValue_IntValue, enum class EDataValid CallFunc_GetItemPropertyValue_Paths, bool CallFunc_Array_IsValidIndex_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_Greater_IntInt_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, int32 CallFunc_NumRows_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<struct FResourceItem>& CallFunc_GetResourceOutputs_ReturnValue, const struct FResourceItem& CallFunc_Array_Get_Item_1, bool CallFunc_Array_IsValidIndex_ReturnValue_1, TSoftObjectPtr<class UTexture2D> CallFunc_GetResourceImage_ReturnValue, const struct FItemData& Temp_wildcard_Variable_2, TArray<struct FItemData>& CallFunc_GetProcessorInputs_ReturnValue, const struct FItemData& CallFunc_Array_Get_Item_2, bool CallFunc_Array_IsValidIndex_ReturnValue_2, TArray<struct FItemData>& CallFunc_GetProcessorOutputs_ReturnValue_1, bool CallFunc_Array_IsValidIndex_ReturnValue_3, const struct FItemData& CallFunc_Array_Get_Item_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RecipeElement_C", "InitialiseIcons");

	Params::UUMG_RecipeElement_C_InitialiseIcons_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_wildcard_Variable = Temp_wildcard_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue = CallFunc_LoadAsset_Blocking_ReturnValue;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_wildcard_Variable_1 = Temp_wildcard_Variable_1;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Get_Alteration_Preview_Custom = CallFunc_Get_Alteration_Preview_Custom;
	Parms.CallFunc_IntToStruct_ReturnValue = CallFunc_IntToStruct_ReturnValue;
	Parms.CallFunc_Get_Custom_Item_Icon_Icon = CallFunc_Get_Custom_Item_Icon_Icon;
	Parms.CallFunc_Get_Custom_Item_Icon_AlphaOverride = CallFunc_Get_Custom_Item_Icon_AlphaOverride;
	Parms.CallFunc_StructToRowHandle_ReturnValue = CallFunc_StructToRowHandle_ReturnValue;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue_1 = CallFunc_LoadAsset_Blocking_ReturnValue_1;
	Parms.CallFunc_GetItemRanksStruct_ItemRanks = CallFunc_GetItemRanksStruct_ItemRanks;
	Parms.CallFunc_GetItemRanksStruct_Paths = CallFunc_GetItemRanksStruct_Paths;
	Parms.K2Node_DynamicCast_AsTexture_2D_1 = K2Node_DynamicCast_AsTexture_2D_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_ItemMatchesQuery_ReturnValue = CallFunc_ItemMatchesQuery_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_CreateOutputItem_Name = CallFunc_CreateOutputItem_Name;
	Parms.CallFunc_CreateOutputItem_Icon = CallFunc_CreateOutputItem_Icon;
	Parms.CallFunc_GetProcessorRecipe_ReturnValue = CallFunc_GetProcessorRecipe_ReturnValue;
	Parms.CallFunc_GetProcessorRecipesStruct_ProcessorRecipes = CallFunc_GetProcessorRecipesStruct_ProcessorRecipes;
	Parms.CallFunc_GetProcessorRecipesStruct_Paths = CallFunc_GetProcessorRecipesStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_ItemMatchesQuery_ReturnValue_1 = CallFunc_ItemMatchesQuery_ReturnValue_1;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_GetProcessorOutputs_ReturnValue = CallFunc_GetProcessorOutputs_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetItemPropertyValue_IntValue = CallFunc_GetItemPropertyValue_IntValue;
	Parms.CallFunc_GetItemPropertyValue_Paths = CallFunc_GetItemPropertyValue_Paths;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess_2 = K2Node_SwitchEnum_CmpSuccess_2;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_NumRows_ReturnValue = CallFunc_NumRows_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetResourceOutputs_ReturnValue = CallFunc_GetResourceOutputs_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_1 = CallFunc_Array_IsValidIndex_ReturnValue_1;
	Parms.CallFunc_GetResourceImage_ReturnValue = CallFunc_GetResourceImage_ReturnValue;
	Parms.Temp_wildcard_Variable_2 = Temp_wildcard_Variable_2;
	Parms.CallFunc_GetProcessorInputs_ReturnValue = CallFunc_GetProcessorInputs_ReturnValue;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_2 = CallFunc_Array_IsValidIndex_ReturnValue_2;
	Parms.CallFunc_GetProcessorOutputs_ReturnValue_1 = CallFunc_GetProcessorOutputs_ReturnValue_1;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_3 = CallFunc_Array_IsValidIndex_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_RecipeElement.UMG_RecipeElement_C.GetProcessorRecipe
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FProcessorRecipesRowHandle  ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

struct FProcessorRecipesRowHandle UUMG_RecipeElement_C::GetProcessorRecipe()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RecipeElement_C", "GetProcessorRecipe");

	Params::UUMG_RecipeElement_C_GetProcessorRecipe_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_RecipeElement.UMG_RecipeElement_C.ValidRecipe
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Valid                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FProcessorRecipe            CallFunc_GetProcessorRecipesStruct_ProcessorRecipes              (ContainsInstancedReference)
// enum class EValid                  CallFunc_GetProcessorRecipesStruct_Paths                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FCraftingOutput             CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   CallFunc_GetItemTemplateStruct_ItemTemplate                      (ContainsInstancedReference)
// enum class EValid                  CallFunc_GetItemTemplateStruct_Paths                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_RecipeElement_C::ValidRecipe(bool* Valid, const struct FProcessorRecipe& CallFunc_GetProcessorRecipesStruct_ProcessorRecipes, enum class EValid CallFunc_GetProcessorRecipesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FCraftingOutput& CallFunc_Array_Get_Item, bool CallFunc_Array_IsValidIndex_ReturnValue, const struct FItemData& CallFunc_GetItemTemplateStruct_ItemTemplate, enum class EValid CallFunc_GetItemTemplateStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RecipeElement_C", "ValidRecipe");

	Params::UUMG_RecipeElement_C_ValidRecipe_Params Parms{};

	Parms.CallFunc_GetProcessorRecipesStruct_ProcessorRecipes = CallFunc_GetProcessorRecipesStruct_ProcessorRecipes;
	Parms.CallFunc_GetProcessorRecipesStruct_Paths = CallFunc_GetProcessorRecipesStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_GetItemTemplateStruct_ItemTemplate = CallFunc_GetItemTemplateStruct_ItemTemplate;
	Parms.CallFunc_GetItemTemplateStruct_Paths = CallFunc_GetItemTemplateStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Valid != nullptr)
		*Valid = Parms.Valid;

}


// Function UMG_RecipeElement.UMG_RecipeElement_C.SetNonInteractive
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               RecipeSelected                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  NewImage                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)

void UUMG_RecipeElement_C::SetNonInteractive(bool RecipeSelected, class UTexture2D* NewImage, bool Temp_bool_Variable, class UObject* Temp_object_Variable, class UObject* Temp_object_Variable_1, class UObject* K2Node_Select_Default, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RecipeElement_C", "SetNonInteractive");

	Params::UUMG_RecipeElement_C_SetNonInteractive_Params Parms{};

	Parms.RecipeSelected = RecipeSelected;
	Parms.NewImage = NewImage;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_RecipeElement.UMG_RecipeElement_C.Clear
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_RecipeElement_C::Clear(class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RecipeElement_C", "Clear");

	Params::UUMG_RecipeElement_C_Clear_Params Parms{};

	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_RecipeElement.UMG_RecipeElement_C.UpdateRecipeFrame
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class UObject*                     Image                                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_ButtonState           Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)
// enum class E_ButtonState           Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FSlateBrush UUMG_RecipeElement_C::UpdateRecipeFrame(class UObject* Image, enum class E_ButtonState Temp_byte_Variable, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, enum class E_ButtonState Temp_byte_Variable_1, bool CallFunc_BooleanOR_ReturnValue, class UObject* K2Node_Select_Default, class UObject* K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RecipeElement_C", "UpdateRecipeFrame");

	Params::UUMG_RecipeElement_C_UpdateRecipeFrame_Params Parms{};

	Parms.Image = Image;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_RecipeElement.UMG_RecipeElement_C.Finished_1A93246B4B7271E4B7205CB7080352F3
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_RecipeElement_C::Finished_1A93246B4B7271E4B7205CB7080352F3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RecipeElement_C", "Finished_1A93246B4B7271E4B7205CB7080352F3");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_RecipeElement.UMG_RecipeElement_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_RecipeElement_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RecipeElement_C", "BP_OnItemSelectionChanged");

	Params::UUMG_RecipeElement_C_BP_OnItemSelectionChanged_Params Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_RecipeElement.UMG_RecipeElement_C.SetProgress
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Percent                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FProcessorRecipesRowHandle  CurrentQueueRecipe                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                               QueueEmpty                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_RecipeElement_C::SetProgress(float Percent, const struct FProcessorRecipesRowHandle& CurrentQueueRecipe, bool QueueEmpty)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RecipeElement_C", "SetProgress");

	Params::UUMG_RecipeElement_C_SetProgress_Params Parms{};

	Parms.Percent = Percent;
	Parms.CurrentQueueRecipe = CurrentQueueRecipe;
	Parms.QueueEmpty = QueueEmpty;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_RecipeElement.UMG_RecipeElement_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsExpanded                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_RecipeElement_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RecipeElement_C", "BP_OnItemExpansionChanged");

	Params::UUMG_RecipeElement_C_BP_OnItemExpansionChanged_Params Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_RecipeElement.UMG_RecipeElement_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)
// Parameters:

void UUMG_RecipeElement_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RecipeElement_C", "BP_OnEntryReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_RecipeElement.UMG_RecipeElement_C.ExecuteUbergraph_UMG_RecipeElement
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsSelected                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_Percent                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FProcessorRecipesRowHandle  K2Node_CustomEvent_CurrentQueueRecipe                            (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_QueueEmpty                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bIsExpanded                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FProcessorRecipesRowHandle  CallFunc_GetProcessorRecipe_ReturnValue                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FProcessorRecipesRowHandleFProcessorRecipesRowHandle_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_CreatePlayAnimationProxyObject_Result                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimationPlayCallbackProxy*CallFunc_CreatePlayAnimationProxyObject_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_RecipeElement_C::ExecuteUbergraph_UMG_RecipeElement(int32 EntryPoint, bool K2Node_Event_bIsSelected, bool CallFunc_NotEqual_FloatFloat_ReturnValue, float K2Node_CustomEvent_Percent, const struct FProcessorRecipesRowHandle& K2Node_CustomEvent_CurrentQueueRecipe, bool K2Node_CustomEvent_QueueEmpty, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool K2Node_Event_bIsExpanded, const struct FProcessorRecipesRowHandle& CallFunc_GetProcessorRecipe_ReturnValue, bool CallFunc_EqualEqual_FProcessorRecipesRowHandleFProcessorRecipesRowHandle_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class UUMGSequencePlayer* CallFunc_CreatePlayAnimationProxyObject_Result, class UWidgetAnimationPlayCallbackProxy* CallFunc_CreatePlayAnimationProxyObject_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_RecipeElement_C", "ExecuteUbergraph_UMG_RecipeElement");

	Params::UUMG_RecipeElement_C_ExecuteUbergraph_UMG_RecipeElement_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bIsSelected = K2Node_Event_bIsSelected;
	Parms.CallFunc_NotEqual_FloatFloat_ReturnValue = CallFunc_NotEqual_FloatFloat_ReturnValue;
	Parms.K2Node_CustomEvent_Percent = K2Node_CustomEvent_Percent;
	Parms.K2Node_CustomEvent_CurrentQueueRecipe = K2Node_CustomEvent_CurrentQueueRecipe;
	Parms.K2Node_CustomEvent_QueueEmpty = K2Node_CustomEvent_QueueEmpty;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.K2Node_Event_bIsExpanded = K2Node_Event_bIsExpanded;
	Parms.CallFunc_GetProcessorRecipe_ReturnValue = CallFunc_GetProcessorRecipe_ReturnValue;
	Parms.CallFunc_EqualEqual_FProcessorRecipesRowHandleFProcessorRecipesRowHandle_ReturnValue = CallFunc_EqualEqual_FProcessorRecipesRowHandleFProcessorRecipesRowHandle_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_CreatePlayAnimationProxyObject_Result = CallFunc_CreatePlayAnimationProxyObject_Result;
	Parms.CallFunc_CreatePlayAnimationProxyObject_ReturnValue = CallFunc_CreatePlayAnimationProxyObject_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


