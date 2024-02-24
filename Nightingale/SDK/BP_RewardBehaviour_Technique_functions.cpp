#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_RewardBehaviour_Technique.BP_RewardBehaviour_Technique_C
// (None)

class UClass* UBP_RewardBehaviour_Technique_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_RewardBehaviour_Technique_C");

	return Clss;
}


// BP_RewardBehaviour_Technique_C BP_RewardBehaviour_Technique.Default__BP_RewardBehaviour_Technique_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_RewardBehaviour_Technique_C* UBP_RewardBehaviour_Technique_C::GetDefaultObj()
{
	static class UBP_RewardBehaviour_Technique_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_RewardBehaviour_Technique_C*>(UBP_RewardBehaviour_Technique_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_RewardBehaviour_Technique.BP_RewardBehaviour_Technique_C.GetSkillsToReward
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FSkillReferenceContainer    SkillReferences                                                  (Parm, OutParm)
// TArray<struct FSkillDataReference> K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FSkillReferenceContainer    K2Node_MakeStruct_SkillReferenceContainer                        (None)

void UBP_RewardBehaviour_Technique_C::GetSkillsToReward(struct FSkillReferenceContainer* SkillReferences, TArray<struct FSkillDataReference>& K2Node_MakeArray_Array, const struct FSkillReferenceContainer& K2Node_MakeStruct_SkillReferenceContainer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_RewardBehaviour_Technique_C", "GetSkillsToReward");

	Params::UBP_RewardBehaviour_Technique_C_GetSkillsToReward_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeStruct_SkillReferenceContainer = K2Node_MakeStruct_SkillReferenceContainer;

	UObject::ProcessEvent(Func, &Parms);

	if (SkillReferences != nullptr)
		*SkillReferences = std::move(Parms.SkillReferences);

}

}


