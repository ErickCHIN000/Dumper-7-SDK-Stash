#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CF_WeatherForecast.CF_WeatherForecast_C
// (None)

class UClass* UCF_WeatherForecast_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CF_WeatherForecast_C");

	return Clss;
}


// CF_WeatherForecast_C CF_WeatherForecast.Default__CF_WeatherForecast_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCF_WeatherForecast_C* UCF_WeatherForecast_C::GetDefaultObj()
{
	static class UCF_WeatherForecast_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCF_WeatherForecast_C*>(UCF_WeatherForecast_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CF_WeatherForecast.CF_WeatherForecast_C.Execute
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UCF_WeatherForecast_C::Execute()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_WeatherForecast_C", "Execute");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CF_WeatherForecast.CF_WeatherForecast_C.ExecuteUbergraph_CF_WeatherForecast
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_Controller                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AHUD*                        CallFunc_GetHUD_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusHUD*                  K2Node_DynamicCast_AsIcarus_HUD                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCF_WeatherForecast_C::ExecuteUbergraph_CF_WeatherForecast(int32 EntryPoint, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_Controller, class AHUD* CallFunc_GetHUD_ReturnValue, class AIcarusHUD* K2Node_DynamicCast_AsIcarus_HUD, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CF_WeatherForecast_C", "ExecuteUbergraph_CF_WeatherForecast");

	Params::UCF_WeatherForecast_C_ExecuteUbergraph_CF_WeatherForecast_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetIcarusPlayerController_Controller = CallFunc_GetIcarusPlayerController_Controller;
	Parms.CallFunc_GetHUD_ReturnValue = CallFunc_GetHUD_ReturnValue;
	Parms.K2Node_DynamicCast_AsIcarus_HUD = K2Node_DynamicCast_AsIcarus_HUD;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


