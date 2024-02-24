#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_FieldGuideItemPlantsPage.UMG_FieldGuideItemPlantsPage_C
// (None)

class UClass* UUMG_FieldGuideItemPlantsPage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_FieldGuideItemPlantsPage_C");

	return Clss;
}


// UMG_FieldGuideItemPlantsPage_C UMG_FieldGuideItemPlantsPage.Default__UMG_FieldGuideItemPlantsPage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_FieldGuideItemPlantsPage_C* UUMG_FieldGuideItemPlantsPage_C::GetDefaultObj()
{
	static class UUMG_FieldGuideItemPlantsPage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_FieldGuideItemPlantsPage_C*>(UUMG_FieldGuideItemPlantsPage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_FieldGuideItemPlantsPage.UMG_FieldGuideItemPlantsPage_C.SubItemClickedByRef
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFieldGuideCategoriesRowHandleCategoryRow                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// struct FItemsStaticRowHandle       ItemRow                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void UUMG_FieldGuideItemPlantsPage_C::SubItemClickedByRef(struct FFieldGuideCategoriesRowHandle& CategoryRow, struct FItemsStaticRowHandle& ItemRow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuideItemPlantsPage_C", "SubItemClickedByRef");

	Params::UUMG_FieldGuideItemPlantsPage_C_SubItemClickedByRef_Params Parms{};

	Parms.CategoryRow = CategoryRow;
	Parms.ItemRow = ItemRow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FieldGuideItemPlantsPage.UMG_FieldGuideItemPlantsPage_C.SubItemClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFieldGuideCategoriesRowHandleCategoryRow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FItemsStaticRowHandle       ItemRow                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UUMG_FieldGuideItemPlantsPage_C::SubItemClicked(const struct FFieldGuideCategoriesRowHandle& CategoryRow, const struct FItemsStaticRowHandle& ItemRow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuideItemPlantsPage_C", "SubItemClicked");

	Params::UUMG_FieldGuideItemPlantsPage_C_SubItemClicked_Params Parms{};

	Parms.CategoryRow = CategoryRow;
	Parms.ItemRow = ItemRow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FieldGuideItemPlantsPage.UMG_FieldGuideItemPlantsPage_C.PopulatePlantDetail
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemsStaticRowHandle       ItemRow                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FFieldGuideCategoriesRowHandleCategoryRow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFieldGuideRecipeInfo>RecipeRows                                                       (Edit, BlueprintVisible)
// TArray<struct FItemsStaticRowHandle>OutputsForRecipe                                                 (Edit, BlueprintVisible)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UUMG_FieldGuideItemResourceIcon_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemsStaticRowHandle       CallFunc_GetWorkshopSeedPackFromPlant_ReturnValue                (NoDestructor, HasGetValueTypeHash)
// struct FFieldGuideCategoriesRowHandleCallFunc_GetCategoryForItem_ReturnValue                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsRowHandleValid_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemableRowHandle          CallFunc_GetSeedDescriptionForPlant_ReturnValue                  (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsRowHandleValid_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UUMG_FieldGuideItemResourceIcon_C*CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FItemsStaticRowHandle>CallFunc_GetAllCropPlots_ReturnValue                             (ReferenceParm)
// struct FItemsStaticRowHandle       CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFieldGuideCategoriesRowHandleCallFunc_GetCategoryForItem_ReturnValue_1                        (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_FieldGuideItemResourceDescription_C*CallFunc_Create_ReturnValue_2                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_FieldGuideItemPlantsPage_C::PopulatePlantDetail(const struct FItemsStaticRowHandle& ItemRow, const struct FFieldGuideCategoriesRowHandle& CategoryRow, const TArray<struct FFieldGuideRecipeInfo>& RecipeRows, const TArray<struct FItemsStaticRowHandle>& OutputsForRecipe, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMG_FieldGuideItemResourceIcon_C* CallFunc_Create_ReturnValue, const struct FItemsStaticRowHandle& CallFunc_GetWorkshopSeedPackFromPlant_ReturnValue, const struct FFieldGuideCategoriesRowHandle& CallFunc_GetCategoryForItem_ReturnValue, bool CallFunc_IsRowHandleValid_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FItemableRowHandle& CallFunc_GetSeedDescriptionForPlant_ReturnValue, bool CallFunc_IsRowHandleValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UUMG_FieldGuideItemResourceIcon_C* CallFunc_Create_ReturnValue_1, TArray<struct FItemsStaticRowHandle>& CallFunc_GetAllCropPlots_ReturnValue, const struct FItemsStaticRowHandle& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FFieldGuideCategoriesRowHandle& CallFunc_GetCategoryForItem_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UUMG_FieldGuideItemResourceDescription_C* CallFunc_Create_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuideItemPlantsPage_C", "PopulatePlantDetail");

	Params::UUMG_FieldGuideItemPlantsPage_C_PopulatePlantDetail_Params Parms{};

	Parms.ItemRow = ItemRow;
	Parms.CategoryRow = CategoryRow;
	Parms.RecipeRows = RecipeRows;
	Parms.OutputsForRecipe = OutputsForRecipe;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetWorkshopSeedPackFromPlant_ReturnValue = CallFunc_GetWorkshopSeedPackFromPlant_ReturnValue;
	Parms.CallFunc_GetCategoryForItem_ReturnValue = CallFunc_GetCategoryForItem_ReturnValue;
	Parms.CallFunc_IsRowHandleValid_ReturnValue = CallFunc_IsRowHandleValid_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetSeedDescriptionForPlant_ReturnValue = CallFunc_GetSeedDescriptionForPlant_ReturnValue;
	Parms.CallFunc_IsRowHandleValid_ReturnValue_1 = CallFunc_IsRowHandleValid_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_GetAllCropPlots_ReturnValue = CallFunc_GetAllCropPlots_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetCategoryForItem_ReturnValue_1 = CallFunc_GetCategoryForItem_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FieldGuideItemPlantsPage.UMG_FieldGuideItemPlantsPage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_FieldGuideItemPlantsPage_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuideItemPlantsPage_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_FieldGuideItemPlantsPage.UMG_FieldGuideItemPlantsPage_C.InitFieldGuideView
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemsStaticRowHandle       ItemIn                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FFieldGuideCategoriesRowHandleCategoryIn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UUMG_FieldGuideItemPlantsPage_C::InitFieldGuideView(const struct FItemsStaticRowHandle& ItemIn, const struct FFieldGuideCategoriesRowHandle& CategoryIn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuideItemPlantsPage_C", "InitFieldGuideView");

	Params::UUMG_FieldGuideItemPlantsPage_C_InitFieldGuideView_Params Parms{};

	Parms.ItemIn = ItemIn;
	Parms.CategoryIn = CategoryIn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FieldGuideItemPlantsPage.UMG_FieldGuideItemPlantsPage_C.ExecuteUbergraph_UMG_FieldGuideItemPlantsPage
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemsStaticRowHandle       K2Node_Event_ItemIn                                              (NoDestructor, HasGetValueTypeHash)
// struct FFieldGuideCategoriesRowHandleK2Node_Event_CategoryIn                                          (NoDestructor, HasGetValueTypeHash)

void UUMG_FieldGuideItemPlantsPage_C::ExecuteUbergraph_UMG_FieldGuideItemPlantsPage(int32 EntryPoint, const struct FItemsStaticRowHandle& K2Node_Event_ItemIn, const struct FFieldGuideCategoriesRowHandle& K2Node_Event_CategoryIn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuideItemPlantsPage_C", "ExecuteUbergraph_UMG_FieldGuideItemPlantsPage");

	Params::UUMG_FieldGuideItemPlantsPage_C_ExecuteUbergraph_UMG_FieldGuideItemPlantsPage_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ItemIn = K2Node_Event_ItemIn;
	Parms.K2Node_Event_CategoryIn = K2Node_Event_CategoryIn;

	UObject::ProcessEvent(Func, &Parms);

}

}


