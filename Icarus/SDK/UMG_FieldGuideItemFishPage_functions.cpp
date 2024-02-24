#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_FieldGuideItemFishPage.UMG_FieldGuideItemFishPage_C
// (None)

class UClass* UUMG_FieldGuideItemFishPage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_FieldGuideItemFishPage_C");

	return Clss;
}


// UMG_FieldGuideItemFishPage_C UMG_FieldGuideItemFishPage.Default__UMG_FieldGuideItemFishPage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_FieldGuideItemFishPage_C* UUMG_FieldGuideItemFishPage_C::GetDefaultObj()
{
	static class UUMG_FieldGuideItemFishPage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_FieldGuideItemFishPage_C*>(UUMG_FieldGuideItemFishPage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_FieldGuideItemFishPage.UMG_FieldGuideItemFishPage_C.DoFishLinkClickedByRef
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFishDataRowHandle          Creature                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                               Discovered                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_FieldGuideItemFishPage_C::DoFishLinkClickedByRef(const struct FFishDataRowHandle& Creature, bool Discovered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuideItemFishPage_C", "DoFishLinkClickedByRef");

	Params::UUMG_FieldGuideItemFishPage_C_DoFishLinkClickedByRef_Params Parms{};

	Parms.Creature = Creature;
	Parms.Discovered = Discovered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FieldGuideItemFishPage.UMG_FieldGuideItemFishPage_C.SubItemClickedByRef
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFieldGuideCategoriesRowHandleCategoryRow                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// struct FItemsStaticRowHandle       ItemRow                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void UUMG_FieldGuideItemFishPage_C::SubItemClickedByRef(struct FFieldGuideCategoriesRowHandle& CategoryRow, struct FItemsStaticRowHandle& ItemRow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuideItemFishPage_C", "SubItemClickedByRef");

	Params::UUMG_FieldGuideItemFishPage_C_SubItemClickedByRef_Params Parms{};

	Parms.CategoryRow = CategoryRow;
	Parms.ItemRow = ItemRow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FieldGuideItemFishPage.UMG_FieldGuideItemFishPage_C.SubItemClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFieldGuideCategoriesRowHandleCategoryRow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FItemsStaticRowHandle       ItemRow                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UUMG_FieldGuideItemFishPage_C::SubItemClicked(const struct FFieldGuideCategoriesRowHandle& CategoryRow, const struct FItemsStaticRowHandle& ItemRow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuideItemFishPage_C", "SubItemClicked");

	Params::UUMG_FieldGuideItemFishPage_C_SubItemClicked_Params Parms{};

	Parms.CategoryRow = CategoryRow;
	Parms.ItemRow = ItemRow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FieldGuideItemFishPage.UMG_FieldGuideItemFishPage_C.PopulateFishDetail
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemsStaticRowHandle       ItemRow                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FFieldGuideCategoriesRowHandleCategoryRow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFieldGuideRecipeInfo>RecipeRows                                                       (Edit, BlueprintVisible)
// TArray<struct FItemsStaticRowHandle>OutputsForRecipe                                                 (Edit, BlueprintVisible)
// class UUMG_FieldGuideItemResourceIcon_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_FieldGuideItemResourceIcon_C*CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFishDataRowHandle          CallFunc_GetFishData_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsRowHandleValid_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FItemsStaticEnum            CallFunc_MakeItemsStaticEnum_ReturnValue                         (HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsFreshWaterFish_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_FieldGuide_Fish_Entry_C*CallFunc_Create_ReturnValue_2                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemsStaticEnum            CallFunc_MakeItemsStaticEnum_ReturnValue_1                       (HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// struct FItemsStaticEnum            CallFunc_MakeItemsStaticEnum_ReturnValue_2                       (HasGetValueTypeHash)
// struct FItemsStaticRowHandle       CallFunc_StructToRowHandle_ReturnValue                           (NoDestructor, HasGetValueTypeHash)
// class UUMG_FieldGuideItemResourceIcon_C*CallFunc_Create_ReturnValue_3                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue_1                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFieldGuideCategoriesRowHandleCallFunc_GetCategoryForItem_ReturnValue                          (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// struct FItemsStaticEnum            CallFunc_MakeItemsStaticEnum_ReturnValue_3                       (HasGetValueTypeHash)
// struct FItemsStaticRowHandle       CallFunc_StructToRowHandle_ReturnValue_1                         (NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue_2                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFieldGuideCategoriesRowHandleCallFunc_GetCategoryForItem_ReturnValue_1                        (NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue_3                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemsStaticEnum            K2Node_Select_Default                                            (HasGetValueTypeHash)
// struct FItemsStaticRowHandle       CallFunc_StructToRowHandle_ReturnValue_2                         (NoDestructor, HasGetValueTypeHash)
// struct FFieldGuideCategoriesRowHandleCallFunc_GetCategoryForItem_ReturnValue_2                        (NoDestructor, HasGetValueTypeHash)

void UUMG_FieldGuideItemFishPage_C::PopulateFishDetail(const struct FItemsStaticRowHandle& ItemRow, const struct FFieldGuideCategoriesRowHandle& CategoryRow, const TArray<struct FFieldGuideRecipeInfo>& RecipeRows, const TArray<struct FItemsStaticRowHandle>& OutputsForRecipe, class UUMG_FieldGuideItemResourceIcon_C* CallFunc_Create_ReturnValue, class UUMG_FieldGuideItemResourceIcon_C* CallFunc_Create_ReturnValue_1, const struct FFishDataRowHandle& CallFunc_GetFishData_ReturnValue, bool CallFunc_IsRowHandleValid_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FItemsStaticEnum& CallFunc_MakeItemsStaticEnum_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsFreshWaterFish_ReturnValue, class UUMG_FieldGuide_Fish_Entry_C* CallFunc_Create_ReturnValue_2, const struct FItemsStaticEnum& CallFunc_MakeItemsStaticEnum_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FItemsStaticEnum& CallFunc_MakeItemsStaticEnum_ReturnValue_2, const struct FItemsStaticRowHandle& CallFunc_StructToRowHandle_ReturnValue, class UUMG_FieldGuideItemResourceIcon_C* CallFunc_Create_ReturnValue_3, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, const struct FFieldGuideCategoriesRowHandle& CallFunc_GetCategoryForItem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FItemsStaticEnum& CallFunc_MakeItemsStaticEnum_ReturnValue_3, const struct FItemsStaticRowHandle& CallFunc_StructToRowHandle_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue_2, const struct FFieldGuideCategoriesRowHandle& CallFunc_GetCategoryForItem_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue_3, bool Temp_bool_Variable, const struct FItemsStaticEnum& K2Node_Select_Default, const struct FItemsStaticRowHandle& CallFunc_StructToRowHandle_ReturnValue_2, const struct FFieldGuideCategoriesRowHandle& CallFunc_GetCategoryForItem_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuideItemFishPage_C", "PopulateFishDetail");

	Params::UUMG_FieldGuideItemFishPage_C_PopulateFishDetail_Params Parms{};

	Parms.ItemRow = ItemRow;
	Parms.CategoryRow = CategoryRow;
	Parms.RecipeRows = RecipeRows;
	Parms.OutputsForRecipe = OutputsForRecipe;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_GetFishData_ReturnValue = CallFunc_GetFishData_ReturnValue;
	Parms.CallFunc_IsRowHandleValid_ReturnValue = CallFunc_IsRowHandleValid_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_MakeItemsStaticEnum_ReturnValue = CallFunc_MakeItemsStaticEnum_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsFreshWaterFish_ReturnValue = CallFunc_IsFreshWaterFish_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.CallFunc_MakeItemsStaticEnum_ReturnValue_1 = CallFunc_MakeItemsStaticEnum_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_MakeItemsStaticEnum_ReturnValue_2 = CallFunc_MakeItemsStaticEnum_ReturnValue_2;
	Parms.CallFunc_StructToRowHandle_ReturnValue = CallFunc_StructToRowHandle_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_3 = CallFunc_Create_ReturnValue_3;
	Parms.CallFunc_AddChild_ReturnValue_1 = CallFunc_AddChild_ReturnValue_1;
	Parms.CallFunc_GetCategoryForItem_ReturnValue = CallFunc_GetCategoryForItem_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_MakeItemsStaticEnum_ReturnValue_3 = CallFunc_MakeItemsStaticEnum_ReturnValue_3;
	Parms.CallFunc_StructToRowHandle_ReturnValue_1 = CallFunc_StructToRowHandle_ReturnValue_1;
	Parms.CallFunc_AddChild_ReturnValue_2 = CallFunc_AddChild_ReturnValue_2;
	Parms.CallFunc_GetCategoryForItem_ReturnValue_1 = CallFunc_GetCategoryForItem_ReturnValue_1;
	Parms.CallFunc_AddChild_ReturnValue_3 = CallFunc_AddChild_ReturnValue_3;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_StructToRowHandle_ReturnValue_2 = CallFunc_StructToRowHandle_ReturnValue_2;
	Parms.CallFunc_GetCategoryForItem_ReturnValue_2 = CallFunc_GetCategoryForItem_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FieldGuideItemFishPage.UMG_FieldGuideItemFishPage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_FieldGuideItemFishPage_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuideItemFishPage_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_FieldGuideItemFishPage.UMG_FieldGuideItemFishPage_C.InitFieldGuideView
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemsStaticRowHandle       ItemIn                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FFieldGuideCategoriesRowHandleCategoryIn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UUMG_FieldGuideItemFishPage_C::InitFieldGuideView(const struct FItemsStaticRowHandle& ItemIn, const struct FFieldGuideCategoriesRowHandle& CategoryIn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuideItemFishPage_C", "InitFieldGuideView");

	Params::UUMG_FieldGuideItemFishPage_C_InitFieldGuideView_Params Parms{};

	Parms.ItemIn = ItemIn;
	Parms.CategoryIn = CategoryIn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FieldGuideItemFishPage.UMG_FieldGuideItemFishPage_C.ExecuteUbergraph_UMG_FieldGuideItemFishPage
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemsStaticRowHandle       K2Node_Event_ItemIn                                              (NoDestructor, HasGetValueTypeHash)
// struct FFieldGuideCategoriesRowHandleK2Node_Event_CategoryIn                                          (NoDestructor, HasGetValueTypeHash)

void UUMG_FieldGuideItemFishPage_C::ExecuteUbergraph_UMG_FieldGuideItemFishPage(int32 EntryPoint, const struct FItemsStaticRowHandle& K2Node_Event_ItemIn, const struct FFieldGuideCategoriesRowHandle& K2Node_Event_CategoryIn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuideItemFishPage_C", "ExecuteUbergraph_UMG_FieldGuideItemFishPage");

	Params::UUMG_FieldGuideItemFishPage_C_ExecuteUbergraph_UMG_FieldGuideItemFishPage_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ItemIn = K2Node_Event_ItemIn;
	Parms.K2Node_Event_CategoryIn = K2Node_Event_CategoryIn;

	UObject::ProcessEvent(Func, &Parms);

}

}


