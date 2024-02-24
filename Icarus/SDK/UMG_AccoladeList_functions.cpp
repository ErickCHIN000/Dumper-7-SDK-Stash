#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_AccoladeList.UMG_AccoladeList_C
// (None)

class UClass* UUMG_AccoladeList_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_AccoladeList_C");

	return Clss;
}


// UMG_AccoladeList_C UMG_AccoladeList.Default__UMG_AccoladeList_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_AccoladeList_C* UUMG_AccoladeList_C::GetDefaultObj()
{
	static class UUMG_AccoladeList_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_AccoladeList_C*>(UUMG_AccoladeList_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_AccoladeList.UMG_AccoladeList_C.RefreshState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_PlayerAccolade_C*       CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_AccoladeList_C::RefreshState(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UUMG_PlayerAccolade_C* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_AccoladeList_C", "RefreshState");

	Params::UUMG_AccoladeList_C_RefreshState_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_AccoladeList.UMG_AccoladeList_C.Init
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlayerAccoladeCategoriesRowHandleCategory                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// TArray<struct FAccoladesRowHandle> Accolades                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class UUMG_PlayerAccolade_C*       CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FPlayerAccoladeCategoriesRowHandleFPlayerAccoladeCategoriesRowHandle_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FAccoladesRowHandle         CallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUniformGridSlot*            CallFunc_AddChildToUniformGrid_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     K2Node_MakeStruct_Margin_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FPlayerAccoladeCategoriesRowHandleFPlayerAccoladeCategoriesRowHandle_ReturnValue_1(ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_AccoladeList_C::Init(const struct FPlayerAccoladeCategoriesRowHandle& Category, TArray<struct FAccoladesRowHandle>& Accolades, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class UUMG_PlayerAccolade_C* CallFunc_Create_ReturnValue, bool Temp_bool_Variable, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, bool CallFunc_EqualEqual_FPlayerAccoladeCategoriesRowHandleFPlayerAccoladeCategoriesRowHandle_ReturnValue, bool Temp_bool_Variable_1, const struct FAccoladesRowHandle& CallFunc_Array_Get_Item, class FText K2Node_Select_Default, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, const struct FMargin& K2Node_MakeStruct_Margin_1, bool CallFunc_EqualEqual_FPlayerAccoladeCategoriesRowHandleFPlayerAccoladeCategoriesRowHandle_ReturnValue_1, const struct FMargin& K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_AccoladeList_C", "Init");

	Params::UUMG_AccoladeList_C_Init_Params Parms{};

	Parms.Category = Category;
	Parms.Accolades = Accolades;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_FPlayerAccoladeCategoriesRowHandleFPlayerAccoladeCategoriesRowHandle_ReturnValue = CallFunc_EqualEqual_FPlayerAccoladeCategoriesRowHandleFPlayerAccoladeCategoriesRowHandle_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_AddChildToUniformGrid_ReturnValue = CallFunc_AddChildToUniformGrid_ReturnValue;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.K2Node_MakeStruct_Margin_1 = K2Node_MakeStruct_Margin_1;
	Parms.CallFunc_EqualEqual_FPlayerAccoladeCategoriesRowHandleFPlayerAccoladeCategoriesRowHandle_ReturnValue_1 = CallFunc_EqualEqual_FPlayerAccoladeCategoriesRowHandleFPlayerAccoladeCategoriesRowHandle_ReturnValue_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_AccoladeList.UMG_AccoladeList_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_AccoladeList_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_AccoladeList_C", "PreConstruct");

	Params::UUMG_AccoladeList_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_AccoladeList.UMG_AccoladeList_C.ExecuteUbergraph_UMG_AccoladeList
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FPlayerAccoladeCategoriesRowHandleFPlayerAccoladeCategoriesRowHandle_ReturnValue(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FAccoladesRowHandle         Temp_struct_Variable                                             (NoDestructor, HasGetValueTypeHash)
// struct FAccoladesRowHandle         Temp_struct_Variable_1                                           (NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FAccoladesRowHandle         Temp_struct_Variable_2                                           (NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Divide_IntInt_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_PlayerAccolade_C*       CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FPlayerAccoladeCategoriesRowHandleFPlayerAccoladeCategoriesRowHandle_ReturnValue_1(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FPlayerAccoladeCategoriesRowHandleFPlayerAccoladeCategoriesRowHandle_ReturnValue_2(ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FAccoladesRowHandle         K2Node_Select_Default_1                                          (NoDestructor, HasGetValueTypeHash)
// class UUniformGridSlot*            CallFunc_AddChildToUniformGrid_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAccoladesRowHandle         K2Node_Select_Default_2                                          (NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_FPlayerAccoladeCategoriesRowHandleFPlayerAccoladeCategoriesRowHandle_ReturnValue_3(ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     K2Node_MakeStruct_Margin_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_AccoladeList_C::ExecuteUbergraph_UMG_AccoladeList(int32 EntryPoint, bool Temp_bool_Variable, bool CallFunc_EqualEqual_FPlayerAccoladeCategoriesRowHandleFPlayerAccoladeCategoriesRowHandle_ReturnValue, bool Temp_bool_Variable_1, const struct FAccoladesRowHandle& Temp_struct_Variable, const struct FAccoladesRowHandle& Temp_struct_Variable_1, bool Temp_bool_Variable_2, class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool Temp_bool_Variable_3, const struct FAccoladesRowHandle& Temp_struct_Variable_2, class FText K2Node_Select_Default, int32 Temp_int_Variable, int32 CallFunc_Divide_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, class UUMG_PlayerAccolade_C* CallFunc_Create_ReturnValue, bool CallFunc_EqualEqual_FPlayerAccoladeCategoriesRowHandleFPlayerAccoladeCategoriesRowHandle_ReturnValue_1, bool CallFunc_EqualEqual_FPlayerAccoladeCategoriesRowHandleFPlayerAccoladeCategoriesRowHandle_ReturnValue_2, const struct FAccoladesRowHandle& K2Node_Select_Default_1, class UUniformGridSlot* CallFunc_AddChildToUniformGrid_ReturnValue, const struct FAccoladesRowHandle& K2Node_Select_Default_2, const struct FMargin& K2Node_MakeStruct_Margin, bool CallFunc_EqualEqual_FPlayerAccoladeCategoriesRowHandleFPlayerAccoladeCategoriesRowHandle_ReturnValue_3, const struct FMargin& K2Node_MakeStruct_Margin_1, const struct FMargin& K2Node_Select_Default_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_AccoladeList_C", "ExecuteUbergraph_UMG_AccoladeList");

	Params::UUMG_AccoladeList_C_ExecuteUbergraph_UMG_AccoladeList_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_EqualEqual_FPlayerAccoladeCategoriesRowHandleFPlayerAccoladeCategoriesRowHandle_ReturnValue = CallFunc_EqualEqual_FPlayerAccoladeCategoriesRowHandleFPlayerAccoladeCategoriesRowHandle_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Divide_IntInt_ReturnValue = CallFunc_Divide_IntInt_ReturnValue;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_EqualEqual_FPlayerAccoladeCategoriesRowHandleFPlayerAccoladeCategoriesRowHandle_ReturnValue_1 = CallFunc_EqualEqual_FPlayerAccoladeCategoriesRowHandleFPlayerAccoladeCategoriesRowHandle_ReturnValue_1;
	Parms.CallFunc_EqualEqual_FPlayerAccoladeCategoriesRowHandleFPlayerAccoladeCategoriesRowHandle_ReturnValue_2 = CallFunc_EqualEqual_FPlayerAccoladeCategoriesRowHandleFPlayerAccoladeCategoriesRowHandle_ReturnValue_2;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_AddChildToUniformGrid_ReturnValue = CallFunc_AddChildToUniformGrid_ReturnValue;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_EqualEqual_FPlayerAccoladeCategoriesRowHandleFPlayerAccoladeCategoriesRowHandle_ReturnValue_3 = CallFunc_EqualEqual_FPlayerAccoladeCategoriesRowHandleFPlayerAccoladeCategoriesRowHandle_ReturnValue_3;
	Parms.K2Node_MakeStruct_Margin_1 = K2Node_MakeStruct_Margin_1;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


