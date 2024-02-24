#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class WwiseAudio.AudioParametersProviderInterface
// (None)

class UClass* IAudioParametersProviderInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioParametersProviderInterface");

	return Clss;
}


// AudioParametersProviderInterface WwiseAudio.Default__AudioParametersProviderInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IAudioParametersProviderInterface* IAudioParametersProviderInterface::GetDefaultObj()
{
	static class IAudioParametersProviderInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IAudioParametersProviderInterface*>(IAudioParametersProviderInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class WwiseAudio.AudioPositioningProviderInterface
// (None)

class UClass* IAudioPositioningProviderInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioPositioningProviderInterface");

	return Clss;
}


// AudioPositioningProviderInterface WwiseAudio.Default__AudioPositioningProviderInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IAudioPositioningProviderInterface* IAudioPositioningProviderInterface::GetDefaultObj()
{
	static class IAudioPositioningProviderInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IAudioPositioningProviderInterface*>(IAudioPositioningProviderInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class WwiseAudio.InterpTrackInstWwiseAudioEvent
// (None)

class UClass* UInterpTrackInstWwiseAudioEvent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterpTrackInstWwiseAudioEvent");

	return Clss;
}


// InterpTrackInstWwiseAudioEvent WwiseAudio.Default__InterpTrackInstWwiseAudioEvent
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterpTrackInstWwiseAudioEvent* UInterpTrackInstWwiseAudioEvent::GetDefaultObj()
{
	static class UInterpTrackInstWwiseAudioEvent* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterpTrackInstWwiseAudioEvent*>(UInterpTrackInstWwiseAudioEvent::StaticClass()->DefaultObject);

	return Default;
}


// Class WwiseAudio.InterpTrackInstWwiseAudioRTPC
// (None)

class UClass* UInterpTrackInstWwiseAudioRTPC::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterpTrackInstWwiseAudioRTPC");

	return Clss;
}


// InterpTrackInstWwiseAudioRTPC WwiseAudio.Default__InterpTrackInstWwiseAudioRTPC
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterpTrackInstWwiseAudioRTPC* UInterpTrackInstWwiseAudioRTPC::GetDefaultObj()
{
	static class UInterpTrackInstWwiseAudioRTPC* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterpTrackInstWwiseAudioRTPC*>(UInterpTrackInstWwiseAudioRTPC::StaticClass()->DefaultObject);

	return Default;
}


// Class WwiseAudio.InterpTrackWwiseAudioEvent
// (None)

class UClass* UInterpTrackWwiseAudioEvent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterpTrackWwiseAudioEvent");

	return Clss;
}


// InterpTrackWwiseAudioEvent WwiseAudio.Default__InterpTrackWwiseAudioEvent
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterpTrackWwiseAudioEvent* UInterpTrackWwiseAudioEvent::GetDefaultObj()
{
	static class UInterpTrackWwiseAudioEvent* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterpTrackWwiseAudioEvent*>(UInterpTrackWwiseAudioEvent::StaticClass()->DefaultObject);

	return Default;
}


// Class WwiseAudio.InterpTrackWwiseAudioRTPC
// (None)

class UClass* UInterpTrackWwiseAudioRTPC::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InterpTrackWwiseAudioRTPC");

	return Clss;
}


// InterpTrackWwiseAudioRTPC WwiseAudio.Default__InterpTrackWwiseAudioRTPC
// (Public, ClassDefaultObject, ArchetypeObject)

class UInterpTrackWwiseAudioRTPC* UInterpTrackWwiseAudioRTPC::GetDefaultObj()
{
	static class UInterpTrackWwiseAudioRTPC* Default = nullptr;

	if (!Default)
		Default = static_cast<UInterpTrackWwiseAudioRTPC*>(UInterpTrackWwiseAudioRTPC::StaticClass()->DefaultObject);

	return Default;
}


// Class WwiseAudio.MovieSceneWwiseTrack
// (None)

class UClass* UMovieSceneWwiseTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneWwiseTrack");

	return Clss;
}


// MovieSceneWwiseTrack WwiseAudio.Default__MovieSceneWwiseTrack
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneWwiseTrack* UMovieSceneWwiseTrack::GetDefaultObj()
{
	static class UMovieSceneWwiseTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneWwiseTrack*>(UMovieSceneWwiseTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class WwiseAudio.MovieSceneWwiseEventSection
// (None)

class UClass* UMovieSceneWwiseEventSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MovieSceneWwiseEventSection");

	return Clss;
}


// MovieSceneWwiseEventSection WwiseAudio.Default__MovieSceneWwiseEventSection
// (Public, ClassDefaultObject, ArchetypeObject)

class UMovieSceneWwiseEventSection* UMovieSceneWwiseEventSection::GetDefaultObj()
{
	static class UMovieSceneWwiseEventSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UMovieSceneWwiseEventSection*>(UMovieSceneWwiseEventSection::StaticClass()->DefaultObject);

	return Default;
}


// Class WwiseAudio.WwiseAmbientSound
// (Actor)

class UClass* AWwiseAmbientSound::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WwiseAmbientSound");

	return Clss;
}


// WwiseAmbientSound WwiseAudio.Default__WwiseAmbientSound
// (Public, ClassDefaultObject, ArchetypeObject)

class AWwiseAmbientSound* AWwiseAmbientSound::GetDefaultObj()
{
	static class AWwiseAmbientSound* Default = nullptr;

	if (!Default)
		Default = static_cast<AWwiseAmbientSound*>(AWwiseAmbientSound::StaticClass()->DefaultObject);

	return Default;
}


// Function WwiseAudio.WwiseAmbientSound.ToggleAmbientSound
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AWwiseAmbientSound::ToggleAmbientSound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseAmbientSound", "ToggleAmbientSound");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function WwiseAudio.WwiseAmbientSound.StopAmbientSound
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AWwiseAmbientSound::StopAmbientSound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseAmbientSound", "StopAmbientSound");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function WwiseAudio.WwiseAmbientSound.StartAmbientSound
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AWwiseAmbientSound::StartAmbientSound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseAmbientSound", "StartAmbientSound");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function WwiseAudio.WwiseAmbientSound.GetAudioEmitterLocation
// (Event, Public, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                     ListenerLocation                                                 (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector AWwiseAmbientSound::GetAudioEmitterLocation(struct FVector& ListenerLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseAmbientSound", "GetAudioEmitterLocation");

	Params::AWwiseAmbientSound_GetAudioEmitterLocation_Params Parms{};

	Parms.ListenerLocation = ListenerLocation;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Class WwiseAudio.WwiseAssetSyncDestination
// (None)

class UClass* UWwiseAssetSyncDestination::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WwiseAssetSyncDestination");

	return Clss;
}


// WwiseAssetSyncDestination WwiseAudio.Default__WwiseAssetSyncDestination
// (Public, ClassDefaultObject, ArchetypeObject)

class UWwiseAssetSyncDestination* UWwiseAssetSyncDestination::GetDefaultObj()
{
	static class UWwiseAssetSyncDestination* Default = nullptr;

	if (!Default)
		Default = static_cast<UWwiseAssetSyncDestination*>(UWwiseAssetSyncDestination::StaticClass()->DefaultObject);

	return Default;
}


// Class WwiseAudio.WwiseGameObjectComponent
// (SceneComponent)

class UClass* UWwiseGameObjectComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WwiseGameObjectComponent");

	return Clss;
}


// WwiseGameObjectComponent WwiseAudio.Default__WwiseGameObjectComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UWwiseGameObjectComponent* UWwiseGameObjectComponent::GetDefaultObj()
{
	static class UWwiseGameObjectComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UWwiseGameObjectComponent*>(UWwiseGameObjectComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class WwiseAudio.WwiseAudioComponent
// (SceneComponent)

class UClass* UWwiseAudioComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WwiseAudioComponent");

	return Clss;
}


// WwiseAudioComponent WwiseAudio.Default__WwiseAudioComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UWwiseAudioComponent* UWwiseAudioComponent::GetDefaultObj()
{
	static class UWwiseAudioComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UWwiseAudioComponent*>(UWwiseAudioComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function WwiseAudio.WwiseAudioComponent.StopManagedLoop
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWwiseEvent*                 OptionalStopEvent                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWwiseAudioComponent::StopManagedLoop(class UWwiseEvent* OptionalStopEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseAudioComponent", "StopManagedLoop");

	Params::UWwiseAudioComponent_StopManagedLoop_Params Parms{};

	Parms.OptionalStopEvent = OptionalStopEvent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function WwiseAudio.WwiseAudioComponent.StopAll
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UWwiseAudioComponent::StopAll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseAudioComponent", "StopAll");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function WwiseAudio.WwiseAudioComponent.StartManagedLoop
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWwiseEvent*                 NewLoopEvent                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWwiseAudioComponent::StartManagedLoop(class UWwiseEvent* NewLoopEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseAudioComponent", "StartManagedLoop");

	Params::UWwiseAudioComponent_StartManagedLoop_Params Parms{};

	Parms.NewLoopEvent = NewLoopEvent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function WwiseAudio.WwiseAudioComponent.SetSwitch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWwiseSwitch*                WwiseSwitch                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWwiseAudioComponent::SetSwitch(class UWwiseSwitch* WwiseSwitch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseAudioComponent", "SetSwitch");

	Params::UWwiseAudioComponent_SetSwitch_Params Parms{};

	Parms.WwiseSwitch = WwiseSwitch;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function WwiseAudio.WwiseAudioComponent.SetRTPCValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWwiseRtpc*                  GameParameter                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ValueChangeDuration                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EWwiseCurveInterpolationFadeCurve                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWwiseAudioComponent::SetRTPCValue(class UWwiseRtpc* GameParameter, float Value, float ValueChangeDuration, enum class EWwiseCurveInterpolation FadeCurve)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseAudioComponent", "SetRTPCValue");

	Params::UWwiseAudioComponent_SetRTPCValue_Params Parms{};

	Parms.GameParameter = GameParameter;
	Parms.Value = Value;
	Parms.ValueChangeDuration = ValueChangeDuration;
	Parms.FadeCurve = FadeCurve;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function WwiseAudio.WwiseAudioComponent.SetEmitterLocations
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FWwiseLocationOverride>NewLocations                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// enum class EWwiseMultiPositionType MultiPositionType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bLocationsAreRelative                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWwiseAudioComponent::SetEmitterLocations(TArray<struct FWwiseLocationOverride>& NewLocations, enum class EWwiseMultiPositionType MultiPositionType, bool bLocationsAreRelative)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseAudioComponent", "SetEmitterLocations");

	Params::UWwiseAudioComponent_SetEmitterLocations_Params Parms{};

	Parms.NewLocations = NewLocations;
	Parms.MultiPositionType = MultiPositionType;
	Parms.bLocationsAreRelative = bLocationsAreRelative;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function WwiseAudio.WwiseAudioComponent.ScaleToRadius
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Radius                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWwiseAudioComponent::ScaleToRadius(float Radius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseAudioComponent", "ScaleToRadius");

	Params::UWwiseAudioComponent_ScaleToRadius_Params Parms{};

	Parms.Radius = Radius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function WwiseAudio.WwiseAudioComponent.ScaleAttenuation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              ScalingFactor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWwiseAudioComponent::ScaleAttenuation(float ScalingFactor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseAudioComponent", "ScaleAttenuation");

	Params::UWwiseAudioComponent_ScaleAttenuation_Params Parms{};

	Parms.ScalingFactor = ScalingFactor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function WwiseAudio.WwiseAudioComponent.RegisterRtpcValueCallback
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class UWwiseRtpc*>          CallbackRtpcs                                                    (Parm, ZeroConstructor, NativeAccessSpecifierPublic)

void UWwiseAudioComponent::RegisterRtpcValueCallback(const TArray<class UWwiseRtpc*>& CallbackRtpcs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseAudioComponent", "RegisterRtpcValueCallback");

	Params::UWwiseAudioComponent_RegisterRtpcValueCallback_Params Parms{};

	Parms.CallbackRtpcs = CallbackRtpcs;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function WwiseAudio.WwiseAudioComponent.PostWwiseEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWwiseEvent*                 WwiseEvent                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Flags                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FWwisePlaybackInstance      ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FWwisePlaybackInstance UWwiseAudioComponent::PostWwiseEvent(class UWwiseEvent* WwiseEvent, int32 Flags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseAudioComponent", "PostWwiseEvent");

	Params::UWwiseAudioComponent_PostWwiseEvent_Params Parms{};

	Parms.WwiseEvent = WwiseEvent;
	Parms.Flags = Flags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function WwiseAudio.WwiseAudioComponent.PostTrigger
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWwiseTrigger*               Trigger                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWwiseAudioComponent::PostTrigger(class UWwiseTrigger* Trigger)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseAudioComponent", "PostTrigger");

	Params::UWwiseAudioComponent_PostTrigger_Params Parms{};

	Parms.Trigger = Trigger;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function WwiseAudio.WwiseAudioComponent.MakeMidiNote
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NoteNum                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Velocity                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Channel                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              StartTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWwiseEvent*                 AssociatedEvent                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWwiseAudioComponent::MakeMidiNote(int32 NoteNum, int32 Velocity, int32 Channel, float Duration, float StartTime, class UWwiseEvent* AssociatedEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseAudioComponent", "MakeMidiNote");

	Params::UWwiseAudioComponent_MakeMidiNote_Params Parms{};

	Parms.NoteNum = NoteNum;
	Parms.Velocity = Velocity;
	Parms.Channel = Channel;
	Parms.Duration = Duration;
	Parms.StartTime = StartTime;
	Parms.AssociatedEvent = AssociatedEvent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function WwiseAudio.WwiseAudioComponent.Jettison
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UWwiseAudioComponent::Jettison()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseAudioComponent", "Jettison");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function WwiseAudio.WwiseAudioComponent.IsPossiblyAudible
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWwiseEvent*                 WwiseEvent                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              EventAttenuationScale                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWwiseAudioComponent::IsPossiblyAudible(class UWwiseEvent* WwiseEvent, float EventAttenuationScale)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseAudioComponent", "IsPossiblyAudible");

	Params::UWwiseAudioComponent_IsPossiblyAudible_Params Parms{};

	Parms.WwiseEvent = WwiseEvent;
	Parms.EventAttenuationScale = EventAttenuationScale;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function WwiseAudio.WwiseAudioComponent.IsPlaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWwiseAudioComponent::IsPlaying()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseAudioComponent", "IsPlaying");

	Params::UWwiseAudioComponent_IsPlaying_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function WwiseAudio.WwiseAudioComponent.GetRtpcValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWwiseRtpc*                  RTPC                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UWwiseAudioComponent::GetRtpcValue(class UWwiseRtpc* RTPC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseAudioComponent", "GetRtpcValue");

	Params::UWwiseAudioComponent_GetRtpcValue_Params Parms{};

	Parms.RTPC = RTPC;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function WwiseAudio.WwiseAudioComponent.GetRadius
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UWwiseAudioComponent::GetRadius()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseAudioComponent", "GetRadius");

	Params::UWwiseAudioComponent_GetRadius_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function WwiseAudio.WwiseAudioComponent.GetPlayingInstances
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FWwisePlaybackInstance>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FWwisePlaybackInstance> UWwiseAudioComponent::GetPlayingInstances()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseAudioComponent", "GetPlayingInstances");

	Params::UWwiseAudioComponent_GetPlayingInstances_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function WwiseAudio.WwiseAudioComponent.GetMaxAttenuationRadius
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UWwiseAudioComponent::GetMaxAttenuationRadius()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseAudioComponent", "GetMaxAttenuationRadius");

	Params::UWwiseAudioComponent_GetMaxAttenuationRadius_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class WwiseAudio.WwiseWorldComponentPool
// (None)

class UClass* UWwiseWorldComponentPool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WwiseWorldComponentPool");

	return Clss;
}


// WwiseWorldComponentPool WwiseAudio.Default__WwiseWorldComponentPool
// (Public, ClassDefaultObject, ArchetypeObject)

class UWwiseWorldComponentPool* UWwiseWorldComponentPool::GetDefaultObj()
{
	static class UWwiseWorldComponentPool* Default = nullptr;

	if (!Default)
		Default = static_cast<UWwiseWorldComponentPool*>(UWwiseWorldComponentPool::StaticClass()->DefaultObject);

	return Default;
}


// Class WwiseAudio.WwiseAudioComponentPool
// (None)

class UClass* UWwiseAudioComponentPool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WwiseAudioComponentPool");

	return Clss;
}


// WwiseAudioComponentPool WwiseAudio.Default__WwiseAudioComponentPool
// (Public, ClassDefaultObject, ArchetypeObject)

class UWwiseAudioComponentPool* UWwiseAudioComponentPool::GetDefaultObj()
{
	static class UWwiseAudioComponentPool* Default = nullptr;

	if (!Default)
		Default = static_cast<UWwiseAudioComponentPool*>(UWwiseAudioComponentPool::StaticClass()->DefaultObject);

	return Default;
}


// Function WwiseAudio.WwiseAudioComponentPool.GetPooledComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWwiseAudioComponent*        ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWwiseAudioComponent* UWwiseAudioComponentPool::GetPooledComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseAudioComponentPool", "GetPooledComponent");

	Params::UWwiseAudioComponentPool_GetPooledComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class WwiseAudio.WwiseObject
// (None)

class UClass* UWwiseObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WwiseObject");

	return Clss;
}


// WwiseObject WwiseAudio.Default__WwiseObject
// (Public, ClassDefaultObject, ArchetypeObject)

class UWwiseObject* UWwiseObject::GetDefaultObj()
{
	static class UWwiseObject* Default = nullptr;

	if (!Default)
		Default = static_cast<UWwiseObject*>(UWwiseObject::StaticClass()->DefaultObject);

	return Default;
}


// Class WwiseAudio.WwiseEvent
// (None)

class UClass* UWwiseEvent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WwiseEvent");

	return Clss;
}


// WwiseEvent WwiseAudio.Default__WwiseEvent
// (Public, ClassDefaultObject, ArchetypeObject)

class UWwiseEvent* UWwiseEvent::GetDefaultObj()
{
	static class UWwiseEvent* Default = nullptr;

	if (!Default)
		Default = static_cast<UWwiseEvent*>(UWwiseEvent::StaticClass()->DefaultObject);

	return Default;
}


// Function WwiseAudio.WwiseEvent.GetMaxDuration
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UWwiseEvent::GetMaxDuration()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseEvent", "GetMaxDuration");

	Params::UWwiseEvent_GetMaxDuration_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class WwiseAudio.WwiseAudioInputEvent
// (None)

class UClass* UWwiseAudioInputEvent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WwiseAudioInputEvent");

	return Clss;
}


// WwiseAudioInputEvent WwiseAudio.Default__WwiseAudioInputEvent
// (Public, ClassDefaultObject, ArchetypeObject)

class UWwiseAudioInputEvent* UWwiseAudioInputEvent::GetDefaultObj()
{
	static class UWwiseAudioInputEvent* Default = nullptr;

	if (!Default)
		Default = static_cast<UWwiseAudioInputEvent*>(UWwiseAudioInputEvent::StaticClass()->DefaultObject);

	return Default;
}


// Class WwiseAudio.WwiseAuxBus
// (None)

class UClass* UWwiseAuxBus::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WwiseAuxBus");

	return Clss;
}


// WwiseAuxBus WwiseAudio.Default__WwiseAuxBus
// (Public, ClassDefaultObject, ArchetypeObject)

class UWwiseAuxBus* UWwiseAuxBus::GetDefaultObj()
{
	static class UWwiseAuxBus* Default = nullptr;

	if (!Default)
		Default = static_cast<UWwiseAuxBus*>(UWwiseAuxBus::StaticClass()->DefaultObject);

	return Default;
}


// Class WwiseAudio.WwiseBank
// (None)

class UClass* UWwiseBank::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WwiseBank");

	return Clss;
}


// WwiseBank WwiseAudio.Default__WwiseBank
// (Public, ClassDefaultObject, ArchetypeObject)

class UWwiseBank* UWwiseBank::GetDefaultObj()
{
	static class UWwiseBank* Default = nullptr;

	if (!Default)
		Default = static_cast<UWwiseBank*>(UWwiseBank::StaticClass()->DefaultObject);

	return Default;
}


// Class WwiseAudio.WwiseAudioEffect
// (None)

class UClass* UWwiseAudioEffect::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WwiseAudioEffect");

	return Clss;
}


// WwiseAudioEffect WwiseAudio.Default__WwiseAudioEffect
// (Public, ClassDefaultObject, ArchetypeObject)

class UWwiseAudioEffect* UWwiseAudioEffect::GetDefaultObj()
{
	static class UWwiseAudioEffect* Default = nullptr;

	if (!Default)
		Default = static_cast<UWwiseAudioEffect*>(UWwiseAudioEffect::StaticClass()->DefaultObject);

	return Default;
}


// Function WwiseAudio.WwiseAudioEffect.DeactivateEffect
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UWwiseAudioEffect::DeactivateEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseAudioEffect", "DeactivateEffect");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function WwiseAudio.WwiseAudioEffect.ActivateEffect
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UWwiseAudioEffect::ActivateEffect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseAudioEffect", "ActivateEffect");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class WwiseAudio.WwiseListenerEnvironmentalEffect
// (None)

class UClass* UWwiseListenerEnvironmentalEffect::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WwiseListenerEnvironmentalEffect");

	return Clss;
}


// WwiseListenerEnvironmentalEffect WwiseAudio.Default__WwiseListenerEnvironmentalEffect
// (Public, ClassDefaultObject, ArchetypeObject)

class UWwiseListenerEnvironmentalEffect* UWwiseListenerEnvironmentalEffect::GetDefaultObj()
{
	static class UWwiseListenerEnvironmentalEffect* Default = nullptr;

	if (!Default)
		Default = static_cast<UWwiseListenerEnvironmentalEffect*>(UWwiseListenerEnvironmentalEffect::StaticClass()->DefaultObject);

	return Default;
}


// Class WwiseAudio.WwiseZoneAudioEffect
// (None)

class UClass* UWwiseZoneAudioEffect::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WwiseZoneAudioEffect");

	return Clss;
}


// WwiseZoneAudioEffect WwiseAudio.Default__WwiseZoneAudioEffect
// (Public, ClassDefaultObject, ArchetypeObject)

class UWwiseZoneAudioEffect* UWwiseZoneAudioEffect::GetDefaultObj()
{
	static class UWwiseZoneAudioEffect* Default = nullptr;

	if (!Default)
		Default = static_cast<UWwiseZoneAudioEffect*>(UWwiseZoneAudioEffect::StaticClass()->DefaultObject);

	return Default;
}


// Class WwiseAudio.WwiseEffectProviderInterface
// (None)

class UClass* IWwiseEffectProviderInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WwiseEffectProviderInterface");

	return Clss;
}


// WwiseEffectProviderInterface WwiseAudio.Default__WwiseEffectProviderInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IWwiseEffectProviderInterface* IWwiseEffectProviderInterface::GetDefaultObj()
{
	static class IWwiseEffectProviderInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IWwiseEffectProviderInterface*>(IWwiseEffectProviderInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class WwiseAudio.WwiseEnvironmentalEffectProvider
// (None)

class UClass* IWwiseEnvironmentalEffectProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WwiseEnvironmentalEffectProvider");

	return Clss;
}


// WwiseEnvironmentalEffectProvider WwiseAudio.Default__WwiseEnvironmentalEffectProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class IWwiseEnvironmentalEffectProvider* IWwiseEnvironmentalEffectProvider::GetDefaultObj()
{
	static class IWwiseEnvironmentalEffectProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<IWwiseEnvironmentalEffectProvider*>(IWwiseEnvironmentalEffectProvider::StaticClass()->DefaultObject);

	return Default;
}


// Class WwiseAudio.WwiseExternalSourcesEditorData
// (None)

class UClass* UWwiseExternalSourcesEditorData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WwiseExternalSourcesEditorData");

	return Clss;
}


// WwiseExternalSourcesEditorData WwiseAudio.Default__WwiseExternalSourcesEditorData
// (Public, ClassDefaultObject, ArchetypeObject)

class UWwiseExternalSourcesEditorData* UWwiseExternalSourcesEditorData::GetDefaultObj()
{
	static class UWwiseExternalSourcesEditorData* Default = nullptr;

	if (!Default)
		Default = static_cast<UWwiseExternalSourcesEditorData*>(UWwiseExternalSourcesEditorData::StaticClass()->DefaultObject);

	return Default;
}


// Class WwiseAudio.WwiseExternalSourceDebugData
// (None)

class UClass* UWwiseExternalSourceDebugData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WwiseExternalSourceDebugData");

	return Clss;
}


// WwiseExternalSourceDebugData WwiseAudio.Default__WwiseExternalSourceDebugData
// (Public, ClassDefaultObject, ArchetypeObject)

class UWwiseExternalSourceDebugData* UWwiseExternalSourceDebugData::GetDefaultObj()
{
	static class UWwiseExternalSourceDebugData* Default = nullptr;

	if (!Default)
		Default = static_cast<UWwiseExternalSourceDebugData*>(UWwiseExternalSourceDebugData::StaticClass()->DefaultObject);

	return Default;
}


// Class WwiseAudio.WwiseGameplayStatics
// (None)

class UClass* UWwiseGameplayStatics::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WwiseGameplayStatics");

	return Clss;
}


// WwiseGameplayStatics WwiseAudio.Default__WwiseGameplayStatics
// (Public, ClassDefaultObject, ArchetypeObject)

class UWwiseGameplayStatics* UWwiseGameplayStatics::GetDefaultObj()
{
	static class UWwiseGameplayStatics* Default = nullptr;

	if (!Default)
		Default = static_cast<UWwiseGameplayStatics*>(UWwiseGameplayStatics::StaticClass()->DefaultObject);

	return Default;
}


// Function WwiseAudio.WwiseGameplayStatics.WaitForAudioPlayback
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FWwisePlaybackInstance      PlaybackInstance                                                 (Parm, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UWwiseGameplayStatics::WaitForAudioPlayback(const struct FWwisePlaybackInstance& PlaybackInstance, const struct FLatentActionInfo& LatentInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseGameplayStatics", "WaitForAudioPlayback");

	Params::UWwiseGameplayStatics_WaitForAudioPlayback_Params Parms{};

	Parms.PlaybackInstance = PlaybackInstance;
	Parms.LatentInfo = LatentInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function WwiseAudio.WwiseGameplayStatics.WaitForAudioInputConnection
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWwiseAudioInputEvent*       AudioInputEvent                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// float                              MaxWaitTime                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWwiseGameplayStatics::WaitForAudioInputConnection(class UObject* WorldContextObject, class UWwiseAudioInputEvent* AudioInputEvent, const struct FLatentActionInfo& LatentInfo, float MaxWaitTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseGameplayStatics", "WaitForAudioInputConnection");

	Params::UWwiseGameplayStatics_WaitForAudioInputConnection_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.AudioInputEvent = AudioInputEvent;
	Parms.LatentInfo = LatentInfo;
	Parms.MaxWaitTime = MaxWaitTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function WwiseAudio.WwiseGameplayStatics.UnloadBank
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWwiseBank*                  bank                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWwiseGameplayStatics::UnloadBank(class UWwiseBank* bank)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseGameplayStatics", "UnloadBank");

	Params::UWwiseGameplayStatics_UnloadBank_Params Parms{};

	Parms.bank = bank;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function WwiseAudio.WwiseGameplayStatics.StopProfilerCapture
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UWwiseGameplayStatics::StopProfilerCapture()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseGameplayStatics", "StopProfilerCapture");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function WwiseAudio.WwiseGameplayStatics.StopOutputCapture
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void UWwiseGameplayStatics::StopOutputCapture()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseGameplayStatics", "StopOutputCapture");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function WwiseAudio.WwiseGameplayStatics.StopAudio
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FWwisePlaybackInstance      PlaybackInstance                                                 (Parm, NativeAccessSpecifierPublic)
// float                              TransitionDuration                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EWwiseCurveInterpolationFadeCurve                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWwiseGameplayStatics::StopAudio(const struct FWwisePlaybackInstance& PlaybackInstance, float TransitionDuration, enum class EWwiseCurveInterpolation FadeCurve)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseGameplayStatics", "StopAudio");

	Params::UWwiseGameplayStatics_StopAudio_Params Parms{};

	Parms.PlaybackInstance = PlaybackInstance;
	Parms.TransitionDuration = TransitionDuration;
	Parms.FadeCurve = FadeCurve;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function WwiseAudio.WwiseGameplayStatics.StartProfilerCapture
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Filename                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWwiseGameplayStatics::StartProfilerCapture(const class FString& Filename)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseGameplayStatics", "StartProfilerCapture");

	Params::UWwiseGameplayStatics_StartProfilerCapture_Params Parms{};

	Parms.Filename = Filename;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function WwiseAudio.WwiseGameplayStatics.StartOutputCapture
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Filename                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWwiseGameplayStatics::StartOutputCapture(const class FString& Filename)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseGameplayStatics", "StartOutputCapture");

	Params::UWwiseGameplayStatics_StartOutputCapture_Params Parms{};

	Parms.Filename = Filename;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function WwiseAudio.WwiseGameplayStatics.SpawnWwiseComponentAtLocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              EmitterRadius                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Orientation                                                      (Parm, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
// bool                               IsTemporaryComponent                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWwiseAudioComponent*        ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWwiseAudioComponent* UWwiseGameplayStatics::SpawnWwiseComponentAtLocation(class UObject* WorldContextObject, const struct FVector& Location, float EmitterRadius, const struct FRotator& Orientation, bool IsTemporaryComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseGameplayStatics", "SpawnWwiseComponentAtLocation");

	Params::UWwiseGameplayStatics_SpawnWwiseComponentAtLocation_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Location = Location;
	Parms.EmitterRadius = EmitterRadius;
	Parms.Orientation = Orientation;
	Parms.IsTemporaryComponent = IsTemporaryComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function WwiseAudio.WwiseGameplayStatics.SpawnAttachedWwiseComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SocketName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsTemporaryComponent                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USceneComponent*             AttachmentComponent                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWwiseAudioComponent*        ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWwiseAudioComponent* UWwiseGameplayStatics::SpawnAttachedWwiseComponent(class AActor* Actor, class FName SocketName, bool IsTemporaryComponent, class USceneComponent* AttachmentComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseGameplayStatics", "SpawnAttachedWwiseComponent");

	Params::UWwiseGameplayStatics_SpawnAttachedWwiseComponent_Params Parms{};

	Parms.Actor = Actor;
	Parms.SocketName = SocketName;
	Parms.IsTemporaryComponent = IsTemporaryComponent;
	Parms.AttachmentComponent = AttachmentComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function WwiseAudio.WwiseGameplayStatics.SetGlobalState
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWwiseState*                 State                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWwiseGameplayStatics::SetGlobalState(class UWwiseState* State)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseGameplayStatics", "SetGlobalState");

	Params::UWwiseGameplayStatics_SetGlobalState_Params Parms{};

	Parms.State = State;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function WwiseAudio.WwiseGameplayStatics.SetGlobalRTPCValue
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWwiseRtpc*                  GameParameter                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TransitionDuration                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EWwiseCurveInterpolationFadeCurve                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWwiseGameplayStatics::SetGlobalRTPCValue(class UWwiseRtpc* GameParameter, float Value, float TransitionDuration, enum class EWwiseCurveInterpolation FadeCurve)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseGameplayStatics", "SetGlobalRTPCValue");

	Params::UWwiseGameplayStatics_SetGlobalRTPCValue_Params Parms{};

	Parms.GameParameter = GameParameter;
	Parms.Value = Value;
	Parms.TransitionDuration = TransitionDuration;
	Parms.FadeCurve = FadeCurve;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function WwiseAudio.WwiseGameplayStatics.SetAudioPlaybackPosition
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FWwisePlaybackInstance      PlaybackInstance                                                 (Parm, NativeAccessSpecifierPublic)
// float                              PlaybackPosition                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWwiseGameplayStatics::SetAudioPlaybackPosition(const struct FWwisePlaybackInstance& PlaybackInstance, float PlaybackPosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseGameplayStatics", "SetAudioPlaybackPosition");

	Params::UWwiseGameplayStatics_SetAudioPlaybackPosition_Params Parms{};

	Parms.PlaybackInstance = PlaybackInstance;
	Parms.PlaybackPosition = PlaybackPosition;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function WwiseAudio.WwiseGameplayStatics.ResumeAudio
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FWwisePlaybackInstance      PlaybackInstance                                                 (Parm, NativeAccessSpecifierPublic)
// float                              TransitionDuration                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EWwiseCurveInterpolationFadeCurve                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWwiseGameplayStatics::ResumeAudio(const struct FWwisePlaybackInstance& PlaybackInstance, float TransitionDuration, enum class EWwiseCurveInterpolation FadeCurve)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseGameplayStatics", "ResumeAudio");

	Params::UWwiseGameplayStatics_ResumeAudio_Params Parms{};

	Parms.PlaybackInstance = PlaybackInstance;
	Parms.TransitionDuration = TransitionDuration;
	Parms.FadeCurve = FadeCurve;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function WwiseAudio.WwiseGameplayStatics.PostEventAtMultipleLocations
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWwiseEvent*                 WwiseEvent                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FWwiseLocationOverride>NewLocations                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// enum class EWwiseMultiPositionType MultiPositionType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FWwisePlaybackInstance      ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FWwisePlaybackInstance UWwiseGameplayStatics::PostEventAtMultipleLocations(class UObject* WorldContextObject, class UWwiseEvent* WwiseEvent, TArray<struct FWwiseLocationOverride>& NewLocations, enum class EWwiseMultiPositionType MultiPositionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseGameplayStatics", "PostEventAtMultipleLocations");

	Params::UWwiseGameplayStatics_PostEventAtMultipleLocations_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.WwiseEvent = WwiseEvent;
	Parms.NewLocations = NewLocations;
	Parms.MultiPositionType = MultiPositionType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function WwiseAudio.WwiseGameplayStatics.PostEventAtLocation
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWwiseEvent*                 WwiseEvent                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              EmitterRadius                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Orientation                                                      (Parm, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
// struct FWwisePlaybackInstance      ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FWwisePlaybackInstance UWwiseGameplayStatics::PostEventAtLocation(class UObject* WorldContextObject, class UWwiseEvent* WwiseEvent, const struct FVector& Location, float EmitterRadius, const struct FRotator& Orientation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseGameplayStatics", "PostEventAtLocation");

	Params::UWwiseGameplayStatics_PostEventAtLocation_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.WwiseEvent = WwiseEvent;
	Parms.Location = Location;
	Parms.EmitterRadius = EmitterRadius;
	Parms.Orientation = Orientation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function WwiseAudio.WwiseGameplayStatics.PostAttachedEvent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWwiseEvent*                 WwiseEvent                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      AttachToActor                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USceneComponent*             AttachToComponent                                                (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        SocketName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              EmitterRadius                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FWwisePlaybackInstance      ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FWwisePlaybackInstance UWwiseGameplayStatics::PostAttachedEvent(class UWwiseEvent* WwiseEvent, class AActor* AttachToActor, class USceneComponent* AttachToComponent, class FName SocketName, float EmitterRadius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseGameplayStatics", "PostAttachedEvent");

	Params::UWwiseGameplayStatics_PostAttachedEvent_Params Parms{};

	Parms.WwiseEvent = WwiseEvent;
	Parms.AttachToActor = AttachToActor;
	Parms.AttachToComponent = AttachToComponent;
	Parms.SocketName = SocketName;
	Parms.EmitterRadius = EmitterRadius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function WwiseAudio.WwiseGameplayStatics.PauseAudio
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FWwisePlaybackInstance      PlaybackInstance                                                 (Parm, NativeAccessSpecifierPublic)
// float                              TransitionDuration                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EWwiseCurveInterpolationFadeCurve                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWwiseGameplayStatics::PauseAudio(const struct FWwisePlaybackInstance& PlaybackInstance, float TransitionDuration, enum class EWwiseCurveInterpolation FadeCurve)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseGameplayStatics", "PauseAudio");

	Params::UWwiseGameplayStatics_PauseAudio_Params Parms{};

	Parms.PlaybackInstance = PlaybackInstance;
	Parms.TransitionDuration = TransitionDuration;
	Parms.FadeCurve = FadeCurve;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function WwiseAudio.WwiseGameplayStatics.LoadBank
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWwiseBank*                  bank                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWwiseGameplayStatics::LoadBank(class UWwiseBank* bank)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseGameplayStatics", "LoadBank");

	Params::UWwiseGameplayStatics_LoadBank_Params Parms{};

	Parms.bank = bank;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function WwiseAudio.WwiseGameplayStatics.IsPossiblyAudible
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWwiseEvent*                 InWwiseEvent                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              AttenuationScale                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              EmitterRadius                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWwiseGameplayStatics::IsPossiblyAudible(class UObject* WorldContextObject, class UWwiseEvent* InWwiseEvent, const struct FVector& Location, float AttenuationScale, float EmitterRadius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseGameplayStatics", "IsPossiblyAudible");

	Params::UWwiseGameplayStatics_IsPossiblyAudible_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.InWwiseEvent = InWwiseEvent;
	Parms.Location = Location;
	Parms.AttenuationScale = AttenuationScale;
	Parms.EmitterRadius = EmitterRadius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function WwiseAudio.WwiseGameplayStatics.IsAudioPlaying
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FWwisePlaybackInstance      PlaybackInstance                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWwiseGameplayStatics::IsAudioPlaying(struct FWwisePlaybackInstance& PlaybackInstance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseGameplayStatics", "IsAudioPlaying");

	Params::UWwiseGameplayStatics_IsAudioPlaying_Params Parms{};

	Parms.PlaybackInstance = PlaybackInstance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function WwiseAudio.WwiseGameplayStatics.IsAudioPaused
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FWwisePlaybackInstance      PlaybackInstance                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UWwiseGameplayStatics::IsAudioPaused(struct FWwisePlaybackInstance& PlaybackInstance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseGameplayStatics", "IsAudioPaused");

	Params::UWwiseGameplayStatics_IsAudioPaused_Params Parms{};

	Parms.PlaybackInstance = PlaybackInstance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function WwiseAudio.WwiseGameplayStatics.GetWwiseBankEfficiencyReport
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FWwiseBankEfficiencyReportDatum>ReportData                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UWwiseGameplayStatics::GetWwiseBankEfficiencyReport(TArray<struct FWwiseBankEfficiencyReportDatum>* ReportData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseGameplayStatics", "GetWwiseBankEfficiencyReport");

	Params::UWwiseGameplayStatics_GetWwiseBankEfficiencyReport_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReportData != nullptr)
		*ReportData = std::move(Parms.ReportData);

}


// Function WwiseAudio.WwiseGameplayStatics.GetPlayingEvent
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FWwisePlaybackInstance      PlaybackInstance                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UWwiseEvent*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWwiseEvent* UWwiseGameplayStatics::GetPlayingEvent(struct FWwisePlaybackInstance& PlaybackInstance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseGameplayStatics", "GetPlayingEvent");

	Params::UWwiseGameplayStatics_GetPlayingEvent_Params Parms{};

	Parms.PlaybackInstance = PlaybackInstance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function WwiseAudio.WwiseGameplayStatics.GetEstimatedAudioDuration
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FWwisePlaybackInstance      PlaybackInstance                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UWwiseGameplayStatics::GetEstimatedAudioDuration(struct FWwisePlaybackInstance& PlaybackInstance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseGameplayStatics", "GetEstimatedAudioDuration");

	Params::UWwiseGameplayStatics_GetEstimatedAudioDuration_Params Parms{};

	Parms.PlaybackInstance = PlaybackInstance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function WwiseAudio.WwiseGameplayStatics.GetDefaultWwiseComponent
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class AActor*                      Actor                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCreateIfNotFound                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWwiseAudioComponent*        ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWwiseAudioComponent* UWwiseGameplayStatics::GetDefaultWwiseComponent(class AActor* Actor, bool bCreateIfNotFound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseGameplayStatics", "GetDefaultWwiseComponent");

	Params::UWwiseGameplayStatics_GetDefaultWwiseComponent_Params Parms{};

	Parms.Actor = Actor;
	Parms.bCreateIfNotFound = bCreateIfNotFound;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function WwiseAudio.WwiseGameplayStatics.GetClosestListenerLocation
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     TestPosition                                                     (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ClosestLocation                                                  (Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSuccess                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWwiseGameplayStatics::GetClosestListenerLocation(class UObject* WorldContextObject, const struct FVector& TestPosition, struct FVector* ClosestLocation, bool* bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseGameplayStatics", "GetClosestListenerLocation");

	Params::UWwiseGameplayStatics_GetClosestListenerLocation_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.TestPosition = TestPosition;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ClosestLocation != nullptr)
		*ClosestLocation = std::move(Parms.ClosestLocation);

	if (bSuccess != nullptr)
		*bSuccess = Parms.bSuccess;

}


// Function WwiseAudio.WwiseGameplayStatics.GetAudioPlaybackPosition
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FWwisePlaybackInstance      PlaybackInstance                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bExtrapolateSubFrameTime                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UWwiseGameplayStatics::GetAudioPlaybackPosition(struct FWwisePlaybackInstance& PlaybackInstance, bool bExtrapolateSubFrameTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseGameplayStatics", "GetAudioPlaybackPosition");

	Params::UWwiseGameplayStatics_GetAudioPlaybackPosition_Params Parms{};

	Parms.PlaybackInstance = PlaybackInstance;
	Parms.bExtrapolateSubFrameTime = bExtrapolateSubFrameTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function WwiseAudio.WwiseGameplayStatics.GetAudioComponentFromPlaybackInstance
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FWwisePlaybackInstance      PlaybackInstance                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bCreateIfNotFound                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWwiseAudioComponent*        ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWwiseAudioComponent* UWwiseGameplayStatics::GetAudioComponentFromPlaybackInstance(struct FWwisePlaybackInstance& PlaybackInstance, bool bCreateIfNotFound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseGameplayStatics", "GetAudioComponentFromPlaybackInstance");

	Params::UWwiseGameplayStatics_GetAudioComponentFromPlaybackInstance_Params Parms{};

	Parms.PlaybackInstance = PlaybackInstance;
	Parms.bCreateIfNotFound = bCreateIfNotFound;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function WwiseAudio.WwiseGameplayStatics.ExecuteActionOnAudioInstance
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FWwisePlaybackInstance      PlaybackInstance                                                 (Parm, NativeAccessSpecifierPublic)
// enum class EWwiseEventAction       Action                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TransitionDuration                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EWwiseCurveInterpolationFadeCurve                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWwiseGameplayStatics::ExecuteActionOnAudioInstance(const struct FWwisePlaybackInstance& PlaybackInstance, enum class EWwiseEventAction Action, float TransitionDuration, enum class EWwiseCurveInterpolation FadeCurve)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseGameplayStatics", "ExecuteActionOnAudioInstance");

	Params::UWwiseGameplayStatics_ExecuteActionOnAudioInstance_Params Parms{};

	Parms.PlaybackInstance = PlaybackInstance;
	Parms.Action = Action;
	Parms.TransitionDuration = TransitionDuration;
	Parms.FadeCurve = FadeCurve;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function WwiseAudio.WwiseGameplayStatics.CreateZoneAudioEffect
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWwiseAuxBus*                AuxBus                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     EffectLocation                                                   (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              EffectSize                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              EffectAttenuationDistance                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWwiseZoneAudioEffect*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWwiseZoneAudioEffect* UWwiseGameplayStatics::CreateZoneAudioEffect(class UObject* WorldContextObject, class UWwiseAuxBus* AuxBus, const struct FVector& EffectLocation, float EffectSize, float EffectAttenuationDistance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseGameplayStatics", "CreateZoneAudioEffect");

	Params::UWwiseGameplayStatics_CreateZoneAudioEffect_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.AuxBus = AuxBus;
	Parms.EffectLocation = EffectLocation;
	Parms.EffectSize = EffectSize;
	Parms.EffectAttenuationDistance = EffectAttenuationDistance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function WwiseAudio.WwiseGameplayStatics.CreateListenerAudioEffect
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWwiseAuxBus*                AuxBus                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      TargetActor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              WetAmount                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWwiseListenerEnvironmentalEffect*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWwiseListenerEnvironmentalEffect* UWwiseGameplayStatics::CreateListenerAudioEffect(class UWwiseAuxBus* AuxBus, class AActor* TargetActor, float WetAmount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseGameplayStatics", "CreateListenerAudioEffect");

	Params::UWwiseGameplayStatics_CreateListenerAudioEffect_Params Parms{};

	Parms.AuxBus = AuxBus;
	Parms.TargetActor = TargetActor;
	Parms.WetAmount = WetAmount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function WwiseAudio.WwiseGameplayStatics.CreateAudioEffect
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UWwiseAuxBus*                AuxBus                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EWwiseEffectType        EffectType                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              WetAmount                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      TargetActor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWwiseAudioEffect*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWwiseAudioEffect* UWwiseGameplayStatics::CreateAudioEffect(class UWwiseAuxBus* AuxBus, enum class EWwiseEffectType EffectType, float WetAmount, class AActor* TargetActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseGameplayStatics", "CreateAudioEffect");

	Params::UWwiseGameplayStatics_CreateAudioEffect_Params Parms{};

	Parms.AuxBus = AuxBus;
	Parms.EffectType = EffectType;
	Parms.WetAmount = WetAmount;
	Parms.TargetActor = TargetActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function WwiseAudio.WwiseGameplayStatics.ConvertLocationsToWwiseLocationOverrides
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// TArray<struct FVector>             Locations                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FRotator                    Orientation                                                      (Parm, IsPlainOldData, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
// float                              Gain                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Radius                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FWwiseLocationOverride>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FWwiseLocationOverride> UWwiseGameplayStatics::ConvertLocationsToWwiseLocationOverrides(TArray<struct FVector>& Locations, const struct FRotator& Orientation, float Gain, float Radius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseGameplayStatics", "ConvertLocationsToWwiseLocationOverrides");

	Params::UWwiseGameplayStatics_ConvertLocationsToWwiseLocationOverrides_Params Parms{};

	Parms.Locations = Locations;
	Parms.Orientation = Orientation;
	Parms.Gain = Gain;
	Parms.Radius = Radius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function WwiseAudio.WwiseGameplayStatics.AddOutputCaptureMarker
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      MarkerText                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWwiseGameplayStatics::AddOutputCaptureMarker(const class FString& MarkerText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseGameplayStatics", "AddOutputCaptureMarker");

	Params::UWwiseGameplayStatics_AddOutputCaptureMarker_Params Parms{};

	Parms.MarkerText = MarkerText;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class WwiseAudio.WwiseImplementerInterface
// (None)

class UClass* IWwiseImplementerInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WwiseImplementerInterface");

	return Clss;
}


// WwiseImplementerInterface WwiseAudio.Default__WwiseImplementerInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IWwiseImplementerInterface* IWwiseImplementerInterface::GetDefaultObj()
{
	static class IWwiseImplementerInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IWwiseImplementerInterface*>(IWwiseImplementerInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class WwiseAudio.WwiseListenerComponent
// (SceneComponent)

class UClass* UWwiseListenerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WwiseListenerComponent");

	return Clss;
}


// WwiseListenerComponent WwiseAudio.Default__WwiseListenerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UWwiseListenerComponent* UWwiseListenerComponent::GetDefaultObj()
{
	static class UWwiseListenerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UWwiseListenerComponent*>(UWwiseListenerComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function WwiseAudio.WwiseListenerComponent.SetBusRTPCValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWwiseRtpc*                  GameParameter                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ValueChangeDuration                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EWwiseCurveInterpolationFadeCurve                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWwiseListenerComponent::SetBusRTPCValue(class UWwiseRtpc* GameParameter, float Value, float ValueChangeDuration, enum class EWwiseCurveInterpolation FadeCurve)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseListenerComponent", "SetBusRTPCValue");

	Params::UWwiseListenerComponent_SetBusRTPCValue_Params Parms{};

	Parms.GameParameter = GameParameter;
	Parms.Value = Value;
	Parms.ValueChangeDuration = ValueChangeDuration;
	Parms.FadeCurve = FadeCurve;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function WwiseAudio.WwiseListenerComponent.FindAssociatedListener
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      TargetActor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWwiseListenerComponent*     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWwiseListenerComponent* UWwiseListenerComponent::FindAssociatedListener(class AActor* TargetActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseListenerComponent", "FindAssociatedListener");

	Params::UWwiseListenerComponent_FindAssociatedListener_Params Parms{};

	Parms.TargetActor = TargetActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function WwiseAudio.WwiseListenerComponent.ConfigureListener
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UWwiseEvent*                 WwiseEvent                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UWwiseListenerComponent::ConfigureListener(class UWwiseEvent* WwiseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WwiseListenerComponent", "ConfigureListener");

	Params::UWwiseListenerComponent_ConfigureListener_Params Parms{};

	Parms.WwiseEvent = WwiseEvent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class WwiseAudio.WwiseMediaAudioSinkProvider
// (None)

class UClass* UWwiseMediaAudioSinkProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WwiseMediaAudioSinkProvider");

	return Clss;
}


// WwiseMediaAudioSinkProvider WwiseAudio.Default__WwiseMediaAudioSinkProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class UWwiseMediaAudioSinkProvider* UWwiseMediaAudioSinkProvider::GetDefaultObj()
{
	static class UWwiseMediaAudioSinkProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<UWwiseMediaAudioSinkProvider*>(UWwiseMediaAudioSinkProvider::StaticClass()->DefaultObject);

	return Default;
}


// Class WwiseAudio.WwiseRtpc
// (None)

class UClass* UWwiseRtpc::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WwiseRtpc");

	return Clss;
}


// WwiseRtpc WwiseAudio.Default__WwiseRtpc
// (Public, ClassDefaultObject, ArchetypeObject)

class UWwiseRtpc* UWwiseRtpc::GetDefaultObj()
{
	static class UWwiseRtpc* Default = nullptr;

	if (!Default)
		Default = static_cast<UWwiseRtpc*>(UWwiseRtpc::StaticClass()->DefaultObject);

	return Default;
}


// Class WwiseAudio.WwiseSettings
// (None)

class UClass* UWwiseSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WwiseSettings");

	return Clss;
}


// WwiseSettings WwiseAudio.Default__WwiseSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UWwiseSettings* UWwiseSettings::GetDefaultObj()
{
	static class UWwiseSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UWwiseSettings*>(UWwiseSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class WwiseAudio.WwiseUserSettings
// (None)

class UClass* UWwiseUserSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WwiseUserSettings");

	return Clss;
}


// WwiseUserSettings WwiseAudio.Default__WwiseUserSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UWwiseUserSettings* UWwiseUserSettings::GetDefaultObj()
{
	static class UWwiseUserSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UWwiseUserSettings*>(UWwiseUserSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class WwiseAudio.WwiseState
// (None)

class UClass* UWwiseState::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WwiseState");

	return Clss;
}


// WwiseState WwiseAudio.Default__WwiseState
// (Public, ClassDefaultObject, ArchetypeObject)

class UWwiseState* UWwiseState::GetDefaultObj()
{
	static class UWwiseState* Default = nullptr;

	if (!Default)
		Default = static_cast<UWwiseState*>(UWwiseState::StaticClass()->DefaultObject);

	return Default;
}


// Class WwiseAudio.WwiseStateGroup
// (None)

class UClass* UWwiseStateGroup::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WwiseStateGroup");

	return Clss;
}


// WwiseStateGroup WwiseAudio.Default__WwiseStateGroup
// (Public, ClassDefaultObject, ArchetypeObject)

class UWwiseStateGroup* UWwiseStateGroup::GetDefaultObj()
{
	static class UWwiseStateGroup* Default = nullptr;

	if (!Default)
		Default = static_cast<UWwiseStateGroup*>(UWwiseStateGroup::StaticClass()->DefaultObject);

	return Default;
}


// Class WwiseAudio.WwiseSwitch
// (None)

class UClass* UWwiseSwitch::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WwiseSwitch");

	return Clss;
}


// WwiseSwitch WwiseAudio.Default__WwiseSwitch
// (Public, ClassDefaultObject, ArchetypeObject)

class UWwiseSwitch* UWwiseSwitch::GetDefaultObj()
{
	static class UWwiseSwitch* Default = nullptr;

	if (!Default)
		Default = static_cast<UWwiseSwitch*>(UWwiseSwitch::StaticClass()->DefaultObject);

	return Default;
}


// Class WwiseAudio.WwiseSwitchGroup
// (None)

class UClass* UWwiseSwitchGroup::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WwiseSwitchGroup");

	return Clss;
}


// WwiseSwitchGroup WwiseAudio.Default__WwiseSwitchGroup
// (Public, ClassDefaultObject, ArchetypeObject)

class UWwiseSwitchGroup* UWwiseSwitchGroup::GetDefaultObj()
{
	static class UWwiseSwitchGroup* Default = nullptr;

	if (!Default)
		Default = static_cast<UWwiseSwitchGroup*>(UWwiseSwitchGroup::StaticClass()->DefaultObject);

	return Default;
}


// Class WwiseAudio.WwiseTrigger
// (None)

class UClass* UWwiseTrigger::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WwiseTrigger");

	return Clss;
}


// WwiseTrigger WwiseAudio.Default__WwiseTrigger
// (Public, ClassDefaultObject, ArchetypeObject)

class UWwiseTrigger* UWwiseTrigger::GetDefaultObj()
{
	static class UWwiseTrigger* Default = nullptr;

	if (!Default)
		Default = static_cast<UWwiseTrigger*>(UWwiseTrigger::StaticClass()->DefaultObject);

	return Default;
}

}


