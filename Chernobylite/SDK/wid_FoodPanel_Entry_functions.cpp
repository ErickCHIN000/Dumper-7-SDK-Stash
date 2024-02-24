#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_FoodPanel_Entry.wid_FoodPanel_Entry_C
// (None)

class UClass* UWid_FoodPanel_Entry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_FoodPanel_Entry_C");

	return Clss;
}


// wid_FoodPanel_Entry_C wid_FoodPanel_Entry.Default__wid_FoodPanel_Entry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_FoodPanel_Entry_C* UWid_FoodPanel_Entry_C::GetDefaultObj()
{
	static class UWid_FoodPanel_Entry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_FoodPanel_Entry_C*>(UWid_FoodPanel_Entry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_FoodPanel_Entry.wid_FoodPanel_Entry_C.SetFoodRationDesc
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        RowName                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSt_FoodRation              CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_FoodPanel_Entry_C::SetFoodRationDesc(class FName RowName, const struct FSt_FoodRation& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_FoodPanel_Entry_C", "SetFoodRationDesc");

	Params::UWid_FoodPanel_Entry_C_SetFoodRationDesc_Params Parms{};

	Parms.RowName = RowName;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_FoodPanel_Entry.wid_FoodPanel_Entry_C.SelectRation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewIndex                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Direction                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_FoodPanel_Button_C*     K2Node_DynamicCast_AsWid_Food_Panel_Button                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue_1                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_FoodPanel_Button_C*     K2Node_DynamicCast_AsWid_Food_Panel_Button_1                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_FoodPanel_Entry_C::SelectRation(int32 NewIndex, int32 Direction, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWid_FoodPanel_Button_C* K2Node_DynamicCast_AsWid_Food_Panel_Button, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_GetChildAt_ReturnValue_1, class UWid_FoodPanel_Button_C* K2Node_DynamicCast_AsWid_Food_Panel_Button_1, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_FoodPanel_Entry_C", "SelectRation");

	Params::UWid_FoodPanel_Entry_C_SelectRation_Params Parms{};

	Parms.NewIndex = NewIndex;
	Parms.Direction = Direction;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsWid_Food_Panel_Button = K2Node_DynamicCast_AsWid_Food_Panel_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetChildAt_ReturnValue_1 = CallFunc_GetChildAt_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsWid_Food_Panel_Button_1 = K2Node_DynamicCast_AsWid_Food_Panel_Button_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_FoodPanel_Entry.wid_FoodPanel_Entry_C.SelectButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Condition                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_FoodPanel_Entry_C::SelectButton(bool Condition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_FoodPanel_Entry_C", "SelectButton");

	Params::UWid_FoodPanel_Entry_C_SelectButton_Params Parms{};

	Parms.Condition = Condition;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_FoodPanel_Entry.wid_FoodPanel_Entry_C.GetCanBeSend
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               CanBeSend                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_FoodPanel_Entry_C::GetCanBeSend(bool* CanBeSend)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_FoodPanel_Entry_C", "GetCanBeSend");

	Params::UWid_FoodPanel_Entry_C_GetCanBeSend_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CanBeSend != nullptr)
		*CanBeSend = Parms.CanBeSend;

}


// Function wid_FoodPanel_Entry.wid_FoodPanel_Entry_C.Select
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Select                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_FoodPanel_Entry_C::Select(bool Select)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_FoodPanel_Entry_C", "Select");

	Params::UWid_FoodPanel_Entry_C_Select_Params Parms{};

	Parms.Select = Select;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_FoodPanel_Entry.wid_FoodPanel_Entry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_FoodPanel_Entry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_FoodPanel_Entry_C", "PreConstruct");

	Params::UWid_FoodPanel_Entry_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_FoodPanel_Entry.wid_FoodPanel_Entry_C.ExecuteUbergraph_wid_FoodPanel_Entry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_FoodPanel_Entry_C::ExecuteUbergraph_wid_FoodPanel_Entry(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_FoodPanel_Entry_C", "ExecuteUbergraph_wid_FoodPanel_Entry");

	Params::UWid_FoodPanel_Entry_C_ExecuteUbergraph_wid_FoodPanel_Entry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


