#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_FieldGuideResourceItemsFewGrid.UMG_FieldGuideResourceItemsFewGrid_C
// (None)

class UClass* UUMG_FieldGuideResourceItemsFewGrid_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_FieldGuideResourceItemsFewGrid_C");

	return Clss;
}


// UMG_FieldGuideResourceItemsFewGrid_C UMG_FieldGuideResourceItemsFewGrid.Default__UMG_FieldGuideResourceItemsFewGrid_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_FieldGuideResourceItemsFewGrid_C* UUMG_FieldGuideResourceItemsFewGrid_C::GetDefaultObj()
{
	static class UUMG_FieldGuideResourceItemsFewGrid_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_FieldGuideResourceItemsFewGrid_C*>(UUMG_FieldGuideResourceItemsFewGrid_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_FieldGuideResourceItemsFewGrid.UMG_FieldGuideResourceItemsFewGrid_C.SubItemClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFieldGuideCategoriesRowHandleCategoryRow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FItemsStaticRowHandle       ItemRow                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UUMG_FieldGuideResourceItemsFewGrid_C::SubItemClicked(const struct FFieldGuideCategoriesRowHandle& CategoryRow, const struct FItemsStaticRowHandle& ItemRow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuideResourceItemsFewGrid_C", "SubItemClicked");

	Params::UUMG_FieldGuideResourceItemsFewGrid_C_SubItemClicked_Params Parms{};

	Parms.CategoryRow = CategoryRow;
	Parms.ItemRow = ItemRow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FieldGuideResourceItemsFewGrid.UMG_FieldGuideResourceItemsFewGrid_C.Populate Resource Detail
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFieldGuideCategoriesRowHandleCategoryRow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_FieldGuideItemResourceIcon_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFieldGuideCategories       CallFunc_GetFieldGuideCategoriesStruct_FieldGuideCategories      (None)
// enum class EValid                  CallFunc_GetFieldGuideCategoriesStruct_Paths                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FItemsStaticRowHandle>CallFunc_GetAllItemsForCategory_ReturnValue                      (ReferenceParm)
// struct FItemsStaticRowHandle       CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// struct FFieldGuideCategories       CallFunc_GetFieldGuideCategoriesStruct_FieldGuideCategories_1    (None)
// enum class EValid                  CallFunc_GetFieldGuideCategoriesStruct_Paths_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UUMG_FieldGuideResourceItemsFewGrid_C::Populate_Resource_Detail(const struct FFieldGuideCategoriesRowHandle& CategoryRow, int32 Temp_int_Array_Index_Variable, class UUMG_FieldGuideItemResourceIcon_C* CallFunc_Create_ReturnValue, const struct FFieldGuideCategories& CallFunc_GetFieldGuideCategoriesStruct_FieldGuideCategories, enum class EValid CallFunc_GetFieldGuideCategoriesStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, TArray<struct FItemsStaticRowHandle>& CallFunc_GetAllItemsForCategory_ReturnValue, const struct FItemsStaticRowHandle& CallFunc_Array_Get_Item, const struct FFieldGuideCategories& CallFunc_GetFieldGuideCategoriesStruct_FieldGuideCategories_1, enum class EValid CallFunc_GetFieldGuideCategoriesStruct_Paths_1, bool K2Node_SwitchEnum_CmpSuccess_1, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuideResourceItemsFewGrid_C", "Populate Resource Detail");

	Params::UUMG_FieldGuideResourceItemsFewGrid_C_Populate_Resource_Detail_Params Parms{};

	Parms.CategoryRow = CategoryRow;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetFieldGuideCategoriesStruct_FieldGuideCategories = CallFunc_GetFieldGuideCategoriesStruct_FieldGuideCategories;
	Parms.CallFunc_GetFieldGuideCategoriesStruct_Paths = CallFunc_GetFieldGuideCategoriesStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetAllItemsForCategory_ReturnValue = CallFunc_GetAllItemsForCategory_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetFieldGuideCategoriesStruct_FieldGuideCategories_1 = CallFunc_GetFieldGuideCategoriesStruct_FieldGuideCategories_1;
	Parms.CallFunc_GetFieldGuideCategoriesStruct_Paths_1 = CallFunc_GetFieldGuideCategoriesStruct_Paths_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FieldGuideResourceItemsFewGrid.UMG_FieldGuideResourceItemsFewGrid_C.InitFieldGuideView
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemsStaticRowHandle       ItemIn                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FFieldGuideCategoriesRowHandleCategoryIn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UUMG_FieldGuideResourceItemsFewGrid_C::InitFieldGuideView(const struct FItemsStaticRowHandle& ItemIn, const struct FFieldGuideCategoriesRowHandle& CategoryIn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuideResourceItemsFewGrid_C", "InitFieldGuideView");

	Params::UUMG_FieldGuideResourceItemsFewGrid_C_InitFieldGuideView_Params Parms{};

	Parms.ItemIn = ItemIn;
	Parms.CategoryIn = CategoryIn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FieldGuideResourceItemsFewGrid.UMG_FieldGuideResourceItemsFewGrid_C.ExecuteUbergraph_UMG_FieldGuideResourceItemsFewGrid
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemsStaticRowHandle       K2Node_Event_ItemIn                                              (NoDestructor, HasGetValueTypeHash)
// struct FFieldGuideCategoriesRowHandleK2Node_Event_CategoryIn                                          (NoDestructor, HasGetValueTypeHash)

void UUMG_FieldGuideResourceItemsFewGrid_C::ExecuteUbergraph_UMG_FieldGuideResourceItemsFewGrid(int32 EntryPoint, const struct FItemsStaticRowHandle& K2Node_Event_ItemIn, const struct FFieldGuideCategoriesRowHandle& K2Node_Event_CategoryIn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuideResourceItemsFewGrid_C", "ExecuteUbergraph_UMG_FieldGuideResourceItemsFewGrid");

	Params::UUMG_FieldGuideResourceItemsFewGrid_C_ExecuteUbergraph_UMG_FieldGuideResourceItemsFewGrid_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ItemIn = K2Node_Event_ItemIn;
	Parms.K2Node_Event_CategoryIn = K2Node_Event_CategoryIn;

	UObject::ProcessEvent(Func, &Parms);

}

}


