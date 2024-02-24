#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Ranged_SelectNextAttack.Ranged_SelectNextAttack_C
// (None)

class UClass* URanged_SelectNextAttack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ranged_SelectNextAttack_C");

	return Clss;
}


// Ranged_SelectNextAttack_C Ranged_SelectNextAttack.Default__Ranged_SelectNextAttack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URanged_SelectNextAttack_C* URanged_SelectNextAttack_C::GetDefaultObj()
{
	static class URanged_SelectNextAttack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URanged_SelectNextAttack_C*>(URanged_SelectNextAttack_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Ranged_SelectNextAttack.Ranged_SelectNextAttack_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URanged_SelectNextAttack_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ranged_SelectNextAttack_C", "ReceiveExecuteAI");

	Params::URanged_SelectNextAttack_C_ReceiveExecuteAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Ranged_SelectNextAttack.Ranged_SelectNextAttack_C.ExecuteUbergraph_Ranged_SelectNextAttack
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               K2Node_Event_OwnerController                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ARangedEnemy_C*              K2Node_DynamicCast_AsRanged_Enemy                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetBlackboardValueAsActor_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetDistanceTo_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LineOfSightTo_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)

void URanged_SelectNextAttack_C::ExecuteUbergraph_Ranged_SelectNextAttack(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class ARangedEnemy_C* K2Node_DynamicCast_AsRanged_Enemy, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetBlackboardValueAsActor_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_LineOfSightTo_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Ranged_SelectNextAttack_C", "ExecuteUbergraph_Ranged_SelectNextAttack");

	Params::URanged_SelectNextAttack_C_ExecuteUbergraph_Ranged_SelectNextAttack_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerController = K2Node_Event_OwnerController;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.K2Node_DynamicCast_AsRanged_Enemy = K2Node_DynamicCast_AsRanged_Enemy;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetBlackboardValueAsActor_ReturnValue = CallFunc_GetBlackboardValueAsActor_ReturnValue;
	Parms.CallFunc_GetDistanceTo_ReturnValue = CallFunc_GetDistanceTo_ReturnValue;
	Parms.CallFunc_LineOfSightTo_ReturnValue = CallFunc_LineOfSightTo_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


