#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTD_IsTagCooldownActive.BTD_IsTagCooldownActive_C
// (None)

class UClass* UBTD_IsTagCooldownActive_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTD_IsTagCooldownActive_C");

	return Clss;
}


// BTD_IsTagCooldownActive_C BTD_IsTagCooldownActive.Default__BTD_IsTagCooldownActive_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTD_IsTagCooldownActive_C* UBTD_IsTagCooldownActive_C::GetDefaultObj()
{
	static class UBTD_IsTagCooldownActive_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTD_IsTagCooldownActive_C*>(UBTD_IsTagCooldownActive_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTD_IsTagCooldownActive.BTD_IsTagCooldownActive_C.PerformConditionCheck
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBehaviorTreeComponent*      CallFunc_GetOwnerComponent_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTagCooldownEndTime_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBTD_IsTagCooldownActive_C::PerformConditionCheck(class AActor* OwnerActor, float CallFunc_GetGameTimeInSeconds_ReturnValue, class UBehaviorTreeComponent* CallFunc_GetOwnerComponent_ReturnValue, float CallFunc_GetTagCooldownEndTime_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTD_IsTagCooldownActive_C", "PerformConditionCheck");

	Params::UBTD_IsTagCooldownActive_C_PerformConditionCheck_Params Parms{};

	Parms.OwnerActor = OwnerActor;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_GetOwnerComponent_ReturnValue = CallFunc_GetOwnerComponent_ReturnValue;
	Parms.CallFunc_GetTagCooldownEndTime_ReturnValue = CallFunc_GetTagCooldownEndTime_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


