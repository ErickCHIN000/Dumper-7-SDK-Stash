#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass T_SetCombat.T_SetCombat_C
// (None)

class UClass* UT_SetCombat_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("T_SetCombat_C");

	return Clss;
}


// T_SetCombat_C T_SetCombat.Default__T_SetCombat_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UT_SetCombat_C* UT_SetCombat_C::GetDefaultObj()
{
	static class UT_SetCombat_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UT_SetCombat_C*>(UT_SetCombat_C::StaticClass()->DefaultObject);

	return Default;
}


// Function T_SetCombat.T_SetCombat_C.ReceiveExecuteAI
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AAIController*               OwnerController                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       ControlledPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UT_SetCombat_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("T_SetCombat_C", "ReceiveExecuteAI");

	Params::UT_SetCombat_C_ReceiveExecuteAI_Params Parms{};

	Parms.OwnerController = OwnerController;
	Parms.ControlledPawn = ControlledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function T_SetCombat.T_SetCombat_C.ExecuteUbergraph_T_SetCombat
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAIController*               K2Node_Event_OwnerController                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_ControlledPawn                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_BaseAI_C*                K2Node_DynamicCast_AsBP_Base_AI                                  (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class II_CombatState_C>CallFunc_SetIsInCombat_self_CastInput                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetIsInCombat_Dummy                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UT_SetCombat_C::ExecuteUbergraph_T_SetCombat(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class ABP_BaseAI_C* K2Node_DynamicCast_AsBP_Base_AI, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class II_CombatState_C> CallFunc_SetIsInCombat_self_CastInput, bool CallFunc_SetIsInCombat_Dummy)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("T_SetCombat_C", "ExecuteUbergraph_T_SetCombat");

	Params::UT_SetCombat_C_ExecuteUbergraph_T_SetCombat_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerController = K2Node_Event_OwnerController;
	Parms.K2Node_Event_ControlledPawn = K2Node_Event_ControlledPawn;
	Parms.K2Node_DynamicCast_AsBP_Base_AI = K2Node_DynamicCast_AsBP_Base_AI;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SetIsInCombat_self_CastInput = CallFunc_SetIsInCombat_self_CastInput;
	Parms.CallFunc_SetIsInCombat_Dummy = CallFunc_SetIsInCombat_Dummy;

	UObject::ProcessEvent(Func, &Parms);

}

}


