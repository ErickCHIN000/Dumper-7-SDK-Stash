#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_FieldGuideItemToolsPage.UMG_FieldGuideItemToolsPage_C
// (None)

class UClass* UUMG_FieldGuideItemToolsPage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_FieldGuideItemToolsPage_C");

	return Clss;
}


// UMG_FieldGuideItemToolsPage_C UMG_FieldGuideItemToolsPage.Default__UMG_FieldGuideItemToolsPage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_FieldGuideItemToolsPage_C* UUMG_FieldGuideItemToolsPage_C::GetDefaultObj()
{
	static class UUMG_FieldGuideItemToolsPage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_FieldGuideItemToolsPage_C*>(UUMG_FieldGuideItemToolsPage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_FieldGuideItemToolsPage.UMG_FieldGuideItemToolsPage_C.SubItemClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFieldGuideCategoriesRowHandleCategoryRow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FItemsStaticRowHandle       ItemRow                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UUMG_FieldGuideItemToolsPage_C::SubItemClicked(const struct FFieldGuideCategoriesRowHandle& CategoryRow, const struct FItemsStaticRowHandle& ItemRow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuideItemToolsPage_C", "SubItemClicked");

	Params::UUMG_FieldGuideItemToolsPage_C_SubItemClicked_Params Parms{};

	Parms.CategoryRow = CategoryRow;
	Parms.ItemRow = ItemRow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FieldGuideItemToolsPage.UMG_FieldGuideItemToolsPage_C.SubItemClickedByRef
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFieldGuideCategoriesRowHandleCategoryRow                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// struct FItemsStaticRowHandle       ItemRow                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)

void UUMG_FieldGuideItemToolsPage_C::SubItemClickedByRef(struct FFieldGuideCategoriesRowHandle& CategoryRow, struct FItemsStaticRowHandle& ItemRow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuideItemToolsPage_C", "SubItemClickedByRef");

	Params::UUMG_FieldGuideItemToolsPage_C_SubItemClickedByRef_Params Parms{};

	Parms.CategoryRow = CategoryRow;
	Parms.ItemRow = ItemRow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FieldGuideItemToolsPage.UMG_FieldGuideItemToolsPage_C.PopulateArmorDetail
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemsStaticRowHandle       ItemRow                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FFieldGuideCategoriesRowHandleCategoryRow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// TArray<struct FItemsStaticRowHandle>ItemsInSet                                                       (Edit, BlueprintVisible)
// TArray<struct FFieldGuideRecipeInfo>RecipeRows                                                       (Edit, BlueprintVisible)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)

void UUMG_FieldGuideItemToolsPage_C::PopulateArmorDetail(const struct FItemsStaticRowHandle& ItemRow, const struct FFieldGuideCategoriesRowHandle& CategoryRow, const TArray<struct FItemsStaticRowHandle>& ItemsInSet, const TArray<struct FFieldGuideRecipeInfo>& RecipeRows, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuideItemToolsPage_C", "PopulateArmorDetail");

	Params::UUMG_FieldGuideItemToolsPage_C_PopulateArmorDetail_Params Parms{};

	Parms.ItemRow = ItemRow;
	Parms.CategoryRow = CategoryRow;
	Parms.ItemsInSet = ItemsInSet;
	Parms.RecipeRows = RecipeRows;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FieldGuideItemToolsPage.UMG_FieldGuideItemToolsPage_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_FieldGuideItemToolsPage_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuideItemToolsPage_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_FieldGuideItemToolsPage.UMG_FieldGuideItemToolsPage_C.InitFieldGuideView
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemsStaticRowHandle       ItemIn                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FFieldGuideCategoriesRowHandleCategoryIn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UUMG_FieldGuideItemToolsPage_C::InitFieldGuideView(const struct FItemsStaticRowHandle& ItemIn, const struct FFieldGuideCategoriesRowHandle& CategoryIn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuideItemToolsPage_C", "InitFieldGuideView");

	Params::UUMG_FieldGuideItemToolsPage_C_InitFieldGuideView_Params Parms{};

	Parms.ItemIn = ItemIn;
	Parms.CategoryIn = CategoryIn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FieldGuideItemToolsPage.UMG_FieldGuideItemToolsPage_C.ExecuteUbergraph_UMG_FieldGuideItemToolsPage
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemsStaticRowHandle       K2Node_Event_ItemIn                                              (NoDestructor, HasGetValueTypeHash)
// struct FFieldGuideCategoriesRowHandleK2Node_Event_CategoryIn                                          (NoDestructor, HasGetValueTypeHash)

void UUMG_FieldGuideItemToolsPage_C::ExecuteUbergraph_UMG_FieldGuideItemToolsPage(int32 EntryPoint, const struct FItemsStaticRowHandle& K2Node_Event_ItemIn, const struct FFieldGuideCategoriesRowHandle& K2Node_Event_CategoryIn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuideItemToolsPage_C", "ExecuteUbergraph_UMG_FieldGuideItemToolsPage");

	Params::UUMG_FieldGuideItemToolsPage_C_ExecuteUbergraph_UMG_FieldGuideItemToolsPage_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ItemIn = K2Node_Event_ItemIn;
	Parms.K2Node_Event_CategoryIn = K2Node_Event_CategoryIn;

	UObject::ProcessEvent(Func, &Parms);

}

}


