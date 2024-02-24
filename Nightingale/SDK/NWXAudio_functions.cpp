#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class NWXAudio.AcousticOpeningComponent
// (SceneComponent)

class UClass* UAcousticOpeningComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AcousticOpeningComponent");

	return Clss;
}


// AcousticOpeningComponent NWXAudio.Default__AcousticOpeningComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAcousticOpeningComponent* UAcousticOpeningComponent::GetDefaultObj()
{
	static class UAcousticOpeningComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAcousticOpeningComponent*>(UAcousticOpeningComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function NWXAudio.AcousticOpeningComponent.IsInteriorToExterior
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAcousticOpeningComponent::IsInteriorToExterior()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AcousticOpeningComponent", "IsInteriorToExterior");

	Params::UAcousticOpeningComponent_IsInteriorToExterior_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NWXAudio.AcousticOpeningComponent.IsFullyInternal
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAcousticOpeningComponent::IsFullyInternal()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AcousticOpeningComponent", "IsFullyInternal");

	Params::UAcousticOpeningComponent_IsFullyInternal_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class NWXAudio.AcousticSpaceInterface
// (None)

class UClass* IAcousticSpaceInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AcousticSpaceInterface");

	return Clss;
}


// AcousticSpaceInterface NWXAudio.Default__AcousticSpaceInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IAcousticSpaceInterface* IAcousticSpaceInterface::GetDefaultObj()
{
	static class IAcousticSpaceInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IAcousticSpaceInterface*>(IAcousticSpaceInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class NWXAudio.DirectionalAuxBusses
// (None)

class UClass* UDirectionalAuxBusses::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DirectionalAuxBusses");

	return Clss;
}


// DirectionalAuxBusses NWXAudio.Default__DirectionalAuxBusses
// (Public, ClassDefaultObject, ArchetypeObject)

class UDirectionalAuxBusses* UDirectionalAuxBusses::GetDefaultObj()
{
	static class UDirectionalAuxBusses* Default = nullptr;

	if (!Default)
		Default = static_cast<UDirectionalAuxBusses*>(UDirectionalAuxBusses::StaticClass()->DefaultObject);

	return Default;
}


// Class NWXAudio.ReverbData
// (None)

class UClass* UReverbData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ReverbData");

	return Clss;
}


// ReverbData NWXAudio.Default__ReverbData
// (Public, ClassDefaultObject, ArchetypeObject)

class UReverbData* UReverbData::GetDefaultObj()
{
	static class UReverbData* Default = nullptr;

	if (!Default)
		Default = static_cast<UReverbData*>(UReverbData::StaticClass()->DefaultObject);

	return Default;
}


// Class NWXAudio.AcousticsSubsystem
// (None)

class UClass* UAcousticsSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AcousticsSubsystem");

	return Clss;
}


// AcousticsSubsystem NWXAudio.Default__AcousticsSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UAcousticsSubsystem* UAcousticsSubsystem::GetDefaultObj()
{
	static class UAcousticsSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UAcousticsSubsystem*>(UAcousticsSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function NWXAudio.AcousticsSubsystem.UnlinkReverbAcousticSpaces
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UAkLateReverbComponent*      ReverbA                                                          (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAkLateReverbComponent*      ReverbB                                                          (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAcousticsSubsystem::UnlinkReverbAcousticSpaces(class UAkLateReverbComponent* ReverbA, class UAkLateReverbComponent* ReverbB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AcousticsSubsystem", "UnlinkReverbAcousticSpaces");

	Params::UAcousticsSubsystem_UnlinkReverbAcousticSpaces_Params Parms{};

	Parms.ReverbA = ReverbA;
	Parms.ReverbB = ReverbB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXAudio.AcousticsSubsystem.ResetTreeQuadrants
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:

void UAcousticsSubsystem::ResetTreeQuadrants()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AcousticsSubsystem", "ResetTreeQuadrants");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function NWXAudio.AcousticsSubsystem.RemoveModularAcoustics
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      RootActor                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAcousticsSubsystem::RemoveModularAcoustics(class AActor* RootActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AcousticsSubsystem", "RemoveModularAcoustics");

	Params::UAcousticsSubsystem_RemoveModularAcoustics_Params Parms{};

	Parms.RootActor = RootActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXAudio.AcousticsSubsystem.PopulateTreesInfoMapByQuadrants
// (Final, BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FVector>             Trees                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// float                              InnerRangeTreeTotal                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAcousticsSubsystem::PopulateTreesInfoMapByQuadrants(TArray<struct FVector>& Trees, float InnerRangeTreeTotal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AcousticsSubsystem", "PopulateTreesInfoMapByQuadrants");

	Params::UAcousticsSubsystem_PopulateTreesInfoMapByQuadrants_Params Parms{};

	Parms.Trees = Trees;
	Parms.InnerRangeTreeTotal = InnerRangeTreeTotal;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXAudio.AcousticsSubsystem.LinkReverbAcousticSpaces
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UAkLateReverbComponent*      ReverbA                                                          (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAkLateReverbComponent*      ReverbB                                                          (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAcousticsSubsystem::LinkReverbAcousticSpaces(class UAkLateReverbComponent* ReverbA, class UAkLateReverbComponent* ReverbB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AcousticsSubsystem", "LinkReverbAcousticSpaces");

	Params::UAcousticsSubsystem_LinkReverbAcousticSpaces_Params Parms{};

	Parms.ReverbA = ReverbA;
	Parms.ReverbB = ReverbB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXAudio.AcousticsSubsystem.LinkAcousticSpaces
// (Final, BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UActorComponent*>     Spaces                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UAcousticsSubsystem::LinkAcousticSpaces(TArray<class UActorComponent*>& Spaces)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AcousticsSubsystem", "LinkAcousticSpaces");

	Params::UAcousticsSubsystem_LinkAcousticSpaces_Params Parms{};

	Parms.Spaces = Spaces;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXAudio.AcousticsSubsystem.GetQuadrantByLocation
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              DeltaX                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DeltaY                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAudioTreeQuadrant      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EAudioTreeQuadrant UAcousticsSubsystem::GetQuadrantByLocation(float DeltaX, float DeltaY)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AcousticsSubsystem", "GetQuadrantByLocation");

	Params::UAcousticsSubsystem_GetQuadrantByLocation_Params Parms{};

	Parms.DeltaX = DeltaX;
	Parms.DeltaY = DeltaY;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NWXAudio.AcousticsSubsystem.GetNearestAcousticOpening
// (Final, BlueprintCosmetic, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     Position                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaxDistanceCm                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAcousticOpeningComponent*   ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAcousticOpeningComponent* UAcousticsSubsystem::GetNearestAcousticOpening(struct FVector& Position, float MaxDistanceCm)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AcousticsSubsystem", "GetNearestAcousticOpening");

	Params::UAcousticsSubsystem_GetNearestAcousticOpening_Params Parms{};

	Parms.Position = Position;
	Parms.MaxDistanceCm = MaxDistanceCm;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NWXAudio.AcousticsSubsystem.GetInteriorToExteriorAcousticOpeningPositions
// (Final, BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class AActor*                      ParentActor                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>             Positions                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UAcousticsSubsystem::GetInteriorToExteriorAcousticOpeningPositions(class AActor* ParentActor, TArray<struct FVector>* Positions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AcousticsSubsystem", "GetInteriorToExteriorAcousticOpeningPositions");

	Params::UAcousticsSubsystem_GetInteriorToExteriorAcousticOpeningPositions_Params Parms{};

	Parms.ParentActor = ParentActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Positions != nullptr)
		*Positions = std::move(Parms.Positions);

}


// Function NWXAudio.AcousticsSubsystem.CalculateWeatherShelter
// (Final, BlueprintCosmetic, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Position                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               UseRaycasts                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               UseReverbEnclosure                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAcousticsSubsystem::CalculateWeatherShelter(struct FVector& Position, bool UseRaycasts, bool UseReverbEnclosure)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AcousticsSubsystem", "CalculateWeatherShelter");

	Params::UAcousticsSubsystem_CalculateWeatherShelter_Params Parms{};

	Parms.Position = Position;
	Parms.UseRaycasts = UseRaycasts;
	Parms.UseReverbEnclosure = UseReverbEnclosure;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NWXAudio.AcousticsSubsystem.CacheTreeInnerZoneRange
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// float                              Range                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAcousticsSubsystem::CacheTreeInnerZoneRange(float Range)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AcousticsSubsystem", "CacheTreeInnerZoneRange");

	Params::UAcousticsSubsystem_CacheTreeInnerZoneRange_Params Parms{};

	Parms.Range = Range;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXAudio.AcousticsSubsystem.AddModularAcoustics
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class AActor*                      RootActor                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAcousticsSubsystem::AddModularAcoustics(class AActor* RootActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AcousticsSubsystem", "AddModularAcoustics");

	Params::UAcousticsSubsystem_AddModularAcoustics_Params Parms{};

	Parms.RootActor = RootActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXAudio.AcousticsSubsystem.AddForestReverb
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UDirectionalAuxBusses*       GlobalReverbType                                                 (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDirectionalAuxBusses*       ForestReverbType                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAcousticsSubsystem::AddForestReverb(class UDirectionalAuxBusses* GlobalReverbType, class UDirectionalAuxBusses* ForestReverbType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AcousticsSubsystem", "AddForestReverb");

	Params::UAcousticsSubsystem_AddForestReverb_Params Parms{};

	Parms.GlobalReverbType = GlobalReverbType;
	Parms.ForestReverbType = ForestReverbType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class NWXAudio.AudioBucket
// (None)

class UClass* UAudioBucket::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioBucket");

	return Clss;
}


// AudioBucket NWXAudio.Default__AudioBucket
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioBucket* UAudioBucket::GetDefaultObj()
{
	static class UAudioBucket* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioBucket*>(UAudioBucket::StaticClass()->DefaultObject);

	return Default;
}


// Function NWXAudio.AudioBucket.HasCapacity
// (BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAudioBucket::HasCapacity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioBucket", "HasCapacity");

	Params::UAudioBucket_HasCapacity_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class NWXAudio.ActorAudioBucket
// (None)

class UClass* UActorAudioBucket::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ActorAudioBucket");

	return Clss;
}


// ActorAudioBucket NWXAudio.Default__ActorAudioBucket
// (Public, ClassDefaultObject, ArchetypeObject)

class UActorAudioBucket* UActorAudioBucket::GetDefaultObj()
{
	static class UActorAudioBucket* Default = nullptr;

	if (!Default)
		Default = static_cast<UActorAudioBucket*>(UActorAudioBucket::StaticClass()->DefaultObject);

	return Default;
}


// Class NWXAudio.AkMediaSoundInputComponent
// (SceneComponent)

class UClass* UAkMediaSoundInputComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AkMediaSoundInputComponent");

	return Clss;
}


// AkMediaSoundInputComponent NWXAudio.Default__AkMediaSoundInputComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAkMediaSoundInputComponent* UAkMediaSoundInputComponent::GetDefaultObj()
{
	static class UAkMediaSoundInputComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAkMediaSoundInputComponent*>(UAkMediaSoundInputComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function NWXAudio.AkMediaSoundInputComponent.SetMediaPlayer
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaPlayer*                NewMediaPlayer                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAkMediaSoundInputComponent::SetMediaPlayer(class UMediaPlayer* NewMediaPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkMediaSoundInputComponent", "SetMediaPlayer");

	Params::UAkMediaSoundInputComponent_SetMediaPlayer_Params Parms{};

	Parms.NewMediaPlayer = NewMediaPlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXAudio.AkMediaSoundInputComponent.GetMediaPlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMediaPlayer*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMediaPlayer* UAkMediaSoundInputComponent::GetMediaPlayer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AkMediaSoundInputComponent", "GetMediaPlayer");

	Params::UAkMediaSoundInputComponent_GetMediaPlayer_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class NWXAudio.AnimNotify_EmoteBase
// (None)

class UClass* UAnimNotify_EmoteBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AnimNotify_EmoteBase");

	return Clss;
}


// AnimNotify_EmoteBase NWXAudio.Default__AnimNotify_EmoteBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UAnimNotify_EmoteBase* UAnimNotify_EmoteBase::GetDefaultObj()
{
	static class UAnimNotify_EmoteBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UAnimNotify_EmoteBase*>(UAnimNotify_EmoteBase::StaticClass()->DefaultObject);

	return Default;
}


// Class NWXAudio.AudioComponentAggregatorComponent
// (None)

class UClass* UAudioComponentAggregatorComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioComponentAggregatorComponent");

	return Clss;
}


// AudioComponentAggregatorComponent NWXAudio.Default__AudioComponentAggregatorComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioComponentAggregatorComponent* UAudioComponentAggregatorComponent::GetDefaultObj()
{
	static class UAudioComponentAggregatorComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioComponentAggregatorComponent*>(UAudioComponentAggregatorComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function NWXAudio.AudioComponentAggregatorComponent.SetSwitchesOnAudioComponent
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UAkSwitchValue*              SwitchToSet                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UComponentAudioBucket*       RequiredComponentAudioBucket                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAlsoSetOnReductionComponent                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioComponentAggregatorComponent::SetSwitchesOnAudioComponent(class UAkSwitchValue* SwitchToSet, class UComponentAudioBucket* RequiredComponentAudioBucket, bool bAlsoSetOnReductionComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioComponentAggregatorComponent", "SetSwitchesOnAudioComponent");

	Params::UAudioComponentAggregatorComponent_SetSwitchesOnAudioComponent_Params Parms{};

	Parms.SwitchToSet = SwitchToSet;
	Parms.RequiredComponentAudioBucket = RequiredComponentAudioBucket;
	Parms.bAlsoSetOnReductionComponent = bAlsoSetOnReductionComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXAudio.AudioComponentAggregatorComponent.GetAudioComponent
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UComponentAudioBucket*       PreferredComponentAudioBucket                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bForcePreferredBucket                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UScopedAkComponent*          ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UScopedAkComponent* UAudioComponentAggregatorComponent::GetAudioComponent(class UComponentAudioBucket* PreferredComponentAudioBucket, bool bForcePreferredBucket)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioComponentAggregatorComponent", "GetAudioComponent");

	Params::UAudioComponentAggregatorComponent_GetAudioComponent_Params Parms{};

	Parms.PreferredComponentAudioBucket = PreferredComponentAudioBucket;
	Parms.bForcePreferredBucket = bForcePreferredBucket;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class NWXAudio.EditorAudioDialogueData
// (None)

class UClass* UEditorAudioDialogueData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EditorAudioDialogueData");

	return Clss;
}


// EditorAudioDialogueData NWXAudio.Default__EditorAudioDialogueData
// (Public, ClassDefaultObject, ArchetypeObject)

class UEditorAudioDialogueData* UEditorAudioDialogueData::GetDefaultObj()
{
	static class UEditorAudioDialogueData* Default = nullptr;

	if (!Default)
		Default = static_cast<UEditorAudioDialogueData*>(UEditorAudioDialogueData::StaticClass()->DefaultObject);

	return Default;
}


// Class NWXAudio.AudioDialogueSubsystem
// (None)

class UClass* UAudioDialogueSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioDialogueSubsystem");

	return Clss;
}


// AudioDialogueSubsystem NWXAudio.Default__AudioDialogueSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioDialogueSubsystem* UAudioDialogueSubsystem::GetDefaultObj()
{
	static class UAudioDialogueSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioDialogueSubsystem*>(UAudioDialogueSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function NWXAudio.AudioDialogueSubsystem.StopAllDialogueAudio
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:

void UAudioDialogueSubsystem::StopAllDialogueAudio()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioDialogueSubsystem", "StopAllDialogueAudio");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function NWXAudio.AudioDialogueSubsystem.SkipCurrentDialogueAudio
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:

void UAudioDialogueSubsystem::SkipCurrentDialogueAudio()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioDialogueSubsystem", "SkipCurrentDialogueAudio");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function NWXAudio.AudioDialogueSubsystem.SetTextToSpeechVoicesEnabled
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnabled                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioDialogueSubsystem::SetTextToSpeechVoicesEnabled(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioDialogueSubsystem", "SetTextToSpeechVoicesEnabled");

	Params::UAudioDialogueSubsystem_SetTextToSpeechVoicesEnabled_Params Parms{};

	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXAudio.AudioDialogueSubsystem.PlayDialogueAudio
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UAkComponent*                AkComponent                                                      (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDialogue*                   Dialogue                                                         (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NodeId                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ForceTTSPlayback                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAudioDialogueSubsystem::PlayDialogueAudio(class UAkComponent* AkComponent, class UDialogue* Dialogue, int32 NodeId, bool ForceTTSPlayback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioDialogueSubsystem", "PlayDialogueAudio");

	Params::UAudioDialogueSubsystem_PlayDialogueAudio_Params Parms{};

	Parms.AkComponent = AkComponent;
	Parms.Dialogue = Dialogue;
	Parms.NodeId = NodeId;
	Parms.ForceTTSPlayback = ForceTTSPlayback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NWXAudio.AudioDialogueSubsystem.IsTextToSpeechVoicesEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAudioDialogueSubsystem::IsTextToSpeechVoicesEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioDialogueSubsystem", "IsTextToSpeechVoicesEnabled");

	Params::UAudioDialogueSubsystem_IsTextToSpeechVoicesEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NWXAudio.AudioDialogueSubsystem.HandleDialogueFinished
// (Final, Native, Private)
// Parameters:
// enum class EAkCallbackType         CallbackType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAkCallbackInfo*             CallbackInfo                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioDialogueSubsystem::HandleDialogueFinished(enum class EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioDialogueSubsystem", "HandleDialogueFinished");

	Params::UAudioDialogueSubsystem_HandleDialogueFinished_Params Parms{};

	Parms.CallbackType = CallbackType;
	Parms.CallbackInfo = CallbackInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXAudio.AudioDialogueSubsystem.GetSpeakerName
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDialogue*                   Dialogue                                                         (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDialogueNodeBase*           Node                                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UAudioDialogueSubsystem::GetSpeakerName(class UDialogue* Dialogue, class UDialogueNodeBase* Node)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioDialogueSubsystem", "GetSpeakerName");

	Params::UAudioDialogueSubsystem_GetSpeakerName_Params Parms{};

	Parms.Dialogue = Dialogue;
	Parms.Node = Node;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NWXAudio.AudioDialogueSubsystem.GetSpeakerExternalSource
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UDialogue*                   Dialogue                                                         (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDialogueNodeBase*           Node                                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAkAudioEvent*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAkAudioEvent* UAudioDialogueSubsystem::GetSpeakerExternalSource(class UDialogue* Dialogue, class UDialogueNodeBase* Node)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioDialogueSubsystem", "GetSpeakerExternalSource");

	Params::UAudioDialogueSubsystem_GetSpeakerExternalSource_Params Parms{};

	Parms.Dialogue = Dialogue;
	Parms.Node = Node;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NWXAudio.AudioDialogueSubsystem.EnqueueDialogueAudioNoSource
// (Final, BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UDialogue*                   Dialogue                                                         (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              DialogueNodeID                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 PlaybackStartedCallback                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 PlaybackEndedCallback                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bBroadcastSubtitleCallbacks                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               InterruptQueue                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioDialogueSubsystem::EnqueueDialogueAudioNoSource(class UDialogue* Dialogue, int32 DialogueNodeID, FDelegateProperty_& PlaybackStartedCallback, FDelegateProperty_& PlaybackEndedCallback, bool bBroadcastSubtitleCallbacks, bool InterruptQueue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioDialogueSubsystem", "EnqueueDialogueAudioNoSource");

	Params::UAudioDialogueSubsystem_EnqueueDialogueAudioNoSource_Params Parms{};

	Parms.Dialogue = Dialogue;
	Parms.DialogueNodeID = DialogueNodeID;
	Parms.PlaybackStartedCallback = PlaybackStartedCallback;
	Parms.PlaybackEndedCallback = PlaybackEndedCallback;
	Parms.bBroadcastSubtitleCallbacks = bBroadcastSubtitleCallbacks;
	Parms.InterruptQueue = InterruptQueue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXAudio.AudioDialogueSubsystem.EnqueueDialogueAudioForActor
// (Final, BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UComponentAudioBucket*       VoiceBucket                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDialogue*                   Dialogue                                                         (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              DialogueNodeID                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 PlaybackStartedCallback                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 PlaybackEndedCallback                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bBroadcastSubtitleCallbacks                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               InterruptQueue                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioDialogueSubsystem::EnqueueDialogueAudioForActor(class AActor* Actor, class UComponentAudioBucket* VoiceBucket, class UDialogue* Dialogue, int32 DialogueNodeID, FDelegateProperty_& PlaybackStartedCallback, FDelegateProperty_& PlaybackEndedCallback, bool bBroadcastSubtitleCallbacks, bool InterruptQueue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioDialogueSubsystem", "EnqueueDialogueAudioForActor");

	Params::UAudioDialogueSubsystem_EnqueueDialogueAudioForActor_Params Parms{};

	Parms.Actor = Actor;
	Parms.VoiceBucket = VoiceBucket;
	Parms.Dialogue = Dialogue;
	Parms.DialogueNodeID = DialogueNodeID;
	Parms.PlaybackStartedCallback = PlaybackStartedCallback;
	Parms.PlaybackEndedCallback = PlaybackEndedCallback;
	Parms.bBroadcastSubtitleCallbacks = bBroadcastSubtitleCallbacks;
	Parms.InterruptQueue = InterruptQueue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXAudio.AudioDialogueSubsystem.EnqueueDialogueAudio
// (Final, BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UAkComponent*                AkComponent                                                      (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDialogue*                   Dialogue                                                         (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              DialogueNodeID                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 PlaybackStartedCallback                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 PlaybackEndedCallback                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bBroadcastSubtitleCallbacks                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               InterruptQueue                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioDialogueSubsystem::EnqueueDialogueAudio(class UAkComponent* AkComponent, class UDialogue* Dialogue, int32 DialogueNodeID, FDelegateProperty_& PlaybackStartedCallback, FDelegateProperty_& PlaybackEndedCallback, bool bBroadcastSubtitleCallbacks, bool InterruptQueue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioDialogueSubsystem", "EnqueueDialogueAudio");

	Params::UAudioDialogueSubsystem_EnqueueDialogueAudio_Params Parms{};

	Parms.AkComponent = AkComponent;
	Parms.Dialogue = Dialogue;
	Parms.DialogueNodeID = DialogueNodeID;
	Parms.PlaybackStartedCallback = PlaybackStartedCallback;
	Parms.PlaybackEndedCallback = PlaybackEndedCallback;
	Parms.bBroadcastSubtitleCallbacks = bBroadcastSubtitleCallbacks;
	Parms.InterruptQueue = InterruptQueue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXAudio.AudioDialogueSubsystem.CalculateAudioLineID
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDialogue*                   Dialogue                                                         (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDialogueNodeBase*           Node                                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UAudioDialogueSubsystem::CalculateAudioLineID(class UDialogue* Dialogue, class UDialogueNodeBase* Node)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioDialogueSubsystem", "CalculateAudioLineID");

	Params::UAudioDialogueSubsystem_CalculateAudioLineID_Params Parms{};

	Parms.Dialogue = Dialogue;
	Parms.Node = Node;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class NWXAudio.AudioEventData
// (None)

class UClass* UAudioEventData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioEventData");

	return Clss;
}


// AudioEventData NWXAudio.Default__AudioEventData
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioEventData* UAudioEventData::GetDefaultObj()
{
	static class UAudioEventData* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioEventData*>(UAudioEventData::StaticClass()->DefaultObject);

	return Default;
}


// Class NWXAudio.AudioEventSubsystem
// (None)

class UClass* UAudioEventSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioEventSubsystem");

	return Clss;
}


// AudioEventSubsystem NWXAudio.Default__AudioEventSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioEventSubsystem* UAudioEventSubsystem::GetDefaultObj()
{
	static class UAudioEventSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioEventSubsystem*>(UAudioEventSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function NWXAudio.AudioEventSubsystem.SetAudioEventData
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UAudioEventData*             AudioEventDataIn                                                 (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioEventSubsystem::SetAudioEventData(class UAudioEventData* AudioEventDataIn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioEventSubsystem", "SetAudioEventData");

	Params::UAudioEventSubsystem_SetAudioEventData_Params Parms{};

	Parms.AudioEventDataIn = AudioEventDataIn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXAudio.AudioEventSubsystem.GetBucketForEvent
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAkAudioEvent*               AudioEvent                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UEventAudioBucket*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UEventAudioBucket* UAudioEventSubsystem::GetBucketForEvent(class UAkAudioEvent* AudioEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioEventSubsystem", "GetBucketForEvent");

	Params::UAudioEventSubsystem_GetBucketForEvent_Params Parms{};

	Parms.AudioEvent = AudioEvent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NWXAudio.AudioEventSubsystem.CanEventPlay
// (Final, BlueprintCosmetic, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAkAudioEvent*               AudioEvent                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  Transform                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAudioEventSubsystem::CanEventPlay(class UAkAudioEvent* AudioEvent, struct FTransform& Transform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioEventSubsystem", "CanEventPlay");

	Params::UAudioEventSubsystem_CanEventPlay_Params Parms{};

	Parms.AudioEvent = AudioEvent;
	Parms.Transform = Transform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class NWXAudio.AudioMemoryDebug
// (None)

class UClass* UAudioMemoryDebug::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioMemoryDebug");

	return Clss;
}


// AudioMemoryDebug NWXAudio.Default__AudioMemoryDebug
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioMemoryDebug* UAudioMemoryDebug::GetDefaultObj()
{
	static class UAudioMemoryDebug* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioMemoryDebug*>(UAudioMemoryDebug::StaticClass()->DefaultObject);

	return Default;
}


// Class NWXAudio.AudioPreloadSubsystem
// (None)

class UClass* UAudioPreloadSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioPreloadSubsystem");

	return Clss;
}


// AudioPreloadSubsystem NWXAudio.Default__AudioPreloadSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioPreloadSubsystem* UAudioPreloadSubsystem::GetDefaultObj()
{
	static class UAudioPreloadSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioPreloadSubsystem*>(UAudioPreloadSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function NWXAudio.AudioPreloadSubsystem.PreloadRow
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                RowTag                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAffinityTable*              AffinityTable                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioPreloadSubsystem::PreloadRow(const struct FGameplayTag& RowTag, class UAffinityTable* AffinityTable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioPreloadSubsystem", "PreloadRow");

	Params::UAudioPreloadSubsystem_PreloadRow_Params Parms{};

	Parms.RowTag = RowTag;
	Parms.AffinityTable = AffinityTable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXAudio.AudioPreloadSubsystem.PreloadColumns
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FGameplayTag>        ColumnTags                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FGameplayTag                RowTag                                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAffinityTable*              AffinityTable                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioPreloadSubsystem::PreloadColumns(TArray<struct FGameplayTag>& ColumnTags, const struct FGameplayTag& RowTag, class UAffinityTable* AffinityTable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioPreloadSubsystem", "PreloadColumns");

	Params::UAudioPreloadSubsystem_PreloadColumns_Params Parms{};

	Parms.ColumnTags = ColumnTags;
	Parms.RowTag = RowTag;
	Parms.AffinityTable = AffinityTable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class NWXAudio.AudioRTPCSubsystemData
// (None)

class UClass* UAudioRTPCSubsystemData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioRTPCSubsystemData");

	return Clss;
}


// AudioRTPCSubsystemData NWXAudio.Default__AudioRTPCSubsystemData
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioRTPCSubsystemData* UAudioRTPCSubsystemData::GetDefaultObj()
{
	static class UAudioRTPCSubsystemData* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioRTPCSubsystemData*>(UAudioRTPCSubsystemData::StaticClass()->DefaultObject);

	return Default;
}


// Class NWXAudio.AudioRTPCSubsystem
// (None)

class UClass* UAudioRTPCSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioRTPCSubsystem");

	return Clss;
}


// AudioRTPCSubsystem NWXAudio.Default__AudioRTPCSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioRTPCSubsystem* UAudioRTPCSubsystem::GetDefaultObj()
{
	static class UAudioRTPCSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioRTPCSubsystem*>(UAudioRTPCSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function NWXAudio.AudioRTPCSubsystem.UnsubscribeDecayingRTPC
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UAkRtpc*                     Rtpc                                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioRTPCSubsystem::UnsubscribeDecayingRTPC(class UAkRtpc* Rtpc)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioRTPCSubsystem", "UnsubscribeDecayingRTPC");

	Params::UAudioRTPCSubsystem_UnsubscribeDecayingRTPC_Params Parms{};

	Parms.Rtpc = Rtpc;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXAudio.AudioRTPCSubsystem.SubscribeDecayingRTPC
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UAkRtpc*                     Rtpc                                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InitialRTPCValue                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              FinalRTPCValue                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DecayTime                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioRTPCSubsystem::SubscribeDecayingRTPC(class UAkRtpc* Rtpc, float InitialRTPCValue, float FinalRTPCValue, float DecayTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioRTPCSubsystem", "SubscribeDecayingRTPC");

	Params::UAudioRTPCSubsystem_SubscribeDecayingRTPC_Params Parms{};

	Parms.Rtpc = Rtpc;
	Parms.InitialRTPCValue = InitialRTPCValue;
	Parms.FinalRTPCValue = FinalRTPCValue;
	Parms.DecayTime = DecayTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXAudio.AudioRTPCSubsystem.ResetDecayingRTPC
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UAkRtpc*                     Rtpc                                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAudioRTPCSubsystem::ResetDecayingRTPC(class UAkRtpc* Rtpc)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioRTPCSubsystem", "ResetDecayingRTPC");

	Params::UAudioRTPCSubsystem_ResetDecayingRTPC_Params Parms{};

	Parms.Rtpc = Rtpc;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXAudio.AudioRTPCSubsystem.GetDecayingRTPCValue
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAkRtpc*                     Rtpc                                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAudioRTPCSubsystem::GetDecayingRTPCValue(class UAkRtpc* Rtpc)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioRTPCSubsystem", "GetDecayingRTPCValue");

	Params::UAudioRTPCSubsystem_GetDecayingRTPCValue_Params Parms{};

	Parms.Rtpc = Rtpc;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class NWXAudio.BoundedAkLateReverbComponent
// (SceneComponent)

class UClass* UBoundedAkLateReverbComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BoundedAkLateReverbComponent");

	return Clss;
}


// BoundedAkLateReverbComponent NWXAudio.Default__BoundedAkLateReverbComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UBoundedAkLateReverbComponent* UBoundedAkLateReverbComponent::GetDefaultObj()
{
	static class UBoundedAkLateReverbComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UBoundedAkLateReverbComponent*>(UBoundedAkLateReverbComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class NWXAudio.ComponentAudioBucket
// (None)

class UClass* UComponentAudioBucket::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ComponentAudioBucket");

	return Clss;
}


// ComponentAudioBucket NWXAudio.Default__ComponentAudioBucket
// (Public, ClassDefaultObject, ArchetypeObject)

class UComponentAudioBucket* UComponentAudioBucket::GetDefaultObj()
{
	static class UComponentAudioBucket* Default = nullptr;

	if (!Default)
		Default = static_cast<UComponentAudioBucket*>(UComponentAudioBucket::StaticClass()->DefaultObject);

	return Default;
}


// Class NWXAudio.DirectionalAkLateReverbComponent
// (SceneComponent)

class UClass* UDirectionalAkLateReverbComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DirectionalAkLateReverbComponent");

	return Clss;
}


// DirectionalAkLateReverbComponent NWXAudio.Default__DirectionalAkLateReverbComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UDirectionalAkLateReverbComponent* UDirectionalAkLateReverbComponent::GetDefaultObj()
{
	static class UDirectionalAkLateReverbComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UDirectionalAkLateReverbComponent*>(UDirectionalAkLateReverbComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class NWXAudio.DirectionalAkReverbVolume
// (Actor)

class UClass* ADirectionalAkReverbVolume::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DirectionalAkReverbVolume");

	return Clss;
}


// DirectionalAkReverbVolume NWXAudio.Default__DirectionalAkReverbVolume
// (Public, ClassDefaultObject, ArchetypeObject)

class ADirectionalAkReverbVolume* ADirectionalAkReverbVolume::GetDefaultObj()
{
	static class ADirectionalAkReverbVolume* Default = nullptr;

	if (!Default)
		Default = static_cast<ADirectionalAkReverbVolume*>(ADirectionalAkReverbVolume::StaticClass()->DefaultObject);

	return Default;
}


// Class NWXAudio.DirectionalSectorAkLateReverbComponent
// (SceneComponent)

class UClass* UDirectionalSectorAkLateReverbComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DirectionalSectorAkLateReverbComponent");

	return Clss;
}


// DirectionalSectorAkLateReverbComponent NWXAudio.Default__DirectionalSectorAkLateReverbComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UDirectionalSectorAkLateReverbComponent* UDirectionalSectorAkLateReverbComponent::GetDefaultObj()
{
	static class UDirectionalSectorAkLateReverbComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UDirectionalSectorAkLateReverbComponent*>(UDirectionalSectorAkLateReverbComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class NWXAudio.DirectionalForestSectorAkLateReverbComponent
// (SceneComponent)

class UClass* UDirectionalForestSectorAkLateReverbComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DirectionalForestSectorAkLateReverbComponent");

	return Clss;
}


// DirectionalForestSectorAkLateReverbComponent NWXAudio.Default__DirectionalForestSectorAkLateReverbComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UDirectionalForestSectorAkLateReverbComponent* UDirectionalForestSectorAkLateReverbComponent::GetDefaultObj()
{
	static class UDirectionalForestSectorAkLateReverbComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UDirectionalForestSectorAkLateReverbComponent*>(UDirectionalForestSectorAkLateReverbComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class NWXAudio.DynamicAkGeometryComponent
// (SceneComponent)

class UClass* UDynamicAkGeometryComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DynamicAkGeometryComponent");

	return Clss;
}


// DynamicAkGeometryComponent NWXAudio.Default__DynamicAkGeometryComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UDynamicAkGeometryComponent* UDynamicAkGeometryComponent::GetDefaultObj()
{
	static class UDynamicAkGeometryComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UDynamicAkGeometryComponent*>(UDynamicAkGeometryComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function NWXAudio.DynamicAkGeometryComponent.UpdateInRange
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInRange                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UDynamicAkGeometryComponent::UpdateInRange(bool bInRange)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DynamicAkGeometryComponent", "UpdateInRange");

	Params::UDynamicAkGeometryComponent_UpdateInRange_Params Parms{};

	Parms.bInRange = bInRange;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class NWXAudio.EmoteContextComponent
// (None)

class UClass* UEmoteContextComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EmoteContextComponent");

	return Clss;
}


// EmoteContextComponent NWXAudio.Default__EmoteContextComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UEmoteContextComponent* UEmoteContextComponent::GetDefaultObj()
{
	static class UEmoteContextComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UEmoteContextComponent*>(UEmoteContextComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function NWXAudio.EmoteContextComponent.SubmitEmoteSwitchValue
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UAkSwitchValue*              SwitchValue                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEmoteContextComponent::SubmitEmoteSwitchValue(class UAkSwitchValue* SwitchValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EmoteContextComponent", "SubmitEmoteSwitchValue");

	Params::UEmoteContextComponent_SubmitEmoteSwitchValue_Params Parms{};

	Parms.SwitchValue = SwitchValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NWXAudio.EmoteContextComponent.OnHealthDecreased
// (BlueprintCosmetic, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              OldHealth                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              NewHealth                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               SuppressEmote                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UEmoteContextComponent::OnHealthDecreased(float OldHealth, float NewHealth, bool SuppressEmote)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EmoteContextComponent", "OnHealthDecreased");

	Params::UEmoteContextComponent_OnHealthDecreased_Params Parms{};

	Parms.OldHealth = OldHealth;
	Parms.NewHealth = NewHealth;
	Parms.SuppressEmote = SuppressEmote;

	UObject::ProcessEvent(Func, &Parms);

}


// Class NWXAudio.EventAudioBucket
// (None)

class UClass* UEventAudioBucket::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EventAudioBucket");

	return Clss;
}


// EventAudioBucket NWXAudio.Default__EventAudioBucket
// (Public, ClassDefaultObject, ArchetypeObject)

class UEventAudioBucket* UEventAudioBucket::GetDefaultObj()
{
	static class UEventAudioBucket* Default = nullptr;

	if (!Default)
		Default = static_cast<UEventAudioBucket*>(UEventAudioBucket::StaticClass()->DefaultObject);

	return Default;
}


// Function NWXAudio.EventAudioBucket.IsAllowedToPlay
// (Final, BlueprintCosmetic, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAkAudioEvent*               AudioEvent                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  EventTransform                                                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  ListenerTransform                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEventAudioBucket::IsAllowedToPlay(class UAkAudioEvent* AudioEvent, struct FTransform& EventTransform, struct FTransform& ListenerTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EventAudioBucket", "IsAllowedToPlay");

	Params::UEventAudioBucket_IsAllowedToPlay_Params Parms{};

	Parms.AudioEvent = AudioEvent;
	Parms.EventTransform = EventTransform;
	Parms.ListenerTransform = ListenerTransform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NWXAudio.EventAudioBucket.Contains
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAkAudioEvent*               AudioEvent                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEventAudioBucket::Contains(class UAkAudioEvent* AudioEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EventAudioBucket", "Contains");

	Params::UEventAudioBucket_Contains_Params Parms{};

	Parms.AudioEvent = AudioEvent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NWXAudio.EventAudioBucket.CalculateInitialPriorityScore
// (Final, BlueprintCosmetic, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAkAudioEvent*               AudioEvent                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  EventTransform                                                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  ListenerTransform                                                (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UEventAudioBucket::CalculateInitialPriorityScore(class UAkAudioEvent* AudioEvent, struct FTransform& EventTransform, struct FTransform& ListenerTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EventAudioBucket", "CalculateInitialPriorityScore");

	Params::UEventAudioBucket_CalculateInitialPriorityScore_Params Parms{};

	Parms.AudioEvent = AudioEvent;
	Parms.EventTransform = EventTransform;
	Parms.ListenerTransform = ListenerTransform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class NWXAudio.ForestReverbComponent
// (SceneComponent)

class UClass* UForestReverbComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ForestReverbComponent");

	return Clss;
}


// ForestReverbComponent NWXAudio.Default__ForestReverbComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UForestReverbComponent* UForestReverbComponent::GetDefaultObj()
{
	static class UForestReverbComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UForestReverbComponent*>(UForestReverbComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class NWXAudio.ScopedAkComponent
// (SceneComponent)

class UClass* UScopedAkComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ScopedAkComponent");

	return Clss;
}


// ScopedAkComponent NWXAudio.Default__ScopedAkComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UScopedAkComponent* UScopedAkComponent::GetDefaultObj()
{
	static class UScopedAkComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UScopedAkComponent*>(UScopedAkComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function NWXAudio.ScopedAkComponent.TryResumeInfiniteEvents
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UScopedAkComponent::TryResumeInfiniteEvents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScopedAkComponent", "TryResumeInfiniteEvents");

	Params::UScopedAkComponent_TryResumeInfiniteEvents_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NWXAudio.ScopedAkComponent.TryResume
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UAkAudioEvent*               PotentialEvent                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UScopedAkComponent::TryResume(class UAkAudioEvent* PotentialEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScopedAkComponent", "TryResume");

	Params::UScopedAkComponent_TryResume_Params Parms{};

	Parms.PotentialEvent = PotentialEvent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NWXAudio.ScopedAkComponent.StopAllInfiniteEvents
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:

void UScopedAkComponent::StopAllInfiniteEvents()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScopedAkComponent", "StopAllInfiniteEvents");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function NWXAudio.ScopedAkComponent.SetMultiPositions
// (Final, BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FTransform>          MultiPositions                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// enum class EAkMultiPositionType    MultiPositionType                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UScopedAkComponent::SetMultiPositions(TArray<struct FTransform>& MultiPositions, enum class EAkMultiPositionType MultiPositionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScopedAkComponent", "SetMultiPositions");

	Params::UScopedAkComponent_SetMultiPositions_Params Parms{};

	Parms.MultiPositions = MultiPositions;
	Parms.MultiPositionType = MultiPositionType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXAudio.ScopedAkComponent.Seek
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UAkAudioEvent*               AkEvent                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Percentage                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSeekToNearestMarker                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UScopedAkComponent::Seek(class UAkAudioEvent* AkEvent, float Percentage, bool bSeekToNearestMarker)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScopedAkComponent", "Seek");

	Params::UScopedAkComponent_Seek_Params Parms{};

	Parms.AkEvent = AkEvent;
	Parms.Percentage = Percentage;
	Parms.bSeekToNearestMarker = bSeekToNearestMarker;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NWXAudio.ScopedAkComponent.PostAsyncAkEventScoped
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// TSoftObjectPtr<class UAkAudioEvent>AkEvent                                                          (Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSoftObjectPtr<class UAkAudioEvent>StopEvent                                                        (Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UScopedAkComponent::PostAsyncAkEventScoped(TSoftObjectPtr<class UAkAudioEvent> AkEvent, TSoftObjectPtr<class UAkAudioEvent> StopEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScopedAkComponent", "PostAsyncAkEventScoped");

	Params::UScopedAkComponent_PostAsyncAkEventScoped_Params Parms{};

	Parms.AkEvent = AkEvent;
	Parms.StopEvent = StopEvent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NWXAudio.ScopedAkComponent.PostAkEventScopedWithCallback
// (Final, BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UAkAudioEvent*               AkEvent                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAkAudioEvent*               StopEvent                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              CallbackMask                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 PostEventCallback                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UScopedAkComponent::PostAkEventScopedWithCallback(class UAkAudioEvent* AkEvent, class UAkAudioEvent* StopEvent, int32 CallbackMask, FDelegateProperty_& PostEventCallback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScopedAkComponent", "PostAkEventScopedWithCallback");

	Params::UScopedAkComponent_PostAkEventScopedWithCallback_Params Parms{};

	Parms.AkEvent = AkEvent;
	Parms.StopEvent = StopEvent;
	Parms.CallbackMask = CallbackMask;
	Parms.PostEventCallback = PostEventCallback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NWXAudio.ScopedAkComponent.PostAkEventScoped
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UAkAudioEvent*               AkEvent                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAkAudioEvent*               StopEvent                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UScopedAkComponent::PostAkEventScoped(class UAkAudioEvent* AkEvent, class UAkAudioEvent* StopEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScopedAkComponent", "PostAkEventScoped");

	Params::UScopedAkComponent_PostAkEventScoped_Params Parms{};

	Parms.AkEvent = AkEvent;
	Parms.StopEvent = StopEvent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NWXAudio.ScopedAkComponent.IsSuspended
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UScopedAkComponent::IsSuspended()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScopedAkComponent", "IsSuspended");

	Params::UScopedAkComponent_IsSuspended_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NWXAudio.ScopedAkComponent.IsInRange
// (BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAkAudioEvent*               PotentialEvent                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UScopedAkComponent::IsInRange(class UAkAudioEvent* PotentialEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScopedAkComponent", "IsInRange");

	Params::UScopedAkComponent_IsInRange_Params Parms{};

	Parms.PotentialEvent = PotentialEvent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NWXAudio.ScopedAkComponent.IsInfiniteEventRegistered
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAkAudioEvent*               StartLoopEvent                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UScopedAkComponent::IsInfiniteEventRegistered(class UAkAudioEvent* StartLoopEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScopedAkComponent", "IsInfiniteEventRegistered");

	Params::UScopedAkComponent_IsInfiniteEventRegistered_Params Parms{};

	Parms.StartLoopEvent = StartLoopEvent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NWXAudio.ScopedAkComponent.IsIdle
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UScopedAkComponent::IsIdle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScopedAkComponent", "IsIdle");

	Params::UScopedAkComponent_IsIdle_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NWXAudio.ScopedAkComponent.GetScopedAkComponentLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UScopedAkComponent::GetScopedAkComponentLocation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScopedAkComponent", "GetScopedAkComponentLocation");

	Params::UScopedAkComponent_GetScopedAkComponentLocation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NWXAudio.ScopedAkComponent.DuplicateComponentSettings
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UScopedAkComponent*          Other                                                            (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UScopedAkComponent::DuplicateComponentSettings(class UScopedAkComponent* Other)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ScopedAkComponent", "DuplicateComponentSettings");

	Params::UScopedAkComponent_DuplicateComponentSettings_Params Parms{};

	Parms.Other = Other;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class NWXAudio.GlobalAudioAkComponent
// (SceneComponent)

class UClass* UGlobalAudioAkComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GlobalAudioAkComponent");

	return Clss;
}


// GlobalAudioAkComponent NWXAudio.Default__GlobalAudioAkComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UGlobalAudioAkComponent* UGlobalAudioAkComponent::GetDefaultObj()
{
	static class UGlobalAudioAkComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UGlobalAudioAkComponent*>(UGlobalAudioAkComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class NWXAudio.GlobalAudioData
// (None)

class UClass* UGlobalAudioData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GlobalAudioData");

	return Clss;
}


// GlobalAudioData NWXAudio.Default__GlobalAudioData
// (Public, ClassDefaultObject, ArchetypeObject)

class UGlobalAudioData* UGlobalAudioData::GetDefaultObj()
{
	static class UGlobalAudioData* Default = nullptr;

	if (!Default)
		Default = static_cast<UGlobalAudioData*>(UGlobalAudioData::StaticClass()->DefaultObject);

	return Default;
}


// Class NWXAudio.GlobalAudioSubsystem
// (None)

class UClass* UGlobalAudioSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GlobalAudioSubsystem");

	return Clss;
}


// GlobalAudioSubsystem NWXAudio.Default__GlobalAudioSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UGlobalAudioSubsystem* UGlobalAudioSubsystem::GetDefaultObj()
{
	static class UGlobalAudioSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UGlobalAudioSubsystem*>(UGlobalAudioSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function NWXAudio.GlobalAudioSubsystem.TryGetPuddleOverride
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPhysicalMaterial*           PhysicalMaterial                                                 (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PuddleOverrideOut                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGlobalAudioSubsystem::TryGetPuddleOverride(class UPhysicalMaterial* PhysicalMaterial, float* PuddleOverrideOut)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalAudioSubsystem", "TryGetPuddleOverride");

	Params::UGlobalAudioSubsystem_TryGetPuddleOverride_Params Parms{};

	Parms.PhysicalMaterial = PhysicalMaterial;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (PuddleOverrideOut != nullptr)
		*PuddleOverrideOut = Parms.PuddleOverrideOut;

	return Parms.ReturnValue;

}


// Function NWXAudio.GlobalAudioSubsystem.TryGetPhysicalMaterialObstructionOcclusionCoefficients
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPhysicalMaterial*           PhysicalMaterial                                                 (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ObstructionCoefficientOut                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OcclusionCoefficientOut                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGlobalAudioSubsystem::TryGetPhysicalMaterialObstructionOcclusionCoefficients(class UPhysicalMaterial* PhysicalMaterial, float* ObstructionCoefficientOut, float* OcclusionCoefficientOut)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalAudioSubsystem", "TryGetPhysicalMaterialObstructionOcclusionCoefficients");

	Params::UGlobalAudioSubsystem_TryGetPhysicalMaterialObstructionOcclusionCoefficients_Params Parms{};

	Parms.PhysicalMaterial = PhysicalMaterial;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ObstructionCoefficientOut != nullptr)
		*ObstructionCoefficientOut = Parms.ObstructionCoefficientOut;

	if (OcclusionCoefficientOut != nullptr)
		*OcclusionCoefficientOut = Parms.OcclusionCoefficientOut;

	return Parms.ReturnValue;

}


// Function NWXAudio.GlobalAudioSubsystem.SetVoiceChatTestInputMic
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// bool                               TestMicOn                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGlobalAudioSubsystem::SetVoiceChatTestInputMic(bool TestMicOn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalAudioSubsystem", "SetVoiceChatTestInputMic");

	Params::UGlobalAudioSubsystem_SetVoiceChatTestInputMic_Params Parms{};

	Parms.TestMicOn = TestMicOn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXAudio.GlobalAudioSubsystem.SetVoiceChatSendMode
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVoiceChatMode          ChatMode                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGlobalAudioSubsystem::SetVoiceChatSendMode(enum class EVoiceChatMode ChatMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalAudioSubsystem", "SetVoiceChatSendMode");

	Params::UGlobalAudioSubsystem_SetVoiceChatSendMode_Params Parms{};

	Parms.ChatMode = ChatMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXAudio.GlobalAudioSubsystem.SetVoiceChatPushToTalk
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// bool                               PushHeld                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGlobalAudioSubsystem::SetVoiceChatPushToTalk(bool PushHeld)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalAudioSubsystem", "SetVoiceChatPushToTalk");

	Params::UGlobalAudioSubsystem_SetVoiceChatPushToTalk_Params Parms{};

	Parms.PushHeld = PushHeld;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXAudio.GlobalAudioSubsystem.SetVoiceChatMicVolume
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// float                              MicVolume                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGlobalAudioSubsystem::SetVoiceChatMicVolume(float MicVolume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalAudioSubsystem", "SetVoiceChatMicVolume");

	Params::UGlobalAudioSubsystem_SetVoiceChatMicVolume_Params Parms{};

	Parms.MicVolume = MicVolume;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXAudio.GlobalAudioSubsystem.SetVoiceChatMicActivationMode
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVoiceChatMicMode       MicMode                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGlobalAudioSubsystem::SetVoiceChatMicActivationMode(enum class EVoiceChatMicMode MicMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalAudioSubsystem", "SetVoiceChatMicActivationMode");

	Params::UGlobalAudioSubsystem_SetVoiceChatMicActivationMode_Params Parms{};

	Parms.MicMode = MicMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXAudio.GlobalAudioSubsystem.SetVoiceChatListenMode
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVoiceChatMode          ChatMode                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGlobalAudioSubsystem::SetVoiceChatListenMode(enum class EVoiceChatMode ChatMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalAudioSubsystem", "SetVoiceChatListenMode");

	Params::UGlobalAudioSubsystem_SetVoiceChatListenMode_Params Parms{};

	Parms.ChatMode = ChatMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXAudio.GlobalAudioSubsystem.SetVoiceChatEnabled
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Enable                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGlobalAudioSubsystem::SetVoiceChatEnabled(bool Enable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalAudioSubsystem", "SetVoiceChatEnabled");

	Params::UGlobalAudioSubsystem_SetVoiceChatEnabled_Params Parms{};

	Parms.Enable = Enable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXAudio.GlobalAudioSubsystem.SetVoiceChatEffect
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVoiceChatVoiceEffectModeEffectMode                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGlobalAudioSubsystem::SetVoiceChatEffect(enum class EVoiceChatVoiceEffectMode EffectMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalAudioSubsystem", "SetVoiceChatEffect");

	Params::UGlobalAudioSubsystem_SetVoiceChatEffect_Params Parms{};

	Parms.EffectMode = EffectMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXAudio.GlobalAudioSubsystem.SetMovieVolumeMultiplier
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// float                              VolMultLinear                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGlobalAudioSubsystem::SetMovieVolumeMultiplier(float VolMultLinear)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalAudioSubsystem", "SetMovieVolumeMultiplier");

	Params::UGlobalAudioSubsystem_SetMovieVolumeMultiplier_Params Parms{};

	Parms.VolMultLinear = VolMultLinear;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXAudio.GlobalAudioSubsystem.SetMixStateActive
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// enum class EAudioMixState          MixStateType                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Active                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGlobalAudioSubsystem::SetMixStateActive(enum class EAudioMixState MixStateType, bool Active)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalAudioSubsystem", "SetMixStateActive");

	Params::UGlobalAudioSubsystem_SetMixStateActive_Params Parms{};

	Parms.MixStateType = MixStateType;
	Parms.Active = Active;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXAudio.GlobalAudioSubsystem.SetIsLocalPlayerInCombat
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// bool                               IsInCombat                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGlobalAudioSubsystem::SetIsLocalPlayerInCombat(bool IsInCombat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalAudioSubsystem", "SetIsLocalPlayerInCombat");

	Params::UGlobalAudioSubsystem_SetIsLocalPlayerInCombat_Params Parms{};

	Parms.IsInCombat = IsInCombat;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXAudio.GlobalAudioSubsystem.ResetMixStateToMenu
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:

void UGlobalAudioSubsystem::ResetMixStateToMenu()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalAudioSubsystem", "ResetMixStateToMenu");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction NWXAudio.GlobalAudioSubsystem.OnRemoteVoipPlayerTransmissionChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class FString                      PlayerName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsSpeaking                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsLocalPlayer                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      UniqueID                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGlobalAudioSubsystem::OnRemoteVoipPlayerTransmissionChanged__DelegateSignature(const class FString& PlayerName, bool IsSpeaking, bool IsLocalPlayer, const class FString& UniqueID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalAudioSubsystem", "OnRemoteVoipPlayerTransmissionChanged__DelegateSignature");

	Params::UGlobalAudioSubsystem_OnRemoteVoipPlayerTransmissionChanged__DelegateSignature_Params Parms{};

	Parms.PlayerName = PlayerName;
	Parms.IsSpeaking = IsSpeaking;
	Parms.IsLocalPlayer = IsLocalPlayer;
	Parms.UniqueID = UniqueID;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction NWXAudio.GlobalAudioSubsystem.OnRemoteVoipPlayerListenStateChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class FString                      PlayerName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsListening                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsLocalPlayer                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGlobalAudioSubsystem::OnRemoteVoipPlayerListenStateChanged__DelegateSignature(const class FString& PlayerName, bool IsListening, bool IsLocalPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalAudioSubsystem", "OnRemoteVoipPlayerListenStateChanged__DelegateSignature");

	Params::UGlobalAudioSubsystem_OnRemoteVoipPlayerListenStateChanged__DelegateSignature_Params Parms{};

	Parms.PlayerName = PlayerName;
	Parms.IsListening = IsListening;
	Parms.IsLocalPlayer = IsLocalPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction NWXAudio.GlobalAudioSubsystem.OnLocalPlayerVoipMicStatusChanged__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// bool                               MicOpen                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               MicTransmitting                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGlobalAudioSubsystem::OnLocalPlayerVoipMicStatusChanged__DelegateSignature(bool MicOpen, bool MicTransmitting)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalAudioSubsystem", "OnLocalPlayerVoipMicStatusChanged__DelegateSignature");

	Params::UGlobalAudioSubsystem_OnLocalPlayerVoipMicStatusChanged__DelegateSignature_Params Parms{};

	Parms.MicOpen = MicOpen;
	Parms.MicTransmitting = MicTransmitting;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction NWXAudio.GlobalAudioSubsystem.OnLocalPlayerExitedCombat__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UGlobalAudioSubsystem::OnLocalPlayerExitedCombat__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalAudioSubsystem", "OnLocalPlayerExitedCombat__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// DelegateFunction NWXAudio.GlobalAudioSubsystem.OnLocalPlayerEnteredCombat__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:

void UGlobalAudioSubsystem::OnLocalPlayerEnteredCombat__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalAudioSubsystem", "OnLocalPlayerEnteredCombat__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function NWXAudio.GlobalAudioSubsystem.IsVoipPlayerTransmitting
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      UniquePlayerId                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGlobalAudioSubsystem::IsVoipPlayerTransmitting(const class FString& UniquePlayerId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalAudioSubsystem", "IsVoipPlayerTransmitting");

	Params::UGlobalAudioSubsystem_IsVoipPlayerTransmitting_Params Parms{};

	Parms.UniquePlayerId = UniquePlayerId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NWXAudio.GlobalAudioSubsystem.IsVoipPlayerListening
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      UniquePlayerId                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGlobalAudioSubsystem::IsVoipPlayerListening(const class FString& UniquePlayerId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalAudioSubsystem", "IsVoipPlayerListening");

	Params::UGlobalAudioSubsystem_IsVoipPlayerListening_Params Parms{};

	Parms.UniquePlayerId = UniquePlayerId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NWXAudio.GlobalAudioSubsystem.IsMixStateActive
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// enum class EAudioMixState          MixState                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGlobalAudioSubsystem::IsMixStateActive(enum class EAudioMixState MixState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalAudioSubsystem", "IsMixStateActive");

	Params::UGlobalAudioSubsystem_IsMixStateActive_Params Parms{};

	Parms.MixState = MixState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NWXAudio.GlobalAudioSubsystem.IsEventPlaying
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UAkAudioEvent*               Event                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              PlayingID                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGlobalAudioSubsystem::IsEventPlaying(class UAkAudioEvent* Event, int32 PlayingID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalAudioSubsystem", "IsEventPlaying");

	Params::UGlobalAudioSubsystem_IsEventPlaying_Params Parms{};

	Parms.Event = Event;
	Parms.PlayingID = PlayingID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NWXAudio.GlobalAudioSubsystem.GetVUMeterDisplayColor
// (Final, BlueprintCosmetic, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// float                              ValueDecibels                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TargetValue                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaxValue                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MinValue                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLinearColor                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FLinearColor UGlobalAudioSubsystem::GetVUMeterDisplayColor(float ValueDecibels, float TargetValue, float MaxValue, float MinValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalAudioSubsystem", "GetVUMeterDisplayColor");

	Params::UGlobalAudioSubsystem_GetVUMeterDisplayColor_Params Parms{};

	Parms.ValueDecibels = ValueDecibels;
	Parms.TargetValue = TargetValue;
	Parms.MaxValue = MaxValue;
	Parms.MinValue = MinValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NWXAudio.GlobalAudioSubsystem.GetMovieVolume
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      MovieFileURL                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UGlobalAudioSubsystem::GetMovieVolume(const class FString& MovieFileURL)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalAudioSubsystem", "GetMovieVolume");

	Params::UGlobalAudioSubsystem_GetMovieVolume_Params Parms{};

	Parms.MovieFileURL = MovieFileURL;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NWXAudio.GlobalAudioSubsystem.GetLocalPlayerVoipMicStatus
// (Final, BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               MicOpen                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               MicTransmitting                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGlobalAudioSubsystem::GetLocalPlayerVoipMicStatus(bool* MicOpen, bool* MicTransmitting)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalAudioSubsystem", "GetLocalPlayerVoipMicStatus");

	Params::UGlobalAudioSubsystem_GetLocalPlayerVoipMicStatus_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (MicOpen != nullptr)
		*MicOpen = Parms.MicOpen;

	if (MicTransmitting != nullptr)
		*MicTransmitting = Parms.MicTransmitting;

}


// Function NWXAudio.GlobalAudioSubsystem.GetIsLocalPlayerInCombat
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGlobalAudioSubsystem::GetIsLocalPlayerInCombat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalAudioSubsystem", "GetIsLocalPlayerInCombat");

	Params::UGlobalAudioSubsystem_GetIsLocalPlayerInCombat_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NWXAudio.GlobalAudioSubsystem.GetInputMicLevelDecibels
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UGlobalAudioSubsystem::GetInputMicLevelDecibels()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalAudioSubsystem", "GetInputMicLevelDecibels");

	Params::UGlobalAudioSubsystem_GetInputMicLevelDecibels_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NWXAudio.GlobalAudioSubsystem.GetImpactSweetenerEffectTags
// (Final, BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FGameplayTag>        OutGameplayTags                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UGlobalAudioSubsystem::GetImpactSweetenerEffectTags(TArray<struct FGameplayTag>* OutGameplayTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalAudioSubsystem", "GetImpactSweetenerEffectTags");

	Params::UGlobalAudioSubsystem_GetImpactSweetenerEffectTags_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutGameplayTags != nullptr)
		*OutGameplayTags = std::move(Parms.OutGameplayTags);

}


// Function NWXAudio.GlobalAudioSubsystem.GetDebugAudioEvent
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAkAudioEvent*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAkAudioEvent* UGlobalAudioSubsystem::GetDebugAudioEvent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalAudioSubsystem", "GetDebugAudioEvent");

	Params::UGlobalAudioSubsystem_GetDebugAudioEvent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NWXAudio.GlobalAudioSubsystem.GetAudioMaxHealthClamped
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              MaxHealthValue                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UGlobalAudioSubsystem::GetAudioMaxHealthClamped(float MaxHealthValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalAudioSubsystem", "GetAudioMaxHealthClamped");

	Params::UGlobalAudioSubsystem_GetAudioMaxHealthClamped_Params Parms{};

	Parms.MaxHealthValue = MaxHealthValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class NWXAudio.GlobalMusicData
// (None)

class UClass* UGlobalMusicData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GlobalMusicData");

	return Clss;
}


// GlobalMusicData NWXAudio.Default__GlobalMusicData
// (Public, ClassDefaultObject, ArchetypeObject)

class UGlobalMusicData* UGlobalMusicData::GetDefaultObj()
{
	static class UGlobalMusicData* Default = nullptr;

	if (!Default)
		Default = static_cast<UGlobalMusicData*>(UGlobalMusicData::StaticClass()->DefaultObject);

	return Default;
}


// Class NWXAudio.GlobalMusicManager
// (None)

class UClass* UGlobalMusicManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GlobalMusicManager");

	return Clss;
}


// GlobalMusicManager NWXAudio.Default__GlobalMusicManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UGlobalMusicManager* UGlobalMusicManager::GetDefaultObj()
{
	static class UGlobalMusicManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UGlobalMusicManager*>(UGlobalMusicManager::StaticClass()->DefaultObject);

	return Default;
}


// Function NWXAudio.GlobalMusicManager.StopMusic
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:

void UGlobalMusicManager::StopMusic()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalMusicManager", "StopMusic");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function NWXAudio.GlobalMusicManager.StartMusic
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:

void UGlobalMusicManager::StartMusic()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalMusicManager", "StartMusic");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function NWXAudio.GlobalMusicManager.SetPrimaryMusicState
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UAkStateValue*               MusicState                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGlobalMusicManager::SetPrimaryMusicState(class UAkStateValue* MusicState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalMusicManager", "SetPrimaryMusicState");

	Params::UGlobalMusicManager_SetPrimaryMusicState_Params Parms{};

	Parms.MusicState = MusicState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXAudio.GlobalMusicManager.SetPlayerReadyState
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:

void UGlobalMusicManager::SetPlayerReadyState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalMusicManager", "SetPlayerReadyState");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function NWXAudio.GlobalMusicManager.SetMusicRTPC
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UAkRtpc*                     MusicRTPC                                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              InterpolationTimeMS                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGlobalMusicManager::SetMusicRTPC(class UAkRtpc* MusicRTPC, float Value, int32 InterpolationTimeMS)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalMusicManager", "SetMusicRTPC");

	Params::UGlobalMusicManager_SetMusicRTPC_Params Parms{};

	Parms.MusicRTPC = MusicRTPC;
	Parms.Value = Value;
	Parms.InterpolationTimeMS = InterpolationTimeMS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXAudio.GlobalMusicManager.SetDefaultMusicState
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:

void UGlobalMusicManager::SetDefaultMusicState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalMusicManager", "SetDefaultMusicState");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function NWXAudio.GlobalMusicManager.PostMusicEvent
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable)
// Parameters:
// class UAkAudioEvent*               MusicEvent                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAkAudioEvent*               StopMusicEvent                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGlobalMusicManager::PostMusicEvent(class UAkAudioEvent* MusicEvent, class UAkAudioEvent* StopMusicEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalMusicManager", "PostMusicEvent");

	Params::UGlobalMusicManager_PostMusicEvent_Params Parms{};

	Parms.MusicEvent = MusicEvent;
	Parms.StopMusicEvent = StopMusicEvent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXAudio.GlobalMusicManager.PostEventCallbackFunc
// (Native, Event, Public, BlueprintEvent)
// Parameters:
// enum class EAkCallbackType         In_eType                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAkCallbackInfo*             In_pCallbackInfo                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGlobalMusicManager::PostEventCallbackFunc(enum class EAkCallbackType In_eType, class UAkCallbackInfo* In_pCallbackInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalMusicManager", "PostEventCallbackFunc");

	Params::UGlobalMusicManager_PostEventCallbackFunc_Params Parms{};

	Parms.In_eType = In_eType;
	Parms.In_pCallbackInfo = In_pCallbackInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXAudio.GlobalMusicManager.GetMusicComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UGlobalAudioAkComponent*     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UGlobalAudioAkComponent* UGlobalMusicManager::GetMusicComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalMusicManager", "GetMusicComponent");

	Params::UGlobalMusicManager_GetMusicComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NWXAudio.GlobalMusicManager.GetCurrentPrimaryMusicState
// (Final, BlueprintCosmetic, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAkStateValue*               ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAkStateValue* UGlobalMusicManager::GetCurrentPrimaryMusicState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalMusicManager", "GetCurrentPrimaryMusicState");

	Params::UGlobalMusicManager_GetCurrentPrimaryMusicState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class NWXAudio.NWXAudioFunctionLibrary
// (None)

class UClass* UNWXAudioFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NWXAudioFunctionLibrary");

	return Clss;
}


// NWXAudioFunctionLibrary NWXAudio.Default__NWXAudioFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UNWXAudioFunctionLibrary* UNWXAudioFunctionLibrary::GetDefaultObj()
{
	static class UNWXAudioFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UNWXAudioFunctionLibrary*>(UNWXAudioFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function NWXAudio.NWXAudioFunctionLibrary.UseComponentForDefaultListenerPosition
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USceneComponent*             SceneComponent                                                   (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNWXAudioFunctionLibrary::UseComponentForDefaultListenerPosition(class USceneComponent* SceneComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NWXAudioFunctionLibrary", "UseComponentForDefaultListenerPosition");

	Params::UNWXAudioFunctionLibrary_UseComponentForDefaultListenerPosition_Params Parms{};

	Parms.SceneComponent = SceneComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXAudio.NWXAudioFunctionLibrary.SpawnScopedAkComponentAtLocation
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAkAudioEvent*               AkEvent                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Orientation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               AutoPost                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               AutoDestroy                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UScopedAkComponent*          ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UScopedAkComponent* UNWXAudioFunctionLibrary::SpawnScopedAkComponentAtLocation(class UObject* WorldContextObject, class UAkAudioEvent* AkEvent, struct FVector& Location, const struct FRotator& Orientation, bool AutoPost, bool AutoDestroy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NWXAudioFunctionLibrary", "SpawnScopedAkComponentAtLocation");

	Params::UNWXAudioFunctionLibrary_SpawnScopedAkComponentAtLocation_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.AkEvent = AkEvent;
	Parms.Location = Location;
	Parms.Orientation = Orientation;
	Parms.AutoPost = AutoPost;
	Parms.AutoDestroy = AutoDestroy;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NWXAudio.NWXAudioFunctionLibrary.SetMultiPositions
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UAkComponent*                GameObjectAkComponent                                            (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FTransform>          Positions                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// enum class EAkMultiPositionType    MultiPositionType                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UNWXAudioFunctionLibrary::SetMultiPositions(class UAkComponent* GameObjectAkComponent, TArray<struct FTransform>& Positions, enum class EAkMultiPositionType MultiPositionType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NWXAudioFunctionLibrary", "SetMultiPositions");

	Params::UNWXAudioFunctionLibrary_SetMultiPositions_Params Parms{};

	Parms.GameObjectAkComponent = GameObjectAkComponent;
	Parms.Positions = Positions;
	Parms.MultiPositionType = MultiPositionType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXAudio.NWXAudioFunctionLibrary.ServerPlayOneShotForNearbyPlayers
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              PlayerRadius                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSoftObjectPtr<class UAkAudioEvent>AudioEvent                                                       (ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>             AudioLocations                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<TSoftObjectPtr<class UAkSwitchValue>>Switches                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, UObjectWrapper, NativeAccessSpecifierPublic)
// TArray<struct FRTPCValuePair>      RTPCValues                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UNWXAudioFunctionLibrary::ServerPlayOneShotForNearbyPlayers(class UObject* WorldContextObject, float PlayerRadius, TSoftObjectPtr<class UAkAudioEvent>& AudioEvent, TArray<struct FVector>& AudioLocations, TArray<TSoftObjectPtr<class UAkSwitchValue>>& Switches, TArray<struct FRTPCValuePair>& RTPCValues)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NWXAudioFunctionLibrary", "ServerPlayOneShotForNearbyPlayers");

	Params::UNWXAudioFunctionLibrary_ServerPlayOneShotForNearbyPlayers_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.PlayerRadius = PlayerRadius;
	Parms.AudioEvent = AudioEvent;
	Parms.AudioLocations = AudioLocations;
	Parms.Switches = Switches;
	Parms.RTPCValues = RTPCValues;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXAudio.NWXAudioFunctionLibrary.SeekIntoEvent
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAkComponent*                AkComponent                                                      (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAkAudioEvent*               AkEvent                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Percentage                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bSeekToNearestMarker                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNWXAudioFunctionLibrary::SeekIntoEvent(class UAkComponent* AkComponent, class UAkAudioEvent* AkEvent, float Percentage, bool bSeekToNearestMarker)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NWXAudioFunctionLibrary", "SeekIntoEvent");

	Params::UNWXAudioFunctionLibrary_SeekIntoEvent_Params Parms{};

	Parms.AkComponent = AkComponent;
	Parms.AkEvent = AkEvent;
	Parms.Percentage = Percentage;
	Parms.bSeekToNearestMarker = bSeekToNearestMarker;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NWXAudio.NWXAudioFunctionLibrary.LoadAndPlayAudioAtLocation
// (Final, BlueprintCosmetic, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSoftObjectPtr<class UAkAudioEvent>AudioEvent                                                       (ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>             Locations                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<TSoftObjectPtr<class UAkSwitchValue>>Switches                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, UObjectWrapper, NativeAccessSpecifierPublic)
// TArray<struct FRTPCValuePair>      RTPCValues                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UNWXAudioFunctionLibrary::LoadAndPlayAudioAtLocation(class UObject* WorldContextObject, TSoftObjectPtr<class UAkAudioEvent>& AudioEvent, TArray<struct FVector>& Locations, TArray<TSoftObjectPtr<class UAkSwitchValue>>& Switches, TArray<struct FRTPCValuePair>& RTPCValues)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NWXAudioFunctionLibrary", "LoadAndPlayAudioAtLocation");

	Params::UNWXAudioFunctionLibrary_LoadAndPlayAudioAtLocation_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.AudioEvent = AudioEvent;
	Parms.Locations = Locations;
	Parms.Switches = Switches;
	Parms.RTPCValues = RTPCValues;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXAudio.NWXAudioFunctionLibrary.GetReducedAudioComponent
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UScopedAkComponent*          ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UScopedAkComponent* UNWXAudioFunctionLibrary::GetReducedAudioComponent(class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NWXAudioFunctionLibrary", "GetReducedAudioComponent");

	Params::UNWXAudioFunctionLibrary_GetReducedAudioComponent_Params Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NWXAudio.NWXAudioFunctionLibrary.GetPrintAudioLogsToScreen
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UNWXAudioFunctionLibrary::GetPrintAudioLogsToScreen()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NWXAudioFunctionLibrary", "GetPrintAudioLogsToScreen");

	Params::UNWXAudioFunctionLibrary_GetPrintAudioLogsToScreen_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NWXAudio.NWXAudioFunctionLibrary.GetListenerTransform
// (Final, BlueprintCosmetic, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FTransform                  ReturnValue                                                      (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FTransform UNWXAudioFunctionLibrary::GetListenerTransform()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NWXAudioFunctionLibrary", "GetListenerTransform");

	Params::UNWXAudioFunctionLibrary_GetListenerTransform_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NWXAudio.NWXAudioFunctionLibrary.GetListenerLocation
// (Final, BlueprintCosmetic, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UNWXAudioFunctionLibrary::GetListenerLocation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NWXAudioFunctionLibrary", "GetListenerLocation");

	Params::UNWXAudioFunctionLibrary_GetListenerLocation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NWXAudio.NWXAudioFunctionLibrary.GetDynamicGeometryRangeSquared
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UNWXAudioFunctionLibrary::GetDynamicGeometryRangeSquared()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NWXAudioFunctionLibrary", "GetDynamicGeometryRangeSquared");

	Params::UNWXAudioFunctionLibrary_GetDynamicGeometryRangeSquared_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NWXAudio.NWXAudioFunctionLibrary.GetDynamicGeometryRange
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UNWXAudioFunctionLibrary::GetDynamicGeometryRange()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NWXAudioFunctionLibrary", "GetDynamicGeometryRange");

	Params::UNWXAudioFunctionLibrary_GetDynamicGeometryRange_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NWXAudio.NWXAudioFunctionLibrary.GetAudioEventSubsystem
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAudioEventSubsystem*        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAudioEventSubsystem* UNWXAudioFunctionLibrary::GetAudioEventSubsystem(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NWXAudioFunctionLibrary", "GetAudioEventSubsystem");

	Params::UNWXAudioFunctionLibrary_GetAudioEventSubsystem_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NWXAudio.NWXAudioFunctionLibrary.GetAudioComponentForBucket
// (Final, BlueprintCosmetic, Native, Static, Public, BlueprintCallable)
// Parameters:
// class AActor*                      Actor                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UComponentAudioBucket*       Bucket                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UScopedAkComponent*          ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UScopedAkComponent* UNWXAudioFunctionLibrary::GetAudioComponentForBucket(class AActor* Actor, class UComponentAudioBucket* Bucket)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NWXAudioFunctionLibrary", "GetAudioComponentForBucket");

	Params::UNWXAudioFunctionLibrary_GetAudioComponentForBucket_Params Parms{};

	Parms.Actor = Actor;
	Parms.Bucket = Bucket;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NWXAudio.NWXAudioFunctionLibrary.GetAnimationEditorWaterDepth
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UNWXAudioFunctionLibrary::GetAnimationEditorWaterDepth()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NWXAudioFunctionLibrary", "GetAnimationEditorWaterDepth");

	Params::UNWXAudioFunctionLibrary_GetAnimationEditorWaterDepth_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NWXAudio.NWXAudioFunctionLibrary.GetAnimationEditorSwitch
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAkSwitchValue*              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAkSwitchValue* UNWXAudioFunctionLibrary::GetAnimationEditorSwitch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NWXAudioFunctionLibrary", "GetAnimationEditorSwitch");

	Params::UNWXAudioFunctionLibrary_GetAnimationEditorSwitch_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NWXAudio.NWXAudioFunctionLibrary.GetAnimationEditorSocketForBucket
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UComponentAudioBucket*       Bucket                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName UNWXAudioFunctionLibrary::GetAnimationEditorSocketForBucket(class UComponentAudioBucket* Bucket)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NWXAudioFunctionLibrary", "GetAnimationEditorSocketForBucket");

	Params::UNWXAudioFunctionLibrary_GetAnimationEditorSocketForBucket_Params Parms{};

	Parms.Bucket = Bucket;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NWXAudio.NWXAudioFunctionLibrary.GetAnimationEditorPersistentScopedAkComponent
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UComponentAudioBucket*       Bucket                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UScopedAkComponent*          ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UScopedAkComponent* UNWXAudioFunctionLibrary::GetAnimationEditorPersistentScopedAkComponent(class UObject* WorldContextObject, class UComponentAudioBucket* Bucket)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NWXAudioFunctionLibrary", "GetAnimationEditorPersistentScopedAkComponent");

	Params::UNWXAudioFunctionLibrary_GetAnimationEditorPersistentScopedAkComponent_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Bucket = Bucket;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function NWXAudio.NWXAudioFunctionLibrary.GetAnimationEditorMaterialSwitch
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UAkSwitchValue*              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAkSwitchValue* UNWXAudioFunctionLibrary::GetAnimationEditorMaterialSwitch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NWXAudioFunctionLibrary", "GetAnimationEditorMaterialSwitch");

	Params::UNWXAudioFunctionLibrary_GetAnimationEditorMaterialSwitch_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class NWXAudio.NWXAudioSettings
// (None)

class UClass* UNWXAudioSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NWXAudioSettings");

	return Clss;
}


// NWXAudioSettings NWXAudio.Default__NWXAudioSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UNWXAudioSettings* UNWXAudioSettings::GetDefaultObj()
{
	static class UNWXAudioSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UNWXAudioSettings*>(UNWXAudioSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class NWXAudio.NWXAudioSettingsPerUser
// (None)

class UClass* UNWXAudioSettingsPerUser::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NWXAudioSettingsPerUser");

	return Clss;
}


// NWXAudioSettingsPerUser NWXAudio.Default__NWXAudioSettingsPerUser
// (Public, ClassDefaultObject, ArchetypeObject)

class UNWXAudioSettingsPerUser* UNWXAudioSettingsPerUser::GetDefaultObj()
{
	static class UNWXAudioSettingsPerUser* Default = nullptr;

	if (!Default)
		Default = static_cast<UNWXAudioSettingsPerUser*>(UNWXAudioSettingsPerUser::StaticClass()->DefaultObject);

	return Default;
}


// Class NWXAudio.PannableInterface
// (None)

class UClass* IPannableInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PannableInterface");

	return Clss;
}


// PannableInterface NWXAudio.Default__PannableInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class IPannableInterface* IPannableInterface::GetDefaultObj()
{
	static class IPannableInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<IPannableInterface*>(IPannableInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class NWXAudio.PrimitiveAkLateReverbComponent
// (SceneComponent)

class UClass* UPrimitiveAkLateReverbComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimitiveAkLateReverbComponent");

	return Clss;
}


// PrimitiveAkLateReverbComponent NWXAudio.Default__PrimitiveAkLateReverbComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UPrimitiveAkLateReverbComponent* UPrimitiveAkLateReverbComponent::GetDefaultObj()
{
	static class UPrimitiveAkLateReverbComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimitiveAkLateReverbComponent*>(UPrimitiveAkLateReverbComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class NWXAudio.PrimitiveDirectionalAkLateReverbComponent
// (SceneComponent)

class UClass* UPrimitiveDirectionalAkLateReverbComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrimitiveDirectionalAkLateReverbComponent");

	return Clss;
}


// PrimitiveDirectionalAkLateReverbComponent NWXAudio.Default__PrimitiveDirectionalAkLateReverbComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UPrimitiveDirectionalAkLateReverbComponent* UPrimitiveDirectionalAkLateReverbComponent::GetDefaultObj()
{
	static class UPrimitiveDirectionalAkLateReverbComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrimitiveDirectionalAkLateReverbComponent*>(UPrimitiveDirectionalAkLateReverbComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class NWXAudio.ReplicatedAudioComponent
// (None)

class UClass* UReplicatedAudioComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ReplicatedAudioComponent");

	return Clss;
}


// ReplicatedAudioComponent NWXAudio.Default__ReplicatedAudioComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UReplicatedAudioComponent* UReplicatedAudioComponent::GetDefaultObj()
{
	static class UReplicatedAudioComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UReplicatedAudioComponent*>(UReplicatedAudioComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function NWXAudio.ReplicatedAudioComponent.ServerReplicateOneShotAudio
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, Const)
// Parameters:
// TSoftObjectPtr<class UAkAudioEvent>AudioEvent                                                       (ConstParm, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>             Locations                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<TSoftObjectPtr<class UAkSwitchValue>>Switches                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, UObjectWrapper, NativeAccessSpecifierPublic)
// TArray<struct FRTPCValuePair>      RTPCValues                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UReplicatedAudioComponent::ServerReplicateOneShotAudio(TSoftObjectPtr<class UAkAudioEvent>& AudioEvent, TArray<struct FVector>& Locations, TArray<TSoftObjectPtr<class UAkSwitchValue>>& Switches, TArray<struct FRTPCValuePair>& RTPCValues)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReplicatedAudioComponent", "ServerReplicateOneShotAudio");

	Params::UReplicatedAudioComponent_ServerReplicateOneShotAudio_Params Parms{};

	Parms.AudioEvent = AudioEvent;
	Parms.Locations = Locations;
	Parms.Switches = Switches;
	Parms.RTPCValues = RTPCValues;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function NWXAudio.ReplicatedAudioComponent.ClientReplicateOneShotAudio
// (Final, Net, Native, Event, Private, NetClient, Const)
// Parameters:
// TSoftObjectPtr<class UAkAudioEvent>AudioEvent                                                       (ConstParm, Parm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>             Locations                                                        (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<TSoftObjectPtr<class UAkSwitchValue>>Switches                                                         (ConstParm, Parm, ZeroConstructor, ReferenceParm, UObjectWrapper, NativeAccessSpecifierPublic)
// TArray<struct FRTPCValuePair>      RTPCValues                                                       (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UReplicatedAudioComponent::ClientReplicateOneShotAudio(TSoftObjectPtr<class UAkAudioEvent>& AudioEvent, TArray<struct FVector>& Locations, TArray<TSoftObjectPtr<class UAkSwitchValue>>& Switches, TArray<struct FRTPCValuePair>& RTPCValues)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReplicatedAudioComponent", "ClientReplicateOneShotAudio");

	Params::UReplicatedAudioComponent_ClientReplicateOneShotAudio_Params Parms{};

	Parms.AudioEvent = AudioEvent;
	Parms.Locations = Locations;
	Parms.Switches = Switches;
	Parms.RTPCValues = RTPCValues;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class NWXAudio.VoiceSetSelectorComponent
// (None)

class UClass* UVoiceSetSelectorComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VoiceSetSelectorComponent");

	return Clss;
}


// VoiceSetSelectorComponent NWXAudio.Default__VoiceSetSelectorComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UVoiceSetSelectorComponent* UVoiceSetSelectorComponent::GetDefaultObj()
{
	static class UVoiceSetSelectorComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UVoiceSetSelectorComponent*>(UVoiceSetSelectorComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class NWXAudio.VoiceSetSubsystem
// (None)

class UClass* UVoiceSetSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VoiceSetSubsystem");

	return Clss;
}


// VoiceSetSubsystem NWXAudio.Default__VoiceSetSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UVoiceSetSubsystem* UVoiceSetSubsystem::GetDefaultObj()
{
	static class UVoiceSetSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UVoiceSetSubsystem*>(UVoiceSetSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function NWXAudio.VoiceSetSubsystem.GetRandomVoiceSet
// (Final, BlueprintCosmetic, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class AActor*                      RequestingActor                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UAkSwitchValue*>      PossibleVoiceSets                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class UAkSwitchValue*              ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAkSwitchValue* UVoiceSetSubsystem::GetRandomVoiceSet(class AActor* RequestingActor, TArray<class UAkSwitchValue*>& PossibleVoiceSets)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VoiceSetSubsystem", "GetRandomVoiceSet");

	Params::UVoiceSetSubsystem_GetRandomVoiceSet_Params Parms{};

	Parms.RequestingActor = RequestingActor;
	Parms.PossibleVoiceSets = PossibleVoiceSets;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


