#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BuildableObjectHealth.BuildableObjectHealth_C
// (None)

class UClass* UBuildableObjectHealth_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BuildableObjectHealth_C");

	return Clss;
}


// BuildableObjectHealth_C BuildableObjectHealth.Default__BuildableObjectHealth_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBuildableObjectHealth_C* UBuildableObjectHealth_C::GetDefaultObj()
{
	static class UBuildableObjectHealth_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBuildableObjectHealth_C*>(UBuildableObjectHealth_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BuildableObjectHealth.BuildableObjectHealth_C.UpdateHealth
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Health                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MaxHealth                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBuildableObjectHealth_C::UpdateHealth(int32 Health, int32 MaxHealth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuildableObjectHealth_C", "UpdateHealth");

	Params::UBuildableObjectHealth_C_UpdateHealth_Params Parms{};

	Parms.Health = Health;
	Parms.MaxHealth = MaxHealth;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuildableObjectHealth.BuildableObjectHealth_C.ExecuteUbergraph_BuildableObjectHealth
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Health                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_MaxHealth                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// TScriptInterface<class IBPi_ProgressBars_C>CallFunc_GetProgressBarManager_Manager                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWB_Base_C*                  K2Node_DynamicCast_AsWB_Base                                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)

void UBuildableObjectHealth_C::ExecuteUbergraph_BuildableObjectHealth(int32 EntryPoint, int32 K2Node_CustomEvent_Health, int32 K2Node_CustomEvent_MaxHealth, const class FString& CallFunc_Conv_IntToString_ReturnValue, TScriptInterface<class IBPi_ProgressBars_C> CallFunc_GetProgressBarManager_Manager, double CallFunc_Conv_IntToDouble_ReturnValue, class UWB_Base_C* K2Node_DynamicCast_AsWB_Base, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Clamp_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, double CallFunc_Divide_DoubleDouble_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuildableObjectHealth_C", "ExecuteUbergraph_BuildableObjectHealth");

	Params::UBuildableObjectHealth_C_ExecuteUbergraph_BuildableObjectHealth_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Health = K2Node_CustomEvent_Health;
	Parms.K2Node_CustomEvent_MaxHealth = K2Node_CustomEvent_MaxHealth;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_GetProgressBarManager_Manager = CallFunc_GetProgressBarManager_Manager;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.K2Node_DynamicCast_AsWB_Base = K2Node_DynamicCast_AsWB_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue_1 = CallFunc_Conv_IntToDouble_ReturnValue_1;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuildableObjectHealth.BuildableObjectHealth_C.Hidden__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBuildableObjectHealth_C::Hidden__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuildableObjectHealth_C", "Hidden__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BuildableObjectHealth.BuildableObjectHealth_C.Visible__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBuildableObjectHealth_C::Visible__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BuildableObjectHealth_C", "Visible__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


