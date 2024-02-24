#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_FieldGuideResourceItemsOverview.UMG_FieldGuideResourceItemsOverview_C
// (None)

class UClass* UUMG_FieldGuideResourceItemsOverview_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_FieldGuideResourceItemsOverview_C");

	return Clss;
}


// UMG_FieldGuideResourceItemsOverview_C UMG_FieldGuideResourceItemsOverview.Default__UMG_FieldGuideResourceItemsOverview_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_FieldGuideResourceItemsOverview_C* UUMG_FieldGuideResourceItemsOverview_C::GetDefaultObj()
{
	static class UUMG_FieldGuideResourceItemsOverview_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_FieldGuideResourceItemsOverview_C*>(UUMG_FieldGuideResourceItemsOverview_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_FieldGuideResourceItemsOverview.UMG_FieldGuideResourceItemsOverview_C.SubItemClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFieldGuideCategoriesRowHandleCategoryRow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FItemsStaticRowHandle       ItemRow                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UUMG_FieldGuideResourceItemsOverview_C::SubItemClicked(const struct FFieldGuideCategoriesRowHandle& CategoryRow, const struct FItemsStaticRowHandle& ItemRow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuideResourceItemsOverview_C", "SubItemClicked");

	Params::UUMG_FieldGuideResourceItemsOverview_C_SubItemClicked_Params Parms{};

	Parms.CategoryRow = CategoryRow;
	Parms.ItemRow = ItemRow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FieldGuideResourceItemsOverview.UMG_FieldGuideResourceItemsOverview_C.Populate Resource Detail
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_FieldGuideItemsCategoryIconAndLabel_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFieldGuideCategoriesRowHandle>CallFunc_GetAllCategoryDisplayOrder_ReturnValue                  (ReferenceParm)
// struct FFieldGuideCategoriesRowHandleCallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UUMG_FieldGuideResourceItemsOverview_C::Populate_Resource_Detail(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UUMG_FieldGuideItemsCategoryIconAndLabel_C* CallFunc_Create_ReturnValue, TArray<struct FFieldGuideCategoriesRowHandle>& CallFunc_GetAllCategoryDisplayOrder_ReturnValue, const struct FFieldGuideCategoriesRowHandle& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuideResourceItemsOverview_C", "Populate Resource Detail");

	Params::UUMG_FieldGuideResourceItemsOverview_C_Populate_Resource_Detail_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetAllCategoryDisplayOrder_ReturnValue = CallFunc_GetAllCategoryDisplayOrder_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FieldGuideResourceItemsOverview.UMG_FieldGuideResourceItemsOverview_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_FieldGuideResourceItemsOverview_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuideResourceItemsOverview_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_FieldGuideResourceItemsOverview.UMG_FieldGuideResourceItemsOverview_C.ExecuteUbergraph_UMG_FieldGuideResourceItemsOverview
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_FieldGuideResourceItemsOverview_C::ExecuteUbergraph_UMG_FieldGuideResourceItemsOverview(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuideResourceItemsOverview_C", "ExecuteUbergraph_UMG_FieldGuideResourceItemsOverview");

	Params::UUMG_FieldGuideResourceItemsOverview_C_ExecuteUbergraph_UMG_FieldGuideResourceItemsOverview_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FieldGuideResourceItemsOverview.UMG_FieldGuideResourceItemsOverview_C.OnResourceClicked__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFieldGuideCategoriesRowHandleCategoryRow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FItemsStaticRowHandle       ItemRow                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UUMG_FieldGuideResourceItemsOverview_C::OnResourceClicked__DelegateSignature(const struct FFieldGuideCategoriesRowHandle& CategoryRow, const struct FItemsStaticRowHandle& ItemRow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuideResourceItemsOverview_C", "OnResourceClicked__DelegateSignature");

	Params::UUMG_FieldGuideResourceItemsOverview_C_OnResourceClicked__DelegateSignature_Params Parms{};

	Parms.CategoryRow = CategoryRow;
	Parms.ItemRow = ItemRow;

	UObject::ProcessEvent(Func, &Parms);

}

}


