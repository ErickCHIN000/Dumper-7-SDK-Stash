#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BP_FuelWidget.BP_FuelWidget_C
// (None)

class UClass* UBP_FuelWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FuelWidget_C");

	return Clss;
}


// BP_FuelWidget_C BP_FuelWidget.Default__BP_FuelWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_FuelWidget_C* UBP_FuelWidget_C::GetDefaultObj()
{
	static class UBP_FuelWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_FuelWidget_C*>(UBP_FuelWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_FuelWidget.BP_FuelWidget_C.GetVehicle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PlayerCharacter_C*       CallFunc_CastToCharacter_Character                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_FuelWidget_C::GetVehicle(class ABP_PlayerCharacter_C* CallFunc_CastToCharacter_Character)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FuelWidget_C", "GetVehicle");

	Params::UBP_FuelWidget_C_GetVehicle_Params Parms{};

	Parms.CallFunc_CastToCharacter_Character = CallFunc_CastToCharacter_Character;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FuelWidget.BP_FuelWidget_C.SetName
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        ActionName                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        ItemName                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UBP_FuelWidget_C::SetName(class FText ActionName, class FText ItemName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FuelWidget_C", "SetName");

	Params::UBP_FuelWidget_C_SetName_Params Parms{};

	Parms.ActionName = ActionName;
	Parms.ItemName = ItemName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FuelWidget.BP_FuelWidget_C.UpdateFuel
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Fuel                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FuelWidget_C::UpdateFuel(double Fuel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FuelWidget_C", "UpdateFuel");

	Params::UBP_FuelWidget_C_UpdateFuel_Params Parms{};

	Parms.Fuel = Fuel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FuelWidget.BP_FuelWidget_C.ExecuteUbergraph_BP_FuelWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_ActionName                                    (None)
// class FText                        K2Node_CustomEvent_ItemName                                      (None)
// double                             K2Node_CustomEvent_Fuel                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// class FString                      CallFunc_Conv_DoubleToString_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// float                              CallFunc_SetPercent_InPercent_ImplicitCast                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_FuelWidget_C::ExecuteUbergraph_BP_FuelWidget(int32 EntryPoint, class FText K2Node_CustomEvent_ActionName, class FText K2Node_CustomEvent_ItemName, double K2Node_CustomEvent_Fuel, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, double CallFunc_FClamp_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, float CallFunc_SetPercent_InPercent_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_FuelWidget_C", "ExecuteUbergraph_BP_FuelWidget");

	Params::UBP_FuelWidget_C_ExecuteUbergraph_BP_FuelWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_ActionName = K2Node_CustomEvent_ActionName;
	Parms.K2Node_CustomEvent_ItemName = K2Node_CustomEvent_ItemName;
	Parms.K2Node_CustomEvent_Fuel = K2Node_CustomEvent_Fuel;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.CallFunc_Conv_DoubleToString_ReturnValue = CallFunc_Conv_DoubleToString_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_SetPercent_InPercent_ImplicitCast = CallFunc_SetPercent_InPercent_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


