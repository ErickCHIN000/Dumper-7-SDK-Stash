#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTD_CheckLastMountMovementResult.BTD_CheckLastMountMovementResult_C
// (None)

class UClass* UBTD_CheckLastMountMovementResult_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTD_CheckLastMountMovementResult_C");

	return Clss;
}


// BTD_CheckLastMountMovementResult_C BTD_CheckLastMountMovementResult.Default__BTD_CheckLastMountMovementResult_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTD_CheckLastMountMovementResult_C* UBTD_CheckLastMountMovementResult_C::GetDefaultObj()
{
	static class UBTD_CheckLastMountMovementResult_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTD_CheckLastMountMovementResult_C*>(UBTD_CheckLastMountMovementResult_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTD_CheckLastMountMovementResult.BTD_CheckLastMountMovementResult_C.PerformConditionCheck
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_GetBlackboardValueAsEnum_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBTD_CheckLastMountMovementResult_C::PerformConditionCheck(class AActor* OwnerActor, uint8 CallFunc_GetBlackboardValueAsEnum_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTD_CheckLastMountMovementResult_C", "PerformConditionCheck");

	Params::UBTD_CheckLastMountMovementResult_C_PerformConditionCheck_Params Parms{};

	Parms.OwnerActor = OwnerActor;
	Parms.CallFunc_GetBlackboardValueAsEnum_ReturnValue = CallFunc_GetBlackboardValueAsEnum_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


