#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AIHealthBarUI.AIHealthBarUI_C
// (None)

class UClass* UAIHealthBarUI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIHealthBarUI_C");

	return Clss;
}


// AIHealthBarUI_C AIHealthBarUI.Default__AIHealthBarUI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAIHealthBarUI_C* UAIHealthBarUI_C::GetDefaultObj()
{
	static class UAIHealthBarUI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIHealthBarUI_C*>(UAIHealthBarUI_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AIHealthBarUI.AIHealthBarUI_C.UpdateHealth
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             Health                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             MaxHealth                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAIHealthBarUI_C::UpdateHealth(double Health, double MaxHealth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHealthBarUI_C", "UpdateHealth");

	Params::UAIHealthBarUI_C_UpdateHealth_Params Parms{};

	Parms.Health = Health;
	Parms.MaxHealth = MaxHealth;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIHealthBarUI.AIHealthBarUI_C.ExecuteUbergraph_AIHealthBarUI
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_Health                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_CustomEvent_MaxHealth                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue                           (None)
// TScriptInterface<class IBPi_ProgressBars_C>CallFunc_GetProgressBarManager_Manager                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class UWB_Base_C*                  K2Node_DynamicCast_AsWB_Base                                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_DoubleToText_ReturnValue_1                         (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UAIHealthBarUI_C::ExecuteUbergraph_AIHealthBarUI(int32 EntryPoint, double K2Node_CustomEvent_Health, double K2Node_CustomEvent_MaxHealth, class FText CallFunc_Conv_DoubleToText_ReturnValue, TScriptInterface<class IBPi_ProgressBars_C> CallFunc_GetProgressBarManager_Manager, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class UWB_Base_C* K2Node_DynamicCast_AsWB_Base, bool K2Node_DynamicCast_bSuccess, double CallFunc_FClamp_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHealthBarUI_C", "ExecuteUbergraph_AIHealthBarUI");

	Params::UAIHealthBarUI_C_ExecuteUbergraph_AIHealthBarUI_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Health = K2Node_CustomEvent_Health;
	Parms.K2Node_CustomEvent_MaxHealth = K2Node_CustomEvent_MaxHealth;
	Parms.CallFunc_Conv_DoubleToText_ReturnValue = CallFunc_Conv_DoubleToText_ReturnValue;
	Parms.CallFunc_GetProgressBarManager_Manager = CallFunc_GetProgressBarManager_Manager;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_DynamicCast_AsWB_Base = K2Node_DynamicCast_AsWB_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Conv_DoubleToText_ReturnValue_1 = CallFunc_Conv_DoubleToText_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AIHealthBarUI.AIHealthBarUI_C.Hidden__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAIHealthBarUI_C::Hidden__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHealthBarUI_C", "Hidden__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AIHealthBarUI.AIHealthBarUI_C.Visible__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAIHealthBarUI_C::Visible__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHealthBarUI_C", "Visible__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


