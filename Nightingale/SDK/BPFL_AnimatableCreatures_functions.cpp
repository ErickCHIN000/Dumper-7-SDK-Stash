#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPFL_AnimatableCreatures.BPFL_AnimatableCreatures_C
// (None)

class UClass* UBPFL_AnimatableCreatures_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPFL_AnimatableCreatures_C");

	return Clss;
}


// BPFL_AnimatableCreatures_C BPFL_AnimatableCreatures.Default__BPFL_AnimatableCreatures_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPFL_AnimatableCreatures_C* UBPFL_AnimatableCreatures_C::GetDefaultObj()
{
	static class UBPFL_AnimatableCreatures_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPFL_AnimatableCreatures_C*>(UBPFL_AnimatableCreatures_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPFL_AnimatableCreatures.BPFL_AnimatableCreatures_C.IsTagActive
// (Static, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              TagToCheckCount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                TagToCheck                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                TagOfInterest                                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                               BoolToSet                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __WorldContext                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPFL_AnimatableCreatures_C::IsTagActive(int32 TagToCheckCount, const struct FGameplayTag& TagToCheck, const struct FGameplayTag& TagOfInterest, bool& BoolToSet, class UObject* __WorldContext, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPFL_AnimatableCreatures_C", "IsTagActive");

	Params::UBPFL_AnimatableCreatures_C_IsTagActive_Params Parms{};

	Parms.TagToCheckCount = TagToCheckCount;
	Parms.TagToCheck = TagToCheck;
	Parms.TagOfInterest = TagOfInterest;
	Parms.BoolToSet = BoolToSet;
	Parms.__WorldContext = __WorldContext;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue = CallFunc_EqualEqual_GameplayTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


