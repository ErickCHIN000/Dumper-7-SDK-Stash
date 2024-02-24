#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BaseTankAIController.BaseTankAIController_C
// (Actor)

class UClass* ABaseTankAIController_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BaseTankAIController_C");

	return Clss;
}


// BaseTankAIController_C BaseTankAIController.Default__BaseTankAIController_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABaseTankAIController_C* ABaseTankAIController_C::GetDefaultObj()
{
	static class ABaseTankAIController_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABaseTankAIController_C*>(ABaseTankAIController_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BaseTankAIController.BaseTankAIController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABaseTankAIController_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseTankAIController_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseTankAIController.BaseTankAIController_C.AIProcess
// (Event, Public, BlueprintEvent)
// Parameters:

void ABaseTankAIController_C::AIProcess()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseTankAIController_C", "AIProcess");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseTankAIController.BaseTankAIController_C.AIInit
// (Event, Public, BlueprintEvent)
// Parameters:

void ABaseTankAIController_C::AIInit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseTankAIController_C", "AIInit");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BaseTankAIController.BaseTankAIController_C.ExecuteUbergraph_BaseTankAIController
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEscapeDistance_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActionKeepDistance_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckHPLessThan_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckLockedOn_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_AttackWeaponRight_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_FinishParallelAttack_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ETTLAIYesNoEnum         CallFunc_SelectSPMove_OutputYesNo                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActionPatrolActionArea_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ActionPatrol_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ETTLAISlot              CallFunc_GetBestEvaluateTargetPoint_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActionPatrolTargetPoint_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ActionChase_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ActionGoAroundSide_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetModifiedBattleRange_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Check2DDistanceLessThan_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckDistanceLessThan_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetCombatDistance_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Check2DDistanceLessThan_ReturnValue1                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABaseTankAIController_C::ExecuteUbergraph_BaseTankAIController(int32 EntryPoint, float CallFunc_GetEscapeDistance_ReturnValue, bool CallFunc_ActionKeepDistance_ReturnValue, bool CallFunc_CheckHPLessThan_ReturnValue, bool CallFunc_CheckLockedOn_ReturnValue, bool CallFunc_AttackWeaponRight_ReturnValue, bool CallFunc_FinishParallelAttack_ReturnValue, enum class ETTLAIYesNoEnum CallFunc_SelectSPMove_OutputYesNo, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_ActionPatrolActionArea_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_ActionPatrol_ReturnValue, enum class ETTLAISlot CallFunc_GetBestEvaluateTargetPoint_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_ActionPatrolTargetPoint_ReturnValue, bool CallFunc_ActionChase_ReturnValue, bool CallFunc_ActionGoAroundSide_ReturnValue, float CallFunc_GetModifiedBattleRange_ReturnValue, bool CallFunc_Check2DDistanceLessThan_ReturnValue, bool CallFunc_CheckDistanceLessThan_ReturnValue, float CallFunc_GetCombatDistance_ReturnValue, bool CallFunc_Check2DDistanceLessThan_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BaseTankAIController_C", "ExecuteUbergraph_BaseTankAIController");

	Params::ABaseTankAIController_C_ExecuteUbergraph_BaseTankAIController_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetEscapeDistance_ReturnValue = CallFunc_GetEscapeDistance_ReturnValue;
	Parms.CallFunc_ActionKeepDistance_ReturnValue = CallFunc_ActionKeepDistance_ReturnValue;
	Parms.CallFunc_CheckHPLessThan_ReturnValue = CallFunc_CheckHPLessThan_ReturnValue;
	Parms.CallFunc_CheckLockedOn_ReturnValue = CallFunc_CheckLockedOn_ReturnValue;
	Parms.CallFunc_AttackWeaponRight_ReturnValue = CallFunc_AttackWeaponRight_ReturnValue;
	Parms.CallFunc_FinishParallelAttack_ReturnValue = CallFunc_FinishParallelAttack_ReturnValue;
	Parms.CallFunc_SelectSPMove_OutputYesNo = CallFunc_SelectSPMove_OutputYesNo;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_ActionPatrolActionArea_ReturnValue = CallFunc_ActionPatrolActionArea_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_ActionPatrol_ReturnValue = CallFunc_ActionPatrol_ReturnValue;
	Parms.CallFunc_GetBestEvaluateTargetPoint_ReturnValue = CallFunc_GetBestEvaluateTargetPoint_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_ActionPatrolTargetPoint_ReturnValue = CallFunc_ActionPatrolTargetPoint_ReturnValue;
	Parms.CallFunc_ActionChase_ReturnValue = CallFunc_ActionChase_ReturnValue;
	Parms.CallFunc_ActionGoAroundSide_ReturnValue = CallFunc_ActionGoAroundSide_ReturnValue;
	Parms.CallFunc_GetModifiedBattleRange_ReturnValue = CallFunc_GetModifiedBattleRange_ReturnValue;
	Parms.CallFunc_Check2DDistanceLessThan_ReturnValue = CallFunc_Check2DDistanceLessThan_ReturnValue;
	Parms.CallFunc_CheckDistanceLessThan_ReturnValue = CallFunc_CheckDistanceLessThan_ReturnValue;
	Parms.CallFunc_GetCombatDistance_ReturnValue = CallFunc_GetCombatDistance_ReturnValue;
	Parms.CallFunc_Check2DDistanceLessThan_ReturnValue1 = CallFunc_Check2DDistanceLessThan_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}

}


