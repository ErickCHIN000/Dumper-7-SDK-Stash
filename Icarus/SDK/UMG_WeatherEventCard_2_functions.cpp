#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_WeatherEventCard_2.UMG_WeatherEventCard_2_C
// (None)

class UClass* UUMG_WeatherEventCard_2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_WeatherEventCard_2_C");

	return Clss;
}


// UMG_WeatherEventCard_2_C UMG_WeatherEventCard_2.Default__UMG_WeatherEventCard_2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_WeatherEventCard_2_C* UUMG_WeatherEventCard_2_C::GetDefaultObj()
{
	static class UUMG_WeatherEventCard_2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_WeatherEventCard_2_C*>(UUMG_WeatherEventCard_2_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_WeatherEventCard_2.UMG_WeatherEventCard_2_C.UpdateWeatherEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FWeatherEventsRowHandle     NewEvent                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FIcarusWeatherEvent         CallFunc_GetWeatherEventsStruct_WeatherEvents                    (None)
// enum class EValid                  CallFunc_GetWeatherEventsStruct_Paths                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_WeatherEventCard_2_C::UpdateWeatherEvent(const struct FWeatherEventsRowHandle& NewEvent, const struct FIcarusWeatherEvent& CallFunc_GetWeatherEventsStruct_WeatherEvents, enum class EValid CallFunc_GetWeatherEventsStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_WeatherEventCard_2_C", "UpdateWeatherEvent");

	Params::UUMG_WeatherEventCard_2_C_UpdateWeatherEvent_Params Parms{};

	Parms.NewEvent = NewEvent;
	Parms.CallFunc_GetWeatherEventsStruct_WeatherEvents = CallFunc_GetWeatherEventsStruct_WeatherEvents;
	Parms.CallFunc_GetWeatherEventsStruct_Paths = CallFunc_GetWeatherEventsStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_WeatherEventCard_2.UMG_WeatherEventCard_2_C.OnAnimationStarted
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            Animation                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_WeatherEventCard_2_C::OnAnimationStarted(class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_WeatherEventCard_2_C", "OnAnimationStarted");

	Params::UUMG_WeatherEventCard_2_C_OnAnimationStarted_Params Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_WeatherEventCard_2.UMG_WeatherEventCard_2_C.ExecuteUbergraph_UMG_WeatherEventCard_2
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimation*            K2Node_Event_Animation                                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_WeatherEventCard_2_C::ExecuteUbergraph_UMG_WeatherEventCard_2(int32 EntryPoint, class UWidgetAnimation* K2Node_Event_Animation, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_WeatherEventCard_2_C", "ExecuteUbergraph_UMG_WeatherEventCard_2");

	Params::UUMG_WeatherEventCard_2_C_ExecuteUbergraph_UMG_WeatherEventCard_2_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Animation = K2Node_Event_Animation;
	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


