#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTD_CheckMountCombatState.BTD_CheckMountCombatState_C
// (None)

class UClass* UBTD_CheckMountCombatState_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTD_CheckMountCombatState_C");

	return Clss;
}


// BTD_CheckMountCombatState_C BTD_CheckMountCombatState.Default__BTD_CheckMountCombatState_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTD_CheckMountCombatState_C* UBTD_CheckMountCombatState_C::GetDefaultObj()
{
	static class UBTD_CheckMountCombatState_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTD_CheckMountCombatState_C*>(UBTD_CheckMountCombatState_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTD_CheckMountCombatState.BTD_CheckMountCombatState_C.PerformConditionCheck
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_GetBlackboardValueAsEnum_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UBTD_CheckMountCombatState_C::PerformConditionCheck(class AActor* OwnerActor, uint8 CallFunc_GetBlackboardValueAsEnum_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTD_CheckMountCombatState_C", "PerformConditionCheck");

	Params::UBTD_CheckMountCombatState_C_PerformConditionCheck_Params Parms{};

	Parms.OwnerActor = OwnerActor;
	Parms.CallFunc_GetBlackboardValueAsEnum_ReturnValue = CallFunc_GetBlackboardValueAsEnum_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


