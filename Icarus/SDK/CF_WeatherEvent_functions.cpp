#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CF_WeatherEvent.CF_WeatherEvent_C
// (None)

class UClass* UCF_WeatherEvent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CF_WeatherEvent_C");

	return Clss;
}


// CF_WeatherEvent_C CF_WeatherEvent.Default__CF_WeatherEvent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCF_WeatherEvent_C* UCF_WeatherEvent_C::GetDefaultObj()
{
	static class UCF_WeatherEvent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCF_WeatherEvent_C*>(UCF_WeatherEvent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CF_WeatherEvent.CF_WeatherEvent_C.OnConstruction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBiomesEnum                 CallFunc_IntToStruct_ReturnValue                                 (HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBiomesRowHandle            CallFunc_StructToRowHandle_ReturnValue                           (NoDestructor, HasGetValueTypeHash)
// struct FIcarusBiome                CallFunc_GetBiomesStruct_Biomes                                  (None)
// enum class EValid                  CallFunc_GetBiomesStruct_Paths                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBiomesRowHandle            CallFunc_MakeBiomes_ReturnValue                                  (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeatherEventsEnum          CallFunc_IntToStruct_ReturnValue_1                               (HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeatherEventsRowHandle     CallFunc_StructToRowHandle_ReturnValue_1                         (NoDestructor, HasGetValueTypeHash)
// struct FIcarusWeatherEvent         CallFunc_GetWeatherEventsStruct_WeatherEvents                    (None)
// enum class EValid                  CallFunc_GetWeatherEventsStruct_Paths                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBiomeRow_C*                 CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWeatherRow_C*               CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_NumRows_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_NumRows_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCF_WeatherEvent_C::OnConstruction(int32 Temp_int_Variable, int32 Temp_int_Variable_1, const struct FBiomesEnum& CallFunc_IntToStruct_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FBiomesRowHandle& CallFunc_StructToRowHandle_ReturnValue, const struct FIcarusBiome& CallFunc_GetBiomesStruct_Biomes, enum class EValid CallFunc_GetBiomesStruct_Paths, const struct FBiomesRowHandle& CallFunc_MakeBiomes_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_Conv_NameToString_ReturnValue, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, const struct FWeatherEventsEnum& CallFunc_IntToStruct_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FWeatherEventsRowHandle& CallFunc_StructToRowHandle_ReturnValue_1, const struct FIcarusWeatherEvent& CallFunc_GetWeatherEventsStruct_WeatherEvents, enum class EValid CallFunc_GetWeatherEventsStruct_Paths, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_1, class FName CallFunc_Conv_StringToName_ReturnValue, class UBiomeRow_C* CallFunc_Create_ReturnValue, class UWeatherRow_C* CallFunc_Create_ReturnValue_1, int32 CallFunc_NumRows_ReturnValue, int32 CallFunc_NumRows_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_WeatherEvent_C", "OnConstruction");

	Params::UCF_WeatherEvent_C_OnConstruction_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_IntToStruct_ReturnValue = CallFunc_IntToStruct_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_StructToRowHandle_ReturnValue = CallFunc_StructToRowHandle_ReturnValue;
	Parms.CallFunc_GetBiomesStruct_Biomes = CallFunc_GetBiomesStruct_Biomes;
	Parms.CallFunc_GetBiomesStruct_Paths = CallFunc_GetBiomesStruct_Paths;
	Parms.CallFunc_MakeBiomes_ReturnValue = CallFunc_MakeBiomes_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.CallFunc_IntToStruct_ReturnValue_1 = CallFunc_IntToStruct_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_StructToRowHandle_ReturnValue_1 = CallFunc_StructToRowHandle_ReturnValue_1;
	Parms.CallFunc_GetWeatherEventsStruct_WeatherEvents = CallFunc_GetWeatherEventsStruct_WeatherEvents;
	Parms.CallFunc_GetWeatherEventsStruct_Paths = CallFunc_GetWeatherEventsStruct_Paths;
	Parms.CallFunc_Conv_NameToString_ReturnValue_1 = CallFunc_Conv_NameToString_ReturnValue_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_NumRows_ReturnValue = CallFunc_NumRows_ReturnValue;
	Parms.CallFunc_NumRows_ReturnValue_1 = CallFunc_NumRows_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CF_WeatherEvent.CF_WeatherEvent_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCF_WeatherEvent_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_WeatherEvent_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CF_WeatherEvent.CF_WeatherEvent_C.HandleExecute
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 Widget1                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 Widget2                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCF_WeatherEvent_C::HandleExecute(class UUserWidget* Widget1, class UUserWidget* Widget2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_WeatherEvent_C", "HandleExecute");

	Params::UCF_WeatherEvent_C_HandleExecute_Params Parms{};

	Parms.Widget1 = Widget1;
	Parms.Widget2 = Widget2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CF_WeatherEvent.CF_WeatherEvent_C.ExecuteUbergraph_CF_WeatherEvent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNetworkProxyComponent*      CallFunc_GetNetworkProxyComponent_ReturnValue                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBP_NetworkProxyComponent_C* K2Node_DynamicCast_AsBP_Network_Proxy_Component                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 K2Node_Event_Widget1                                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 K2Node_Event_Widget2                                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWeatherRow_C*               K2Node_DynamicCast_AsWeather_Row                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBiomeRow_C*                 K2Node_DynamicCast_AsBiome_Row                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCF_WeatherEvent_C::ExecuteUbergraph_CF_WeatherEvent(int32 EntryPoint, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, class UNetworkProxyComponent* CallFunc_GetNetworkProxyComponent_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UBP_NetworkProxyComponent_C* K2Node_DynamicCast_AsBP_Network_Proxy_Component, bool K2Node_DynamicCast_bSuccess, class UUserWidget* K2Node_Event_Widget1, class UUserWidget* K2Node_Event_Widget2, class UWeatherRow_C* K2Node_DynamicCast_AsWeather_Row, bool K2Node_DynamicCast_bSuccess_1, class UBiomeRow_C* K2Node_DynamicCast_AsBiome_Row, bool K2Node_DynamicCast_bSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_WeatherEvent_C", "ExecuteUbergraph_CF_WeatherEvent");

	Params::UCF_WeatherEvent_C_ExecuteUbergraph_CF_WeatherEvent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetIcarusPlayerController_IsValid = CallFunc_GetIcarusPlayerController_IsValid;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.CallFunc_GetNetworkProxyComponent_ReturnValue = CallFunc_GetNetworkProxyComponent_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsBP_Network_Proxy_Component = K2Node_DynamicCast_AsBP_Network_Proxy_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_Widget1 = K2Node_Event_Widget1;
	Parms.K2Node_Event_Widget2 = K2Node_Event_Widget2;
	Parms.K2Node_DynamicCast_AsWeather_Row = K2Node_DynamicCast_AsWeather_Row;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsBiome_Row = K2Node_DynamicCast_AsBiome_Row;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


