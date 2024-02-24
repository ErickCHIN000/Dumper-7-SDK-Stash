#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_Util_MovieLoop.wid_Util_MovieLoop_C
// (None)

class UClass* UWid_Util_MovieLoop_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_Util_MovieLoop_C");

	return Clss;
}


// wid_Util_MovieLoop_C wid_Util_MovieLoop.Default__wid_Util_MovieLoop_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_Util_MovieLoop_C* UWid_Util_MovieLoop_C::GetDefaultObj()
{
	static class UWid_Util_MovieLoop_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_Util_MovieLoop_C*>(UWid_Util_MovieLoop_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_Util_MovieLoop.wid_Util_MovieLoop_C.LoadFile
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMediaSource*                Source                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Util_MovieLoop_C::LoadFile(class UMediaSource* Source)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Util_MovieLoop_C", "LoadFile");

	Params::UWid_Util_MovieLoop_C_LoadFile_Params Parms{};

	Parms.Source = Source;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Util_MovieLoop.wid_Util_MovieLoop_C.Stop
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               StopMediaPlayer                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_Util_MovieLoop_C::Stop(bool StopMediaPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Util_MovieLoop_C", "Stop");

	Params::UWid_Util_MovieLoop_C_Stop_Params Parms{};

	Parms.StopMediaPlayer = StopMediaPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Util_MovieLoop.wid_Util_MovieLoop_C.SkipToLoopBeginning
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Util_MovieLoop_C::SkipToLoopBeginning()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Util_MovieLoop_C", "SkipToLoopBeginning");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Util_MovieLoop.wid_Util_MovieLoop_C.Play
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMediaSource*                Source                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              LoopStart                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              LoopEnd                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               SingleLoop                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_Util_MovieLoop_C::Play(class UMediaSource* Source, float LoopStart, float LoopEnd, bool SingleLoop)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Util_MovieLoop_C", "Play");

	Params::UWid_Util_MovieLoop_C_Play_Params Parms{};

	Parms.Source = Source;
	Parms.LoopStart = LoopStart;
	Parms.LoopEnd = LoopEnd;
	Parms.SingleLoop = SingleLoop;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Util_MovieLoop.wid_Util_MovieLoop_C.PlayAfterOpened
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      OpenedUrl                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWid_Util_MovieLoop_C::PlayAfterOpened(const class FString& OpenedUrl)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Util_MovieLoop_C", "PlayAfterOpened");

	Params::UWid_Util_MovieLoop_C_PlayAfterOpened_Params Parms{};

	Parms.OpenedUrl = OpenedUrl;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Util_MovieLoop.wid_Util_MovieLoop_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_Util_MovieLoop_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Util_MovieLoop_C", "PreConstruct");

	Params::UWid_Util_MovieLoop_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Util_MovieLoop.wid_Util_MovieLoop_C.ManualEndLoop
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Util_MovieLoop_C::ManualEndLoop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Util_MovieLoop_C", "ManualEndLoop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Util_MovieLoop.wid_Util_MovieLoop_C.PlayLoop
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              LoopStart                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              LoopEnd                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               SingleLoop                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_Util_MovieLoop_C::PlayLoop(float LoopStart, float LoopEnd, bool SingleLoop)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Util_MovieLoop_C", "PlayLoop");

	Params::UWid_Util_MovieLoop_C_PlayLoop_Params Parms{};

	Parms.LoopStart = LoopStart;
	Parms.LoopEnd = LoopEnd;
	Parms.SingleLoop = SingleLoop;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Util_MovieLoop.wid_Util_MovieLoop_C.ExecuteUbergraph_wid_Util_MovieLoop
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMediaSource*                K2Node_CustomEvent_Source_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               K2Node_CustomEvent_StopMediaPlayer                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_OpenSource_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Pause_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMediaSource*                K2Node_CustomEvent_Source                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_LoopStart_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_LoopEnd_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_SingleLoop_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_CustomEvent_OpenedUrl                                     (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimespan                   CallFunc_MakeTimespan_ReturnValue                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// struct FTimespan                   CallFunc_MakeTimespan_ReturnValue_1                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Pause_ReturnValue_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Seek_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_LoopStart                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_LoopEnd                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_SingleLoop                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Fraction_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   CallFunc_MakeTimespan_ReturnValue_2                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)

void UWid_Util_MovieLoop_C::ExecuteUbergraph_wid_Util_MovieLoop(int32 EntryPoint, class UMediaSource* K2Node_CustomEvent_Source_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_CustomEvent_StopMediaPlayer, bool CallFunc_OpenSource_ReturnValue, bool CallFunc_Pause_ReturnValue, class UMediaSource* K2Node_CustomEvent_Source, float K2Node_CustomEvent_LoopStart_1, float K2Node_CustomEvent_LoopEnd_1, bool K2Node_CustomEvent_SingleLoop_1, const class FString& K2Node_CustomEvent_OpenedUrl, bool K2Node_Event_IsDesignTime, const struct FTimespan& CallFunc_MakeTimespan_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimespan& CallFunc_MakeTimespan_ReturnValue_1, bool CallFunc_Pause_ReturnValue_1, bool CallFunc_Seek_ReturnValue, float K2Node_CustomEvent_LoopStart, float K2Node_CustomEvent_LoopEnd, bool K2Node_CustomEvent_SingleLoop, float CallFunc_Fraction_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, const struct FTimespan& CallFunc_MakeTimespan_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Util_MovieLoop_C", "ExecuteUbergraph_wid_Util_MovieLoop");

	Params::UWid_Util_MovieLoop_C_ExecuteUbergraph_wid_Util_MovieLoop_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Source_1 = K2Node_CustomEvent_Source_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_StopMediaPlayer = K2Node_CustomEvent_StopMediaPlayer;
	Parms.CallFunc_OpenSource_ReturnValue = CallFunc_OpenSource_ReturnValue;
	Parms.CallFunc_Pause_ReturnValue = CallFunc_Pause_ReturnValue;
	Parms.K2Node_CustomEvent_Source = K2Node_CustomEvent_Source;
	Parms.K2Node_CustomEvent_LoopStart_1 = K2Node_CustomEvent_LoopStart_1;
	Parms.K2Node_CustomEvent_LoopEnd_1 = K2Node_CustomEvent_LoopEnd_1;
	Parms.K2Node_CustomEvent_SingleLoop_1 = K2Node_CustomEvent_SingleLoop_1;
	Parms.K2Node_CustomEvent_OpenedUrl = K2Node_CustomEvent_OpenedUrl;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_MakeTimespan_ReturnValue = CallFunc_MakeTimespan_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_MakeTimespan_ReturnValue_1 = CallFunc_MakeTimespan_ReturnValue_1;
	Parms.CallFunc_Pause_ReturnValue_1 = CallFunc_Pause_ReturnValue_1;
	Parms.CallFunc_Seek_ReturnValue = CallFunc_Seek_ReturnValue;
	Parms.K2Node_CustomEvent_LoopStart = K2Node_CustomEvent_LoopStart;
	Parms.K2Node_CustomEvent_LoopEnd = K2Node_CustomEvent_LoopEnd;
	Parms.K2Node_CustomEvent_SingleLoop = K2Node_CustomEvent_SingleLoop;
	Parms.CallFunc_Fraction_ReturnValue = CallFunc_Fraction_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue_1 = CallFunc_FTrunc_ReturnValue_1;
	Parms.CallFunc_MakeTimespan_ReturnValue_2 = CallFunc_MakeTimespan_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Util_MovieLoop.wid_Util_MovieLoop_C.LoopEnded__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_Util_MovieLoop_C::LoopEnded__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Util_MovieLoop_C", "LoopEnded__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


