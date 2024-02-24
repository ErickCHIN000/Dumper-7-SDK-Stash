#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_FieldGuideItem_Workshop.UMG_FieldGuideItem_Workshop_C
// (None)

class UClass* UUMG_FieldGuideItem_Workshop_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_FieldGuideItem_Workshop_C");

	return Clss;
}


// UMG_FieldGuideItem_Workshop_C UMG_FieldGuideItem_Workshop.Default__UMG_FieldGuideItem_Workshop_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_FieldGuideItem_Workshop_C* UUMG_FieldGuideItem_Workshop_C::GetDefaultObj()
{
	static class UUMG_FieldGuideItem_Workshop_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_FieldGuideItem_Workshop_C*>(UUMG_FieldGuideItem_Workshop_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_FieldGuideItem_Workshop.UMG_FieldGuideItem_Workshop_C.Populate Workshop Detail
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemsStaticRowHandle       ItemRow                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FFieldGuideCategoriesRowHandleCategoryRow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_WorkshopCostLarge_C*    CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_WorkshopCostLarge_C*    CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWorkshopItemsRowHandle     CallFunc_GetWorkshopItem_ReturnValue                             (NoDestructor, HasGetValueTypeHash)
// struct FWorkshopItem               CallFunc_GetWorkshopItemsStruct_WorkshopItems                    (None)
// enum class EValid                  CallFunc_GetWorkshopItemsStruct_Paths                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FWorkshopCost               CallFunc_Array_Get_Item                                          (NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FWorkshopCost               CallFunc_Array_Get_Item_1                                        (NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_FieldGuideItem_Workshop_C::Populate_Workshop_Detail(const struct FItemsStaticRowHandle& ItemRow, const struct FFieldGuideCategoriesRowHandle& CategoryRow, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class UUMG_WorkshopCostLarge_C* CallFunc_Create_ReturnValue, class UUMG_WorkshopCostLarge_C* CallFunc_Create_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FWorkshopItemsRowHandle& CallFunc_GetWorkshopItem_ReturnValue, const struct FWorkshopItem& CallFunc_GetWorkshopItemsStruct_WorkshopItems, enum class EValid CallFunc_GetWorkshopItemsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FWorkshopCost& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FWorkshopCost& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuideItem_Workshop_C", "Populate Workshop Detail");

	Params::UUMG_FieldGuideItem_Workshop_C_Populate_Workshop_Detail_Params Parms{};

	Parms.ItemRow = ItemRow;
	Parms.CategoryRow = CategoryRow;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetWorkshopItem_ReturnValue = CallFunc_GetWorkshopItem_ReturnValue;
	Parms.CallFunc_GetWorkshopItemsStruct_WorkshopItems = CallFunc_GetWorkshopItemsStruct_WorkshopItems;
	Parms.CallFunc_GetWorkshopItemsStruct_Paths = CallFunc_GetWorkshopItemsStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FieldGuideItem_Workshop.UMG_FieldGuideItem_Workshop_C.InitFieldGuideView
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemsStaticRowHandle       ItemIn                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FFieldGuideCategoriesRowHandleCategoryIn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UUMG_FieldGuideItem_Workshop_C::InitFieldGuideView(const struct FItemsStaticRowHandle& ItemIn, const struct FFieldGuideCategoriesRowHandle& CategoryIn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuideItem_Workshop_C", "InitFieldGuideView");

	Params::UUMG_FieldGuideItem_Workshop_C_InitFieldGuideView_Params Parms{};

	Parms.ItemIn = ItemIn;
	Parms.CategoryIn = CategoryIn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_FieldGuideItem_Workshop.UMG_FieldGuideItem_Workshop_C.ExecuteUbergraph_UMG_FieldGuideItem_Workshop
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemsStaticRowHandle       K2Node_Event_ItemIn                                              (NoDestructor, HasGetValueTypeHash)
// struct FFieldGuideCategoriesRowHandleK2Node_Event_CategoryIn                                          (NoDestructor, HasGetValueTypeHash)

void UUMG_FieldGuideItem_Workshop_C::ExecuteUbergraph_UMG_FieldGuideItem_Workshop(int32 EntryPoint, const struct FItemsStaticRowHandle& K2Node_Event_ItemIn, const struct FFieldGuideCategoriesRowHandle& K2Node_Event_CategoryIn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_FieldGuideItem_Workshop_C", "ExecuteUbergraph_UMG_FieldGuideItem_Workshop");

	Params::UUMG_FieldGuideItem_Workshop_C_ExecuteUbergraph_UMG_FieldGuideItem_Workshop_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ItemIn = K2Node_Event_ItemIn;
	Parms.K2Node_Event_CategoryIn = K2Node_Event_CategoryIn;

	UObject::ProcessEvent(Func, &Parms);

}

}


