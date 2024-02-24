#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass UI_FunctionsLib.UI_FunctionsLib_C
// (None)

class UClass* UUI_FunctionsLib_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UI_FunctionsLib_C");

	return Clss;
}


// UI_FunctionsLib_C UI_FunctionsLib.Default__UI_FunctionsLib_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUI_FunctionsLib_C* UUI_FunctionsLib_C::GetDefaultObj()
{
	static class UUI_FunctionsLib_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUI_FunctionsLib_C*>(UUI_FunctionsLib_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UI_FunctionsLib.UI_FunctionsLib_C.GetPlaytimeFromTimeSpan
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FTimespan                   Timespan                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// int32                              CallFunc_BreakTimespan_Days                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTimespan_Hours                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTimespan_Minutes                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTimespan_Seconds                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTimespan_Milliseconds                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_FixDateTime_TimeOut                                     (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_FixDateTime_TimeOut_1                                   (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_FixDateTime_TimeOut_2                                   (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UUI_FunctionsLib_C::GetPlaytimeFromTimeSpan(const struct FTimespan& Timespan, class UObject* __WorldContext, int32 CallFunc_BreakTimespan_Days, int32 CallFunc_BreakTimespan_Hours, int32 CallFunc_BreakTimespan_Minutes, int32 CallFunc_BreakTimespan_Seconds, int32 CallFunc_BreakTimespan_Milliseconds, const class FString& CallFunc_FixDateTime_TimeOut, const class FString& CallFunc_FixDateTime_TimeOut_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_FixDateTime_TimeOut_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FunctionsLib_C", "GetPlaytimeFromTimeSpan");

	Params::UUI_FunctionsLib_C_GetPlaytimeFromTimeSpan_Params Parms{};

	Parms.Timespan = Timespan;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_BreakTimespan_Days = CallFunc_BreakTimespan_Days;
	Parms.CallFunc_BreakTimespan_Hours = CallFunc_BreakTimespan_Hours;
	Parms.CallFunc_BreakTimespan_Minutes = CallFunc_BreakTimespan_Minutes;
	Parms.CallFunc_BreakTimespan_Seconds = CallFunc_BreakTimespan_Seconds;
	Parms.CallFunc_BreakTimespan_Milliseconds = CallFunc_BreakTimespan_Milliseconds;
	Parms.CallFunc_FixDateTime_TimeOut = CallFunc_FixDateTime_TimeOut;
	Parms.CallFunc_FixDateTime_TimeOut_1 = CallFunc_FixDateTime_TimeOut_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_FixDateTime_TimeOut_2 = CallFunc_FixDateTime_TimeOut_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_FunctionsLib.UI_FunctionsLib_C.GetNoText
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        No                                                               (Parm, OutParm)

void UUI_FunctionsLib_C::GetNoText(class UObject* __WorldContext, class FText* No)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FunctionsLib_C", "GetNoText");

	Params::UUI_FunctionsLib_C_GetNoText_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (No != nullptr)
		*No = Parms.No;

}


// Function UI_FunctionsLib.UI_FunctionsLib_C.GetYesText
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Yes                                                              (Parm, OutParm)

void UUI_FunctionsLib_C::GetYesText(class UObject* __WorldContext, class FText* Yes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FunctionsLib_C", "GetYesText");

	Params::UUI_FunctionsLib_C_GetYesText_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

	if (Yes != nullptr)
		*Yes = Parms.Yes;

}


// Function UI_FunctionsLib.UI_FunctionsLib_C.UI_DisableButton
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Visibility                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)

void UUI_FunctionsLib_C::UI_DisableButton(class UWidget* Button, enum class ESlateVisibility Visibility, class UObject* __WorldContext, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FunctionsLib_C", "UI_DisableButton");

	Params::UUI_FunctionsLib_C_UI_DisableButton_Params Parms{};

	Parms.Button = Button;
	Parms.Visibility = Visibility;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FunctionsLib.UI_FunctionsLib_C.GetPlaytimeFromDate
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FDateTime                   Date                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// int32                              CallFunc_BreakDateTime_Year                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Month                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Day                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Hour                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Minute                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Second                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakDateTime_Millisecond                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_FixDateTime_TimeOut                                     (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_FixDateTime_TimeOut_1                                   (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_FixDateTime_TimeOut_2                                   (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UUI_FunctionsLib_C::GetPlaytimeFromDate(const struct FDateTime& Date, class UObject* __WorldContext, int32 CallFunc_BreakDateTime_Year, int32 CallFunc_BreakDateTime_Month, int32 CallFunc_BreakDateTime_Day, int32 CallFunc_BreakDateTime_Hour, int32 CallFunc_BreakDateTime_Minute, int32 CallFunc_BreakDateTime_Second, int32 CallFunc_BreakDateTime_Millisecond, const class FString& CallFunc_FixDateTime_TimeOut, const class FString& CallFunc_FixDateTime_TimeOut_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_FixDateTime_TimeOut_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FunctionsLib_C", "GetPlaytimeFromDate");

	Params::UUI_FunctionsLib_C_GetPlaytimeFromDate_Params Parms{};

	Parms.Date = Date;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_BreakDateTime_Year = CallFunc_BreakDateTime_Year;
	Parms.CallFunc_BreakDateTime_Month = CallFunc_BreakDateTime_Month;
	Parms.CallFunc_BreakDateTime_Day = CallFunc_BreakDateTime_Day;
	Parms.CallFunc_BreakDateTime_Hour = CallFunc_BreakDateTime_Hour;
	Parms.CallFunc_BreakDateTime_Minute = CallFunc_BreakDateTime_Minute;
	Parms.CallFunc_BreakDateTime_Second = CallFunc_BreakDateTime_Second;
	Parms.CallFunc_BreakDateTime_Millisecond = CallFunc_BreakDateTime_Millisecond;
	Parms.CallFunc_FixDateTime_TimeOut = CallFunc_FixDateTime_TimeOut;
	Parms.CallFunc_FixDateTime_TimeOut_1 = CallFunc_FixDateTime_TimeOut_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_FixDateTime_TimeOut_2 = CallFunc_FixDateTime_TimeOut_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_FunctionsLib.UI_FunctionsLib_C.FixDateTime
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              TimeIn                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      Timeout                                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)

void UUI_FunctionsLib_C::FixDateTime(int32 TimeIn, class UObject* __WorldContext, class FString* Timeout, bool Temp_bool_Variable, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FunctionsLib_C", "FixDateTime");

	Params::UUI_FunctionsLib_C_FixDateTime_Params Parms{};

	Parms.TimeIn = TimeIn;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (Timeout != nullptr)
		*Timeout = std::move(Parms.Timeout);

}


// Function UI_FunctionsLib.UI_FunctionsLib_C.Spawn2DControllerSound
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                  Sound                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              VolumeMultiplier                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              PitchMultiplier                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              StartTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSound2D_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EPlatform               CallFunc_GetPlatform_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDebugDualSenseAudio_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

class UAudioComponent* UUI_FunctionsLib_C::Spawn2DControllerSound(class USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, class UObject* __WorldContext, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_1, enum class EPlatform CallFunc_GetPlatform_ReturnValue, bool CallFunc_GetDebugDualSenseAudio_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FunctionsLib_C", "Spawn2DControllerSound");

	Params::UUI_FunctionsLib_C_Spawn2DControllerSound_Params Parms{};

	Parms.Sound = Sound;
	Parms.VolumeMultiplier = VolumeMultiplier;
	Parms.PitchMultiplier = PitchMultiplier;
	Parms.StartTime = StartTime;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.CallFunc_SpawnSound2D_ReturnValue = CallFunc_SpawnSound2D_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_1 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetPlatform_ReturnValue = CallFunc_GetPlatform_ReturnValue;
	Parms.CallFunc_GetDebugDualSenseAudio_ReturnValue = CallFunc_GetDebugDualSenseAudio_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_FunctionsLib.UI_FunctionsLib_C.Play2DControllerSound
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                  Sound                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              VolumeMultiplier                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              PitchMultiplier                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              StartTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IGameInstanceHUDInterface_C>K2Node_DynamicCast_AsGame_Instance_HUDInterface_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetDebugDualSenseAudio_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EPlatform               CallFunc_GetPlatform_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_FunctionsLib_C::Play2DControllerSound(class USoundBase* Sound, float VolumeMultiplier, float PitchMultiplier, float StartTime, class UObject* __WorldContext, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameInstanceHUDInterface_C> K2Node_DynamicCast_AsGame_Instance_HUDInterface_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GetDebugDualSenseAudio_ReturnValue, enum class EPlatform CallFunc_GetPlatform_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FunctionsLib_C", "Play2DControllerSound");

	Params::UUI_FunctionsLib_C_Play2DControllerSound_Params Parms{};

	Parms.Sound = Sound;
	Parms.VolumeMultiplier = VolumeMultiplier;
	Parms.PitchMultiplier = PitchMultiplier;
	Parms.StartTime = StartTime;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface = K2Node_DynamicCast_AsGame_Instance_HUDInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsGame_Instance_HUDInterface_1 = K2Node_DynamicCast_AsGame_Instance_HUDInterface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetDebugDualSenseAudio_ReturnValue = CallFunc_GetDebugDualSenseAudio_ReturnValue;
	Parms.CallFunc_GetPlatform_ReturnValue = CallFunc_GetPlatform_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FunctionsLib.UI_FunctionsLib_C.GetShadeNames
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EArmorTypes             Shell                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Shade                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// enum class EArmorTypes             Local_Shell                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (None)
// class FText                        Temp_text_Variable_1                                             (None)
// class FText                        Temp_text_Variable_2                                             (None)
// class FText                        Temp_text_Variable_3                                             (None)
// class FText                        Temp_text_Variable_4                                             (None)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EArmorTypes             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_5                                             (None)
// class FText                        Temp_text_Variable_6                                             (None)
// class FText                        Temp_text_Variable_7                                             (None)
// class FText                        Temp_text_Variable_8                                             (None)
// class FText                        Temp_text_Variable_9                                             (None)
// class FText                        Temp_text_Variable_10                                            (None)
// enum class EArmorTypes             Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable_11                                            (None)
// class FText                        Temp_text_Variable_12                                            (None)
// class FText                        Temp_text_Variable_13                                            (None)
// class FText                        Temp_text_Variable_14                                            (None)
// class FText                        Temp_text_Variable_15                                            (None)
// class FText                        Temp_text_Variable_16                                            (None)
// class FText                        K2Node_Select_Default                                            (None)
// class FText                        K2Node_Select_Default_1                                          (None)
// class FText                        Temp_text_Variable_17                                            (None)
// enum class EArmorTypes             Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_2                                          (None)
// class FText                        K2Node_Select_Default_3                                          (None)

class FText UUI_FunctionsLib_C::GetShadeNames(enum class EArmorTypes Shell, int32 Shade, class UObject* __WorldContext, enum class EArmorTypes Local_Shell, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, class FText Temp_text_Variable_3, class FText Temp_text_Variable_4, int32 Temp_int_Variable, enum class EArmorTypes Temp_byte_Variable, class FText Temp_text_Variable_5, class FText Temp_text_Variable_6, class FText Temp_text_Variable_7, class FText Temp_text_Variable_8, class FText Temp_text_Variable_9, class FText Temp_text_Variable_10, enum class EArmorTypes Temp_byte_Variable_1, class FText Temp_text_Variable_11, class FText Temp_text_Variable_12, class FText Temp_text_Variable_13, class FText Temp_text_Variable_14, class FText Temp_text_Variable_15, class FText Temp_text_Variable_16, class FText K2Node_Select_Default, class FText K2Node_Select_Default_1, class FText Temp_text_Variable_17, enum class EArmorTypes Temp_byte_Variable_2, class FText K2Node_Select_Default_2, class FText K2Node_Select_Default_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FunctionsLib_C", "GetShadeNames");

	Params::UUI_FunctionsLib_C_GetShadeNames_Params Parms{};

	Parms.Shell = Shell;
	Parms.Shade = Shade;
	Parms.__WorldContext = __WorldContext;
	Parms.Local_Shell = Local_Shell;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.Temp_text_Variable_2 = Temp_text_Variable_2;
	Parms.Temp_text_Variable_3 = Temp_text_Variable_3;
	Parms.Temp_text_Variable_4 = Temp_text_Variable_4;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_text_Variable_5 = Temp_text_Variable_5;
	Parms.Temp_text_Variable_6 = Temp_text_Variable_6;
	Parms.Temp_text_Variable_7 = Temp_text_Variable_7;
	Parms.Temp_text_Variable_8 = Temp_text_Variable_8;
	Parms.Temp_text_Variable_9 = Temp_text_Variable_9;
	Parms.Temp_text_Variable_10 = Temp_text_Variable_10;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_text_Variable_11 = Temp_text_Variable_11;
	Parms.Temp_text_Variable_12 = Temp_text_Variable_12;
	Parms.Temp_text_Variable_13 = Temp_text_Variable_13;
	Parms.Temp_text_Variable_14 = Temp_text_Variable_14;
	Parms.Temp_text_Variable_15 = Temp_text_Variable_15;
	Parms.Temp_text_Variable_16 = Temp_text_Variable_16;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.Temp_text_Variable_17 = Temp_text_Variable_17;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_FunctionsLib.UI_FunctionsLib_C.GetForcePS4Icons
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ForcePS4Icons                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDHGameInstance*             CallFunc_GetInstance_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_FunctionsLib_C::GetForcePS4Icons(class UObject* __WorldContext, bool* ForcePS4Icons, class UDHGameInstance* CallFunc_GetInstance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FunctionsLib_C", "GetForcePS4Icons");

	Params::UUI_FunctionsLib_C_GetForcePS4Icons_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_GetInstance_ReturnValue = CallFunc_GetInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ForcePS4Icons != nullptr)
		*ForcePS4Icons = Parms.ForcePS4Icons;

}


// Function UI_FunctionsLib.UI_FunctionsLib_C.GetInputAxis
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInputAxis>          Array                                                            (Parm, OutParm, HasGetValueTypeHash)
// struct FInputAxis                  Local_MoveLeft                                                   (Edit, BlueprintVisible)
// struct FInputAxis                  Local_MoveRight                                                  (Edit, BlueprintVisible)
// struct FInputAxis                  Local_MoveBackward                                               (Edit, BlueprintVisible)
// struct FInputAxis                  Local_MoveForward                                                (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInputAxis>          K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// TArray<struct FInputAxis>          CallFunc_GetAllBindedInputAxis_InputAxis                         (ReferenceParm, HasGetValueTypeHash)
// struct FInputAxis                  CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Key_IsGamepadKey_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchString_CmpSuccess_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchString_CmpSuccess_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_FunctionsLib_C::GetInputAxis(class UObject* __WorldContext, TArray<struct FInputAxis>* Array, const struct FInputAxis& Local_MoveLeft, const struct FInputAxis& Local_MoveRight, const struct FInputAxis& Local_MoveBackward, const struct FInputAxis& Local_MoveForward, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FInputAxis>& K2Node_MakeArray_Array, TArray<struct FInputAxis>& CallFunc_GetAllBindedInputAxis_InputAxis, const struct FInputAxis& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool K2Node_SwitchString_CmpSuccess, const class FString& CallFunc_Conv_FloatToString_ReturnValue, bool CallFunc_Key_IsGamepadKey_ReturnValue, bool K2Node_SwitchString_CmpSuccess_1, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_SwitchString_CmpSuccess_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FunctionsLib_C", "GetInputAxis");

	Params::UUI_FunctionsLib_C_GetInputAxis_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.Local_MoveLeft = Local_MoveLeft;
	Parms.Local_MoveRight = Local_MoveRight;
	Parms.Local_MoveBackward = Local_MoveBackward;
	Parms.Local_MoveForward = Local_MoveForward;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetAllBindedInputAxis_InputAxis = CallFunc_GetAllBindedInputAxis_InputAxis;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_Key_IsGamepadKey_ReturnValue = CallFunc_Key_IsGamepadKey_ReturnValue;
	Parms.K2Node_SwitchString_CmpSuccess_1 = K2Node_SwitchString_CmpSuccess_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_SwitchString_CmpSuccess_2 = K2Node_SwitchString_CmpSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Array != nullptr)
		*Array = std::move(Parms.Array);

}


// Function UI_FunctionsLib.UI_FunctionsLib_C.GetKeyAsIcon
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// bool                               Gamepad                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Icon                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Found                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FKey                        Local_Key                                                        (Edit, BlueprintVisible, HasGetValueTypeHash)
// TMap<struct FKey, class UTexture2D*>Local_Icons_PC                                                   (Edit, BlueprintVisible)
// TMap<struct FKey, class UTexture2D*>Local_Icons_PS4                                                  (Edit, BlueprintVisible)
// TMap<struct FKey, class UTexture2D*>Local_Icons_Xbox                                                 (Edit, BlueprintVisible)
// class UDataTable*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCompressedKeyString_ReturnValue                      (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Temp_object_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Temp_object_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Temp_object_Variable_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Temp_object_Variable_6                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UDataTable*                  Temp_object_Variable_7                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<struct FKey, class UTexture2D*>K2Node_MakeVariable_MakeVariableOutput                           (None)
// TMap<struct FKey, class UTexture2D*>K2Node_MakeVariable_MakeVariableOutput_1                         (None)
// TMap<struct FKey, class UTexture2D*>K2Node_MakeVariable_MakeVariableOutput_2                         (None)
// enum class EPlatformGamepadType    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlatformGamepadType    CallFunc_GetPlatformGamepadType_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// struct FUI_Icon                    CallFunc_GetDataTableRowFromName_OutRow                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_FunctionsLib_C::GetKeyAsIcon(const struct FKey& Key, bool Gamepad, class UObject* __WorldContext, class UTexture2D** Icon, bool* Found, const struct FKey& Local_Key, TMap<struct FKey, class UTexture2D*> Local_Icons_PC, TMap<struct FKey, class UTexture2D*> Local_Icons_PS4, TMap<struct FKey, class UTexture2D*> Local_Icons_Xbox, class UDataTable* Temp_object_Variable, const class FString& CallFunc_GetCompressedKeyString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class UDataTable* Temp_object_Variable_1, class UDataTable* Temp_object_Variable_2, class UDataTable* Temp_object_Variable_3, class UDataTable* Temp_object_Variable_4, class UDataTable* Temp_object_Variable_5, class UDataTable* Temp_object_Variable_6, bool Temp_bool_Variable, class UDataTable* Temp_object_Variable_7, TMap<struct FKey, class UTexture2D*> K2Node_MakeVariable_MakeVariableOutput, TMap<struct FKey, class UTexture2D*> K2Node_MakeVariable_MakeVariableOutput_1, TMap<struct FKey, class UTexture2D*> K2Node_MakeVariable_MakeVariableOutput_2, enum class EPlatformGamepadType Temp_byte_Variable, enum class EPlatformGamepadType CallFunc_GetPlatformGamepadType_ReturnValue, class UDataTable* K2Node_Select_Default, class UDataTable* K2Node_Select_Default_1, const class FString& CallFunc_GetDisplayName_ReturnValue, const struct FUI_Icon& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FunctionsLib_C", "GetKeyAsIcon");

	Params::UUI_FunctionsLib_C_GetKeyAsIcon_Params Parms{};

	Parms.Key = Key;
	Parms.Gamepad = Gamepad;
	Parms.__WorldContext = __WorldContext;
	Parms.Local_Key = Local_Key;
	Parms.Local_Icons_PC = Local_Icons_PC;
	Parms.Local_Icons_PS4 = Local_Icons_PS4;
	Parms.Local_Icons_Xbox = Local_Icons_Xbox;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_GetCompressedKeyString_ReturnValue = CallFunc_GetCompressedKeyString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.Temp_object_Variable_6 = Temp_object_Variable_6;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable_7 = Temp_object_Variable_7;
	Parms.K2Node_MakeVariable_MakeVariableOutput = K2Node_MakeVariable_MakeVariableOutput;
	Parms.K2Node_MakeVariable_MakeVariableOutput_1 = K2Node_MakeVariable_MakeVariableOutput_1;
	Parms.K2Node_MakeVariable_MakeVariableOutput_2 = K2Node_MakeVariable_MakeVariableOutput_2;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetPlatformGamepadType_ReturnValue = CallFunc_GetPlatformGamepadType_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Icon != nullptr)
		*Icon = Parms.Icon;

	if (Found != nullptr)
		*Found = Parms.Found;

}


// Function UI_FunctionsLib.UI_FunctionsLib_C.GetAllRebindableInputActions
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInputAction>        Actions                                                          (Parm, OutParm, HasGetValueTypeHash)
// TArray<struct FInputAction>        Local_AllBindedInputActions                                      (Edit, BlueprintVisible, HasGetValueTypeHash)
// struct FInputAction                Local_Action                                                     (Edit, BlueprintVisible)
// TArray<struct FInputAction>        Local_InputActions_All                                           (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<struct FInputAction>        Local_InputActions_Controller                                    (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<struct FInputAction>        Local_InputActions_KBM                                           (Edit, BlueprintVisible, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputAction                CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInputAction>        CallFunc_GetAllBindedInputActions_Actions                        (ReferenceParm, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_FunctionsLib_C::GetAllRebindableInputActions(class UObject* __WorldContext, TArray<struct FInputAction>* Actions, const TArray<struct FInputAction>& Local_AllBindedInputActions, const struct FInputAction& Local_Action, const TArray<struct FInputAction>& Local_InputActions_All, const TArray<struct FInputAction>& Local_InputActions_Controller, const TArray<struct FInputAction>& Local_InputActions_KBM, int32 Temp_int_Array_Index_Variable, const struct FInputAction& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool K2Node_SwitchString_CmpSuccess, int32 CallFunc_Array_Add_ReturnValue, int32 Temp_int_Loop_Counter_Variable, TArray<struct FInputAction>& CallFunc_GetAllBindedInputActions_Actions, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FunctionsLib_C", "GetAllRebindableInputActions");

	Params::UUI_FunctionsLib_C_GetAllRebindableInputActions_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.Local_AllBindedInputActions = Local_AllBindedInputActions;
	Parms.Local_Action = Local_Action;
	Parms.Local_InputActions_All = Local_InputActions_All;
	Parms.Local_InputActions_Controller = Local_InputActions_Controller;
	Parms.Local_InputActions_KBM = Local_InputActions_KBM;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetAllBindedInputActions_Actions = CallFunc_GetAllBindedInputActions_Actions;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Actions != nullptr)
		*Actions = std::move(Parms.Actions);

}


// Function UI_FunctionsLib.UI_FunctionsLib_C.GetBrightnessRange
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UUI_FunctionsLib_C::GetBrightnessRange(float Value, class UObject* __WorldContext, float CallFunc_FClamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FunctionsLib_C", "GetBrightnessRange");

	Params::UUI_FunctionsLib_C_GetBrightnessRange_Params Parms{};

	Parms.Value = Value;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_FunctionsLib.UI_FunctionsLib_C.GetKeyAsTexture
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      KeyAsString                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// struct FKey                        Key                                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               KeyFound                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  Texture                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      KeyString                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// bool                               Local_KeyFound                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetCompressedKeyString_ReturnValue                      (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlatformGamepadType    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Temp_object_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Temp_object_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Temp_object_Variable_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Temp_object_Variable_6                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Temp_object_Variable_7                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlatformGamepadType    CallFunc_GetPlatformGamepadType_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUI_Icon                    CallFunc_GetDataTableRowFromName_OutRow                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_FunctionsLib_C::GetKeyAsTexture(const class FString& KeyAsString, const struct FKey& Key, class UObject* __WorldContext, bool* KeyFound, class UTexture2D** Texture, class FString* KeyString, bool Local_KeyFound, bool Temp_bool_Variable, const class FString& CallFunc_GetCompressedKeyString_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, class UDataTable* Temp_object_Variable, enum class EPlatformGamepadType Temp_byte_Variable, class UDataTable* Temp_object_Variable_1, class UDataTable* Temp_object_Variable_2, class UDataTable* Temp_object_Variable_3, class UDataTable* Temp_object_Variable_4, class UDataTable* Temp_object_Variable_5, class UDataTable* Temp_object_Variable_6, class UDataTable* Temp_object_Variable_7, enum class EPlatformGamepadType CallFunc_GetPlatformGamepadType_ReturnValue, class UDataTable* K2Node_Select_Default, class UDataTable* K2Node_Select_Default_1, const struct FUI_Icon& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FunctionsLib_C", "GetKeyAsTexture");

	Params::UUI_FunctionsLib_C_GetKeyAsTexture_Params Parms{};

	Parms.KeyAsString = KeyAsString;
	Parms.Key = Key;
	Parms.__WorldContext = __WorldContext;
	Parms.Local_KeyFound = Local_KeyFound;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetCompressedKeyString_ReturnValue = CallFunc_GetCompressedKeyString_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.Temp_object_Variable_6 = Temp_object_Variable_6;
	Parms.Temp_object_Variable_7 = Temp_object_Variable_7;
	Parms.CallFunc_GetPlatformGamepadType_ReturnValue = CallFunc_GetPlatformGamepadType_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (KeyFound != nullptr)
		*KeyFound = Parms.KeyFound;

	if (Texture != nullptr)
		*Texture = Parms.Texture;

	if (KeyString != nullptr)
		*KeyString = std::move(Parms.KeyString);

}


// Function UI_FunctionsLib.UI_FunctionsLib_C.GetInputActions
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<class FString, struct FInputAction>InputActionsKBM                                                  (Parm, OutParm)
// TMap<class FString, struct FInputAction>InputActionController                                            (Parm, OutParm)
// TMap<class FString, struct FInputAction>Local_InputActions_Controller                                    (Edit, BlueprintVisible)
// TMap<class FString, struct FInputAction>Local_InputActions_KBM                                           (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInputAction>        CallFunc_GetAllBindedInputActions_Actions                        (ReferenceParm, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInputAction                CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Key_IsGamepadKey_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_FunctionsLib_C::GetInputActions(class UObject* __WorldContext, TMap<class FString, struct FInputAction>* InputActionsKBM, TMap<class FString, struct FInputAction>* InputActionController, TMap<class FString, struct FInputAction> Local_InputActions_Controller, TMap<class FString, struct FInputAction> Local_InputActions_KBM, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<struct FInputAction>& CallFunc_GetAllBindedInputActions_Actions, int32 CallFunc_Array_Length_ReturnValue, const struct FInputAction& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Key_IsGamepadKey_ReturnValue, bool K2Node_SwitchString_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FunctionsLib_C", "GetInputActions");

	Params::UUI_FunctionsLib_C_GetInputActions_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.Local_InputActions_Controller = Local_InputActions_Controller;
	Parms.Local_InputActions_KBM = Local_InputActions_KBM;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetAllBindedInputActions_Actions = CallFunc_GetAllBindedInputActions_Actions;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Key_IsGamepadKey_ReturnValue = CallFunc_Key_IsGamepadKey_ReturnValue;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (InputActionsKBM != nullptr)
		*InputActionsKBM = Parms.InputActionsKBM;

	if (InputActionController != nullptr)
		*InputActionController = Parms.InputActionController;

}


// Function UI_FunctionsLib.UI_FunctionsLib_C.CheckItemName
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ItemName                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FInventoryItem              Local_Item                                                       (Edit, BlueprintVisible, HasGetValueTypeHash)
// class FText                        Local_EffigyName_Unknown                                         (Edit, BlueprintVisible)
// class FText                        Local_ItemName_Return                                            (Edit, BlueprintVisible)
// class FText                        Local_ItemName_Current                                           (Edit, BlueprintVisible)
// struct FInventoryItem              CallFunc_GetDataTableRowFromName_OutRow                          (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem              CallFunc_GetDataTableRowFromName_OutRow_1                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem              CallFunc_GetDataTableRowFromName_OutRow_2                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem              CallFunc_GetDataTableRowFromName_OutRow_3                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInventoryItem              CallFunc_GetDataTableRowFromName_OutRow_4                        (HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue_4                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsShellNameKnown_bUnlocked                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            (None)
// bool                               CallFunc_IsShellNameKnown_bUnlocked_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default_1                                          (None)
// bool                               CallFunc_IsShellNameKnown_bUnlocked_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default_2                                          (None)
// bool                               CallFunc_IsShellNameKnown_bUnlocked_3                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default_3                                          (None)
// bool                               CallFunc_IsShellNameKnown_bUnlocked_4                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default_4                                          (None)

class FText UUI_FunctionsLib_C::CheckItemName(class FText ItemName, class UObject* __WorldContext, const struct FInventoryItem& Local_Item, class FText Local_EffigyName_Unknown, class FText Local_ItemName_Return, class FText Local_ItemName_Current, const struct FInventoryItem& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FInventoryItem& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, const struct FInventoryItem& CallFunc_GetDataTableRowFromName_OutRow_2, bool CallFunc_GetDataTableRowFromName_ReturnValue_2, const struct FInventoryItem& CallFunc_GetDataTableRowFromName_OutRow_3, bool CallFunc_GetDataTableRowFromName_ReturnValue_3, bool CallFunc_EqualEqual_TextText_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue_1, bool CallFunc_EqualEqual_TextText_ReturnValue_2, bool CallFunc_EqualEqual_TextText_ReturnValue_3, bool CallFunc_EqualEqual_TextText_ReturnValue_4, const struct FInventoryItem& CallFunc_GetDataTableRowFromName_OutRow_4, bool CallFunc_GetDataTableRowFromName_ReturnValue_4, bool CallFunc_IsShellNameKnown_bUnlocked, class FText K2Node_Select_Default, bool CallFunc_IsShellNameKnown_bUnlocked_1, class FText K2Node_Select_Default_1, bool CallFunc_IsShellNameKnown_bUnlocked_2, class FText K2Node_Select_Default_2, bool CallFunc_IsShellNameKnown_bUnlocked_3, class FText K2Node_Select_Default_3, bool CallFunc_IsShellNameKnown_bUnlocked_4, class FText K2Node_Select_Default_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FunctionsLib_C", "CheckItemName");

	Params::UUI_FunctionsLib_C_CheckItemName_Params Parms{};

	Parms.ItemName = ItemName;
	Parms.__WorldContext = __WorldContext;
	Parms.Local_Item = Local_Item;
	Parms.Local_EffigyName_Unknown = Local_EffigyName_Unknown;
	Parms.Local_ItemName_Return = Local_ItemName_Return;
	Parms.Local_ItemName_Current = Local_ItemName_Current;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_1 = CallFunc_GetDataTableRowFromName_OutRow_1;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_1 = CallFunc_GetDataTableRowFromName_ReturnValue_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_2 = CallFunc_GetDataTableRowFromName_OutRow_2;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_2 = CallFunc_GetDataTableRowFromName_ReturnValue_2;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_3 = CallFunc_GetDataTableRowFromName_OutRow_3;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_3 = CallFunc_GetDataTableRowFromName_ReturnValue_3;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue = CallFunc_EqualEqual_TextText_ReturnValue;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue_1 = CallFunc_EqualEqual_TextText_ReturnValue_1;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue_2 = CallFunc_EqualEqual_TextText_ReturnValue_2;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue_3 = CallFunc_EqualEqual_TextText_ReturnValue_3;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue_4 = CallFunc_EqualEqual_TextText_ReturnValue_4;
	Parms.CallFunc_GetDataTableRowFromName_OutRow_4 = CallFunc_GetDataTableRowFromName_OutRow_4;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue_4 = CallFunc_GetDataTableRowFromName_ReturnValue_4;
	Parms.CallFunc_IsShellNameKnown_bUnlocked = CallFunc_IsShellNameKnown_bUnlocked;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsShellNameKnown_bUnlocked_1 = CallFunc_IsShellNameKnown_bUnlocked_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_IsShellNameKnown_bUnlocked_2 = CallFunc_IsShellNameKnown_bUnlocked_2;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_IsShellNameKnown_bUnlocked_3 = CallFunc_IsShellNameKnown_bUnlocked_3;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_IsShellNameKnown_bUnlocked_4 = CallFunc_IsShellNameKnown_bUnlocked_4;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_FunctionsLib.UI_FunctionsLib_C.UI_SoundHover
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_FunctionsLib_C::UI_SoundHover(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FunctionsLib_C", "UI_SoundHover");

	Params::UUI_FunctionsLib_C_UI_SoundHover_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FunctionsLib.UI_FunctionsLib_C.UI_SoundCantDo
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_FunctionsLib_C::UI_SoundCantDo(class UObject* __WorldContext)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FunctionsLib_C", "UI_SoundCantDo");

	Params::UUI_FunctionsLib_C_UI_SoundCantDo_Params Parms{};

	Parms.__WorldContext = __WorldContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FunctionsLib.UI_FunctionsLib_C.GetCanUseItem
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               UsableInDarkForm                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           GameplayPC                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_InventoryItem_CanUseReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayPCInterface_C>K2Node_DynamicCast_AsGame_Play_PCInterface                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class Enum_InventoryItem_CanUseCallFunc_InventoryUtil_GetCanUseItem_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class Enum_InventoryItem_CanUse UUI_FunctionsLib_C::GetCanUseItem(class FName ID, bool UsableInDarkForm, class APlayerController* GameplayPC, class UObject* __WorldContext, TScriptInterface<class IGamePlayPCInterface_C> K2Node_DynamicCast_AsGame_Play_PCInterface, bool K2Node_DynamicCast_bSuccess, enum class Enum_InventoryItem_CanUse CallFunc_InventoryUtil_GetCanUseItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FunctionsLib_C", "GetCanUseItem");

	Params::UUI_FunctionsLib_C_GetCanUseItem_Params Parms{};

	Parms.ID = ID;
	Parms.UsableInDarkForm = UsableInDarkForm;
	Parms.GameplayPC = GameplayPC;
	Parms.__WorldContext = __WorldContext;
	Parms.K2Node_DynamicCast_AsGame_Play_PCInterface = K2Node_DynamicCast_AsGame_Play_PCInterface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_InventoryUtil_GetCanUseItem_ReturnValue = CallFunc_InventoryUtil_GetCanUseItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_FunctionsLib.UI_FunctionsLib_C.ItemDetailBuildString
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FString                      EffectDescription                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      ExtendedDescription                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FText                        Description                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               HasFamiliarity_                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               NoSpace                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      ItemEffects                                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      ItemDescription                                                  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Temp_string_Variable_1                                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      Temp_string_Variable_2                                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_Select_Default                                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_3                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_Select_Default_1                                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      Temp_string_Variable_4                                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Select_Default_2                                          (ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_Select_Default_3                                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_6                             (ZeroConstructor, HasGetValueTypeHash)

void UUI_FunctionsLib_C::ItemDetailBuildString(const class FString& EffectDescription, const class FString& ExtendedDescription, class FText& Description, bool HasFamiliarity_, bool NoSpace, class UObject* __WorldContext, class FString* ItemEffects, class FString* ItemDescription, const class FString& Temp_string_Variable, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, bool CallFunc_EqualEqual_StrStr_ReturnValue, const class FString& Temp_string_Variable_1, bool Temp_bool_Variable, const class FString& Temp_string_Variable_2, bool Temp_bool_Variable_1, const class FString& K2Node_Select_Default, const class FString& Temp_string_Variable_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, bool Temp_bool_Variable_2, const class FString& K2Node_Select_Default_1, const class FString& Temp_string_Variable_4, const class FString& K2Node_Select_Default_2, bool Temp_bool_Variable_3, const class FString& K2Node_Select_Default_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FunctionsLib_C", "ItemDetailBuildString");

	Params::UUI_FunctionsLib_C_ItemDetailBuildString_Params Parms{};

	Parms.EffectDescription = EffectDescription;
	Parms.ExtendedDescription = ExtendedDescription;
	Parms.Description = Description;
	Parms.HasFamiliarity_ = HasFamiliarity_;
	Parms.NoSpace = NoSpace;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_string_Variable = Temp_string_Variable;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.Temp_string_Variable_1 = Temp_string_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_string_Variable_2 = Temp_string_Variable_2;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_string_Variable_3 = Temp_string_Variable_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.Temp_string_Variable_4 = Temp_string_Variable_4;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.CallFunc_Concat_StrStr_ReturnValue_6 = CallFunc_Concat_StrStr_ReturnValue_6;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemEffects != nullptr)
		*ItemEffects = std::move(Parms.ItemEffects);

	if (ItemDescription != nullptr)
		*ItemDescription = std::move(Parms.ItemDescription);

}


// Function UI_FunctionsLib.UI_FunctionsLib_C.GetCredits
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FText>                Return_Value                                                     (Parm, OutParm, HasGetValueTypeHash)
// TArray<class FText>                Local_Credits                                                    (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<class FText>                K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)

void UUI_FunctionsLib_C::GetCredits(class UObject* __WorldContext, TArray<class FText>* Return_Value, const TArray<class FText>& Local_Credits, TArray<class FText>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FunctionsLib_C", "GetCredits");

	Params::UUI_FunctionsLib_C_GetCredits_Params Parms{};

	Parms.__WorldContext = __WorldContext;
	Parms.Local_Credits = Local_Credits;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (Return_Value != nullptr)
		*Return_Value = std::move(Parms.Return_Value);

}


// Function UI_FunctionsLib.UI_FunctionsLib_C.GetCostColor
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Condition                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 SlateColor                                                       (Parm, OutParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)

void UUI_FunctionsLib_C::GetCostColor(bool Condition, class UObject* __WorldContext, struct FSlateColor* SlateColor, bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& K2Node_Select_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FunctionsLib_C", "GetCostColor");

	Params::UUI_FunctionsLib_C_GetCostColor_Params Parms{};

	Parms.Condition = Condition;
	Parms.__WorldContext = __WorldContext;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

	if (SlateColor != nullptr)
		*SlateColor = std::move(Parms.SlateColor);

}


// Function UI_FunctionsLib.UI_FunctionsLib_C.GetUpgradesIcons
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Unlocked                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EArmorTypes             Armor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UTexture2D*>          Hadern_Icons_Inactive                                            (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<class UTexture2D*>          Hadern_Icons_Active                                              (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<class UTexture2D*>          Light_Icons_Active                                               (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<class UTexture2D*>          Heavy_Icons_Active                                               (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<class UTexture2D*>          Fluted_Icons_Active                                              (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<class UTexture2D*>          Balanced_Icons_Active                                            (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<class UTexture2D*>          Light_Icons_Inactive                                             (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<class UTexture2D*>          Heavy_Icons_Inactive                                             (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<class UTexture2D*>          Fluted_Icons_Inactive                                            (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<class UTexture2D*>          Balanced_Icons_Inactive                                          (Edit, BlueprintVisible, HasGetValueTypeHash)
// TArray<class UTexture2D*>          Temp_object_Variable                                             (ReferenceParm, HasGetValueTypeHash)
// enum class EArmorTypes             Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UTexture2D*>          Temp_object_Variable_1                                           (ReferenceParm, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UTexture2D*>          K2Node_MakeArray_Array                                           (ReferenceParm, HasGetValueTypeHash)
// TArray<class UTexture2D*>          K2Node_MakeArray_Array_1                                         (ReferenceParm, HasGetValueTypeHash)
// TArray<class UTexture2D*>          K2Node_MakeArray_Array_2                                         (ReferenceParm, HasGetValueTypeHash)
// TArray<class UTexture2D*>          K2Node_MakeArray_Array_3                                         (ReferenceParm, HasGetValueTypeHash)
// TArray<class UTexture2D*>          K2Node_MakeArray_Array_4                                         (ReferenceParm, HasGetValueTypeHash)
// TArray<class UTexture2D*>          K2Node_MakeArray_Array_5                                         (ReferenceParm, HasGetValueTypeHash)
// TArray<class UTexture2D*>          K2Node_MakeArray_Array_6                                         (ReferenceParm, HasGetValueTypeHash)
// TArray<class UTexture2D*>          K2Node_MakeArray_Array_7                                         (ReferenceParm, HasGetValueTypeHash)
// TArray<class UTexture2D*>          K2Node_MakeArray_Array_8                                         (ReferenceParm, HasGetValueTypeHash)
// TArray<class UTexture2D*>          K2Node_MakeArray_Array_9                                         (ReferenceParm, HasGetValueTypeHash)
// enum class EArmorTypes             Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UTexture2D*>          K2Node_Select_Default                                            (ReferenceParm, HasGetValueTypeHash)
// TArray<class UTexture2D*>          K2Node_Select_Default_1                                          (ReferenceParm, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UTexture2D* UUI_FunctionsLib_C::GetUpgradesIcons(bool Unlocked, int32 Index, enum class EArmorTypes Armor, class UObject* __WorldContext, const TArray<class UTexture2D*>& Hadern_Icons_Inactive, const TArray<class UTexture2D*>& Hadern_Icons_Active, const TArray<class UTexture2D*>& Light_Icons_Active, const TArray<class UTexture2D*>& Heavy_Icons_Active, const TArray<class UTexture2D*>& Fluted_Icons_Active, const TArray<class UTexture2D*>& Balanced_Icons_Active, const TArray<class UTexture2D*>& Light_Icons_Inactive, const TArray<class UTexture2D*>& Heavy_Icons_Inactive, const TArray<class UTexture2D*>& Fluted_Icons_Inactive, const TArray<class UTexture2D*>& Balanced_Icons_Inactive, TArray<class UTexture2D*>& Temp_object_Variable, enum class EArmorTypes Temp_byte_Variable, TArray<class UTexture2D*>& Temp_object_Variable_1, bool Temp_bool_Variable, TArray<class UTexture2D*>& K2Node_MakeArray_Array, TArray<class UTexture2D*>& K2Node_MakeArray_Array_1, TArray<class UTexture2D*>& K2Node_MakeArray_Array_2, TArray<class UTexture2D*>& K2Node_MakeArray_Array_3, TArray<class UTexture2D*>& K2Node_MakeArray_Array_4, TArray<class UTexture2D*>& K2Node_MakeArray_Array_5, TArray<class UTexture2D*>& K2Node_MakeArray_Array_6, TArray<class UTexture2D*>& K2Node_MakeArray_Array_7, TArray<class UTexture2D*>& K2Node_MakeArray_Array_8, TArray<class UTexture2D*>& K2Node_MakeArray_Array_9, enum class EArmorTypes Temp_byte_Variable_1, TArray<class UTexture2D*>& K2Node_Select_Default, TArray<class UTexture2D*>& K2Node_Select_Default_1, class UTexture2D* CallFunc_Array_Get_Item, class UTexture2D* CallFunc_Array_Get_Item_1, class UTexture2D* K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FunctionsLib_C", "GetUpgradesIcons");

	Params::UUI_FunctionsLib_C_GetUpgradesIcons_Params Parms{};

	Parms.Unlocked = Unlocked;
	Parms.Index = Index;
	Parms.Armor = Armor;
	Parms.__WorldContext = __WorldContext;
	Parms.Hadern_Icons_Inactive = Hadern_Icons_Inactive;
	Parms.Hadern_Icons_Active = Hadern_Icons_Active;
	Parms.Light_Icons_Active = Light_Icons_Active;
	Parms.Heavy_Icons_Active = Heavy_Icons_Active;
	Parms.Fluted_Icons_Active = Fluted_Icons_Active;
	Parms.Balanced_Icons_Active = Balanced_Icons_Active;
	Parms.Light_Icons_Inactive = Light_Icons_Inactive;
	Parms.Heavy_Icons_Inactive = Heavy_Icons_Inactive;
	Parms.Fluted_Icons_Inactive = Fluted_Icons_Inactive;
	Parms.Balanced_Icons_Inactive = Balanced_Icons_Inactive;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.K2Node_MakeArray_Array_4 = K2Node_MakeArray_Array_4;
	Parms.K2Node_MakeArray_Array_5 = K2Node_MakeArray_Array_5;
	Parms.K2Node_MakeArray_Array_6 = K2Node_MakeArray_Array_6;
	Parms.K2Node_MakeArray_Array_7 = K2Node_MakeArray_Array_7;
	Parms.K2Node_MakeArray_Array_8 = K2Node_MakeArray_Array_8;
	Parms.K2Node_MakeArray_Array_9 = K2Node_MakeArray_Array_9;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UI_FunctionsLib.UI_FunctionsLib_C.GetButtonIcon
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EControllerButton       ButtonType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  Texture                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Local_RowName                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Local_InKeyboardMode                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EControllerButton       Local_ButtonType                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Temp_object_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Temp_object_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Temp_object_Variable_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  Temp_object_Variable_6                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlatformGamepadType    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlatformGamepadType    CallFunc_GetPlatformGamepadType_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDataTable*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IGamePlayGameStateInterface_C>K2Node_DynamicCast_AsGame_Play_Game_State_Interface              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUI_Icon                    CallFunc_GetDataTableRowFromName_OutRow                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInKeyboardMode_InKeyboardMode                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Replace_ReturnValue                                     (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUI_FunctionsLib_C::GetButtonIcon(enum class EControllerButton ButtonType, class UObject* __WorldContext, class UTexture2D** Texture, class FName Local_RowName, bool Local_InKeyboardMode, enum class EControllerButton Local_ButtonType, class UDataTable* Temp_object_Variable, class UDataTable* Temp_object_Variable_1, class UDataTable* Temp_object_Variable_2, class UDataTable* Temp_object_Variable_3, class UDataTable* Temp_object_Variable_4, class UDataTable* Temp_object_Variable_5, class UDataTable* Temp_object_Variable_6, enum class EPlatformGamepadType Temp_byte_Variable, enum class EPlatformGamepadType CallFunc_GetPlatformGamepadType_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class UDataTable* K2Node_Select_Default, TScriptInterface<class IGamePlayGameStateInterface_C> K2Node_DynamicCast_AsGame_Play_Game_State_Interface, bool K2Node_DynamicCast_bSuccess, const struct FUI_Icon& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_IsInKeyboardMode_InKeyboardMode, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Replace_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FunctionsLib_C", "GetButtonIcon");

	Params::UUI_FunctionsLib_C_GetButtonIcon_Params Parms{};

	Parms.ButtonType = ButtonType;
	Parms.__WorldContext = __WorldContext;
	Parms.Local_RowName = Local_RowName;
	Parms.Local_InKeyboardMode = Local_InKeyboardMode;
	Parms.Local_ButtonType = Local_ButtonType;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.Temp_object_Variable_4 = Temp_object_Variable_4;
	Parms.Temp_object_Variable_5 = Temp_object_Variable_5;
	Parms.Temp_object_Variable_6 = Temp_object_Variable_6;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetPlatformGamepadType_ReturnValue = CallFunc_GetPlatformGamepadType_ReturnValue;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_DynamicCast_AsGame_Play_Game_State_Interface = K2Node_DynamicCast_AsGame_Play_Game_State_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_IsInKeyboardMode_InKeyboardMode = CallFunc_IsInKeyboardMode_InKeyboardMode;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Replace_ReturnValue = CallFunc_Replace_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Texture != nullptr)
		*Texture = Parms.Texture;

}


// Function UI_FunctionsLib.UI_FunctionsLib_C.UI_ClearTimer
// (Static, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTimerHandle                Timer                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsValidTimerHandle_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUI_FunctionsLib_C::UI_ClearTimer(const struct FTimerHandle& Timer, class UObject* __WorldContext, bool CallFunc_K2_IsValidTimerHandle_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FunctionsLib_C", "UI_ClearTimer");

	Params::UUI_FunctionsLib_C_UI_ClearTimer_Params Parms{};

	Parms.Timer = Timer;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_K2_IsValidTimerHandle_ReturnValue = CallFunc_K2_IsValidTimerHandle_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UI_FunctionsLib.UI_FunctionsLib_C.UI_HoldTimer
// (Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// FDelegateProperty_                 Event                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor)
// float                              Time                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)

struct FTimerHandle UUI_FunctionsLib_C::UI_HoldTimer(FDelegateProperty_ Event, float Time, class UObject* __WorldContext, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UI_FunctionsLib_C", "UI_HoldTimer");

	Params::UUI_FunctionsLib_C_UI_HoldTimer_Params Parms{};

	Parms.Event = Event;
	Parms.Time = Time;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


