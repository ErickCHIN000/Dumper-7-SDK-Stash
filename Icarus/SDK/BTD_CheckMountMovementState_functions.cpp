#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTD_CheckMountMovementState.BTD_CheckMountMovementState_C
// (None)

class UClass* UBTD_CheckMountMovementState_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTD_CheckMountMovementState_C");

	return Clss;
}


// BTD_CheckMountMovementState_C BTD_CheckMountMovementState.Default__BTD_CheckMountMovementState_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTD_CheckMountMovementState_C* UBTD_CheckMountMovementState_C::GetDefaultObj()
{
	static class UBTD_CheckMountMovementState_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTD_CheckMountMovementState_C*>(UBTD_CheckMountMovementState_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTD_CheckMountMovementState.BTD_CheckMountMovementState_C.PerformConditionCheck
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_GetBlackboardValueAsEnum_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBTD_CheckMountMovementState_C::PerformConditionCheck(class AActor* OwnerActor, uint8 CallFunc_GetBlackboardValueAsEnum_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTD_CheckMountMovementState_C", "PerformConditionCheck");

	Params::UBTD_CheckMountMovementState_C_PerformConditionCheck_Params Parms{};

	Parms.OwnerActor = OwnerActor;
	Parms.CallFunc_GetBlackboardValueAsEnum_ReturnValue = CallFunc_GetBlackboardValueAsEnum_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


