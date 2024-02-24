#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CF_SpawnWorldBoss.CF_SpawnWorldBoss_C
// (None)

class UClass* UCF_SpawnWorldBoss_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CF_SpawnWorldBoss_C");

	return Clss;
}


// CF_SpawnWorldBoss_C CF_SpawnWorldBoss.Default__CF_SpawnWorldBoss_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCF_SpawnWorldBoss_C* UCF_SpawnWorldBoss_C::GetDefaultObj()
{
	static class UCF_SpawnWorldBoss_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCF_SpawnWorldBoss_C*>(UCF_SpawnWorldBoss_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CF_SpawnWorldBoss.CF_SpawnWorldBoss_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCF_SpawnWorldBoss_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_SpawnWorldBoss_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CF_SpawnWorldBoss.CF_SpawnWorldBoss_C.HandleExecute
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Amount                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCF_SpawnWorldBoss_C::HandleExecute(class UUserWidget* Widget, int32 Amount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_SpawnWorldBoss_C", "HandleExecute");

	Params::UCF_SpawnWorldBoss_C_HandleExecute_Params Parms{};

	Parms.Widget = Widget;
	Parms.Amount = Amount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CF_SpawnWorldBoss.CF_SpawnWorldBoss_C.ExecuteUbergraph_CF_SpawnWorldBoss
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 K2Node_Event_Widget                                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Amount                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStringRow_C*                CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStringRow_C*                K2Node_DynamicCast_AsString_Row                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWorldBossesEnum            CallFunc_IntToStruct_ReturnValue                                 (HasGetValueTypeHash)
// struct FWorldBossesRowHandle       CallFunc_MakeWorldBosses_ReturnValue                             (NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakWorldBossesEnum_Name                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakWorldBossesEnum_Index                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWorldBossesEnum            CallFunc_RowHandleToStruct_ReturnValue                           (HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_NumRows_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNetworkProxyComponent*      CallFunc_GetNetworkProxyComponent_ReturnValue                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_NetworkProxyComponent_C* K2Node_DynamicCast_AsBP_Network_Proxy_Component                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCF_SpawnWorldBoss_C::ExecuteUbergraph_CF_SpawnWorldBoss(int32 EntryPoint, class UUserWidget* K2Node_Event_Widget, int32 K2Node_Event_Amount, class UStringRow_C* CallFunc_Create_ReturnValue, class UStringRow_C* K2Node_DynamicCast_AsString_Row, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Variable, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FWorldBossesEnum& CallFunc_IntToStruct_ReturnValue, const struct FWorldBossesRowHandle& CallFunc_MakeWorldBosses_ReturnValue, class FName CallFunc_BreakWorldBossesEnum_Name, int32 CallFunc_BreakWorldBossesEnum_Index, const struct FWorldBossesEnum& CallFunc_RowHandleToStruct_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_NumRows_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, class UNetworkProxyComponent* CallFunc_GetNetworkProxyComponent_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UBP_NetworkProxyComponent_C* K2Node_DynamicCast_AsBP_Network_Proxy_Component, bool K2Node_DynamicCast_bSuccess_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_SpawnWorldBoss_C", "ExecuteUbergraph_CF_SpawnWorldBoss");

	Params::UCF_SpawnWorldBoss_C_ExecuteUbergraph_CF_SpawnWorldBoss_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Widget = K2Node_Event_Widget;
	Parms.K2Node_Event_Amount = K2Node_Event_Amount;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_DynamicCast_AsString_Row = K2Node_DynamicCast_AsString_Row;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_IntToStruct_ReturnValue = CallFunc_IntToStruct_ReturnValue;
	Parms.CallFunc_MakeWorldBosses_ReturnValue = CallFunc_MakeWorldBosses_ReturnValue;
	Parms.CallFunc_BreakWorldBossesEnum_Name = CallFunc_BreakWorldBossesEnum_Name;
	Parms.CallFunc_BreakWorldBossesEnum_Index = CallFunc_BreakWorldBossesEnum_Index;
	Parms.CallFunc_RowHandleToStruct_ReturnValue = CallFunc_RowHandleToStruct_ReturnValue;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_NumRows_ReturnValue = CallFunc_NumRows_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerController_IsValid = CallFunc_GetIcarusPlayerController_IsValid;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.CallFunc_GetNetworkProxyComponent_ReturnValue = CallFunc_GetNetworkProxyComponent_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsBP_Network_Proxy_Component = K2Node_DynamicCast_AsBP_Network_Proxy_Component;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


