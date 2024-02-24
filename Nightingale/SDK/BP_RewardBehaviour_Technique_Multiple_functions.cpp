#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RewardBehaviour_Technique_Multiple.BP_RewardBehaviour_Technique_Multiple_C
// (None)

class UClass* UBP_RewardBehaviour_Technique_Multiple_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RewardBehaviour_Technique_Multiple_C");

	return Clss;
}


// BP_RewardBehaviour_Technique_Multiple_C BP_RewardBehaviour_Technique_Multiple.Default__BP_RewardBehaviour_Technique_Multiple_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_RewardBehaviour_Technique_Multiple_C* UBP_RewardBehaviour_Technique_Multiple_C::GetDefaultObj()
{
	static class UBP_RewardBehaviour_Technique_Multiple_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_RewardBehaviour_Technique_Multiple_C*>(UBP_RewardBehaviour_Technique_Multiple_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_RewardBehaviour_Technique_Multiple.BP_RewardBehaviour_Technique_Multiple_C.GetSkillsToReward
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FSkillReferenceContainer    SkillReferences                                                  (Parm, OutParm)

void UBP_RewardBehaviour_Technique_Multiple_C::GetSkillsToReward(struct FSkillReferenceContainer* SkillReferences)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RewardBehaviour_Technique_Multiple_C", "GetSkillsToReward");

	Params::UBP_RewardBehaviour_Technique_Multiple_C_GetSkillsToReward_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (SkillReferences != nullptr)
		*SkillReferences = std::move(Parms.SkillReferences);

}

}


