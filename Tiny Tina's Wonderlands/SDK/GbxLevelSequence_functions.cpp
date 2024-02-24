#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GbxLevelSequence.GbxLevelSequence
// (None)

class UClass* UGbxLevelSequence::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxLevelSequence");

	return Clss;
}


// GbxLevelSequence GbxLevelSequence.Default__GbxLevelSequence
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxLevelSequence* UGbxLevelSequence::GetDefaultObj()
{
	static class UGbxLevelSequence* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxLevelSequence*>(UGbxLevelSequence::StaticClass()->DefaultObject);

	return Default;
}


// Class GbxLevelSequence.GbxLevelSequenceActor
// (Actor)

class UClass* AGbxLevelSequenceActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxLevelSequenceActor");

	return Clss;
}


// GbxLevelSequenceActor GbxLevelSequence.Default__GbxLevelSequenceActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AGbxLevelSequenceActor* AGbxLevelSequenceActor::GetDefaultObj()
{
	static class AGbxLevelSequenceActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AGbxLevelSequenceActor*>(AGbxLevelSequenceActor::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxLevelSequence.GbxLevelSequenceActor.Stop
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AGbxLevelSequenceActor::Stop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxLevelSequenceActor", "Stop");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxLevelSequence.GbxLevelSequenceActor.SetPlayRate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              PlayRate                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AGbxLevelSequenceActor::SetPlayRate(float PlayRate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxLevelSequenceActor", "SetPlayRate");

	Params::AGbxLevelSequenceActor_SetPlayRate_Params Parms{};

	Parms.PlayRate = PlayRate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxLevelSequence.GbxLevelSequenceActor.PlayLooping
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NumLoops                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void AGbxLevelSequenceActor::PlayLooping(int32 NumLoops)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxLevelSequenceActor", "PlayLooping");

	Params::AGbxLevelSequenceActor_PlayLooping_Params Parms{};

	Parms.NumLoops = NumLoops;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxLevelSequence.GbxLevelSequenceActor.PlayFromStart
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AGbxLevelSequenceActor::PlayFromStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxLevelSequenceActor", "PlayFromStart");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxLevelSequence.GbxLevelSequenceActor.play
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AGbxLevelSequenceActor::Play()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxLevelSequenceActor", "play");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxLevelSequence.GbxLevelSequenceActor.Pause
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AGbxLevelSequenceActor::Pause()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxLevelSequenceActor", "Pause");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxLevelSequence.GbxLevelSequenceActor.OnRep_ReplicatedCutsceneSkip
// (Final, Native, Private)
// Parameters:

void AGbxLevelSequenceActor::OnRep_ReplicatedCutsceneSkip()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxLevelSequenceActor", "OnRep_ReplicatedCutsceneSkip");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxLevelSequence.GbxLevelSequenceActor.OnLevelSequenceStop
// (Final, Native, Public)
// Parameters:

void AGbxLevelSequenceActor::OnLevelSequenceStop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxLevelSequenceActor", "OnLevelSequenceStop");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxLevelSequence.GbxLevelSequenceActor.OnLevelSequencePlay
// (Final, Native, Public)
// Parameters:

void AGbxLevelSequenceActor::OnLevelSequencePlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxLevelSequenceActor", "OnLevelSequencePlay");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxLevelSequence.GbxLevelSequenceActor.OnLevelSequencePause
// (Final, Native, Public)
// Parameters:

void AGbxLevelSequenceActor::OnLevelSequencePause()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxLevelSequenceActor", "OnLevelSequencePause");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxLevelSequence.GbxLevelSequenceActor.OnLevelSequenceFinished
// (Final, Native, Public)
// Parameters:

void AGbxLevelSequenceActor::OnLevelSequenceFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxLevelSequenceActor", "OnLevelSequenceFinished");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxLevelSequence.GbxLevelSequenceActor.IsPlaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AGbxLevelSequenceActor::IsPlaying()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxLevelSequenceActor", "IsPlaying");

	Params::AGbxLevelSequenceActor_IsPlaying_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxLevelSequence.GbxLevelSequenceActor.IsPaused
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AGbxLevelSequenceActor::IsPaused()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxLevelSequenceActor", "IsPaused");

	Params::AGbxLevelSequenceActor_IsPaused_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxLevelSequence.GbxLevelSequenceActor.IsFinished
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AGbxLevelSequenceActor::IsFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxLevelSequenceActor", "IsFinished");

	Params::AGbxLevelSequenceActor_IsFinished_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxLevelSequence.GbxLevelSequenceActor.GoToEndAndStop
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void AGbxLevelSequenceActor::GoToEndAndStop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxLevelSequenceActor", "GoToEndAndStop");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxLevelSequence.GbxLevelSequenceActor.GetPlayRate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float AGbxLevelSequenceActor::GetPlayRate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxLevelSequenceActor", "GetPlayRate");

	Params::AGbxLevelSequenceActor_GetPlayRate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class GbxLevelSequence.GbxLevelSequencePlayer
// (None)

class UClass* UGbxLevelSequencePlayer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxLevelSequencePlayer");

	return Clss;
}


// GbxLevelSequencePlayer GbxLevelSequence.Default__GbxLevelSequencePlayer
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxLevelSequencePlayer* UGbxLevelSequencePlayer::GetDefaultObj()
{
	static class UGbxLevelSequencePlayer* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxLevelSequencePlayer*>(UGbxLevelSequencePlayer::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxLevelSequence.GbxLevelSequencePlayer.OnStarted
// (Final, Native, Public)
// Parameters:

void UGbxLevelSequencePlayer::OnStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxLevelSequencePlayer", "OnStarted");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function GbxLevelSequence.GbxLevelSequencePlayer.IsFinished
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGbxLevelSequencePlayer::IsFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxLevelSequencePlayer", "IsFinished");

	Params::UGbxLevelSequencePlayer_IsFinished_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxLevelSequence.GbxLevelSequencePlayer.CreateGbxLevelSequencePlayer
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULevelSequence*              LevelSequence                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bPlay                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMovieSceneSequencePlaybackSettingsSettings                                                         (Parm, NativeAccessSpecifierPublic)
// class AGbxLevelSequenceActor*      OutActor                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UGbxLevelSequencePlayer*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGbxLevelSequencePlayer* UGbxLevelSequencePlayer::CreateGbxLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* LevelSequence, bool bPlay, const struct FMovieSceneSequencePlaybackSettings& Settings, class AGbxLevelSequenceActor** OutActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxLevelSequencePlayer", "CreateGbxLevelSequencePlayer");

	Params::UGbxLevelSequencePlayer_CreateGbxLevelSequencePlayer_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.LevelSequence = LevelSequence;
	Parms.bPlay = bPlay;
	Parms.Settings = Settings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutActor != nullptr)
		*OutActor = Parms.OutActor;

	return Parms.ReturnValue;

}


// Class GbxLevelSequence.GbxLevelSequenceThrottleLibrary
// (None)

class UClass* UGbxLevelSequenceThrottleLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxLevelSequenceThrottleLibrary");

	return Clss;
}


// GbxLevelSequenceThrottleLibrary GbxLevelSequence.Default__GbxLevelSequenceThrottleLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxLevelSequenceThrottleLibrary* UGbxLevelSequenceThrottleLibrary::GetDefaultObj()
{
	static class UGbxLevelSequenceThrottleLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxLevelSequenceThrottleLibrary*>(UGbxLevelSequenceThrottleLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function GbxLevelSequence.GbxLevelSequenceThrottleLibrary.UnlimitSequenceActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AGbxLevelSequenceActor*      Player                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxLevelSequenceThrottleLibrary::UnlimitSequenceActor(class AGbxLevelSequenceActor* Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxLevelSequenceThrottleLibrary", "UnlimitSequenceActor");

	Params::UGbxLevelSequenceThrottleLibrary_UnlimitSequenceActor_Params Parms{};

	Parms.Player = Player;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxLevelSequence.GbxLevelSequenceThrottleLibrary.ShouldLimitSequenceGroup
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        InGroup                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGbxLevelSequenceThrottleLibrary::ShouldLimitSequenceGroup(class FName InGroup)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxLevelSequenceThrottleLibrary", "ShouldLimitSequenceGroup");

	Params::UGbxLevelSequenceThrottleLibrary_ShouldLimitSequenceGroup_Params Parms{};

	Parms.InGroup = InGroup;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GbxLevelSequence.GbxLevelSequenceThrottleLibrary.LimitSequenceActor
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AGbxLevelSequenceActor*      Player                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Group                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxLevelSequenceThrottleLibrary::LimitSequenceActor(class AGbxLevelSequenceActor* Player, class FName Group)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxLevelSequenceThrottleLibrary", "LimitSequenceActor");

	Params::UGbxLevelSequenceThrottleLibrary_LimitSequenceActor_Params Parms{};

	Parms.Player = Player;
	Parms.Group = Group;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GbxLevelSequence.GbxLevelSequenceThrottleLibrary.ClearLimitGroup
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        Group                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGbxLevelSequenceThrottleLibrary::ClearLimitGroup(class FName Group)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GbxLevelSequenceThrottleLibrary", "ClearLimitGroup");

	Params::UGbxLevelSequenceThrottleLibrary_ClearLimitGroup_Params Parms{};

	Parms.Group = Group;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GbxLevelSequence.GbxMovieSceneBindingOverrides
// (None)

class UClass* UGbxMovieSceneBindingOverrides::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GbxMovieSceneBindingOverrides");

	return Clss;
}


// GbxMovieSceneBindingOverrides GbxLevelSequence.Default__GbxMovieSceneBindingOverrides
// (Public, ClassDefaultObject, ArchetypeObject)

class UGbxMovieSceneBindingOverrides* UGbxMovieSceneBindingOverrides::GetDefaultObj()
{
	static class UGbxMovieSceneBindingOverrides* Default = nullptr;

	if (!Default)
		Default = static_cast<UGbxMovieSceneBindingOverrides*>(UGbxMovieSceneBindingOverrides::StaticClass()->DefaultObject);

	return Default;
}

}


