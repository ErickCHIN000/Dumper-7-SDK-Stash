#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_FieldGuideItemVestigePage.UMG_FieldGuideItemVestigePage_C
// (None)

class UClass* UUMG_FieldGuideItemVestigePage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_FieldGuideItemVestigePage_C");

	return Clss;
}


// UMG_FieldGuideItemVestigePage_C UMG_FieldGuideItemVestigePage.Default__UMG_FieldGuideItemVestigePage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_FieldGuideItemVestigePage_C* UUMG_FieldGuideItemVestigePage_C::GetDefaultObj()
{
	static class UUMG_FieldGuideItemVestigePage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_FieldGuideItemVestigePage_C*>(UUMG_FieldGuideItemVestigePage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_FieldGuideItemVestigePage.UMG_FieldGuideItemVestigePage_C.DoBestiaryClickByRef
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBestiaryDataRowHandle      Creature                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                              Percent                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_FieldGuideItemVestigePage_C::DoBestiaryClickByRef(const struct FBestiaryDataRowHandle& Creature, int32 Percent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuideItemVestigePage_C", "DoBestiaryClickByRef");

	Params::UUMG_FieldGuideItemVestigePage_C_DoBestiaryClickByRef_Params Parms{};

	Parms.Creature = Creature;
	Parms.Percent = Percent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FieldGuideItemVestigePage.UMG_FieldGuideItemVestigePage_C.SubItemClickedByRef
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFieldGuideCategoriesRowHandleCategoryRow                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// struct FItemsStaticRowHandle       ItemRow                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void UUMG_FieldGuideItemVestigePage_C::SubItemClickedByRef(struct FFieldGuideCategoriesRowHandle& CategoryRow, struct FItemsStaticRowHandle& ItemRow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuideItemVestigePage_C", "SubItemClickedByRef");

	Params::UUMG_FieldGuideItemVestigePage_C_SubItemClickedByRef_Params Parms{};

	Parms.CategoryRow = CategoryRow;
	Parms.ItemRow = ItemRow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FieldGuideItemVestigePage.UMG_FieldGuideItemVestigePage_C.SubItemClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFieldGuideCategoriesRowHandleCategoryRow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FItemsStaticRowHandle       ItemRow                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UUMG_FieldGuideItemVestigePage_C::SubItemClicked(const struct FFieldGuideCategoriesRowHandle& CategoryRow, const struct FItemsStaticRowHandle& ItemRow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuideItemVestigePage_C", "SubItemClicked");

	Params::UUMG_FieldGuideItemVestigePage_C_SubItemClicked_Params Parms{};

	Parms.CategoryRow = CategoryRow;
	Parms.ItemRow = ItemRow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FieldGuideItemVestigePage.UMG_FieldGuideItemVestigePage_C.PopulateResourceDetail
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemsStaticRowHandle       ItemRow                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FFieldGuideCategoriesRowHandleCategoryRow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFieldGuideRecipeInfo>RecipeRows                                                       (Edit, BlueprintVisible)
// TArray<struct FItemsStaticRowHandle>OutputsForRecipe                                                 (Edit, BlueprintVisible)
// struct FBestiaryDataRowHandle      CallFunc_GetBeastFromVestige_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsRowHandleValid_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UUMG_FieldGuide_Bestiary_Entry_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// struct FItemsStaticRowHandle       CallFunc_GetCorpseFromVestige_ReturnValue                        (NoDestructor, HasGetValueTypeHash)
// struct FFieldGuideCategoriesRowHandleCallFunc_GetCategoryForItem_ReturnValue                          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsRowHandleValid_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FItemsStaticRowHandle>CallFunc_GetTrophyKnives_ReturnValue                             (ReferenceParm)
// class UUMG_FieldGuideItemResourceIcon_C*CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemsStaticRowHandle       CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFieldGuideCategoriesRowHandleCallFunc_GetCategoryForItem_ReturnValue_1                        (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class UUMG_FieldGuideItemResourceIcon_C*CallFunc_Create_ReturnValue_2                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_FieldGuideItemVestigePage_C::PopulateResourceDetail(const struct FItemsStaticRowHandle& ItemRow, const struct FFieldGuideCategoriesRowHandle& CategoryRow, const TArray<struct FFieldGuideRecipeInfo>& RecipeRows, const TArray<struct FItemsStaticRowHandle>& OutputsForRecipe, const struct FBestiaryDataRowHandle& CallFunc_GetBeastFromVestige_ReturnValue, bool CallFunc_IsRowHandleValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMG_FieldGuide_Bestiary_Entry_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FItemsStaticRowHandle& CallFunc_GetCorpseFromVestige_ReturnValue, const struct FFieldGuideCategoriesRowHandle& CallFunc_GetCategoryForItem_ReturnValue, bool CallFunc_IsRowHandleValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, int32 Temp_int_Array_Index_Variable, TArray<struct FItemsStaticRowHandle>& CallFunc_GetTrophyKnives_ReturnValue, class UUMG_FieldGuideItemResourceIcon_C* CallFunc_Create_ReturnValue_1, const struct FItemsStaticRowHandle& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FFieldGuideCategoriesRowHandle& CallFunc_GetCategoryForItem_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UUMG_FieldGuideItemResourceIcon_C* CallFunc_Create_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuideItemVestigePage_C", "PopulateResourceDetail");

	Params::UUMG_FieldGuideItemVestigePage_C_PopulateResourceDetail_Params Parms{};

	Parms.ItemRow = ItemRow;
	Parms.CategoryRow = CategoryRow;
	Parms.RecipeRows = RecipeRows;
	Parms.OutputsForRecipe = OutputsForRecipe;
	Parms.CallFunc_GetBeastFromVestige_ReturnValue = CallFunc_GetBeastFromVestige_ReturnValue;
	Parms.CallFunc_IsRowHandleValid_ReturnValue = CallFunc_IsRowHandleValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetCorpseFromVestige_ReturnValue = CallFunc_GetCorpseFromVestige_ReturnValue;
	Parms.CallFunc_GetCategoryForItem_ReturnValue = CallFunc_GetCategoryForItem_ReturnValue;
	Parms.CallFunc_IsRowHandleValid_ReturnValue_1 = CallFunc_IsRowHandleValid_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetTrophyKnives_ReturnValue = CallFunc_GetTrophyKnives_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetCategoryForItem_ReturnValue_1 = CallFunc_GetCategoryForItem_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FieldGuideItemVestigePage.UMG_FieldGuideItemVestigePage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_FieldGuideItemVestigePage_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuideItemVestigePage_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_FieldGuideItemVestigePage.UMG_FieldGuideItemVestigePage_C.InitFieldGuideView
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemsStaticRowHandle       ItemIn                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FFieldGuideCategoriesRowHandleCategoryIn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UUMG_FieldGuideItemVestigePage_C::InitFieldGuideView(const struct FItemsStaticRowHandle& ItemIn, const struct FFieldGuideCategoriesRowHandle& CategoryIn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuideItemVestigePage_C", "InitFieldGuideView");

	Params::UUMG_FieldGuideItemVestigePage_C_InitFieldGuideView_Params Parms{};

	Parms.ItemIn = ItemIn;
	Parms.CategoryIn = CategoryIn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FieldGuideItemVestigePage.UMG_FieldGuideItemVestigePage_C.ExecuteUbergraph_UMG_FieldGuideItemVestigePage
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemsStaticRowHandle       K2Node_Event_ItemIn                                              (NoDestructor, HasGetValueTypeHash)
// struct FFieldGuideCategoriesRowHandleK2Node_Event_CategoryIn                                          (NoDestructor, HasGetValueTypeHash)

void UUMG_FieldGuideItemVestigePage_C::ExecuteUbergraph_UMG_FieldGuideItemVestigePage(int32 EntryPoint, const struct FItemsStaticRowHandle& K2Node_Event_ItemIn, const struct FFieldGuideCategoriesRowHandle& K2Node_Event_CategoryIn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuideItemVestigePage_C", "ExecuteUbergraph_UMG_FieldGuideItemVestigePage");

	Params::UUMG_FieldGuideItemVestigePage_C_ExecuteUbergraph_UMG_FieldGuideItemVestigePage_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ItemIn = K2Node_Event_ItemIn;
	Parms.K2Node_Event_CategoryIn = K2Node_Event_CategoryIn;

	UObject::ProcessEvent(Func, &Parms);

}

}


