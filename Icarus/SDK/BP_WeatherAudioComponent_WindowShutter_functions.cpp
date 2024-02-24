#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_WeatherAudioComponent_WindowShutter.BP_WeatherAudioComponent_WindowShutter_C
// (SceneComponent)

class UClass* UBP_WeatherAudioComponent_WindowShutter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_WeatherAudioComponent_WindowShutter_C");

	return Clss;
}


// BP_WeatherAudioComponent_WindowShutter_C BP_WeatherAudioComponent_WindowShutter.Default__BP_WeatherAudioComponent_WindowShutter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_WeatherAudioComponent_WindowShutter_C* UBP_WeatherAudioComponent_WindowShutter_C::GetDefaultObj()
{
	static class UBP_WeatherAudioComponent_WindowShutter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_WeatherAudioComponent_WindowShutter_C*>(UBP_WeatherAudioComponent_WindowShutter_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_WeatherAudioComponent_WindowShutter.BP_WeatherAudioComponent_WindowShutter_C.PlayPointSourceAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_Window_Base_C*           K2Node_DynamicCast_AsBP_Window_Base                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBP_WeatherAudioComponent_WindowShutter_C::PlayPointSourceAudio(class ABP_Window_Base_C* K2Node_DynamicCast_AsBP_Window_Base, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherAudioComponent_WindowShutter_C", "PlayPointSourceAudio");

	Params::UBP_WeatherAudioComponent_WindowShutter_C_PlayPointSourceAudio_Params Parms{};

	Parms.K2Node_DynamicCast_AsBP_Window_Base = K2Node_DynamicCast_AsBP_Window_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeatherAudioComponent_WindowShutter.BP_WeatherAudioComponent_WindowShutter_C.StartWeatherAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_WeatherAudioComponent_WindowShutter_C::StartWeatherAudio()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherAudioComponent_WindowShutter_C", "StartWeatherAudio");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WeatherAudioComponent_WindowShutter.BP_WeatherAudioComponent_WindowShutter_C.CheckExposure
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Exposure                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Window_Base_C*           K2Node_DynamicCast_AsBP_Window_Base                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_Building_Base_C*         K2Node_DynamicCast_AsBP_Building_Base                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsBuildingOutside_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_WeatherAudioComponent_WindowShutter_C::CheckExposure(float* Exposure, class ABP_Window_Base_C* K2Node_DynamicCast_AsBP_Window_Base, bool K2Node_DynamicCast_bSuccess, class ABP_Building_Base_C* K2Node_DynamicCast_AsBP_Building_Base, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsBuildingOutside_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherAudioComponent_WindowShutter_C", "CheckExposure");

	Params::UBP_WeatherAudioComponent_WindowShutter_C_CheckExposure_Params Parms{};

	Parms.K2Node_DynamicCast_AsBP_Window_Base = K2Node_DynamicCast_AsBP_Window_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBP_Building_Base = K2Node_DynamicCast_AsBP_Building_Base;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsBuildingOutside_ReturnValue = CallFunc_IsBuildingOutside_ReturnValue;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Exposure != nullptr)
		*Exposure = Parms.Exposure;

}


// Function BP_WeatherAudioComponent_WindowShutter.BP_WeatherAudioComponent_WindowShutter_C.SetOpenState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Open                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_Conv_BoolToByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_WeatherAudioComponent_WindowShutter_C::SetOpenState(bool Open, uint8 CallFunc_Conv_BoolToByte_ReturnValue, bool CallFunc_IsValid_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherAudioComponent_WindowShutter_C", "SetOpenState");

	Params::UBP_WeatherAudioComponent_WindowShutter_C_SetOpenState_Params Parms{};

	Parms.Open = Open;
	Parms.CallFunc_Conv_BoolToByte_ReturnValue = CallFunc_Conv_BoolToByte_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_WeatherAudioComponent_WindowShutter.BP_WeatherAudioComponent_WindowShutter_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_WeatherAudioComponent_WindowShutter_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherAudioComponent_WindowShutter_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_WeatherAudioComponent_WindowShutter.BP_WeatherAudioComponent_WindowShutter_C.ExecuteUbergraph_BP_WeatherAudioComponent_WindowShutter
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_Window_Base_C*           K2Node_DynamicCast_AsBP_Window_Base                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UBP_WeatherAudioComponent_WindowShutter_C::ExecuteUbergraph_BP_WeatherAudioComponent_WindowShutter(int32 EntryPoint, class ABP_Window_Base_C* K2Node_DynamicCast_AsBP_Window_Base, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_WeatherAudioComponent_WindowShutter_C", "ExecuteUbergraph_BP_WeatherAudioComponent_WindowShutter");

	Params::UBP_WeatherAudioComponent_WindowShutter_C_ExecuteUbergraph_BP_WeatherAudioComponent_WindowShutter_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_DynamicCast_AsBP_Window_Base = K2Node_DynamicCast_AsBP_Window_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}

}


