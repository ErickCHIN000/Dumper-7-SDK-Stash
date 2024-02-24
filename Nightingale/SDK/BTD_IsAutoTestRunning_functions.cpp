#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTD_IsAutoTestRunning.BTD_IsAutoTestRunning_C
// (None)

class UClass* UBTD_IsAutoTestRunning_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTD_IsAutoTestRunning_C");

	return Clss;
}


// BTD_IsAutoTestRunning_C BTD_IsAutoTestRunning.Default__BTD_IsAutoTestRunning_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTD_IsAutoTestRunning_C* UBTD_IsAutoTestRunning_C::GetDefaultObj()
{
	static class UBTD_IsAutoTestRunning_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTD_IsAutoTestRunning_C*>(UBTD_IsAutoTestRunning_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTD_IsAutoTestRunning.BTD_IsAutoTestRunning_C.PerformConditionCheck
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_AreAutomatedTestsRunning_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UBTD_IsAutoTestRunning_C::PerformConditionCheck(class AActor* OwnerActor, bool CallFunc_AreAutomatedTestsRunning_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTD_IsAutoTestRunning_C", "PerformConditionCheck");

	Params::UBTD_IsAutoTestRunning_C_PerformConditionCheck_Params Parms{};

	Parms.OwnerActor = OwnerActor;
	Parms.CallFunc_AreAutomatedTestsRunning_ReturnValue = CallFunc_AreAutomatedTestsRunning_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


