#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_WeatherForecastIcon.UMG_WeatherForecastIcon_C
// (None)

class UClass* UUMG_WeatherForecastIcon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_WeatherForecastIcon_C");

	return Clss;
}


// UMG_WeatherForecastIcon_C UMG_WeatherForecastIcon.Default__UMG_WeatherForecastIcon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_WeatherForecastIcon_C* UUMG_WeatherForecastIcon_C::GetDefaultObj()
{
	static class UUMG_WeatherForecastIcon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_WeatherForecastIcon_C*>(UUMG_WeatherForecastIcon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_WeatherForecastIcon.UMG_WeatherForecastIcon_C.Initialize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Tier                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_WeatherForecastIcon_C::Initialize(int32 Tier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_WeatherForecastIcon_C", "Initialize");

	Params::UUMG_WeatherForecastIcon_C_Initialize_Params Parms{};

	Parms.Tier = Tier;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_WeatherForecastIcon.UMG_WeatherForecastIcon_C.OnLoaded_CB8AC3624660E4D222EE8F8FA46D155E
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_WeatherForecastIcon_C::OnLoaded_CB8AC3624660E4D222EE8F8FA46D155E(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_WeatherForecastIcon_C", "OnLoaded_CB8AC3624660E4D222EE8F8FA46D155E");

	Params::UUMG_WeatherForecastIcon_C_OnLoaded_CB8AC3624660E4D222EE8F8FA46D155E_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_WeatherForecastIcon.UMG_WeatherForecastIcon_C.SetupIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_WeatherForecastIcon_C::SetupIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_WeatherForecastIcon_C", "SetupIcon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_WeatherForecastIcon.UMG_WeatherForecastIcon_C.ExecuteUbergraph_UMG_WeatherForecastIcon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_CustomEvent_Loaded                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 CallFunc_MakeBrushFromTexture_ReturnValue                        (None)
// struct FWeatherTierIconRowHandle   CallFunc_MakeWeatherTierIconFromIndex_ReturnValue                (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FWeatherTierIcon            CallFunc_GetWeatherTierIconStruct_WeatherTierIcon                (None)
// enum class EValid                  CallFunc_GetWeatherTierIconStruct_Paths                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)
// struct FSlateBrush                 K2Node_Select_Default                                            (None)

void UUMG_WeatherForecastIcon_C::ExecuteUbergraph_UMG_WeatherForecastIcon(int32 EntryPoint, bool Temp_bool_Variable, class UObject* K2Node_CustomEvent_Loaded, class UObject* Temp_object_Variable, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, const struct FSlateBrush& CallFunc_MakeBrushFromTexture_ReturnValue, const struct FWeatherTierIconRowHandle& CallFunc_MakeWeatherTierIconFromIndex_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FWeatherTierIcon& CallFunc_GetWeatherTierIconStruct_WeatherTierIcon, enum class EValid CallFunc_GetWeatherTierIconStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue_1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_WeatherForecastIcon_C", "ExecuteUbergraph_UMG_WeatherForecastIcon");

	Params::UUMG_WeatherForecastIcon_C_ExecuteUbergraph_UMG_WeatherForecastIcon_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_MakeBrushFromTexture_ReturnValue = CallFunc_MakeBrushFromTexture_ReturnValue;
	Parms.CallFunc_MakeWeatherTierIconFromIndex_ReturnValue = CallFunc_MakeWeatherTierIconFromIndex_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetWeatherTierIconStruct_WeatherTierIcon = CallFunc_GetWeatherTierIconStruct_WeatherTierIcon;
	Parms.CallFunc_GetWeatherTierIconStruct_Paths = CallFunc_GetWeatherTierIconStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


