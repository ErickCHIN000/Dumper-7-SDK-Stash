#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class GVoiceWrapper.VoipInputAkComponent
// (SceneComponent)

class UClass* UVoipInputAkComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VoipInputAkComponent");

	return Clss;
}


// VoipInputAkComponent GVoiceWrapper.Default__VoipInputAkComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UVoipInputAkComponent* UVoipInputAkComponent::GetDefaultObj()
{
	static class UVoipInputAkComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UVoipInputAkComponent*>(UVoipInputAkComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class GVoiceWrapper.VoipWrapperSubsystem
// (None)

class UClass* UVoipWrapperSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VoipWrapperSubsystem");

	return Clss;
}


// VoipWrapperSubsystem GVoiceWrapper.Default__VoipWrapperSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UVoipWrapperSubsystem* UVoipWrapperSubsystem::GetDefaultObj()
{
	static class UVoipWrapperSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UVoipWrapperSubsystem*>(UVoipWrapperSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function GVoiceWrapper.VoipWrapperSubsystem.OnMuteStatusChanged
// (Final, Native, Private)
// Parameters:
// class FString                      UniquePlayerId                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMuteAction             MuteAction                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVoipWrapperSubsystem::OnMuteStatusChanged(const class FString& UniquePlayerId, enum class EMuteAction MuteAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VoipWrapperSubsystem", "OnMuteStatusChanged");

	Params::UVoipWrapperSubsystem_OnMuteStatusChanged_Params Parms{};

	Parms.UniquePlayerId = UniquePlayerId;
	Parms.MuteAction = MuteAction;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


