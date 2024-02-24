#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Init_ChallengeRewardLevel.Init_ChallengeRewardLevel_C
// (None)

class UClass* UInit_ChallengeRewardLevel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Init_ChallengeRewardLevel_C");

	return Clss;
}


// Init_ChallengeRewardLevel_C Init_ChallengeRewardLevel.Default__Init_ChallengeRewardLevel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInit_ChallengeRewardLevel_C* UInit_ChallengeRewardLevel_C::GetDefaultObj()
{
	static class UInit_ChallengeRewardLevel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInit_ChallengeRewardLevel_C*>(UInit_ChallengeRewardLevel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Init_ChallengeRewardLevel.Init_ChallengeRewardLevel_C.CalculateAttributeInitialValue
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakChallenge*               K2Node_DynamicCast_AsOak_Challenge                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetChallengeLevel_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UInit_ChallengeRewardLevel_C::CalculateAttributeInitialValue(class UObject* Context, class UOakChallenge* K2Node_DynamicCast_AsOak_Challenge, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetChallengeLevel_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Init_ChallengeRewardLevel_C", "CalculateAttributeInitialValue");

	Params::UInit_ChallengeRewardLevel_C_CalculateAttributeInitialValue_Params Parms{};

	Parms.Context = Context;
	Parms.K2Node_DynamicCast_AsOak_Challenge = K2Node_DynamicCast_AsOak_Challenge;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetChallengeLevel_ReturnValue = CallFunc_GetChallengeLevel_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


