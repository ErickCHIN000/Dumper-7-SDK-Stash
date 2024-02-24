#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_WeatherForecastBox.UMG_WeatherForecastBox_C
// (None)

class UClass* UUMG_WeatherForecastBox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_WeatherForecastBox_C");

	return Clss;
}


// UMG_WeatherForecastBox_C UMG_WeatherForecastBox.Default__UMG_WeatherForecastBox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_WeatherForecastBox_C* UUMG_WeatherForecastBox_C::GetDefaultObj()
{
	static class UUMG_WeatherForecastBox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_WeatherForecastBox_C*>(UUMG_WeatherForecastBox_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_WeatherForecastBox.UMG_WeatherForecastBox_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Tier                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_WeatherForecastBox_C::Initialize(int32 Tier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_WeatherForecastBox_C", "Initialize");

	Params::UUMG_WeatherForecastBox_C_Initialize_Params Parms{};

	Parms.Tier = Tier;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_WeatherForecastBox.UMG_WeatherForecastBox_C.SetupBoxColor
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_WeatherForecastBox_C::SetupBoxColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_WeatherForecastBox_C", "SetupBoxColor");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_WeatherForecastBox.UMG_WeatherForecastBox_C.SetBoxWidth
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewWidth                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_WeatherForecastBox_C::SetBoxWidth(int32 NewWidth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_WeatherForecastBox_C", "SetBoxWidth");

	Params::UUMG_WeatherForecastBox_C_SetBoxWidth_Params Parms{};

	Parms.NewWidth = NewWidth;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_WeatherForecastBox.UMG_WeatherForecastBox_C.ExecuteUbergraph_UMG_WeatherForecastBox
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_GetDesiredSize_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWeatherTierIconRowHandle   CallFunc_MakeWeatherTierIconFromIndex_ReturnValue                (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FWeatherTierIcon            CallFunc_GetWeatherTierIconStruct_WeatherTierIcon                (None)
// enum class EValid                  CallFunc_GetWeatherTierIconStruct_Paths                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_NewWidth                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_WeatherForecastBox_C::ExecuteUbergraph_UMG_WeatherForecastBox(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FWeatherTierIconRowHandle& CallFunc_MakeWeatherTierIconFromIndex_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FWeatherTierIcon& CallFunc_GetWeatherTierIconStruct_WeatherTierIcon, enum class EValid CallFunc_GetWeatherTierIconStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, int32 K2Node_CustomEvent_NewWidth, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_WeatherForecastBox_C", "ExecuteUbergraph_UMG_WeatherForecastBox");

	Params::UUMG_WeatherForecastBox_C_ExecuteUbergraph_UMG_WeatherForecastBox_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetDesiredSize_ReturnValue = CallFunc_GetDesiredSize_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_MakeWeatherTierIconFromIndex_ReturnValue = CallFunc_MakeWeatherTierIconFromIndex_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetWeatherTierIconStruct_WeatherTierIcon = CallFunc_GetWeatherTierIconStruct_WeatherTierIcon;
	Parms.CallFunc_GetWeatherTierIconStruct_Paths = CallFunc_GetWeatherTierIconStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CustomEvent_NewWidth = K2Node_CustomEvent_NewWidth;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


