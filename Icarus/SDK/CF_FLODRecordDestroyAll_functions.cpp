#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CF_FLODRecordDestroyAll.CF_FLODRecordDestroyAll_C
// (None)

class UClass* UCF_FLODRecordDestroyAll_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CF_FLODRecordDestroyAll_C");

	return Clss;
}


// CF_FLODRecordDestroyAll_C CF_FLODRecordDestroyAll.Default__CF_FLODRecordDestroyAll_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCF_FLODRecordDestroyAll_C* UCF_FLODRecordDestroyAll_C::GetDefaultObj()
{
	static class UCF_FLODRecordDestroyAll_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCF_FLODRecordDestroyAll_C*>(UCF_FLODRecordDestroyAll_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CF_FLODRecordDestroyAll.CF_FLODRecordDestroyAll_C.Execute
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCF_FLODRecordDestroyAll_C::Execute()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_FLODRecordDestroyAll_C", "Execute");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CF_FLODRecordDestroyAll.CF_FLODRecordDestroyAll_C.ExecuteUbergraph_CF_FLODRecordDestroyAll
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNetworkProxyComponent*      CallFunc_GetNetworkProxyComponent_ReturnValue                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_NetworkProxyComponent_C* K2Node_DynamicCast_AsBP_Network_Proxy_Component                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCF_FLODRecordDestroyAll_C::ExecuteUbergraph_CF_FLODRecordDestroyAll(int32 EntryPoint, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, class UNetworkProxyComponent* CallFunc_GetNetworkProxyComponent_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UBP_NetworkProxyComponent_C* K2Node_DynamicCast_AsBP_Network_Proxy_Component, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_FLODRecordDestroyAll_C", "ExecuteUbergraph_CF_FLODRecordDestroyAll");

	Params::UCF_FLODRecordDestroyAll_C_ExecuteUbergraph_CF_FLODRecordDestroyAll_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetIcarusPlayerController_IsValid = CallFunc_GetIcarusPlayerController_IsValid;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.CallFunc_GetNetworkProxyComponent_ReturnValue = CallFunc_GetNetworkProxyComponent_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsBP_Network_Proxy_Component = K2Node_DynamicCast_AsBP_Network_Proxy_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


