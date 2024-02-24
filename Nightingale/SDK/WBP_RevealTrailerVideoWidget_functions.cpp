#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_RevealTrailerVideoWidget.WBP_RevealTrailerVideoWidget_C
// (None)

class UClass* UWBP_RevealTrailerVideoWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_RevealTrailerVideoWidget_C");

	return Clss;
}


// WBP_RevealTrailerVideoWidget_C WBP_RevealTrailerVideoWidget.Default__WBP_RevealTrailerVideoWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_RevealTrailerVideoWidget_C* UWBP_RevealTrailerVideoWidget_C::GetDefaultObj()
{
	static class UWBP_RevealTrailerVideoWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_RevealTrailerVideoWidget_C*>(UWBP_RevealTrailerVideoWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_RevealTrailerVideoWidget.WBP_RevealTrailerVideoWidget_C.BP_GetDesiredFocusTarget
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UWidget* UWBP_RevealTrailerVideoWidget_C::BP_GetDesiredFocusTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RevealTrailerVideoWidget_C", "BP_GetDesiredFocusTarget");

	Params::UWBP_RevealTrailerVideoWidget_C_BP_GetDesiredFocusTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_RevealTrailerVideoWidget.WBP_RevealTrailerVideoWidget_C.IntroTimer_EnableSkip_Delay
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)

void UWBP_RevealTrailerVideoWidget_C::IntroTimer_EnableSkip_Delay(const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RevealTrailerVideoWidget_C", "IntroTimer_EnableSkip_Delay");

	Params::UWBP_RevealTrailerVideoWidget_C_IntroTimer_EnableSkip_Delay_Params Parms{};

	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RevealTrailerVideoWidget.WBP_RevealTrailerVideoWidget_C.EnableSkipButton
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_RevealTrailerVideoWidget_C::EnableSkipButton()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RevealTrailerVideoWidget_C", "EnableSkipButton");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_RevealTrailerVideoWidget.WBP_RevealTrailerVideoWidget_C.SetRemoveVideoTimer
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FTimespan                   VideoTimeSpan                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTimespan_Days                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTimespan_Hours                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTimespan_Minutes                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTimespan_Seconds                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakTimespan_Milliseconds                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_SetTimerDelegate_Time_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RevealTrailerVideoWidget_C::SetRemoveVideoTimer(const struct FTimespan& VideoTimeSpan, int32 CallFunc_BreakTimespan_Days, int32 CallFunc_BreakTimespan_Hours, int32 CallFunc_BreakTimespan_Minutes, int32 CallFunc_BreakTimespan_Seconds, int32 CallFunc_BreakTimespan_Milliseconds, double CallFunc_Conv_IntToDouble_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 CallFunc_Add_IntInt_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RevealTrailerVideoWidget_C", "SetRemoveVideoTimer");

	Params::UWBP_RevealTrailerVideoWidget_C_SetRemoveVideoTimer_Params Parms{};

	Parms.VideoTimeSpan = VideoTimeSpan;
	Parms.CallFunc_BreakTimespan_Days = CallFunc_BreakTimespan_Days;
	Parms.CallFunc_BreakTimespan_Hours = CallFunc_BreakTimespan_Hours;
	Parms.CallFunc_BreakTimespan_Minutes = CallFunc_BreakTimespan_Minutes;
	Parms.CallFunc_BreakTimespan_Seconds = CallFunc_BreakTimespan_Seconds;
	Parms.CallFunc_BreakTimespan_Milliseconds = CallFunc_BreakTimespan_Milliseconds;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_K2_SetTimerDelegate_Time_ImplicitCast = CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RevealTrailerVideoWidget.WBP_RevealTrailerVideoWidget_C.HasValidMedia
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               HasMedia                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RevealTrailerVideoWidget_C::HasValidMedia(bool* HasMedia)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RevealTrailerVideoWidget_C", "HasValidMedia");

	Params::UWBP_RevealTrailerVideoWidget_C_HasValidMedia_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (HasMedia != nullptr)
		*HasMedia = Parms.HasMedia;

}


// Function WBP_RevealTrailerVideoWidget.WBP_RevealTrailerVideoWidget_C.StopAudio
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGlobalAudioSubsystem*       CallFunc_GetEngineSubsystem_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_RevealTrailerVideoWidget_C::StopAudio(class UGlobalAudioSubsystem* CallFunc_GetEngineSubsystem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RevealTrailerVideoWidget_C", "StopAudio");

	Params::UWBP_RevealTrailerVideoWidget_C_StopAudio_Params Parms{};

	Parms.CallFunc_GetEngineSubsystem_ReturnValue = CallFunc_GetEngineSubsystem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RevealTrailerVideoWidget.WBP_RevealTrailerVideoWidget_C.StartAudio
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGlobalAudioSubsystem*       CallFunc_GetEngineSubsystem_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UGlobalAudioSubsystem*       CallFunc_GetEngineSubsystem_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetUrl_ReturnValue                                      (ZeroConstructor, HasGetValueTypeHash)
// class UGlobalMusicManager*         CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMovieVolume_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RevealTrailerVideoWidget_C::StartAudio(class UGlobalAudioSubsystem* CallFunc_GetEngineSubsystem_ReturnValue, class UGlobalAudioSubsystem* CallFunc_GetEngineSubsystem_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetUrl_ReturnValue, class UGlobalMusicManager* CallFunc_GetGameInstanceSubsystem_ReturnValue, float CallFunc_GetMovieVolume_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RevealTrailerVideoWidget_C", "StartAudio");

	Params::UWBP_RevealTrailerVideoWidget_C_StartAudio_Params Parms{};

	Parms.CallFunc_GetEngineSubsystem_ReturnValue = CallFunc_GetEngineSubsystem_ReturnValue;
	Parms.CallFunc_GetEngineSubsystem_ReturnValue_1 = CallFunc_GetEngineSubsystem_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetUrl_ReturnValue = CallFunc_GetUrl_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetMovieVolume_ReturnValue = CallFunc_GetMovieVolume_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RevealTrailerVideoWidget.WBP_RevealTrailerVideoWidget_C.MediaOpened
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      OpenedUrl                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_RevealTrailerVideoWidget_C::MediaOpened(const class FString& OpenedUrl)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RevealTrailerVideoWidget_C", "MediaOpened");

	Params::UWBP_RevealTrailerVideoWidget_C_MediaOpened_Params Parms{};

	Parms.OpenedUrl = OpenedUrl;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RevealTrailerVideoWidget.WBP_RevealTrailerVideoWidget_C.MediaFailedToOpen
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      FailedUrl                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_RevealTrailerVideoWidget_C::MediaFailedToOpen(const class FString& FailedUrl)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RevealTrailerVideoWidget_C", "MediaFailedToOpen");

	Params::UWBP_RevealTrailerVideoWidget_C_MediaFailedToOpen_Params Parms{};

	Parms.FailedUrl = FailedUrl;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RevealTrailerVideoWidget.WBP_RevealTrailerVideoWidget_C.MessageToPlayer_ServerReady
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_RevealTrailerVideoWidget_C::MessageToPlayer_ServerReady()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RevealTrailerVideoWidget_C", "MessageToPlayer_ServerReady");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_RevealTrailerVideoWidget.WBP_RevealTrailerVideoWidget_C.RemoveVideo
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_RevealTrailerVideoWidget_C::RemoveVideo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RevealTrailerVideoWidget_C", "RemoveVideo");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_RevealTrailerVideoWidget.WBP_RevealTrailerVideoWidget_C.PlayMedia
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_RevealTrailerVideoWidget_C::PlayMedia()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RevealTrailerVideoWidget_C", "PlayMedia");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_RevealTrailerVideoWidget.WBP_RevealTrailerVideoWidget_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_RevealTrailerVideoWidget_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RevealTrailerVideoWidget_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_RevealTrailerVideoWidget.WBP_RevealTrailerVideoWidget_C.BndEvt__WBP_RevealTrailerVideoWidget_CBU_Skip_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_RevealTrailerVideoWidget_C::BndEvt__WBP_RevealTrailerVideoWidget_CBU_Skip_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RevealTrailerVideoWidget_C", "BndEvt__WBP_RevealTrailerVideoWidget_CBU_Skip_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_RevealTrailerVideoWidget_C_BndEvt__WBP_RevealTrailerVideoWidget_CBU_Skip_K2Node_ComponentBoundEvent_1_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RevealTrailerVideoWidget.WBP_RevealTrailerVideoWidget_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_RevealTrailerVideoWidget_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RevealTrailerVideoWidget_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_RevealTrailerVideoWidget.WBP_RevealTrailerVideoWidget_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_RevealTrailerVideoWidget_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RevealTrailerVideoWidget_C", "BP_OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_RevealTrailerVideoWidget.WBP_RevealTrailerVideoWidget_C.ExecuteUbergraph_WBP_RevealTrailerVideoWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanPlay_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimespan                   CallFunc_GetDuration_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Play_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNWXGameUserSettings*        CallFunc_GetNWXGameUserSettings_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIntPoint                   CallFunc_GetScreenResolution_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_SelectString_ReturnValue                                (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInteractionEnabled_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OpenUrl_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_RevealTrailerVideoWidget_C::ExecuteUbergraph_WBP_RevealTrailerVideoWidget(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_CanPlay_ReturnValue, const struct FTimespan& CallFunc_GetDuration_ReturnValue, bool CallFunc_Play_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UNWXGameUserSettings* CallFunc_GetNWXGameUserSettings_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FIntPoint& CallFunc_GetScreenResolution_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, const class FString& CallFunc_SelectString_ReturnValue, bool CallFunc_IsInteractionEnabled_ReturnValue, bool CallFunc_OpenUrl_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RevealTrailerVideoWidget_C", "ExecuteUbergraph_WBP_RevealTrailerVideoWidget");

	Params::UWBP_RevealTrailerVideoWidget_C_ExecuteUbergraph_WBP_RevealTrailerVideoWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_CanPlay_ReturnValue = CallFunc_CanPlay_ReturnValue;
	Parms.CallFunc_GetDuration_ReturnValue = CallFunc_GetDuration_ReturnValue;
	Parms.CallFunc_Play_ReturnValue = CallFunc_Play_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetNWXGameUserSettings_ReturnValue = CallFunc_GetNWXGameUserSettings_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetScreenResolution_ReturnValue = CallFunc_GetScreenResolution_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_SelectString_ReturnValue = CallFunc_SelectString_ReturnValue;
	Parms.CallFunc_IsInteractionEnabled_ReturnValue = CallFunc_IsInteractionEnabled_ReturnValue;
	Parms.CallFunc_OpenUrl_ReturnValue = CallFunc_OpenUrl_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_RevealTrailerVideoWidget.WBP_RevealTrailerVideoWidget_C.PlayerReadyTrailerDone__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_RevealTrailerVideoWidget_C::PlayerReadyTrailerDone__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_RevealTrailerVideoWidget_C", "PlayerReadyTrailerDone__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


