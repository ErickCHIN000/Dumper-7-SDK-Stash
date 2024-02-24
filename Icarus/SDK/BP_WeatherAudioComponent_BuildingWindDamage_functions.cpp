#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WeatherAudioComponent_BuildingWindDamage.BP_WeatherAudioComponent_BuildingWindDamage_C
// (SceneComponent)

class UClass* UBP_WeatherAudioComponent_BuildingWindDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WeatherAudioComponent_BuildingWindDamage_C");

	return Clss;
}


// BP_WeatherAudioComponent_BuildingWindDamage_C BP_WeatherAudioComponent_BuildingWindDamage.Default__BP_WeatherAudioComponent_BuildingWindDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_WeatherAudioComponent_BuildingWindDamage_C* UBP_WeatherAudioComponent_BuildingWindDamage_C::GetDefaultObj()
{
	static class UBP_WeatherAudioComponent_BuildingWindDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_WeatherAudioComponent_BuildingWindDamage_C*>(UBP_WeatherAudioComponent_BuildingWindDamage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_WeatherAudioComponent_BuildingWindDamage.BP_WeatherAudioComponent_BuildingWindDamage_C.ForceStopAndDestroy
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_WeatherAudioComponent_BuildingWindDamage_C::ForceStopAndDestroy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherAudioComponent_BuildingWindDamage_C", "ForceStopAndDestroy");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WeatherAudioComponent_BuildingWindDamage.BP_WeatherAudioComponent_BuildingWindDamage_C.StopWeatherAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_WeatherAudioComponent_BuildingWindDamage_C::StopWeatherAudio()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherAudioComponent_BuildingWindDamage_C", "StopWeatherAudio");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WeatherAudioComponent_BuildingWindDamage.BP_WeatherAudioComponent_BuildingWindDamage_C.CheckExposure
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Exposure                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Building_Base_C*         K2Node_DynamicCast_AsBP_Building_Base                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsBuildingOutside_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SafeDivide_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_WeatherAudioComponent_BuildingWindDamage_C::CheckExposure(float* Exposure, float CallFunc_Conv_IntToFloat_ReturnValue, class ABP_Building_Base_C* K2Node_DynamicCast_AsBP_Building_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsBuildingOutside_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_SafeDivide_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherAudioComponent_BuildingWindDamage_C", "CheckExposure");

	Params::UBP_WeatherAudioComponent_BuildingWindDamage_C_CheckExposure_Params Parms{};

	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Building_Base = K2Node_DynamicCast_AsBP_Building_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsBuildingOutside_ReturnValue = CallFunc_IsBuildingOutside_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_SafeDivide_ReturnValue = CallFunc_SafeDivide_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Exposure != nullptr)
		*Exposure = Parms.Exposure;

}


// Function BP_WeatherAudioComponent_BuildingWindDamage.BP_WeatherAudioComponent_BuildingWindDamage_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_WeatherAudioComponent_BuildingWindDamage_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherAudioComponent_BuildingWindDamage_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WeatherAudioComponent_BuildingWindDamage.BP_WeatherAudioComponent_BuildingWindDamage_C.ExecuteUbergraph_BP_WeatherAudioComponent_BuildingWindDamage
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Building_Base_C*         K2Node_DynamicCast_AsBP_Building_Base                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetValueRange_MinValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueRange_MaxValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_WeatherAudioComponent_BuildingWindDamage_C::ExecuteUbergraph_BP_WeatherAudioComponent_BuildingWindDamage(int32 EntryPoint, class ABP_Building_Base_C* K2Node_DynamicCast_AsBP_Building_Base, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetValueRange_MinValue, float CallFunc_GetValueRange_MaxValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Round_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherAudioComponent_BuildingWindDamage_C", "ExecuteUbergraph_BP_WeatherAudioComponent_BuildingWindDamage");

	Params::UBP_WeatherAudioComponent_BuildingWindDamage_C_ExecuteUbergraph_BP_WeatherAudioComponent_BuildingWindDamage_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_DynamicCast_AsBP_Building_Base = K2Node_DynamicCast_AsBP_Building_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetValueRange_MinValue = CallFunc_GetValueRange_MinValue;
	Parms.CallFunc_GetValueRange_MaxValue = CallFunc_GetValueRange_MaxValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


