#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RangedLightBrigandAttackTask_Ranged.RangedLightBrigandAttackTask_Ranged_C
// (None)

class UClass* URangedLightBrigandAttackTask_Ranged_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RangedLightBrigandAttackTask_Ranged_C");

	return Clss;
}


// RangedLightBrigandAttackTask_Ranged_C RangedLightBrigandAttackTask_Ranged.Default__RangedLightBrigandAttackTask_Ranged_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URangedLightBrigandAttackTask_Ranged_C* URangedLightBrigandAttackTask_Ranged_C::GetDefaultObj()
{
	static class URangedLightBrigandAttackTask_Ranged_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URangedLightBrigandAttackTask_Ranged_C*>(URangedLightBrigandAttackTask_Ranged_C::StaticClass()->DefaultObject);

	return Default;
}


// Function RangedLightBrigandAttackTask_Ranged.RangedLightBrigandAttackTask_Ranged_C.ReceiveTickAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URangedLightBrigandAttackTask_Ranged_C::ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RangedLightBrigandAttackTask_Ranged_C", "ReceiveTickAI");

	Params::URangedLightBrigandAttackTask_Ranged_C_ReceiveTickAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;
	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RangedLightBrigandAttackTask_Ranged.RangedLightBrigandAttackTask_Ranged_C.ExecuteUbergraph_RangedLightBrigandAttackTask_Ranged
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               K2Node_Event_OwnerController                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ARangedEnemy_C*              K2Node_DynamicCast_AsRanged_Enemy                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetBlackboardValueAsActor_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABaseCharacter_C*            K2Node_DynamicCast_AsBase_Character                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetDistanceTo_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void URangedLightBrigandAttackTask_Ranged_C::ExecuteUbergraph_RangedLightBrigandAttackTask_Ranged(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds, class ARangedEnemy_C* K2Node_DynamicCast_AsRanged_Enemy, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ABaseCharacter_C* K2Node_DynamicCast_AsBase_Character, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RangedLightBrigandAttackTask_Ranged_C", "ExecuteUbergraph_RangedLightBrigandAttackTask_Ranged");

	Params::URangedLightBrigandAttackTask_Ranged_C_ExecuteUbergraph_RangedLightBrigandAttackTask_Ranged_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerController = K2Node_Event_OwnerController;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.K2Node_DynamicCast_AsRanged_Enemy = K2Node_DynamicCast_AsRanged_Enemy;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetBlackboardValueAsActor_ReturnValue = CallFunc_GetBlackboardValueAsActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsBase_Character = K2Node_DynamicCast_AsBase_Character;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetDistanceTo_ReturnValue = CallFunc_GetDistanceTo_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_1 = CallFunc_LessEqual_FloatFloat_ReturnValue_1;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_2 = CallFunc_LessEqual_FloatFloat_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


