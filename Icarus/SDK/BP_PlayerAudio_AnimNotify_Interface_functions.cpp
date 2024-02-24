#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_PlayerAudio_AnimNotify_Interface.BP_PlayerAudio_AnimNotify_Interface_C
// (None)

class UClass* IBP_PlayerAudio_AnimNotify_Interface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PlayerAudio_AnimNotify_Interface_C");

	return Clss;
}


// BP_PlayerAudio_AnimNotify_Interface_C BP_PlayerAudio_AnimNotify_Interface.Default__BP_PlayerAudio_AnimNotify_Interface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBP_PlayerAudio_AnimNotify_Interface_C* IBP_PlayerAudio_AnimNotify_Interface_C::GetDefaultObj()
{
	static class IBP_PlayerAudio_AnimNotify_Interface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBP_PlayerAudio_AnimNotify_Interface_C*>(IBP_PlayerAudio_AnimNotify_Interface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PlayerAudio_AnimNotify_Interface.BP_PlayerAudio_AnimNotify_Interface_C.OnFootstepAnimNotify
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFootstepType           FootstepType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EPlayerAudioStance      PlayerStance                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_PlayerAudio_AnimNotify_Interface_C::OnFootstepAnimNotify(enum class EFootstepType FootstepType, enum class EPlayerAudioStance PlayerStance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerAudio_AnimNotify_Interface_C", "OnFootstepAnimNotify");

	Params::IBP_PlayerAudio_AnimNotify_Interface_C_OnFootstepAnimNotify_Params Parms{};

	Parms.FootstepType = FootstepType;
	Parms.PlayerStance = PlayerStance;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerAudio_AnimNotify_Interface.BP_PlayerAudio_AnimNotify_Interface_C.OnSwimStrokeAnimNotify
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IBP_PlayerAudio_AnimNotify_Interface_C::OnSwimStrokeAnimNotify()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PlayerAudio_AnimNotify_Interface_C", "OnSwimStrokeAnimNotify");



	UObject::ProcessEvent(Func, nullptr);

}

}


