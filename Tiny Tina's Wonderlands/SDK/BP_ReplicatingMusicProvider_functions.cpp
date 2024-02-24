#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ReplicatingMusicProvider.BP_ReplicatingMusicProvider_C
// (Actor)

class UClass* ABP_ReplicatingMusicProvider_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ReplicatingMusicProvider_C");

	return Clss;
}


// BP_ReplicatingMusicProvider_C BP_ReplicatingMusicProvider.Default__BP_ReplicatingMusicProvider_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_ReplicatingMusicProvider_C* ABP_ReplicatingMusicProvider_C::GetDefaultObj()
{
	static class ABP_ReplicatingMusicProvider_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_ReplicatingMusicProvider_C*>(ABP_ReplicatingMusicProvider_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ReplicatingMusicProvider.BP_ReplicatingMusicProvider_C.StopOverrideMusic
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWwiseEvent*                 OptionalStopEvent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWwiseState*                 OptionalSetState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FWwisePlaybackInstance      CallFunc_PostWwiseEvent_ReturnValue                              (None)

void ABP_ReplicatingMusicProvider_C::StopOverrideMusic(class UWwiseEvent* OptionalStopEvent, class UWwiseState* OptionalSetState, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ReplicatingMusicProvider_C", "StopOverrideMusic");

	Params::ABP_ReplicatingMusicProvider_C_StopOverrideMusic_Params Parms{};

	Parms.OptionalStopEvent = OptionalStopEvent;
	Parms.OptionalSetState = OptionalSetState;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_PostWwiseEvent_ReturnValue = CallFunc_PostWwiseEvent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ReplicatingMusicProvider.BP_ReplicatingMusicProvider_C.CheckClientInitialState
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bDidStartOverrideMusic                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FWwisePlaybackInstance      CallFunc_PostWwiseEvent_ReturnValue                              (None)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ReplicatingMusicProvider_C::CheckClientInitialState(bool* bDidStartOverrideMusic, bool CallFunc_IsValid_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ReplicatingMusicProvider_C", "CheckClientInitialState");

	Params::ABP_ReplicatingMusicProvider_C_CheckClientInitialState_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_PostWwiseEvent_ReturnValue = CallFunc_PostWwiseEvent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

	if (bDidStartOverrideMusic != nullptr)
		*bDidStartOverrideMusic = Parms.bDidStartOverrideMusic;

}


// Function BP_ReplicatingMusicProvider.BP_ReplicatingMusicProvider_C.SetOverrideMusicState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWwiseState*                 WwiseState                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_ReplicatingMusicProvider_C::SetOverrideMusicState(class UWwiseState* WwiseState, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ReplicatingMusicProvider_C", "SetOverrideMusicState");

	Params::ABP_ReplicatingMusicProvider_C_SetOverrideMusicState_Params Parms{};

	Parms.WwiseState = WwiseState;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ReplicatingMusicProvider.BP_ReplicatingMusicProvider_C.PlayOverrideMusicEvent
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWwiseEvent*                 WwiseEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWwiseEvent*                 CallFunc_GetPlayingEvent_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAudioPlaying_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FWwisePlaybackInstance      CallFunc_PostWwiseEvent_ReturnValue                              (None)

void ABP_ReplicatingMusicProvider_C::PlayOverrideMusicEvent(class UWwiseEvent* WwiseEvent, bool CallFunc_IsValid_ReturnValue, class UWwiseEvent* CallFunc_GetPlayingEvent_ReturnValue, bool CallFunc_IsAudioPlaying_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FWwisePlaybackInstance& CallFunc_PostWwiseEvent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ReplicatingMusicProvider_C", "PlayOverrideMusicEvent");

	Params::ABP_ReplicatingMusicProvider_C_PlayOverrideMusicEvent_Params Parms{};

	Parms.WwiseEvent = WwiseEvent;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetPlayingEvent_ReturnValue = CallFunc_GetPlayingEvent_ReturnValue;
	Parms.CallFunc_IsAudioPlaying_ReturnValue = CallFunc_IsAudioPlaying_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_PostWwiseEvent_ReturnValue = CallFunc_PostWwiseEvent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_ReplicatingMusicProvider.BP_ReplicatingMusicProvider_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_ReplicatingMusicProvider_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ReplicatingMusicProvider_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}


