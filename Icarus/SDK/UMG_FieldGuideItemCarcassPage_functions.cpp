#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_FieldGuideItemCarcassPage.UMG_FieldGuideItemCarcassPage_C
// (None)

class UClass* UUMG_FieldGuideItemCarcassPage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_FieldGuideItemCarcassPage_C");

	return Clss;
}


// UMG_FieldGuideItemCarcassPage_C UMG_FieldGuideItemCarcassPage.Default__UMG_FieldGuideItemCarcassPage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_FieldGuideItemCarcassPage_C* UUMG_FieldGuideItemCarcassPage_C::GetDefaultObj()
{
	static class UUMG_FieldGuideItemCarcassPage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_FieldGuideItemCarcassPage_C*>(UUMG_FieldGuideItemCarcassPage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_FieldGuideItemCarcassPage.UMG_FieldGuideItemCarcassPage_C.SubItemClickedByRef
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFieldGuideCategoriesRowHandleCategoryRow                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// struct FItemsStaticRowHandle       ItemRow                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void UUMG_FieldGuideItemCarcassPage_C::SubItemClickedByRef(struct FFieldGuideCategoriesRowHandle& CategoryRow, struct FItemsStaticRowHandle& ItemRow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuideItemCarcassPage_C", "SubItemClickedByRef");

	Params::UUMG_FieldGuideItemCarcassPage_C_SubItemClickedByRef_Params Parms{};

	Parms.CategoryRow = CategoryRow;
	Parms.ItemRow = ItemRow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FieldGuideItemCarcassPage.UMG_FieldGuideItemCarcassPage_C.SubItemClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFieldGuideCategoriesRowHandleCategoryRow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FItemsStaticRowHandle       ItemRow                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UUMG_FieldGuideItemCarcassPage_C::SubItemClicked(const struct FFieldGuideCategoriesRowHandle& CategoryRow, const struct FItemsStaticRowHandle& ItemRow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuideItemCarcassPage_C", "SubItemClicked");

	Params::UUMG_FieldGuideItemCarcassPage_C_SubItemClicked_Params Parms{};

	Parms.CategoryRow = CategoryRow;
	Parms.ItemRow = ItemRow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FieldGuideItemCarcassPage.UMG_FieldGuideItemCarcassPage_C.PopulateResourceDetail
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemsStaticRowHandle       ItemRow                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FFieldGuideCategoriesRowHandleCategoryRow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFieldGuideRecipeInfo>RecipeRows                                                       (Edit, BlueprintVisible)
// TArray<struct FItemsStaticRowHandle>OutputsForRecipe                                                 (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_FieldGuideItemResourceIcon_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// TArray<struct FItemsStaticRowHandle>CallFunc_GetCorpseVestige_ReturnValue                            (ReferenceParm)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemsStaticRowHandle       CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFieldGuideCategoriesRowHandleCallFunc_GetCategoryForItem_ReturnValue                          (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FItemsStaticRowHandle>CallFunc_GetCorpseSkinningBenchRewards_ReturnValue               (ReferenceParm)
// struct FItemsStaticRowHandle       CallFunc_Array_Get_Item_1                                        (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFieldGuideCategoriesRowHandleCallFunc_GetCategoryForItem_ReturnValue_1                        (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_FieldGuideItemResourceIcon_C*CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class UUMG_FieldGuideItemResourceIcon_C*CallFunc_Create_ReturnValue_2                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FItemsStaticRowHandle>CallFunc_GetCorpseSkinningKnifeRewards_ReturnValue               (ReferenceParm)
// struct FItemsStaticRowHandle       CallFunc_Array_Get_Item_2                                        (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFieldGuideCategoriesRowHandleCallFunc_GetCategoryForItem_ReturnValue_2                        (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// TArray<struct FItemsStaticRowHandle>CallFunc_GetKnivesCanHarvestWith_ReturnValue                     (ReferenceParm)
// struct FItemsStaticRowHandle       CallFunc_Array_Get_Item_3                                        (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFieldGuideCategoriesRowHandleCallFunc_GetCategoryForItem_ReturnValue_3                        (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_7                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_FieldGuideItemResourceIcon_C*CallFunc_Create_ReturnValue_3                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_FieldGuideItemCarcassPage_C::PopulateResourceDetail(const struct FItemsStaticRowHandle& ItemRow, const struct FFieldGuideCategoriesRowHandle& CategoryRow, const TArray<struct FFieldGuideRecipeInfo>& RecipeRows, const TArray<struct FItemsStaticRowHandle>& OutputsForRecipe, int32 Temp_int_Array_Index_Variable, class UUMG_FieldGuideItemResourceIcon_C* CallFunc_Create_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<struct FItemsStaticRowHandle>& CallFunc_GetCorpseVestige_ReturnValue, int32 Temp_int_Array_Index_Variable_2, int32 CallFunc_Array_Length_ReturnValue, const struct FItemsStaticRowHandle& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FFieldGuideCategoriesRowHandle& CallFunc_GetCategoryForItem_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 Temp_int_Array_Index_Variable_3, TArray<struct FItemsStaticRowHandle>& CallFunc_GetCorpseSkinningBenchRewards_ReturnValue, const struct FItemsStaticRowHandle& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_2, const struct FFieldGuideCategoriesRowHandle& CallFunc_GetCategoryForItem_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, class UUMG_FieldGuideItemResourceIcon_C* CallFunc_Create_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UUMG_FieldGuideItemResourceIcon_C* CallFunc_Create_ReturnValue_2, TArray<struct FItemsStaticRowHandle>& CallFunc_GetCorpseSkinningKnifeRewards_ReturnValue, const struct FItemsStaticRowHandle& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_2, const struct FFieldGuideCategoriesRowHandle& CallFunc_GetCategoryForItem_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_5, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, TArray<struct FItemsStaticRowHandle>& CallFunc_GetKnivesCanHarvestWith_ReturnValue, const struct FItemsStaticRowHandle& CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_6, bool CallFunc_Less_IntInt_ReturnValue_3, const struct FFieldGuideCategoriesRowHandle& CallFunc_GetCategoryForItem_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_7, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, class UUMG_FieldGuideItemResourceIcon_C* CallFunc_Create_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuideItemCarcassPage_C", "PopulateResourceDetail");

	Params::UUMG_FieldGuideItemCarcassPage_C_PopulateResourceDetail_Params Parms{};

	Parms.ItemRow = ItemRow;
	Parms.CategoryRow = CategoryRow;
	Parms.RecipeRows = RecipeRows;
	Parms.OutputsForRecipe = OutputsForRecipe;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetCorpseVestige_ReturnValue = CallFunc_GetCorpseVestige_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetCategoryForItem_ReturnValue = CallFunc_GetCategoryForItem_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.CallFunc_GetCorpseSkinningBenchRewards_ReturnValue = CallFunc_GetCorpseSkinningBenchRewards_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_GetCategoryForItem_ReturnValue_1 = CallFunc_GetCategoryForItem_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.CallFunc_GetCorpseSkinningKnifeRewards_ReturnValue = CallFunc_GetCorpseSkinningKnifeRewards_ReturnValue;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_GetCategoryForItem_ReturnValue_2 = CallFunc_GetCategoryForItem_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_5 = CallFunc_Array_Length_ReturnValue_5;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_2 = CallFunc_EqualEqual_IntInt_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetKnivesCanHarvestWith_ReturnValue = CallFunc_GetKnivesCanHarvestWith_ReturnValue;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Length_ReturnValue_6 = CallFunc_Array_Length_ReturnValue_6;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.CallFunc_GetCategoryForItem_ReturnValue_3 = CallFunc_GetCategoryForItem_ReturnValue_3;
	Parms.CallFunc_Array_Length_ReturnValue_7 = CallFunc_Array_Length_ReturnValue_7;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_3 = CallFunc_EqualEqual_IntInt_ReturnValue_3;
	Parms.CallFunc_Create_ReturnValue_3 = CallFunc_Create_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FieldGuideItemCarcassPage.UMG_FieldGuideItemCarcassPage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_FieldGuideItemCarcassPage_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuideItemCarcassPage_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_FieldGuideItemCarcassPage.UMG_FieldGuideItemCarcassPage_C.InitFieldGuideView
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemsStaticRowHandle       ItemIn                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FFieldGuideCategoriesRowHandleCategoryIn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UUMG_FieldGuideItemCarcassPage_C::InitFieldGuideView(const struct FItemsStaticRowHandle& ItemIn, const struct FFieldGuideCategoriesRowHandle& CategoryIn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuideItemCarcassPage_C", "InitFieldGuideView");

	Params::UUMG_FieldGuideItemCarcassPage_C_InitFieldGuideView_Params Parms{};

	Parms.ItemIn = ItemIn;
	Parms.CategoryIn = CategoryIn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FieldGuideItemCarcassPage.UMG_FieldGuideItemCarcassPage_C.ExecuteUbergraph_UMG_FieldGuideItemCarcassPage
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemsStaticRowHandle       K2Node_Event_ItemIn                                              (NoDestructor, HasGetValueTypeHash)
// struct FFieldGuideCategoriesRowHandleK2Node_Event_CategoryIn                                          (NoDestructor, HasGetValueTypeHash)

void UUMG_FieldGuideItemCarcassPage_C::ExecuteUbergraph_UMG_FieldGuideItemCarcassPage(int32 EntryPoint, const struct FItemsStaticRowHandle& K2Node_Event_ItemIn, const struct FFieldGuideCategoriesRowHandle& K2Node_Event_CategoryIn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuideItemCarcassPage_C", "ExecuteUbergraph_UMG_FieldGuideItemCarcassPage");

	Params::UUMG_FieldGuideItemCarcassPage_C_ExecuteUbergraph_UMG_FieldGuideItemCarcassPage_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ItemIn = K2Node_Event_ItemIn;
	Parms.K2Node_Event_CategoryIn = K2Node_Event_CategoryIn;

	UObject::ProcessEvent(Func, &Parms);

}

}


