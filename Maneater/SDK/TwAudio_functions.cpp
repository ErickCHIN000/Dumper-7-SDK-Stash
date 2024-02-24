#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class TwAudio.TwAkAmbientVolume
// (Actor)

class UClass* ATwAkAmbientVolume::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwAkAmbientVolume");

	return Clss;
}


// TwAkAmbientVolume TwAudio.Default__TwAkAmbientVolume
// (Public, ClassDefaultObject, ArchetypeObject)

class ATwAkAmbientVolume* ATwAkAmbientVolume::GetDefaultObj()
{
	static class ATwAkAmbientVolume* Default = nullptr;

	if (!Default)
		Default = static_cast<ATwAkAmbientVolume*>(ATwAkAmbientVolume::StaticClass()->DefaultObject);

	return Default;
}


// Class TwAudio.TwAkEmitterArrayActor
// (Actor)

class UClass* ATwAkEmitterArrayActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwAkEmitterArrayActor");

	return Clss;
}


// TwAkEmitterArrayActor TwAudio.Default__TwAkEmitterArrayActor
// (Public, ClassDefaultObject, ArchetypeObject)

class ATwAkEmitterArrayActor* ATwAkEmitterArrayActor::GetDefaultObj()
{
	static class ATwAkEmitterArrayActor* Default = nullptr;

	if (!Default)
		Default = static_cast<ATwAkEmitterArrayActor*>(ATwAkEmitterArrayActor::StaticClass()->DefaultObject);

	return Default;
}


// Class TwAudio.TwAkEmitterArrayComponent
// (None)

class UClass* UTwAkEmitterArrayComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwAkEmitterArrayComponent");

	return Clss;
}


// TwAkEmitterArrayComponent TwAudio.Default__TwAkEmitterArrayComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UTwAkEmitterArrayComponent* UTwAkEmitterArrayComponent::GetDefaultObj()
{
	static class UTwAkEmitterArrayComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwAkEmitterArrayComponent*>(UTwAkEmitterArrayComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function TwAudio.TwAkEmitterArrayComponent.PostEvent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAkAudioEvent*               Event                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTwAkEmitterArrayComponent::PostEvent(class UAkAudioEvent* Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwAkEmitterArrayComponent", "PostEvent");

	Params::UTwAkEmitterArrayComponent_PostEvent_Params Parms{};

	Parms.Event = Event;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TwAudio.TwAkEmitterArrayComponent.EnableVoice
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UTwAkEmitterArrayComponent::EnableVoice()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwAkEmitterArrayComponent", "EnableVoice");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function TwAudio.TwAkEmitterArrayComponent.DisableVoice
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UTwAkEmitterArrayComponent::DisableVoice()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwAkEmitterArrayComponent", "DisableVoice");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Class TwAudio.TwAkReverbVolume
// (Actor)

class UClass* ATwAkReverbVolume::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwAkReverbVolume");

	return Clss;
}


// TwAkReverbVolume TwAudio.Default__TwAkReverbVolume
// (Public, ClassDefaultObject, ArchetypeObject)

class ATwAkReverbVolume* ATwAkReverbVolume::GetDefaultObj()
{
	static class ATwAkReverbVolume* Default = nullptr;

	if (!Default)
		Default = static_cast<ATwAkReverbVolume*>(ATwAkReverbVolume::StaticClass()->DefaultObject);

	return Default;
}


// Class TwAudio.TwRTPCTrigger
// (Actor)

class UClass* ATwRTPCTrigger::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwRTPCTrigger");

	return Clss;
}


// TwRTPCTrigger TwAudio.Default__TwRTPCTrigger
// (Public, ClassDefaultObject, ArchetypeObject)

class ATwRTPCTrigger* ATwRTPCTrigger::GetDefaultObj()
{
	static class ATwRTPCTrigger* Default = nullptr;

	if (!Default)
		Default = static_cast<ATwRTPCTrigger*>(ATwRTPCTrigger::StaticClass()->DefaultObject);

	return Default;
}


// Class TwAudio.TwAkSplineProximityEffectsComponent
// (SceneComponent)

class UClass* UTwAkSplineProximityEffectsComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwAkSplineProximityEffectsComponent");

	return Clss;
}


// TwAkSplineProximityEffectsComponent TwAudio.Default__TwAkSplineProximityEffectsComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UTwAkSplineProximityEffectsComponent* UTwAkSplineProximityEffectsComponent::GetDefaultObj()
{
	static class UTwAkSplineProximityEffectsComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwAkSplineProximityEffectsComponent*>(UTwAkSplineProximityEffectsComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function TwAudio.TwAkSplineProximityEffectsComponent.EndOverlap
// (Final, Native, Private)
// Parameters:
// class AActor*                      A1                                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      A2                                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTwAkSplineProximityEffectsComponent::EndOverlap(class AActor* A1, class AActor* A2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwAkSplineProximityEffectsComponent", "EndOverlap");

	Params::UTwAkSplineProximityEffectsComponent_EndOverlap_Params Parms{};

	Parms.A1 = A1;
	Parms.A2 = A2;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function TwAudio.TwAkSplineProximityEffectsComponent.BeginOverlap
// (Final, Native, Private)
// Parameters:
// class AActor*                      A1                                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AActor*                      A2                                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTwAkSplineProximityEffectsComponent::BeginOverlap(class AActor* A1, class AActor* A2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TwAkSplineProximityEffectsComponent", "BeginOverlap");

	Params::UTwAkSplineProximityEffectsComponent_BeginOverlap_Params Parms{};

	Parms.A1 = A1;
	Parms.A2 = A2;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class TwAudio.TwAmbienceMap
// (Actor)

class UClass* ATwAmbienceMap::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwAmbienceMap");

	return Clss;
}


// TwAmbienceMap TwAudio.Default__TwAmbienceMap
// (Public, ClassDefaultObject, ArchetypeObject)

class ATwAmbienceMap* ATwAmbienceMap::GetDefaultObj()
{
	static class ATwAmbienceMap* Default = nullptr;

	if (!Default)
		Default = static_cast<ATwAmbienceMap*>(ATwAmbienceMap::StaticClass()->DefaultObject);

	return Default;
}


// Class TwAudio.TwAnimNotify_PostAkEvent
// (None)

class UClass* UTwAnimNotify_PostAkEvent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwAnimNotify_PostAkEvent");

	return Clss;
}


// TwAnimNotify_PostAkEvent TwAudio.Default__TwAnimNotify_PostAkEvent
// (Public, ClassDefaultObject, ArchetypeObject)

class UTwAnimNotify_PostAkEvent* UTwAnimNotify_PostAkEvent::GetDefaultObj()
{
	static class UTwAnimNotify_PostAkEvent* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwAnimNotify_PostAkEvent*>(UTwAnimNotify_PostAkEvent::StaticClass()->DefaultObject);

	return Default;
}


// Class TwAudio.TwSoundShapeLibrary
// (None)

class UClass* UTwSoundShapeLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwSoundShapeLibrary");

	return Clss;
}


// TwSoundShapeLibrary TwAudio.Default__TwSoundShapeLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UTwSoundShapeLibrary* UTwSoundShapeLibrary::GetDefaultObj()
{
	static class UTwSoundShapeLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UTwSoundShapeLibrary*>(UTwSoundShapeLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Class TwAudio.TwSplineEmitterBase
// (Actor)

class UClass* ATwSplineEmitterBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TwSplineEmitterBase");

	return Clss;
}


// TwSplineEmitterBase TwAudio.Default__TwSplineEmitterBase
// (Public, ClassDefaultObject, ArchetypeObject)

class ATwSplineEmitterBase* ATwSplineEmitterBase::GetDefaultObj()
{
	static class ATwSplineEmitterBase* Default = nullptr;

	if (!Default)
		Default = static_cast<ATwSplineEmitterBase*>(ATwSplineEmitterBase::StaticClass()->DefaultObject);

	return Default;
}

}


