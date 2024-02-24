#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_LoadingScreenMoviePlayer.WBP_LoadingScreenMoviePlayer_C
// (None)

class UClass* UWBP_LoadingScreenMoviePlayer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_LoadingScreenMoviePlayer_C");

	return Clss;
}


// WBP_LoadingScreenMoviePlayer_C WBP_LoadingScreenMoviePlayer.Default__WBP_LoadingScreenMoviePlayer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_LoadingScreenMoviePlayer_C* UWBP_LoadingScreenMoviePlayer_C::GetDefaultObj()
{
	static class UWBP_LoadingScreenMoviePlayer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_LoadingScreenMoviePlayer_C*>(UWBP_LoadingScreenMoviePlayer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_LoadingScreenMoviePlayer.WBP_LoadingScreenMoviePlayer_C.StopAudio
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGlobalAudioSubsystem*       CallFunc_GetEngineSubsystem_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_LoadingScreenMoviePlayer_C::StopAudio(bool CallFunc_IsDedicatedServer_ReturnValue, class UGlobalAudioSubsystem* CallFunc_GetEngineSubsystem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoadingScreenMoviePlayer_C", "StopAudio");

	Params::UWBP_LoadingScreenMoviePlayer_C_StopAudio_Params Parms{};

	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue = CallFunc_GetEngineSubsystem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_LoadingScreenMoviePlayer.WBP_LoadingScreenMoviePlayer_C.MovieDoneAndRemove
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_LoadingScreenMoviePlayer_C::MovieDoneAndRemove()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoadingScreenMoviePlayer_C", "MovieDoneAndRemove");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LoadingScreenMoviePlayer.WBP_LoadingScreenMoviePlayer_C.EnableSkipButton
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_LoadingScreenMoviePlayer_C::EnableSkipButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoadingScreenMoviePlayer_C", "EnableSkipButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LoadingScreenMoviePlayer.WBP_LoadingScreenMoviePlayer_C.StartAudio
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGlobalAudioSubsystem*       CallFunc_GetEngineSubsystem_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGlobalAudioSubsystem*       CallFunc_GetEngineSubsystem_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMovieVolume_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_LoadingScreenMoviePlayer_C::StartAudio(bool CallFunc_IsDedicatedServer_ReturnValue, class UGlobalAudioSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UGlobalAudioSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_1, float CallFunc_GetMovieVolume_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoadingScreenMoviePlayer_C", "StartAudio");

	Params::UWBP_LoadingScreenMoviePlayer_C_StartAudio_Params Parms{};

	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue = CallFunc_GetEngineSubsystem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue_1 = CallFunc_GetEngineSubsystem_ReturnValue_1;
	Parms.CallFunc_GetMovieVolume_ReturnValue = CallFunc_GetMovieVolume_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_LoadingScreenMoviePlayer.WBP_LoadingScreenMoviePlayer_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_LoadingScreenMoviePlayer_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoadingScreenMoviePlayer_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LoadingScreenMoviePlayer.WBP_LoadingScreenMoviePlayer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_LoadingScreenMoviePlayer_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoadingScreenMoviePlayer_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LoadingScreenMoviePlayer.WBP_LoadingScreenMoviePlayer_C.PlayMedia
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_LoadingScreenMoviePlayer_C::PlayMedia()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoadingScreenMoviePlayer_C", "PlayMedia");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LoadingScreenMoviePlayer.WBP_LoadingScreenMoviePlayer_C.OnMediaOpened
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      OpenedUrl                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_LoadingScreenMoviePlayer_C::OnMediaOpened(const class FString& OpenedUrl)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoadingScreenMoviePlayer_C", "OnMediaOpened");

	Params::UWBP_LoadingScreenMoviePlayer_C_OnMediaOpened_Params Parms{};

	Parms.OpenedUrl = OpenedUrl;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_LoadingScreenMoviePlayer.WBP_LoadingScreenMoviePlayer_C.BndEvt__WBP_RevealTrailerVideoWidget_WBP_button_base_K2Node_ComponentBoundEvent_0_BU_Click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UWBP_LoadingScreenMoviePlayer_C::BndEvt__WBP_RevealTrailerVideoWidget_WBP_button_base_K2Node_ComponentBoundEvent_0_BU_Click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoadingScreenMoviePlayer_C", "BndEvt__WBP_RevealTrailerVideoWidget_WBP_button_base_K2Node_ComponentBoundEvent_0_BU_Click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LoadingScreenMoviePlayer.WBP_LoadingScreenMoviePlayer_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_LoadingScreenMoviePlayer_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoadingScreenMoviePlayer_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LoadingScreenMoviePlayer.WBP_LoadingScreenMoviePlayer_C.OnMediaEndReached
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_LoadingScreenMoviePlayer_C::OnMediaEndReached()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoadingScreenMoviePlayer_C", "OnMediaEndReached");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_LoadingScreenMoviePlayer.WBP_LoadingScreenMoviePlayer_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_LoadingScreenMoviePlayer_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoadingScreenMoviePlayer_C", "PreConstruct");

	Params::UWBP_LoadingScreenMoviePlayer_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_LoadingScreenMoviePlayer.WBP_LoadingScreenMoviePlayer_C.OnMediaOpenFailed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      FailedUrl                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_LoadingScreenMoviePlayer_C::OnMediaOpenFailed(const class FString& FailedUrl)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoadingScreenMoviePlayer_C", "OnMediaOpenFailed");

	Params::UWBP_LoadingScreenMoviePlayer_C_OnMediaOpenFailed_Params Parms{};

	Parms.FailedUrl = FailedUrl;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_LoadingScreenMoviePlayer.WBP_LoadingScreenMoviePlayer_C.ExecuteUbergraph_WBP_LoadingScreenMoviePlayer
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_OpenedUrl                                     (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_FailedUrl                                     (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanPlay_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Play_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OpenUrl_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_LoadingScreenMoviePlayer_C::ExecuteUbergraph_WBP_LoadingScreenMoviePlayer(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const class FString& K2Node_CustomEvent_OpenedUrl, bool CallFunc_GetIsEnabled_ReturnValue, bool K2Node_Event_IsDesignTime, const class FString& K2Node_CustomEvent_FailedUrl, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_CanPlay_ReturnValue, bool CallFunc_Play_ReturnValue, bool CallFunc_OpenUrl_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_LoadingScreenMoviePlayer_C", "ExecuteUbergraph_WBP_LoadingScreenMoviePlayer");

	Params::UWBP_LoadingScreenMoviePlayer_C_ExecuteUbergraph_WBP_LoadingScreenMoviePlayer_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_CustomEvent_OpenedUrl = K2Node_CustomEvent_OpenedUrl;
	Parms.CallFunc_GetIsEnabled_ReturnValue = CallFunc_GetIsEnabled_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_FailedUrl = K2Node_CustomEvent_FailedUrl;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_CanPlay_ReturnValue = CallFunc_CanPlay_ReturnValue;
	Parms.CallFunc_Play_ReturnValue = CallFunc_Play_ReturnValue;
	Parms.CallFunc_OpenUrl_ReturnValue = CallFunc_OpenUrl_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


