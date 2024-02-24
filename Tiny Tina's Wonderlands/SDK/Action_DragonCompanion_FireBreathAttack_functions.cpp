#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Action_DragonCompanion_FireBreathAttack.Action_DragonCompanion_FireBreathAttack_C
// (None)

class UClass* UAction_DragonCompanion_FireBreathAttack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Action_DragonCompanion_FireBreathAttack_C");

	return Clss;
}


// Action_DragonCompanion_FireBreathAttack_C Action_DragonCompanion_FireBreathAttack.Default__Action_DragonCompanion_FireBreathAttack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAction_DragonCompanion_FireBreathAttack_C* UAction_DragonCompanion_FireBreathAttack_C::GetDefaultObj()
{
	static class UAction_DragonCompanion_FireBreathAttack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAction_DragonCompanion_FireBreathAttack_C*>(UAction_DragonCompanion_FireBreathAttack_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Action_DragonCompanion_FireBreathAttack.Action_DragonCompanion_FireBreathAttack_C.AN_DoAttack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAction_DragonCompanion_FireBreathAttack_C::AN_DoAttack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_DragonCompanion_FireBreathAttack_C", "AN_DoAttack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Action_DragonCompanion_FireBreathAttack.Action_DragonCompanion_FireBreathAttack_C.AN_StopAttack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAction_DragonCompanion_FireBreathAttack_C::AN_StopAttack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_DragonCompanion_FireBreathAttack_C", "AN_StopAttack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Action_DragonCompanion_FireBreathAttack.Action_DragonCompanion_FireBreathAttack_C.OnServerEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EGbxActionEndState      ActionEndState                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_DragonCompanion_FireBreathAttack_C::OnServerEnd(enum class EGbxActionEndState ActionEndState, class AActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_DragonCompanion_FireBreathAttack_C", "OnServerEnd");

	Params::UAction_DragonCompanion_FireBreathAttack_C_OnServerEnd_Params Parms{};

	Parms.ActionEndState = ActionEndState;
	Parms.Actor = Actor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Action_DragonCompanion_FireBreathAttack.Action_DragonCompanion_FireBreathAttack_C.StartAttack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAction_DragonCompanion_FireBreathAttack_C::StartAttack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_DragonCompanion_FireBreathAttack_C", "StartAttack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Action_DragonCompanion_FireBreathAttack.Action_DragonCompanion_FireBreathAttack_C.StopAttack
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAction_DragonCompanion_FireBreathAttack_C::StopAttack()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_DragonCompanion_FireBreathAttack_C", "StopAttack");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Action_DragonCompanion_FireBreathAttack.Action_DragonCompanion_FireBreathAttack_C.ExecuteUbergraph_Action_DragonCompanion_FireBreathAttack
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_K2_GetActor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGbxActionEndState      K2Node_Event_ActionEndState                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Actor                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IIDrone_KnightOfTheClaw_DragonPet_C>K2Node_DynamicCast_AsIDrone_Knight_Of_the_Claw_Dragon_Pet        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ExternalDragonCompanionCreateFireBreath_Res             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IIDrone_KnightOfTheClaw_DragonPet_C>K2Node_DynamicCast_AsIDrone_Knight_Of_the_Claw_Dragon_Pet1       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess1                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ExternalDragonCompanionStopFireBreath_Res               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAction_DragonCompanion_FireBreathAttack_C::ExecuteUbergraph_Action_DragonCompanion_FireBreathAttack(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, class AActor* CallFunc_K2_GetActor_ReturnValue, enum class EGbxActionEndState K2Node_Event_ActionEndState, class AActor* K2Node_Event_Actor, TScriptInterface<class IIDrone_KnightOfTheClaw_DragonPet_C> K2Node_DynamicCast_AsIDrone_Knight_Of_the_Claw_Dragon_Pet, bool K2Node_DynamicCast_bSuccess, bool CallFunc_ExternalDragonCompanionCreateFireBreath_Res, TScriptInterface<class IIDrone_KnightOfTheClaw_DragonPet_C> K2Node_DynamicCast_AsIDrone_Knight_Of_the_Claw_Dragon_Pet1, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_ExternalDragonCompanionStopFireBreath_Res)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Action_DragonCompanion_FireBreathAttack_C", "ExecuteUbergraph_Action_DragonCompanion_FireBreathAttack");

	Params::UAction_DragonCompanion_FireBreathAttack_C_ExecuteUbergraph_Action_DragonCompanion_FireBreathAttack_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_K2_GetActor_ReturnValue = CallFunc_K2_GetActor_ReturnValue;
	Parms.K2Node_Event_ActionEndState = K2Node_Event_ActionEndState;
	Parms.K2Node_Event_Actor = K2Node_Event_Actor;
	Parms.K2Node_DynamicCast_AsIDrone_Knight_Of_the_Claw_Dragon_Pet = K2Node_DynamicCast_AsIDrone_Knight_Of_the_Claw_Dragon_Pet;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_ExternalDragonCompanionCreateFireBreath_Res = CallFunc_ExternalDragonCompanionCreateFireBreath_Res;
	Parms.K2Node_DynamicCast_AsIDrone_Knight_Of_the_Claw_Dragon_Pet1 = K2Node_DynamicCast_AsIDrone_Knight_Of_the_Claw_Dragon_Pet1;
	Parms.K2Node_DynamicCast_bSuccess1 = K2Node_DynamicCast_bSuccess1;
	Parms.CallFunc_ExternalDragonCompanionStopFireBreath_Res = CallFunc_ExternalDragonCompanionStopFireBreath_Res;

	UObject::ProcessEvent(Func, &Parms);

}

}


