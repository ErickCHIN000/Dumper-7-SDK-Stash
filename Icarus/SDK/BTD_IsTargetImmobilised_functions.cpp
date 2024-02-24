#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTD_IsTargetImmobilised.BTD_IsTargetImmobilised_C
// (None)

class UClass* UBTD_IsTargetImmobilised_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTD_IsTargetImmobilised_C");

	return Clss;
}


// BTD_IsTargetImmobilised_C BTD_IsTargetImmobilised.Default__BTD_IsTargetImmobilised_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTD_IsTargetImmobilised_C* UBTD_IsTargetImmobilised_C::GetDefaultObj()
{
	static class UBTD_IsTargetImmobilised_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTD_IsTargetImmobilised_C*>(UBTD_IsTargetImmobilised_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTD_IsTargetImmobilised.BTD_IsTargetImmobilised_C.PerformConditionCheck
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetBlackboardValueAsActor_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasModifierState_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBTD_IsTargetImmobilised_C::PerformConditionCheck(class AActor* OwnerActor, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, bool CallFunc_HasModifierState_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTD_IsTargetImmobilised_C", "PerformConditionCheck");

	Params::UBTD_IsTargetImmobilised_C_PerformConditionCheck_Params Parms{};

	Parms.OwnerActor = OwnerActor;
	Parms.CallFunc_GetBlackboardValueAsActor_ReturnValue = CallFunc_GetBlackboardValueAsActor_ReturnValue;
	Parms.CallFunc_HasModifierState_ReturnValue = CallFunc_HasModifierState_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


