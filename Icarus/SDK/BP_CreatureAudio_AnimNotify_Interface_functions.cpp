#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CreatureAudio_AnimNotify_Interface.BP_CreatureAudio_AnimNotify_Interface_C
// (None)

class UClass* IBP_CreatureAudio_AnimNotify_Interface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CreatureAudio_AnimNotify_Interface_C");

	return Clss;
}


// BP_CreatureAudio_AnimNotify_Interface_C BP_CreatureAudio_AnimNotify_Interface.Default__BP_CreatureAudio_AnimNotify_Interface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBP_CreatureAudio_AnimNotify_Interface_C* IBP_CreatureAudio_AnimNotify_Interface_C::GetDefaultObj()
{
	static class IBP_CreatureAudio_AnimNotify_Interface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBP_CreatureAudio_AnimNotify_Interface_C*>(IBP_CreatureAudio_AnimNotify_Interface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_CreatureAudio_AnimNotify_Interface.BP_CreatureAudio_AnimNotify_Interface_C.OnVocalisationAnimNotify
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EAIVocalisationType     VocalisationType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_CreatureAudio_AnimNotify_Interface_C::OnVocalisationAnimNotify(enum class EAIVocalisationType VocalisationType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureAudio_AnimNotify_Interface_C", "OnVocalisationAnimNotify");

	Params::IBP_CreatureAudio_AnimNotify_Interface_C_OnVocalisationAnimNotify_Params Parms{};

	Parms.VocalisationType = VocalisationType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CreatureAudio_AnimNotify_Interface.BP_CreatureAudio_AnimNotify_Interface_C.OnFootstepAnimNotify
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECreatureFootstepType   FootstepType                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECreatureFootstepDirectionFootstepDirection                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IBP_CreatureAudio_AnimNotify_Interface_C::OnFootstepAnimNotify(enum class ECreatureFootstepType FootstepType, enum class ECreatureFootstepDirection FootstepDirection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_CreatureAudio_AnimNotify_Interface_C", "OnFootstepAnimNotify");

	Params::IBP_CreatureAudio_AnimNotify_Interface_C_OnFootstepAnimNotify_Params Parms{};

	Parms.FootstepType = FootstepType;
	Parms.FootstepDirection = FootstepDirection;

	UObject::ProcessEvent(Func, &Parms);

}

}


