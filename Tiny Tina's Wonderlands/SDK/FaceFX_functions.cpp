#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class FaceFX.FaceFXAsset
// (None)

class UClass* UFaceFXAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FaceFXAsset");

	return Clss;
}


// FaceFXAsset FaceFX.Default__FaceFXAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UFaceFXAsset* UFaceFXAsset::GetDefaultObj()
{
	static class UFaceFXAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UFaceFXAsset*>(UFaceFXAsset::StaticClass()->DefaultObject);

	return Default;
}


// Class FaceFX.FaceFXActor
// (None)

class UClass* UFaceFXActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FaceFXActor");

	return Clss;
}


// FaceFXActor FaceFX.Default__FaceFXActor
// (Public, ClassDefaultObject, ArchetypeObject)

class UFaceFXActor* UFaceFXActor::GetDefaultObj()
{
	static class UFaceFXActor* Default = nullptr;

	if (!Default)
		Default = static_cast<UFaceFXActor*>(UFaceFXActor::StaticClass()->DefaultObject);

	return Default;
}


// Class FaceFX.FaceFXAnim
// (None)

class UClass* UFaceFXAnim::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FaceFXAnim");

	return Clss;
}


// FaceFXAnim FaceFX.Default__FaceFXAnim
// (Public, ClassDefaultObject, ArchetypeObject)

class UFaceFXAnim* UFaceFXAnim::GetDefaultObj()
{
	static class UFaceFXAnim* Default = nullptr;

	if (!Default)
		Default = static_cast<UFaceFXAnim*>(UFaceFXAnim::StaticClass()->DefaultObject);

	return Default;
}


// Class FaceFX.FaceFXAnimationSection
// (None)

class UClass* UFaceFXAnimationSection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FaceFXAnimationSection");

	return Clss;
}


// FaceFXAnimationSection FaceFX.Default__FaceFXAnimationSection
// (Public, ClassDefaultObject, ArchetypeObject)

class UFaceFXAnimationSection* UFaceFXAnimationSection::GetDefaultObj()
{
	static class UFaceFXAnimationSection* Default = nullptr;

	if (!Default)
		Default = static_cast<UFaceFXAnimationSection*>(UFaceFXAnimationSection::StaticClass()->DefaultObject);

	return Default;
}


// Class FaceFX.FaceFXAnimationTrack
// (None)

class UClass* UFaceFXAnimationTrack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FaceFXAnimationTrack");

	return Clss;
}


// FaceFXAnimationTrack FaceFX.Default__FaceFXAnimationTrack
// (Public, ClassDefaultObject, ArchetypeObject)

class UFaceFXAnimationTrack* UFaceFXAnimationTrack::GetDefaultObj()
{
	static class UFaceFXAnimationTrack* Default = nullptr;

	if (!Default)
		Default = static_cast<UFaceFXAnimationTrack*>(UFaceFXAnimationTrack::StaticClass()->DefaultObject);

	return Default;
}


// Class FaceFX.FaceFXAnimSet
// (None)

class UClass* UFaceFXAnimSet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FaceFXAnimSet");

	return Clss;
}


// FaceFXAnimSet FaceFX.Default__FaceFXAnimSet
// (Public, ClassDefaultObject, ArchetypeObject)

class UFaceFXAnimSet* UFaceFXAnimSet::GetDefaultObj()
{
	static class UFaceFXAnimSet* Default = nullptr;

	if (!Default)
		Default = static_cast<UFaceFXAnimSet*>(UFaceFXAnimSet::StaticClass()->DefaultObject);

	return Default;
}


// Class FaceFX.FaceFXAudioComponent
// (None)

class UClass* UFaceFXAudioComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FaceFXAudioComponent");

	return Clss;
}


// FaceFXAudioComponent FaceFX.Default__FaceFXAudioComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFaceFXAudioComponent* UFaceFXAudioComponent::GetDefaultObj()
{
	static class UFaceFXAudioComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFaceFXAudioComponent*>(UFaceFXAudioComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class FaceFX.FaceFXCharacter
// (None)

class UClass* UFaceFXCharacter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FaceFXCharacter");

	return Clss;
}


// FaceFXCharacter FaceFX.Default__FaceFXCharacter
// (Public, ClassDefaultObject, ArchetypeObject)

class UFaceFXCharacter* UFaceFXCharacter::GetDefaultObj()
{
	static class UFaceFXCharacter* Default = nullptr;

	if (!Default)
		Default = static_cast<UFaceFXCharacter*>(UFaceFXCharacter::StaticClass()->DefaultObject);

	return Default;
}


// Class FaceFX.FaceFXComponent
// (None)

class UClass* UFaceFXComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FaceFXComponent");

	return Clss;
}


// FaceFXComponent FaceFX.Default__FaceFXComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFaceFXComponent* UFaceFXComponent::GetDefaultObj()
{
	static class UFaceFXComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFaceFXComponent*>(UFaceFXComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function FaceFX.FaceFXComponent.StopAll
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFaceFXComponent::StopAll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FaceFXComponent", "StopAll");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function FaceFX.FaceFXComponent.Stop
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      SkelMeshComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     Caller                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFaceFXComponent::Stop(class USkeletalMeshComponent* SkelMeshComp, class UObject* Caller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FaceFXComponent", "Stop");

	Params::UFaceFXComponent_Stop_Params Parms{};

	Parms.SkelMeshComp = SkelMeshComp;
	Parms.Caller = Caller;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FaceFX.FaceFXComponent.Setup
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      SkelMeshComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFaceFXAudioComponent*       AudioComponent                                                   (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFaceFXActor*                Asset                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsAutoPlaySound                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsDisableMorphTargets                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     Caller                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFaceFXComponent::Setup(class USkeletalMeshComponent* SkelMeshComp, class UFaceFXAudioComponent* AudioComponent, class UFaceFXActor* Asset, bool IsAutoPlaySound, bool IsDisableMorphTargets, class UObject* Caller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FaceFXComponent", "Setup");

	Params::UFaceFXComponent_Setup_Params Parms{};

	Parms.SkelMeshComp = SkelMeshComp;
	Parms.AudioComponent = AudioComponent;
	Parms.Asset = Asset;
	Parms.IsAutoPlaySound = IsAutoPlaySound;
	Parms.IsDisableMorphTargets = IsDisableMorphTargets;
	Parms.Caller = Caller;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FaceFX.FaceFXComponent.resume
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      SkelMeshComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     Caller                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFaceFXComponent::Resume(class USkeletalMeshComponent* SkelMeshComp, class UObject* Caller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FaceFXComponent", "resume");

	Params::UFaceFXComponent_Resume_Params Parms{};

	Parms.SkelMeshComp = SkelMeshComp;
	Parms.Caller = Caller;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FaceFX.FaceFXComponent.PlayById
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        Group                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        AnimName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USkeletalMeshComponent*      SkelMeshComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Loop                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     Caller                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFaceFXComponent::PlayById(class FName Group, class FName AnimName, class USkeletalMeshComponent* SkelMeshComp, bool Loop, class UObject* Caller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FaceFXComponent", "PlayById");

	Params::UFaceFXComponent_PlayById_Params Parms{};

	Parms.Group = Group;
	Parms.AnimName = AnimName;
	Parms.SkelMeshComp = SkelMeshComp;
	Parms.Loop = Loop;
	Parms.Caller = Caller;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FaceFX.FaceFXComponent.play
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFaceFXAnim*                 Animation                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USkeletalMeshComponent*      SkelMeshComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Loop                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     Caller                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFaceFXComponent::Play(class UFaceFXAnim* Animation, class USkeletalMeshComponent* SkelMeshComp, bool Loop, class UObject* Caller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FaceFXComponent", "play");

	Params::UFaceFXComponent_Play_Params Parms{};

	Parms.Animation = Animation;
	Parms.SkelMeshComp = SkelMeshComp;
	Parms.Loop = Loop;
	Parms.Caller = Caller;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FaceFX.FaceFXComponent.Pause
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      SkelMeshComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     Caller                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFaceFXComponent::Pause(class USkeletalMeshComponent* SkelMeshComp, class UObject* Caller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FaceFXComponent", "Pause");

	Params::UFaceFXComponent_Pause_Params Parms{};

	Parms.SkelMeshComp = SkelMeshComp;
	Parms.Caller = Caller;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FaceFX.FaceFXComponent.OnCharacterPlaybackStopped
// (Final, Native, Private, HasOutParams)
// Parameters:
// class UFaceFXCharacter*            Character                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFaceFXAnimId               AnimId                                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UFaceFXComponent::OnCharacterPlaybackStopped(class UFaceFXCharacter* Character, struct FFaceFXAnimId& AnimId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FaceFXComponent", "OnCharacterPlaybackStopped");

	Params::UFaceFXComponent_OnCharacterPlaybackStopped_Params Parms{};

	Parms.Character = Character;
	Parms.AnimId = AnimId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FaceFX.FaceFXComponent.OnCharacterAudioStart
// (Final, Native, Private, HasOutParams)
// Parameters:
// class UFaceFXCharacter*            Character                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFaceFXAnimId               AnimId                                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               IsAudioStarted                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFaceFXAudioComponent*       AudioComponentStartedOn                                          (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFaceFXComponent::OnCharacterAudioStart(class UFaceFXCharacter* Character, struct FFaceFXAnimId& AnimId, bool IsAudioStarted, class UFaceFXAudioComponent* AudioComponentStartedOn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FaceFXComponent", "OnCharacterAudioStart");

	Params::UFaceFXComponent_OnCharacterAudioStart_Params Parms{};

	Parms.Character = Character;
	Parms.AnimId = AnimId;
	Parms.IsAudioStarted = IsAudioStarted;
	Parms.AudioComponentStartedOn = AudioComponentStartedOn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FaceFX.FaceFXComponent.JumpToById
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Position                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Pause                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        Group                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        AnimName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               LoopAnimation                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USkeletalMeshComponent*      SkelMeshComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     Caller                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFaceFXComponent::JumpToById(float Position, bool Pause, class FName Group, class FName AnimName, bool LoopAnimation, class USkeletalMeshComponent* SkelMeshComp, class UObject* Caller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FaceFXComponent", "JumpToById");

	Params::UFaceFXComponent_JumpToById_Params Parms{};

	Parms.Position = Position;
	Parms.Pause = Pause;
	Parms.Group = Group;
	Parms.AnimName = AnimName;
	Parms.LoopAnimation = LoopAnimation;
	Parms.SkelMeshComp = SkelMeshComp;
	Parms.Caller = Caller;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FaceFX.FaceFXComponent.JumpTo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Position                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Pause                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFaceFXAnim*                 Animation                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               LoopAnimation                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USkeletalMeshComponent*      SkelMeshComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     Caller                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFaceFXComponent::JumpTo(float Position, bool Pause, class UFaceFXAnim* Animation, bool LoopAnimation, class USkeletalMeshComponent* SkelMeshComp, class UObject* Caller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FaceFXComponent", "JumpTo");

	Params::UFaceFXComponent_JumpTo_Params Parms{};

	Parms.Position = Position;
	Parms.Pause = Pause;
	Parms.Animation = Animation;
	Parms.LoopAnimation = LoopAnimation;
	Parms.SkelMeshComp = SkelMeshComp;
	Parms.Caller = Caller;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FaceFX.FaceFXComponent.IsPlayingAnimation
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FFaceFXAnimId               AnimId                                                           (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// class USkeletalMeshComponent*      SkelMeshComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     Caller                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFaceFXComponent::IsPlayingAnimation(struct FFaceFXAnimId& AnimId, class USkeletalMeshComponent* SkelMeshComp, class UObject* Caller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FaceFXComponent", "IsPlayingAnimation");

	Params::UFaceFXComponent_IsPlayingAnimation_Params Parms{};

	Parms.AnimId = AnimId;
	Parms.SkelMeshComp = SkelMeshComp;
	Parms.Caller = Caller;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FaceFX.FaceFXComponent.IsPlaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USkeletalMeshComponent*      SkelMeshComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     Caller                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFaceFXComponent::IsPlaying(class USkeletalMeshComponent* SkelMeshComp, class UObject* Caller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FaceFXComponent", "IsPlaying");

	Params::UFaceFXComponent_IsPlaying_Params Parms{};

	Parms.SkelMeshComp = SkelMeshComp;
	Parms.Caller = Caller;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FaceFX.FaceFXComponent.IsPaused
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class USkeletalMeshComponent*      SkelMeshComp                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     Caller                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFaceFXComponent::IsPaused(class USkeletalMeshComponent* SkelMeshComp, class UObject* Caller)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FaceFXComponent", "IsPaused");

	Params::UFaceFXComponent_IsPaused_Params Parms{};

	Parms.SkelMeshComp = SkelMeshComp;
	Parms.Caller = Caller;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FaceFX.FaceFXComponent.GetFaceFXBlendWeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USkeletalMeshComponent*      SkeletalMeshComponent                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DeltaTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              BlendTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFaceFXComponent::GetFaceFXBlendWeight(class USkeletalMeshComponent* SkeletalMeshComponent, float DeltaTime, float BlendTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FaceFXComponent", "GetFaceFXBlendWeight");

	Params::UFaceFXComponent_GetFaceFXBlendWeight_Params Parms{};

	Parms.SkeletalMeshComponent = SkeletalMeshComponent;
	Parms.DeltaTime = DeltaTime;
	Parms.BlendTime = BlendTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class FaceFX.FaceFXMatineeControl
// (None)

class UClass* UFaceFXMatineeControl::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FaceFXMatineeControl");

	return Clss;
}


// FaceFXMatineeControl FaceFX.Default__FaceFXMatineeControl
// (Public, ClassDefaultObject, ArchetypeObject)

class UFaceFXMatineeControl* UFaceFXMatineeControl::GetDefaultObj()
{
	static class UFaceFXMatineeControl* Default = nullptr;

	if (!Default)
		Default = static_cast<UFaceFXMatineeControl*>(UFaceFXMatineeControl::StaticClass()->DefaultObject);

	return Default;
}


// Class FaceFX.FaceFXMatineeControlInst
// (None)

class UClass* UFaceFXMatineeControlInst::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FaceFXMatineeControlInst");

	return Clss;
}


// FaceFXMatineeControlInst FaceFX.Default__FaceFXMatineeControlInst
// (Public, ClassDefaultObject, ArchetypeObject)

class UFaceFXMatineeControlInst* UFaceFXMatineeControlInst::GetDefaultObj()
{
	static class UFaceFXMatineeControlInst* Default = nullptr;

	if (!Default)
		Default = static_cast<UFaceFXMatineeControlInst*>(UFaceFXMatineeControlInst::StaticClass()->DefaultObject);

	return Default;
}


// Class FaceFX.FaceFXSettings
// (None)

class UClass* UFaceFXSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FaceFXSettings");

	return Clss;
}


// FaceFXSettings FaceFX.Default__FaceFXSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UFaceFXSettings* UFaceFXSettings::GetDefaultObj()
{
	static class UFaceFXSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UFaceFXSettings*>(UFaceFXSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class FaceFX.FaceFXEditorSettings
// (None)

class UClass* UFaceFXEditorSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FaceFXEditorSettings");

	return Clss;
}


// FaceFXEditorSettings FaceFX.Default__FaceFXEditorSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UFaceFXEditorSettings* UFaceFXEditorSettings::GetDefaultObj()
{
	static class UFaceFXEditorSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UFaceFXEditorSettings*>(UFaceFXEditorSettings::StaticClass()->DefaultObject);

	return Default;
}

}


