#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Init_MissionRewardLevel.Init_MissionRewardLevel_C
// (None)

class UClass* UInit_MissionRewardLevel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Init_MissionRewardLevel_C");

	return Clss;
}


// Init_MissionRewardLevel_C Init_MissionRewardLevel.Default__Init_MissionRewardLevel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInit_MissionRewardLevel_C* UInit_MissionRewardLevel_C::GetDefaultObj()
{
	static class UInit_MissionRewardLevel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInit_MissionRewardLevel_C*>(UInit_MissionRewardLevel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Init_MissionRewardLevel.Init_MissionRewardLevel_C.CalculateAttributeInitialValue
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOakMission*                 K2Node_DynamicCast_AsOak_Mission                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetMissionLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UInit_MissionRewardLevel_C::CalculateAttributeInitialValue(class UObject* Context, class UOakMission* K2Node_DynamicCast_AsOak_Mission, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetMissionLevel_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Init_MissionRewardLevel_C", "CalculateAttributeInitialValue");

	Params::UInit_MissionRewardLevel_C_CalculateAttributeInitialValue_Params Parms{};

	Parms.Context = Context;
	Parms.K2Node_DynamicCast_AsOak_Mission = K2Node_DynamicCast_AsOak_Mission;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetMissionLevel_ReturnValue = CallFunc_GetMissionLevel_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


