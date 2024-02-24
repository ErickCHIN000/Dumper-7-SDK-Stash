#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_ConditionBehaviour_Creature_Killed_WithTrait_Specific.BP_ConditionBehaviour_Creature_Killed_WithTrait_Specific_C
// (None)

class UClass* UBP_ConditionBehaviour_Creature_Killed_WithTrait_Specific_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_ConditionBehaviour_Creature_Killed_WithTrait_Specific_C");

	return Clss;
}


// BP_ConditionBehaviour_Creature_Killed_WithTrait_Specific_C BP_ConditionBehaviour_Creature_Killed_WithTrait_Specific.Default__BP_ConditionBehaviour_Creature_Killed_WithTrait_Specific_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_ConditionBehaviour_Creature_Killed_WithTrait_Specific_C* UBP_ConditionBehaviour_Creature_Killed_WithTrait_Specific_C::GetDefaultObj()
{
	static class UBP_ConditionBehaviour_Creature_Killed_WithTrait_Specific_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_ConditionBehaviour_Creature_Killed_WithTrait_Specific_C*>(UBP_ConditionBehaviour_Creature_Killed_WithTrait_Specific_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_ConditionBehaviour_Creature_Killed_WithTrait_Specific.BP_ConditionBehaviour_Creature_Killed_WithTrait_Specific_C.CheckCreatureTags
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGameplayTagContainer       CurrentCreatureTags                                              (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               bHasCreatureTraits                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_ConditionBehaviour_Creature_Killed_WithTrait_Specific_C::CheckCreatureTags(const struct FGameplayTagContainer& CurrentCreatureTags, bool* bHasCreatureTraits, bool CallFunc_HasTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_Creature_Killed_WithTrait_Specific_C", "CheckCreatureTags");

	Params::UBP_ConditionBehaviour_Creature_Killed_WithTrait_Specific_C_CheckCreatureTags_Params Parms{};

	Parms.CurrentCreatureTags = CurrentCreatureTags;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bHasCreatureTraits != nullptr)
		*bHasCreatureTraits = Parms.bHasCreatureTraits;

}


// Function BP_ConditionBehaviour_Creature_Killed_WithTrait_Specific.BP_ConditionBehaviour_Creature_Killed_WithTrait_Specific_C.GetCreatureTraitInfo
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FText                        CreatureTraitInfo                                                (Parm, OutParm)
// class FString                      CallFunc_GetDebugStringFromGameplayTag_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UBP_ConditionBehaviour_Creature_Killed_WithTrait_Specific_C::GetCreatureTraitInfo(class FText* CreatureTraitInfo, const class FString& CallFunc_GetDebugStringFromGameplayTag_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_ConditionBehaviour_Creature_Killed_WithTrait_Specific_C", "GetCreatureTraitInfo");

	Params::UBP_ConditionBehaviour_Creature_Killed_WithTrait_Specific_C_GetCreatureTraitInfo_Params Parms{};

	Parms.CallFunc_GetDebugStringFromGameplayTag_ReturnValue = CallFunc_GetDebugStringFromGameplayTag_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CreatureTraitInfo != nullptr)
		*CreatureTraitInfo = Parms.CreatureTraitInfo;

}

}


