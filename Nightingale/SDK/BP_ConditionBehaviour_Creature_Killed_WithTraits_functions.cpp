#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ConditionBehaviour_Creature_Killed_WithTraits.BP_ConditionBehaviour_Creature_Killed_WithTraits_C
// (None)

class UClass* UBP_ConditionBehaviour_Creature_Killed_WithTraits_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ConditionBehaviour_Creature_Killed_WithTraits_C");

	return Clss;
}


// BP_ConditionBehaviour_Creature_Killed_WithTraits_C BP_ConditionBehaviour_Creature_Killed_WithTraits.Default__BP_ConditionBehaviour_Creature_Killed_WithTraits_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ConditionBehaviour_Creature_Killed_WithTraits_C* UBP_ConditionBehaviour_Creature_Killed_WithTraits_C::GetDefaultObj()
{
	static class UBP_ConditionBehaviour_Creature_Killed_WithTraits_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ConditionBehaviour_Creature_Killed_WithTraits_C*>(UBP_ConditionBehaviour_Creature_Killed_WithTraits_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ConditionBehaviour_Creature_Killed_WithTraits.BP_ConditionBehaviour_Creature_Killed_WithTraits_C.CheckCreatureTags
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGameplayTagContainer       CurrentCreatureTags                                              (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               bHasCreatureTraits                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bHasTags                                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAllTags_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyTags_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ConditionBehaviour_Creature_Killed_WithTraits_C::CheckCreatureTags(const struct FGameplayTagContainer& CurrentCreatureTags, bool* bHasCreatureTraits, bool bHasTags, bool CallFunc_HasAllTags_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_HasAnyTags_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_Creature_Killed_WithTraits_C", "CheckCreatureTags");

	Params::UBP_ConditionBehaviour_Creature_Killed_WithTraits_C_CheckCreatureTags_Params Parms{};

	Parms.CurrentCreatureTags = CurrentCreatureTags;
	Parms.bHasTags = bHasTags;
	Parms.CallFunc_HasAllTags_ReturnValue = CallFunc_HasAllTags_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_HasAnyTags_ReturnValue = CallFunc_HasAnyTags_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bHasCreatureTraits != nullptr)
		*bHasCreatureTraits = Parms.bHasCreatureTraits;

}


// Function BP_ConditionBehaviour_Creature_Killed_WithTraits.BP_ConditionBehaviour_Creature_Killed_WithTraits_C.GetCreatureTraitInfo
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FText                        CreatureTraitInfo                                                (Parm, OutParm)

void UBP_ConditionBehaviour_Creature_Killed_WithTraits_C::GetCreatureTraitInfo(class FText* CreatureTraitInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_Creature_Killed_WithTraits_C", "GetCreatureTraitInfo");

	Params::UBP_ConditionBehaviour_Creature_Killed_WithTraits_C_GetCreatureTraitInfo_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CreatureTraitInfo != nullptr)
		*CreatureTraitInfo = Parms.CreatureTraitInfo;

}

}


